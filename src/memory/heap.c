#include "heap.h"
#include <chicken.h>

#define HDUMP_TABLE_SIZE               1001

typedef struct hdump_bucket_struct
{
    C_word key;
    int count, total;
    struct hdump_bucket_struct *next;
} HDUMP_BUCKET;

static C_TLS HDUMP_BUCKET **hdump_table;

C_TLS int
    C_heap_size_is_fixed;

C_TLS int heap_size_changed;

C_TLS int page_size;

C_TLS C_uword
    C_heap_growth,
    C_heap_shrinkage;

C_TLS C_uword C_maximal_heap_size;

C_TLS int dump_heap_on_exit;

C_TLS size_t heap_size;

C_TLS size_t
    heapspace1_size,
    heapspace2_size;

C_TLS C_byte
*C_fromspace_top,
*C_fromspace_limit;
#ifdef HAVE_SIGSETJMP
C_TLS sigjmp_buf C_restart;
#else
C_TLS jmp_buf C_restart;
#endif

/* Align memory to page boundary */

static void *align_to_page(void *mem)
{
    return (void *)C_align((C_uword)mem);
}

C_regparm int C_fcall C_in_heapp(C_word x)
{
    C_byte *ptr = (C_byte *)(C_uword)x;
    return (ptr >= fromspace_start && ptr < C_fromspace_limit) ||
           (ptr >= tospace_start && ptr < tospace_limit);
}

C_byte * heap_alloc (size_t size, C_byte **page_aligned)
{
    C_byte *p;
    p = (C_byte *)malloc (size + page_size);

    if (p != NULL && page_aligned) *page_aligned = align_to_page (p);

    return p;
}

void heap_free (C_byte *ptr, size_t size)
{
    free (ptr);
}

C_byte * heap_realloc (C_byte *ptr, size_t old_size, size_t new_size, C_byte **page_aligned)
{
    C_byte *p;
    p = (C_byte *)realloc (ptr, new_size + page_size);

    if (p != NULL && page_aligned) *page_aligned = align_to_page (p);

    return p;
}

/* Modify heap size at runtime: */

void C_set_or_change_heap_size(C_word heap, int reintern)
{
    C_byte *ptr1, *ptr2, *ptr1a, *ptr2a;
    C_word size = heap / 2;

    if(heap_size_changed && fromspace_start) return;

    if(fromspace_start && heap_size >= heap) return;

    if(debug_mode)
        C_dbg(C_text("debug"), C_text("heap resized to %d bytes\n"), (int)heap);

    heap_size = heap;

    if((ptr1 = heap_realloc (fromspace_start,
                             C_fromspace_limit - fromspace_start,
                             size, &ptr1a)) == NULL ||
       (ptr2 = heap_realloc (tospace_start,
                             tospace_limit - tospace_start,
                             size, &ptr2a)) == NULL)
        panic(C_text("out of memory - cannot allocate heap"));

    heapspace1 = ptr1;
    heapspace1_size = size;
    heapspace2 = ptr2;
    heapspace2_size = size;
    fromspace_start = ptr1a;
    C_fromspace_top = fromspace_start;
    C_fromspace_limit = fromspace_start + size;
    tospace_start = ptr2a;
    tospace_top = tospace_start;
    tospace_limit = tospace_start + size;
    mutation_stack_top = mutation_stack_bottom;

    if(reintern) initialize_symbol_table();
}

/* Only used during major GC (heap realloc) */
C_regparm int C_fcall C_in_new_heapp(C_word x)
{
    C_byte *ptr = (C_byte *)(C_uword)x;
    return (ptr >= new_tospace_start && ptr < new_tospace_limit);
}

void C_ccall C_ensure_heap_reserve(C_word c, C_word closure, C_word k, C_word n)
{
    C_save(k);

    if(!C_demand(C_bytestowords(C_unfix(n))))
        C_reclaim((void *)generic_trampoline, NULL);

    generic_trampoline(NULL);
}

static C_ulong hdump_hash(C_word key)
{
    return (C_ulong)key % HDUMP_TABLE_SIZE;
}

static void hdump_count(C_word key, int n, int t)
{
    HDUMP_BUCKET **bp = hdump_table + hdump_hash(key);
    HDUMP_BUCKET *b = *bp;

    while(b != NULL) {
        if(b->key == key) {
            b->count += n;
            b->total += t;
            return;
        }
        else b = b->next;
    }

    b = (HDUMP_BUCKET *)malloc(sizeof(HDUMP_BUCKET));

    if(b == 0)
        panic(C_text("out of memory - can not allocate heap-dump table-bucket"));

    b->next = *bp;
    b->key = key;
    *bp = b;
    b->count = n;
    b->total = t;
}



static void dump_heap_state_2(void *dummy)
{
    C_word k = C_restore;
    HDUMP_BUCKET *b, *b2, **bp;
    int n, bytes;
    C_byte *scan;
    C_SCHEME_BLOCK *sbp;
    C_header h;
    C_word x, key, *p;
    int imm = 0, blk = 0;

    hdump_table = (HDUMP_BUCKET **)malloc(HDUMP_TABLE_SIZE * sizeof(HDUMP_BUCKET *));

    if(hdump_table == NULL)
        panic(C_text("out of memory - can not allocate heap-dump table"));

    memset(hdump_table, 0, sizeof(HDUMP_BUCKET *) * HDUMP_TABLE_SIZE);

    scan = fromspace_start;

    while(scan < C_fromspace_top) {
        ++blk;
        sbp = (C_SCHEME_BLOCK *)scan;

        if(*((C_word *)sbp) == ALIGNMENT_HOLE_MARKER)
            sbp = (C_SCHEME_BLOCK *)((C_word *)sbp + 1);

        n = C_header_size(sbp);
        h = sbp->header;
        bytes = (h & C_BYTEBLOCK_BIT) ? n : n * sizeof(C_word);
        key = (C_word)(h & C_HEADER_BITS_MASK);
        p = sbp->data;

        if(key == C_STRUCTURE_TYPE) key = *p;

        hdump_count(key, 1, bytes);

        if(n > 0 && (h & C_BYTEBLOCK_BIT) == 0) {
            if((h & C_SPECIALBLOCK_BIT) != 0) {
                --n;
                ++p;
            }

            while(n--) {
                x = *(p++);

                if(C_immediatep(x)) {
                    ++imm;

                    if((x & C_FIXNUM_BIT) != 0) key = C_fix(1);
                    else {
                        switch(x & C_IMMEDIATE_TYPE_BITS) {
                        case C_BOOLEAN_BITS: key = C_SCHEME_TRUE; break;
                        case C_CHARACTER_BITS: key = C_make_character('A'); break;
                        default: key = x;
                        }
                    }

                    hdump_count(key, 1, 0);
                }
            }
        }

        scan = (C_byte *)sbp + C_align(bytes) + sizeof(C_word);
    }

    bp = hdump_table;

    for(n = 0; n < HDUMP_TABLE_SIZE; ++n) {
        for(b = bp[ n ]; b != NULL; b = b2) {
            b2 = b->next;

            switch(b->key) {
            case C_fix(1): fprintf(stderr,              C_text("fixnum         ")); break;
            case C_SCHEME_TRUE: fprintf(stderr,         C_text("boolean        ")); break;
            case C_SCHEME_END_OF_LIST: fprintf(stderr,  C_text("null           ")); break;
            case C_SCHEME_UNDEFINED: fprintf(stderr,  C_text("void           ")); break;
            case C_make_character('A'): fprintf(stderr, C_text("character      ")); break;
            case C_SCHEME_END_OF_FILE: fprintf(stderr,  C_text("eof            ")); break;
            case C_SCHEME_UNBOUND: fprintf(stderr,      C_text("unbound        ")); break;
            case C_SYMBOL_TYPE: fprintf(stderr,         C_text("symbol         ")); break;
            case C_STRING_TYPE: fprintf(stderr,         C_text("string         ")); break;
            case C_PAIR_TYPE: fprintf(stderr,           C_text("pair           ")); break;
            case C_CLOSURE_TYPE: fprintf(stderr,        C_text("closure        ")); break;
            case C_FLONUM_TYPE: fprintf(stderr,         C_text("flonum         ")); break;
            case C_PORT_TYPE: fprintf(stderr,           C_text("port           ")); break;
            case C_POINTER_TYPE: fprintf(stderr,        C_text("pointer        ")); break;
            case C_LOCATIVE_TYPE: fprintf(stderr,       C_text("locative       ")); break;
            case C_TAGGED_POINTER_TYPE: fprintf(stderr, C_text("tagged pointer ")); break;
            case C_LAMBDA_INFO_TYPE: fprintf(stderr,    C_text("lambda info    ")); break;
            case C_BUCKET_TYPE: fprintf(stderr,         C_text("bucket         ")); break;
            case C_VECTOR_TYPE: fprintf(stderr,         C_text("vector         ")); break;
            case C_BYTEVECTOR_TYPE: fprintf(stderr,     C_text("bytevector     ")); break;
            /* XXX this is sort of funny: */
            case C_BYTEBLOCK_BIT: fprintf(stderr,        C_text("blob           ")); break;
            default:
                x = b->key;

                if(!C_immediatep(x) && C_header_bits(x) == C_SYMBOL_TYPE) {
                    x = C_block_item(x, 1);
                    fprintf(stderr, C_text("`%.*s'"), (int)C_header_size(x), C_c_string(x));
                }
                else fprintf(stderr, C_text("unknown key " UWORD_FORMAT_STRING), (C_uword)b->key);
            }

            fprintf(stderr, C_text("\t" UWORD_COUNT_FORMAT_STRING), b->count);

            if(b->total > 0)
                fprintf(stderr, C_text("\t" UWORD_COUNT_FORMAT_STRING " bytes"),
                          (unsigned int)b->total);

            fputc('\n', stderr);
            free(b);
        }
    }

    fprintf(stderr, C_text("\ntotal number of blocks: " UWORD_COUNT_FORMAT_STRING
                               ", immediates: " UWORD_COUNT_FORMAT_STRING "\n"),
              (unsigned int)blk, (unsigned int)imm);
    free(hdump_table);
    C_kontinue(k, C_SCHEME_UNDEFINED);
}

void C_ccall C_dump_heap_state(C_word c, C_word closure, C_word k)
{
    /* make sure heap is compacted */
    C_save(k);
    C_fromspace_top = C_fromspace_limit; /* force major GC */
    C_reclaim((void *)dump_heap_state_2, NULL);
}


static void
filter_heap_objects_2(void *dummy)
{
    void *func = C_pointer_address(C_restore);
    C_word userarg = C_restore;
    C_word vector = C_restore;
    C_word k = C_restore;
    int n, bytes;
    C_byte *scan;
    C_SCHEME_BLOCK *sbp;
    C_header h;
    C_word *p;
    int vecsize = C_header_size(vector);
    typedef int (*filterfunc)(C_word x, C_word userarg);
    filterfunc ff = (filterfunc)func;
    int vcount = 0;

    scan = fromspace_start;

    while(scan < C_fromspace_top) {
        sbp = (C_SCHEME_BLOCK *)scan;

        if(*((C_word *)sbp) == ALIGNMENT_HOLE_MARKER)
            sbp = (C_SCHEME_BLOCK *)((C_word *)sbp + 1);

        n = C_header_size(sbp);
        h = sbp->header;
        bytes = (h & C_BYTEBLOCK_BIT) ? n : n * sizeof(C_word);
        p = sbp->data;

        if(ff((C_word)sbp, userarg)) {
            if(vcount < vecsize) {
                C_set_block_item(vector, vcount, (C_word)sbp);
                ++vcount;
            }
            else {
                C_kontinue(k, C_fix(-1));
            }
        }

        scan = (C_byte *)sbp + C_align(bytes) + sizeof(C_word);
    }

    C_kontinue(k, C_fix(vcount));
}


void C_ccall
C_filter_heap_objects(C_word c, C_word closure, C_word k, C_word func, C_word vector,
                      C_word userarg)
{
    /* make sure heap is compacted */
    C_save(k);
    C_save(vector);
    C_save(userarg);
    C_save(func);
    C_fromspace_top = C_fromspace_limit; /* force major GC */
    C_reclaim((void *)filter_heap_objects_2, NULL);
}

