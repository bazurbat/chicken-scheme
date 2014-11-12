#include "gc.h"
#include <chicken.h>
#include <assert.h>

#define DEFAULT_HEAP_SHRINKAGE_USED    25

#define MINIMAL_HEAP_SIZE              DEFAULT_STACK_SIZE

#define WEAK_HASH_ITERATIONS           4
#define WEAK_HASH_DISPLACEMENT         7
#define WEAK_COUNTER_MASK              3
#define WEAK_COUNTER_MAX               2

#define percentage(n, p)             ((C_long)(((double)(n) * (double)p) / 100))

#define is_fptr(x)                   (((x) & C_GC_FORWARDING_BIT) != 0)
#define ptr_to_fptr(x)               ((((x) >> FORWARDING_BIT_SHIFT) & 1) | C_GC_FORWARDING_BIT | ((x) & ~1))
#define fptr_to_ptr(x)               (((x) << FORWARDING_BIT_SHIFT) | ((x) & ~(C_GC_FORWARDING_BIT | 1)))

#define GC_MINOR           0
#define GC_MAJOR           1
#define GC_REALLOC         2

C_TLS C_word *stack_bottom;

C_TLS C_word *saved_stack_limit;

C_TLS C_word
*C_temporary_stack,
*C_temporary_stack_bottom,
*C_temporary_stack_limit,
*C_stack_limit;

C_TLS int C_disable_overflow_check;

C_TLS unsigned int mutation_count;
C_TLS unsigned int tracked_mutation_count;

C_TLS C_byte
    *heapspace1,
    *heapspace2,
    *fromspace_start,
    *tospace_start,
    *tospace_top,
    *tospace_limit,
    *new_tospace_start,
    *new_tospace_top,
    *new_tospace_limit,
    *heap_scan_top;

C_TLS C_word
    **mutation_stack_bottom,
    **mutation_stack_limit,
    **mutation_stack_top;

#ifdef C_COLLECT_ALL_SYMBOLS
C_TLS int C_enable_gcweak = 1;
#else
C_TLS int C_enable_gcweak = 0;
#endif

static C_TLS int gc_mode;

C_TLS double gc_ms,
      timer_accumulated_gc_ms;

C_TLS int weak_table_randomization;

C_TLS LF_LIST *lf_list;

C_TLS int
    gc_bell,
    gc_report_flag = 0,
    gc_count_1,
    gc_count_1_total,
    gc_count_2;

C_TLS C_word
    callback_continuation_stack_symbol,
    *forwarding_table;

C_TLS C_GC_ROOT *gc_root_list = NULL;

C_TLS WEAK_TABLE_ENTRY *weak_item_table;

#ifdef HAVE_SIGSETJMP
static C_TLS sigjmp_buf gc_restart;
#else
static C_TLS jmp_buf gc_restart;
#endif

C_TLS unsigned int stack_size;

C_TLS C_word
    **collectibles,
    **collectibles_top,
    **collectibles_limit;

static void C_fcall remark_system_globals(void) C_regparm;
static void C_fcall mark_system_globals(void) C_regparm;
static WEAK_TABLE_ENTRY *C_fcall lookup_weak_table_entry(C_word item, C_word container) C_regparm;
static void C_fcall really_mark(C_word *x) C_regparm;
static void C_fcall really_remark(C_word *x) C_regparm;
static void C_fcall update_locative_table(int mode) C_regparm;
static void allocate_vector_2(void *dummy) C_noret;
static void become_2(void *dummy) C_noret;

C_TLS void (*C_pre_gc_hook)(int mode) = NULL;
C_TLS void (*C_post_gc_hook)(int mode, C_long ms) = NULL;

static void gc_2(void *dummy)
{
    C_word k = C_restore;

    C_kontinue(k, C_fix((C_uword)C_fromspace_limit - (C_uword)C_fromspace_top));
}

void C_ccall C_gc(C_word c, C_word closure, C_word k, ...)
{
    int f;
    C_word arg;
    C_long size = 0;
    va_list v;

    va_start(v, k);

    if(c == 3) {
        arg = va_arg(v, C_word);
        f = C_truep(arg);
    }
    else if(c != 2) C_bad_min_argc(c, 2);
    else f = 1;

    C_save(k);
    va_end(v);

    if(c == 3) {
        if((arg & C_FIXNUM_BIT) != 0) size = C_unfix(arg);
        else if(arg == C_SCHEME_END_OF_LIST) size = percentage(heap_size, C_heap_growth);
    }

    if(size && !C_heap_size_is_fixed) {
        C_rereclaim2(size, 0);
        gc_2(NULL);
    }
    else if(f) C_fromspace_top = C_fromspace_limit;

    C_reclaim((void *)gc_2, NULL);
}

/* Initiate garbage collection: */


void C_save_and_reclaim(void *trampoline, void *proc, int n, ...)
{
    va_list v;

    va_start(v, n);

    while(n--) C_save(va_arg(v, C_word));

    va_end(v);
    C_reclaim(trampoline, proc);
}


#define mark(x)                                         \
    C_cblock                                              \
    C_word *_x = (x), _val = *_x;                         \
    if(!C_immediatep(_val)) really_mark(_x);              \
    C_cblockend


C_regparm void C_fcall C_reclaim(void *trampoline, void *proc)
{
    int i, j, n, fcount, weakn = 0;
    C_uword count, bytes;
    C_word *p, **msp, bucket, last, item, container;
    C_header h;
    C_byte *tmp, *start;
    LF_LIST *lfn;
    C_SCHEME_BLOCK *bp;
    C_GC_ROOT *gcrp;
    WEAK_TABLE_ENTRY *wep;
    double tgc = 0;
    C_SYMBOL_TABLE *stp;
    volatile int finalizers_checked;
    FINALIZER_NODE *flist;
    TRACE_INFO *tinfo;

    /* assert(C_timer_interrupt_counter >= 0); */

    if(pending_interrupts_count > 0 && C_interrupts_enabled)
        handle_interrupt(trampoline, proc);

    /* Note: the mode argument will always be GC_MINOR or GC_REALLOC. */
    if(C_pre_gc_hook != NULL) C_pre_gc_hook(GC_MINOR);

    finalizers_checked = 0;
    C_restart_trampoline = (TRAMPOLINE)trampoline;
    C_restart_address = proc;
    heap_scan_top = (C_byte *)C_align((C_uword)C_fromspace_top);
    gc_mode = GC_MINOR;
    start = C_fromspace_top;

    if(C_enable_gcweak)
        weak_table_randomization = rand();

    /* Entry point for second-level GC (on explicit request or because of full fromspace): */
#ifdef HAVE_SIGSETJMP
    if(C_sigsetjmp(gc_restart, 0) || start >= C_fromspace_limit) {
#else
    if(C_setjmp(gc_restart) || start >= C_fromspace_limit) {
#endif
        if(gc_bell) {
            C_putchar(7);
            C_fflush(stdout);
        }

        tgc = C_cpu_milliseconds();

        if(gc_mode == GC_REALLOC) {
            C_rereclaim2(percentage(heap_size, C_heap_growth), 0);
            gc_mode = GC_MAJOR;
            goto i_like_spaghetti;
        }

        heap_scan_top = (C_byte *)C_align((C_uword)tospace_top);
        gc_mode = GC_MAJOR;

        /* Mark items in forwarding table: */
        for(p = forwarding_table; *p != 0; p += 2) {
            last = p[ 1 ];
            mark(&p[ 1 ]);
            C_block_header(p[ 0 ]) = C_block_header(last);
        }

        /* Mark literal frames: */
        for(lfn = lf_list; lfn != NULL; lfn = lfn->next)
            for(i = 0; i < lfn->count; )
                mark(&lfn->lf[ i++ ]);

        /* Mark symbol tables: */
        for(stp = symbol_table_list; stp != NULL; stp = stp->next)
            for(i = 0; i < stp->size; )
                mark(&stp->table[ i++ ]);

        /* Mark collectibles: */
        for(msp = collectibles; msp < collectibles_top; ++msp)
            if(*msp != NULL) mark(*msp);

        /* mark normal GC roots: */
        for(gcrp = gc_root_list; gcrp != NULL; gcrp = gcrp->next) {
            if(!gcrp->finalizable) mark(&gcrp->value);
        }

        mark_system_globals();
    }
    else {
        /* Mark mutated slots: */
        for(msp = mutation_stack_bottom; msp < mutation_stack_top; )
            mark(*(msp++));
    }

    /* Clear the mutated slot stack: */
    mutation_stack_top = mutation_stack_bottom;

    /* Mark live values: */
    for(p = C_temporary_stack; p < C_temporary_stack_bottom; )
        mark(p++);

    /* Mark trace-buffer: */
    for(tinfo = trace_buffer; tinfo < trace_buffer_limit; ++tinfo) {
        mark(&tinfo->cooked1);
        mark(&tinfo->cooked2);
        mark(&tinfo->thread);
    }

rescan:
    /* Mark nested values in already moved (marked) blocks in breadth-first manner: */
    while(heap_scan_top < (gc_mode == GC_MINOR ? C_fromspace_top : tospace_top)) {
        bp = (C_SCHEME_BLOCK *)heap_scan_top;

        if(*((C_word *)bp) == ALIGNMENT_HOLE_MARKER)
            bp = (C_SCHEME_BLOCK *)((C_word *)bp + 1);

        n = C_header_size(bp);
        h = bp->header;
        bytes = (h & C_BYTEBLOCK_BIT) ? n : n * sizeof(C_word);
        p = bp->data;

        if(n > 0 && (h & C_BYTEBLOCK_BIT) == 0) {
            if(h & C_SPECIALBLOCK_BIT) {
                --n;
                ++p;
            }

            while(n--) mark(p++);
        }

        heap_scan_top = (C_byte *)bp + C_align(bytes) + sizeof(C_word);
    }

    if(gc_mode == GC_MINOR) {
        count = (C_uword)C_fromspace_top - (C_uword)start;
        ++gc_count_1;
        ++gc_count_1_total;
        update_locative_table(GC_MINOR);
    }
    else {
        if(!finalizers_checked) {
            /* Mark finalizer list and remember pointers to non-forwarded items: */
            last = C_block_item(pending_finalizers_symbol, 0);

            if(!C_immediatep(last) && (j = C_unfix(C_block_item(last, 0))) != 0) {
                /* still finalizers pending: just mark table items... */
                if(gc_report_flag)
                    C_dbg(C_text("GC"), C_text("%d finalized item(s) still pending\n"), j);

                j = fcount = 0;

                for(flist = finalizer_list; flist != NULL; flist = flist->next) {
                    mark(&flist->item);
                    mark(&flist->finalizer);
                    ++fcount;
                }

                /* mark finalizable GC roots: */
                for(gcrp = gc_root_list; gcrp != NULL; gcrp = gcrp->next) {
                    if(gcrp->finalizable) mark(&gcrp->value);
                }

                if(gc_report_flag && fcount > 0)
                    C_dbg(C_text("GC"), C_text("%d finalizer value(s) marked\n"), fcount);
            }
            else {
                j = fcount = 0;

                /* move into pending */
                for(flist = finalizer_list; flist != NULL; flist = flist->next) {
                    if(j < C_max_pending_finalizers) {
                        if(!is_fptr(C_block_header(flist->item)))
                            pending_finalizer_indices[ j++ ] = flist;
                    }
                }

                /* mark */
                for(flist = finalizer_list; flist != NULL; flist = flist->next) {
                    mark(&flist->item);
                    mark(&flist->finalizer);
                }

                /* mark finalizable GC roots: */
                for(gcrp = gc_root_list; gcrp != NULL; gcrp = gcrp->next) {
                    if(gcrp->finalizable) mark(&gcrp->value);
                }
            }

            pending_finalizer_count = j;
            finalizers_checked = 1;

            if(pending_finalizer_count > 0 && gc_report_flag)
                C_dbg(C_text("GC"), C_text("%d finalizer(s) pending (%d live)\n"),
                      pending_finalizer_count, live_finalizer_count);

            goto rescan;
        }
        else {
            /* Copy finalized items with remembered indices into `##sys#pending-finalizers'
               (and release finalizer node): */
            if(pending_finalizer_count > 0) {
                if(gc_report_flag)
                    C_dbg(C_text("GC"), C_text("queueing %d finalizer(s)\n"), pending_finalizer_count);

                last = C_block_item(pending_finalizers_symbol, 0);
                assert(C_block_item(last, 0) == C_fix(0));
                C_set_block_item(last, 0, C_fix(pending_finalizer_count));

                for(i = 0; i < pending_finalizer_count; ++i) {
                    flist = pending_finalizer_indices[ i ];
                    C_set_block_item(last, 1 + i * 2, flist->item);
                    C_set_block_item(last, 2 + i * 2, flist->finalizer);

                    if(flist->previous != NULL) flist->previous->next = flist->next;
                    else finalizer_list = flist->next;

                    if(flist->next != NULL) flist->next->previous = flist->previous;

                    flist->next = finalizer_free_list;
                    flist->previous = NULL;
                    finalizer_free_list = flist;
                    --live_finalizer_count;
                }
            }
        }

        update_locative_table(gc_mode);
        count = (C_uword)tospace_top - (C_uword)tospace_start;

        /*** isn't gc_mode always GC_MAJOR here? */
        if(gc_mode == GC_MAJOR &&
           count < percentage(percentage(heap_size, C_heap_shrinkage), DEFAULT_HEAP_SHRINKAGE_USED) &&
           heap_size > MINIMAL_HEAP_SIZE && !C_heap_size_is_fixed)
            C_rereclaim2(percentage(heap_size, C_heap_shrinkage), 0);
        else {
            C_fromspace_top = tospace_top;
            tmp = fromspace_start;
            fromspace_start = tospace_start;
            tospace_start = tospace_top = tmp;
            tmp = C_fromspace_limit;
            C_fromspace_limit = tospace_limit;
            tospace_limit = tmp;
        }

i_like_spaghetti:
        ++gc_count_2;

        if(C_enable_gcweak) {
            /* Check entries in weak item table and recover items ref'd only
               once, which are unbound symbols and have empty property-lists: */
            weakn = 0;
            wep = weak_item_table;

            for(i = 0; i < WEAK_TABLE_SIZE; ++i, ++wep)
                if(wep->item != 0) {
                    if((wep->container & WEAK_COUNTER_MAX) == 0 && /* counter saturated? (more than 1) */
                       is_fptr((item = C_block_header(wep->item)))) { /* and forwarded/collected */
                        item = fptr_to_ptr(item);           /* recover obj from forwarding ptr */
                        container = wep->container & ~WEAK_COUNTER_MASK;

                        if(C_header_bits(item) == C_SYMBOL_TYPE &&
                           C_block_item(item, 0) == C_SCHEME_UNBOUND &&
                           C_block_item(item, 2) == C_SCHEME_END_OF_LIST) {
                            ++weakn;
                            C_set_block_item(container, 0, C_SCHEME_UNDEFINED); /* clear reference to item */
                        }
                    }

                    wep->item = wep->container = 0;
                }

            /* Remove empty buckets in symbol table: */
            for(stp = symbol_table_list; stp != NULL; stp = stp->next) {
                for(i = 0; i < stp->size; ++i) {
                    last = 0;

                    for(bucket = stp->table[ i ]; bucket != C_SCHEME_END_OF_LIST; bucket = C_block_item(bucket,1))
                        if(C_block_item(bucket,0) == C_SCHEME_UNDEFINED) {
                            if(last) C_set_block_item(last, 1, C_block_item(bucket,1));
                            else stp->table[ i ] = C_block_item(bucket,1);
                        }
                        else last = bucket;
                }
            }
        }
    }

    if(gc_mode == GC_MAJOR) {
        tgc = C_cpu_milliseconds() - tgc;
        gc_ms += tgc;
        timer_accumulated_gc_ms += tgc;
    }

    /* Display GC report:
       Note: stubbornly writes to stderr - there is no provision for other output-ports */
    if(gc_report_flag == 1 || (gc_report_flag && gc_mode == GC_MAJOR)) {
        C_dbg(C_text("GC"), C_text("level  %d\tgcs(minor)  %d\tgcs(major)  %d\n"),
              gc_mode, gc_count_1, gc_count_2);
        i = (C_uword)C_stack_pointer;

#if C_STACK_GROWS_DOWNWARD
        C_dbg("GC", C_text("stack\t" UWORD_FORMAT_STRING "\t" UWORD_FORMAT_STRING "\t" UWORD_FORMAT_STRING),
              (C_uword)C_stack_limit, (C_uword)i, (C_uword)C_stack_limit + stack_size);
#else
        C_dbg("GC", C_text("stack\t" UWORD_FORMAT_STRING "\t" UWORD_FORMAT_STRING "\t" UWORD_FORMAT_STRING),
              (C_uword)C_stack_limit - stack_size, (C_uword)i, (C_uword)C_stack_limit);
#endif

        if(gc_mode == GC_MINOR)
            C_fprintf(stderr, C_text("\t" UWORD_FORMAT_STRING), (C_uword)count);

        C_fputc('\n', stderr);
        C_dbg("GC", C_text(" from\t" UWORD_FORMAT_STRING "\t" UWORD_FORMAT_STRING "\t" UWORD_FORMAT_STRING),
              (C_uword)fromspace_start, (C_uword)C_fromspace_top, (C_uword)C_fromspace_limit);

        if(gc_mode == GC_MAJOR)
            C_fprintf(stderr, C_text("\t" UWORD_FORMAT_STRING), (C_uword)count);

        C_fputc('\n', stderr);
        C_dbg("GC", C_text("   to\t" UWORD_FORMAT_STRING "\t" UWORD_FORMAT_STRING "\t" UWORD_FORMAT_STRING " \n"),
              (C_uword)tospace_start, (C_uword)tospace_top,
              (C_uword)tospace_limit);

        if(gc_mode == GC_MAJOR && C_enable_gcweak && weakn)
            C_dbg("GC", C_text("%d recoverable weakly held items found\n"), weakn);

        C_dbg("GC", C_text("%d locatives (from %d)\n"), locative_table_count, locative_table_size);
    }

    if(gc_mode == GC_MAJOR) gc_count_1 = 0;

    if(C_post_gc_hook != NULL) C_post_gc_hook(gc_mode, (C_long)tgc);

    /* Unwind stack completely */
#ifdef HAVE_SIGSETJMP
    C_siglongjmp(C_restart, 1);
#else
    C_longjmp(C_restart, 1);
#endif
}


C_regparm void C_fcall mark_system_globals(void)
{
    mark(&interrupt_hook_symbol);
    mark(&error_hook_symbol);
    mark(&callback_continuation_stack_symbol);
    mark(&pending_finalizers_symbol);
    mark(&current_thread_symbol);
}


C_regparm void C_fcall really_mark(C_word *x)
{
    C_word val, item;
    C_uword n, bytes;
    C_header h;
    C_SCHEME_BLOCK *p, *p2;
    WEAK_TABLE_ENTRY *wep;

    val = *x;

    if (!C_in_stackp(val) && !C_in_heapp(val)) {
#ifdef C_GC_HOOKS
        if(C_gc_trace_hook != NULL)
            C_gc_trace_hook(x, gc_mode);
#endif

        return;
    }

    p = (C_SCHEME_BLOCK *)val;

    h = p->header;

    if(gc_mode == GC_MINOR) {
        if(is_fptr(h)) {
            *x = val = fptr_to_ptr(h);
            return;
        }

        if((C_uword)val >= (C_uword)fromspace_start && (C_uword)val < (C_uword)C_fromspace_top) return;

        p2 = (C_SCHEME_BLOCK *)C_align((C_uword)C_fromspace_top);

#ifndef C_SIXTY_FOUR
        if((h & C_8ALIGN_BIT) && C_aligned8(p2) && (C_byte *)p2 < C_fromspace_limit) {
            *((C_word *)p2) = ALIGNMENT_HOLE_MARKER;
            p2 = (C_SCHEME_BLOCK *)((C_word *)p2 + 1);
        }
#endif

        n = C_header_size(p);
        bytes = (h & C_BYTEBLOCK_BIT) ? n : n * sizeof(C_word);

        if(((C_byte *)p2 + bytes + sizeof(C_word)) > C_fromspace_limit)
#ifdef HAVE_SIGSETJMP
            C_siglongjmp(gc_restart, 1);
#else
            C_longjmp(gc_restart, 1);
#endif

        C_fromspace_top = (C_byte *)p2 + C_align(bytes) + sizeof(C_word);

scavenge:
        *x = (C_word)p2;
        p2->header = h;
        p->header = ptr_to_fptr((C_uword)p2);
        memcpy(p2->data, p->data, bytes);
    }
    else { /* (major GC) */
           /* Increase counter (saturated at 2) if weakly held item (someone pointed to this object): */
        if(C_enable_gcweak &&
           (h & C_HEADER_TYPE_BITS) == C_SYMBOL_TYPE &&
           (wep = lookup_weak_table_entry(val, 0)) != NULL) {
            if((wep->container & WEAK_COUNTER_MAX) == 0) ++wep->container;
        }

        if(is_fptr(h)) {
            val = fptr_to_ptr(h);

            if((C_uword)val >= (C_uword)tospace_start && (C_uword)val < (C_uword)tospace_top) {
                *x = val;
                return;
            }

            /* Link points into fromspace: fetch new pointer + header and copy... */
            p = (C_SCHEME_BLOCK *)val;
            h = p->header;

            if(is_fptr(h)) {
                /* Link points into fromspace and into a link which points into from- or tospace: */
                val = fptr_to_ptr(h);

                if((C_uword)val >= (C_uword)tospace_start && (C_uword)val < (C_uword)tospace_top) {
                    *x = val;
                    return;
                }

                p = (C_SCHEME_BLOCK *)val;
                h = p->header;
            }
        }

        p2 = (C_SCHEME_BLOCK *)C_align((C_uword)tospace_top);

#ifndef C_SIXTY_FOUR
        if((h & C_8ALIGN_BIT) && C_aligned8(p2) && (C_byte *)p2 < tospace_limit) {
            *((C_word *)p2) = ALIGNMENT_HOLE_MARKER;
            p2 = (C_SCHEME_BLOCK *)((C_word *)p2 + 1);
        }
#endif

        if(C_enable_gcweak && (h & C_HEADER_TYPE_BITS) == C_BUCKET_TYPE) {
            item = C_block_item(val,0);

            /* Lookup item in weak item table or add entry: */
            if((wep = lookup_weak_table_entry(item, (C_word)p2)) != NULL) {
                /* If item is already forwarded, then set count to 2: */
                if(is_fptr(C_block_header(item))) wep->container |= 2;
            }
        }

        n = C_header_size(p);
        bytes = (h & C_BYTEBLOCK_BIT) ? n : n * sizeof(C_word);

        if(((C_byte *)p2 + bytes + sizeof(C_word)) > tospace_limit) {
            if(C_heap_size_is_fixed)
                panic(C_text("out of memory - heap full"));

            gc_mode = GC_REALLOC;
#ifdef HAVE_SIGSETJMP
            C_siglongjmp(gc_restart, 1);
#else
            C_longjmp(gc_restart, 1);
#endif
        }

        tospace_top = (C_byte *)p2 + C_align(bytes) + sizeof(C_word);
        goto scavenge;
    }
}


#define remark(x)                               \
    C_cblock                                      \
    C_word *_x = (x), _val = *_x;                 \
    if(!C_immediatep(_val)) really_remark(_x);    \
    C_cblockend


/* Do a major GC into a freshly allocated heap: */

C_regparm void C_fcall C_rereclaim2(C_uword size, int double_plus)
{
    int i, j;
    C_uword count, n, bytes;
    C_word *p, **msp, item, last;
    C_header h;
    C_byte *tmp, *start;
    LF_LIST *lfn;
    C_SCHEME_BLOCK *bp;
    WEAK_TABLE_ENTRY *wep;
    C_GC_ROOT *gcrp;
    C_SYMBOL_TABLE *stp;
    FINALIZER_NODE *flist;
    TRACE_INFO *tinfo;
    C_byte *new_heapspace;
    size_t new_heapspace_size;

    if(C_pre_gc_hook != NULL) C_pre_gc_hook(GC_REALLOC);

    if(double_plus) size = heap_size * 2 + size;

    if(size < MINIMAL_HEAP_SIZE) size = MINIMAL_HEAP_SIZE;

    /*
     * When heap grows, ensure it's enough to accommodate first
     * generation (nursery).  Because we're calculating the total heap
     * size here (fromspace *AND* tospace), we have to double the stack
     * size, otherwise we'd accommodate only half the stack in the tospace.
     */
    if(size > heap_size && size - heap_size < stack_size * 2)
        size = heap_size + stack_size * 2;

    if(size > C_maximal_heap_size) size = C_maximal_heap_size;

    if(debug_mode)
        C_dbg(C_text("debug"), C_text("resizing heap dynamically from " UWORD_COUNT_FORMAT_STRING "k to " UWORD_COUNT_FORMAT_STRING "k ...\n"),
              heap_size / 1024, size / 1024);

    if(gc_report_flag) {
        C_dbg(C_text("GC"), C_text("(old) fromspace: \tstart=" UWORD_FORMAT_STRING
                                   ", \tlimit=" UWORD_FORMAT_STRING "\n"),
              (C_word)fromspace_start, (C_word)C_fromspace_limit);
        C_dbg(C_text("GC"), C_text("(old) tospace:   \tstart=" UWORD_FORMAT_STRING
                                   ", \tlimit=" UWORD_FORMAT_STRING "\n"),
              (C_word)tospace_start, (C_word)tospace_limit);
    }

    heap_size = size;       /* Total heap size of the two halves... */
    size /= 2;              /* ...each half is this big */

    /*
     * Start by allocating the new heap's fromspace.  After remarking,
     * allocate the other half of the new heap (its tospace).
     *
     * To clarify: what we call "new_space" here is what will eventually
     * be cycled over to "fromspace" when re-reclamation has finished
     * (that is, after the old one has been freed).
     */
    if ((new_heapspace = heap_alloc (size, &new_tospace_start)) == NULL)
        panic(C_text("out of memory - cannot allocate heap segment"));
    new_heapspace_size = size;

    new_tospace_top = new_tospace_start;
    new_tospace_limit = new_tospace_start + size;
    heap_scan_top = new_tospace_top;

    /* Mark items in forwarding table: */
    for(p = forwarding_table; *p != 0; p += 2) {
        last = p[ 1 ];
        remark(&p[ 1 ]);
        C_block_header(p[ 0 ]) = C_block_header(last);
    }

    /* Mark literal frames: */
    for(lfn = lf_list; lfn != NULL; lfn = lfn->next)
        for(i = 0; i < lfn->count; )
            remark(&lfn->lf[ i++ ]);

    /* Mark symbol table: */
    for(stp = symbol_table_list; stp != NULL; stp = stp->next)
        for(i = 0; i < stp->size; )
            remark(&stp->table[ i++ ]);

    /* Mark collectibles: */
    for(msp = collectibles; msp < collectibles_top; ++msp)
        if(*msp != NULL) remark(*msp);

    for(gcrp = gc_root_list; gcrp != NULL; gcrp = gcrp->next)
        remark(&gcrp->value);

    remark_system_globals();

    /* Clear the mutated slot stack: */
    mutation_stack_top = mutation_stack_bottom;

    /* Mark live values: */
    for(p = C_temporary_stack; p < C_temporary_stack_bottom; )
        remark(p++);

    /* Mark locative table: */
    for(i = 0; i < locative_table_count; ++i)
        remark(&locative_table[ i ]);

    /* Mark finalizer table: */
    for(flist = finalizer_list; flist != NULL; flist = flist->next) {
        remark(&flist->item);
        remark(&flist->finalizer);
    }

    /* Clear weakly held items: */
    if(C_enable_gcweak) {
        wep = weak_item_table;

        for(i = 0; i < WEAK_TABLE_SIZE; ++i, ++wep)
            wep->item = wep->container = 0;
    }

    /* Mark trace-buffer: */
    for(tinfo = trace_buffer; tinfo < trace_buffer_limit; ++tinfo) {
        remark(&tinfo->cooked1);
        remark(&tinfo->cooked2);
        remark(&tinfo->thread);
    }

    update_locative_table(GC_REALLOC);

    /* Mark nested values in already moved (marked) blocks in breadth-first manner: */
    while(heap_scan_top < new_tospace_top) {
        bp = (C_SCHEME_BLOCK *)heap_scan_top;

        if(*((C_word *)bp) == ALIGNMENT_HOLE_MARKER)
            bp = (C_SCHEME_BLOCK *)((C_word *)bp + 1);

        n = C_header_size(bp);
        h = bp->header;
        assert(!is_fptr(h));
        bytes = (h & C_BYTEBLOCK_BIT) ? n : n * sizeof(C_word);
        p = bp->data;

        if(n > 0 && (h & C_BYTEBLOCK_BIT) == 0) {
            if(h & C_SPECIALBLOCK_BIT) {
                --n;
                ++p;
            }

            while(n--) remark(p++);
        }

        heap_scan_top = (C_byte *)bp + C_align(bytes) + sizeof(C_word);
    }

    heap_free (heapspace1, heapspace1_size);
    heap_free (heapspace2, heapspace2_size);

    if ((heapspace2 = heap_alloc (size, &tospace_start)) == NULL)
        panic(C_text("out of memory - cannot allocate next heap segment"));
    heapspace2_size = size;

    heapspace1 = new_heapspace;
    heapspace1_size = new_heapspace_size;
    tospace_limit = tospace_start + size;
    tospace_top = tospace_start;
    fromspace_start = new_tospace_start;
    C_fromspace_top = new_tospace_top;
    C_fromspace_limit = new_tospace_limit;

    if(gc_report_flag) {
        C_dbg(C_text("GC"), C_text("resized heap to %d bytes\n"), heap_size);
        C_dbg(C_text("GC"), C_text("(new) fromspace: \tstart=" UWORD_FORMAT_STRING
                                   ", \tlimit=" UWORD_FORMAT_STRING "\n"),
              (C_word)fromspace_start, (C_word)C_fromspace_limit);
        C_dbg(C_text("GC"), C_text("(new) tospace:   \tstart=" UWORD_FORMAT_STRING
                                   ", \tlimit=" UWORD_FORMAT_STRING "\n"),
              (C_word)tospace_start, (C_word)tospace_limit);
    }

    if(C_post_gc_hook != NULL) C_post_gc_hook(GC_REALLOC, 0);
}


C_regparm void C_fcall remark_system_globals(void)
{
    remark(&interrupt_hook_symbol);
    remark(&error_hook_symbol);
    remark(&callback_continuation_stack_symbol);
    remark(&pending_finalizers_symbol);
    remark(&current_thread_symbol);
}


C_regparm void C_fcall really_remark(C_word *x)
{
    C_word val, item;
    C_uword n, bytes;
    C_header h;
    C_SCHEME_BLOCK *p, *p2;
    WEAK_TABLE_ENTRY *wep;

    val = *x;

    if (!C_in_stackp(val) && !C_in_heapp(val) && !C_in_new_heapp(val)) {
#ifdef C_GC_HOOKS
        if(C_gc_trace_hook != NULL)
            C_gc_trace_hook(x, gc_mode);
#endif

        return;
    }

    p = (C_SCHEME_BLOCK *)val;

    h = p->header;

    if(is_fptr(h)) {
        val = fptr_to_ptr(h);

        if((C_uword)val >= (C_uword)new_tospace_start && (C_uword)val < (C_uword)new_tospace_top) {
            *x = val;
            return;
        }

        /* Link points into nursery, fromspace or the old tospace:
         * fetch new pointer + header and copy... */
        p = (C_SCHEME_BLOCK *)val;
        h = p->header;
        n = 1;

        while(is_fptr(h)) {
            /* Link points into fromspace or old tospace and into a link which
             * points into tospace or new-tospace: */
            val = fptr_to_ptr(h);

            if((C_uword)val >= (C_uword)new_tospace_start && (C_uword)val < (C_uword)new_tospace_top) {
                *x = val;
                return;
            }

            p = (C_SCHEME_BLOCK *)val;
            h = p->header;

            if(++n > 3)
                panic(C_text("forwarding chain during re-reclamation is longer than 3. somethings fishy."));
        }
    }

    p2 = (C_SCHEME_BLOCK *)C_align((C_uword)new_tospace_top);

#ifndef C_SIXTY_FOUR
    if((h & C_8ALIGN_BIT) && C_aligned8(p2) && (C_byte *)p2 < new_tospace_limit) {
        *((C_word *)p2) = ALIGNMENT_HOLE_MARKER;
        p2 = (C_SCHEME_BLOCK *)((C_word *)p2 + 1);
    }
#endif

    n = C_header_size(p);
    bytes = (h & C_BYTEBLOCK_BIT) ? n : n * sizeof(C_word);

    new_tospace_top = ((C_byte *)p2 + C_align(bytes) + sizeof(C_word));
    if(new_tospace_top > new_tospace_limit) {
        panic(C_text("out of memory - heap full while resizing"));
    }

    *x = (C_word)p2;
    p2->header = h;
    assert(!is_fptr(h));
    p->header = ptr_to_fptr((C_word)p2);
    memcpy(p2->data, p->data, bytes);
}

/* GC protection of user-variables: */

C_regparm void C_fcall C_gc_protect(C_word **addr, int n)
{
    int k;

    if(collectibles_top + n >= collectibles_limit) {
        k = collectibles_limit - collectibles;
        collectibles = (C_word **)C_realloc(collectibles, sizeof(C_word *) * k * 2);

        if(collectibles == NULL)
            panic(C_text("out of memory - cannot allocate GC protection vector"));

        collectibles_top = collectibles + k;
        collectibles_limit = collectibles + k * 2;
    }

    memcpy(collectibles_top, addr, n * sizeof(C_word *));
    collectibles_top += n;
}

C_regparm void C_fcall C_gc_unprotect(int n)
{
    collectibles_top -= n;
}

C_regparm C_word C_fcall C_set_gc_report(C_word flag)
{
    if(flag == C_SCHEME_FALSE) gc_report_flag = 0;
    else if(flag == C_SCHEME_TRUE) gc_report_flag = 2;
    else gc_report_flag = 1;

    return C_SCHEME_UNDEFINED;
}

C_regparm int C_fcall C_in_fromspacep(C_word x)
{
    C_byte *ptr = (C_byte *)(C_uword)x;
    return (ptr >= fromspace_start && ptr < C_fromspace_limit);
}

C_regparm void C_fcall update_locative_table(int mode)
{
    int i, hi = 0, invalidated = 0;
    C_header h;
    C_word loc, obj, obj2, offset, loc2, ptr;
    C_uword ptr2;

    for(i = 0; i < locative_table_count; ++i) {
        loc = locative_table[ i ];

        if(loc != C_SCHEME_UNDEFINED) {
            h = C_block_header(loc);

            switch(mode) {
            case GC_MINOR:
                if(is_fptr(h))  /* forwarded? update l-table entry */
                    loc = locative_table[ i ] = fptr_to_ptr(h);
                /* otherwise it must have been GC'd (since this is a minor one) */
                else if(C_in_stackp(loc)) {
                    locative_table[ i ] = C_SCHEME_UNDEFINED;
                    C_set_block_item(loc, 0, 0);
                    ++invalidated;
                    break;
                }

                /* forwarded. fix up ptr and check pointed-at object for being forwarded... */
                ptr = C_block_item(loc, 0);
                offset = C_unfix(C_block_item(loc, 1));
                obj = ptr - offset;
                h = C_block_header(obj);

                if(is_fptr(h)) { /* pointed-at object forwarded? update */
                    C_set_block_item(loc, 0, (C_uword)fptr_to_ptr(h) + offset);
                    hi = i + 1;
                }
                else if(C_in_stackp(obj)) { /* pointed-at object GC'd, locative is invalid */
                    locative_table[ i ] = C_SCHEME_UNDEFINED;
                    C_set_block_item(loc, 0, 0);
                }
                else hi = i + 1;

                break;

            case GC_MAJOR:
                if(is_fptr(h))  /* forwarded? update l-table entry */
                    loc = locative_table[ i ] = fptr_to_ptr(h);
                else {          /* otherwise, throw away */
                    locative_table[ i ] = C_SCHEME_UNDEFINED;
                    C_set_block_item(loc, 0, 0);
                    ++invalidated;
                    break;
                }

                h = C_block_header(loc);

                if(is_fptr(h))  /* new instance is forwarded itself? update again */
                    loc = locative_table[ i ] = fptr_to_ptr(h);

                ptr = C_block_item(loc, 0); /* fix up ptr */
                offset = C_unfix(C_block_item(loc, 1));
                obj = ptr - offset;
                h = C_block_header(obj);

                if(is_fptr(h)) { /* pointed-at object has been forwarded? */
                    ptr2 = (C_uword)fptr_to_ptr(h);
                    h = C_block_header(ptr2);

                    if(is_fptr(h)) { /* secondary forwarding check for pointed-at object */
                        ptr2 = (C_uword)fptr_to_ptr(h) + offset;
                        C_set_block_item(loc, 0, ptr2);
                    }
                    else C_set_block_item(loc, 0, ptr2 + offset); /* everything's fine, fixup pointer */

                    hi = i + 1;
                }
                else {
                    locative_table[ i ] = C_SCHEME_UNDEFINED; /* pointed-at object is dead */
                    C_set_block_item(loc, 0, 0);
                    ++invalidated;
                }

                break;

            case GC_REALLOC:
                ptr = C_block_item(loc, 0); /* just update ptr's pointed-at objects */
                offset = C_unfix(C_block_item(loc, 1));
                obj = ptr - offset;
                remark(&obj);
                C_set_block_item(loc, 0, obj + offset);
                break;
            }
        }
    }

    if(gc_report_flag && invalidated > 0)
        C_dbg(C_text("GC"), C_text("locative-table entries reclaimed: %d\n"), invalidated);

    if(mode != GC_REALLOC) locative_table_count = hi;
}

void allocate_vector_2(void *dummy)
{
    C_word mode = C_restore;
    C_uword bytes = C_unfix(C_restore);
    C_word align8 = C_restore,
           bvecf = C_restore,
           init = C_restore;
    C_word size = C_unfix(C_restore);
    C_word k = C_restore,
    *v0, v;

    if(C_truep(mode)) {
        while((C_uword)(C_fromspace_limit - C_fromspace_top) < (bytes + stack_size)) {
            if(C_heap_size_is_fixed)
                panic(C_text("out of memory - cannot allocate vector (heap resizing disabled)"));

            C_save(init);
            C_save(k);
            C_rereclaim2(percentage(heap_size, C_heap_growth) + (C_uword)bytes, 0);
            k = C_restore;
            init = C_restore;
        }

        v0 = (C_word *)C_align((C_word)C_fromspace_top);
        C_fromspace_top += C_align(bytes);
    }
    else v0 = C_alloc(C_bytestowords(bytes));

#ifndef C_SIXTY_FOUR
    if(C_truep(align8) && C_aligned8(v0)) ++v0;
#endif

    v = (C_word)v0;

    if(!C_truep(bvecf)) {
        *(v0++) = C_VECTOR_TYPE | size | (C_truep(align8) ? C_8ALIGN_BIT : 0);

        while(size--) *(v0++) = init;
    }
    else {
        *(v0++) = C_STRING_TYPE | size;

        if(C_truep(init))
            memset(v0, C_character_code(init), size);
    }

    C_kontinue(k, v);
}


void C_ccall C_allocate_vector(C_word c, C_word closure, C_word k, C_word size, C_word bvecf, C_word init, C_word align8)
{
    C_uword bytes, n = C_unfix(size);

    if(c != 6) C_bad_argc(c, 6);

    if(n > C_HEADER_SIZE_MASK)
        barf(C_OUT_OF_RANGE_ERROR, NULL, size, C_fix(C_HEADER_SIZE_MASK));

    if(!C_truep(bvecf)) bytes = C_wordstobytes(n) + sizeof(C_word);
    else bytes = n + sizeof(C_word);

    if(C_truep(align8)) bytes += sizeof(C_word);

    C_save(k);
    C_save(size);
    C_save(init);
    C_save(bvecf);
    C_save(align8);
    C_save(C_fix(bytes));

    if(!C_demand(C_bytestowords(bytes))) {
        /* Allocate on heap: */
        if((C_uword)(C_fromspace_limit - C_fromspace_top) < (bytes + stack_size * 2))
            C_fromspace_top = C_fromspace_limit; /* trigger major GC */

        C_save(C_SCHEME_TRUE);
        C_reclaim((void *)allocate_vector_2, NULL);
    }

    C_save(C_SCHEME_FALSE);
    allocate_vector_2(NULL);
}


/* Register/unregister literal frame: */

void C_initialize_lf(C_word *lf, int count)
{
    while(count-- > 0)
        *(lf++) = C_SCHEME_UNBOUND;
}


void *C_register_lf(C_word *lf, int count)
{
    return C_register_lf2(lf, count, NULL);
}


void *C_register_lf2(C_word *lf, int count, C_PTABLE_ENTRY *ptable)
{
    LF_LIST *node = (LF_LIST *)C_malloc(sizeof(LF_LIST));
    LF_LIST *np;
    int status = 0;

    node->lf = lf;
    node->count = count;
    node->ptable = ptable;
    node->module_name = current_module_name;
    node->module_handle = current_module_handle;
    current_module_handle = NULL;

    if(lf_list) lf_list->prev = node;

    node->next = lf_list;
    node->prev = NULL;
    lf_list = node;
    return (void *)node;
}

LF_LIST *find_module_handle(char *name)
{
    LF_LIST *np;

    for(np = lf_list; np != NULL; np = np->next) {
        if(np->module_name != NULL && !strcmp(np->module_name, name))
            return np;
    }

    return NULL;
}

void C_unregister_lf(void *handle)
{
    LF_LIST *node = (LF_LIST *) handle;

    if (node->next) node->next->prev = node->prev;

    if (node->prev) node->prev->next = node->next;

    if (lf_list == node) lf_list = node->next;

    C_free(node->module_name);
    C_free(node);
}

void *C_lookup_procedure_ptr(C_char *id)
{
    LF_LIST *lfl;
    C_PTABLE_ENTRY *pt;

    for(lfl = lf_list; lfl != NULL; lfl = lfl->next) {
        pt = lfl->ptable;

        if(pt != NULL) {
            while(pt->id != NULL) {
                if(!strcmp(id, pt->id)) return pt->ptr;
                else ++pt;
            }
        }
    }

    return NULL;
}


/* Map procedure-ptr to id or id to ptr: */

C_char *C_lookup_procedure_id(void *ptr)
{
    LF_LIST *lfl;
    C_PTABLE_ENTRY *pt;

    for(lfl = lf_list; lfl != NULL; lfl = lfl->next) {
        pt = lfl->ptable;

        if(pt != NULL) {
            while(pt->id != NULL) {
                if(pt->ptr == ptr) return pt->id;
                else ++pt;
            }
        }
    }

    return NULL;
}

C_regparm WEAK_TABLE_ENTRY *C_fcall lookup_weak_table_entry(C_word item, C_word container)
{
    C_uword
        key = (C_uword)item >> 2,
        disp = 0,
        n;
    WEAK_TABLE_ENTRY *wep;

    for(n = 0; n < WEAK_HASH_ITERATIONS; ++n) {
        key = (key + disp + weak_table_randomization) % WEAK_TABLE_SIZE;
        wep = &weak_item_table[ key ];

        if(wep->item == 0) {
            if(container != 0) {
                /* Add fresh entry: */
                wep->item = item;
                wep->container = container;
                return wep;
            }

            return NULL;
        }
        else if(wep->item == item) return wep;
        else disp += WEAK_HASH_DISPLACEMENT;
    }

    return NULL;
}

C_regparm C_word C_fcall C_mutate_slot(C_word *slot, C_word val)
{
    unsigned int mssize, newmssize, bytes;

    ++mutation_count;
    /* Mutation stack exists to track mutations pointing from elsewhere
     * into nursery.  Stuff pointing anywhere else can be skipped, as
     * well as mutations on nursery objects.
     */
    if(!C_in_stackp(val) || C_in_stackp((C_word)slot))
        return *slot = val;

#ifdef C_GC_HOOKS
    if(C_gc_mutation_hook != NULL && C_gc_mutation_hook(slot, val)) return val;
#endif

    if(mutation_stack_top >= mutation_stack_limit) {
        assert(mutation_stack_top == mutation_stack_limit);
        mssize = mutation_stack_top - mutation_stack_bottom;
        newmssize = mssize * 2;
        bytes = newmssize * sizeof(C_word *);

        if(debug_mode)
            C_dbg(C_text("debug"), C_text("resizing mutation-stack from " UWORD_COUNT_FORMAT_STRING "k to " UWORD_COUNT_FORMAT_STRING "k ...\n"),
                  (mssize * sizeof(C_word *)) / 1024, bytes / 1024);

        mutation_stack_bottom = (C_word **)realloc(mutation_stack_bottom, bytes);

        if(mutation_stack_bottom == NULL)
            panic(C_text("out of memory - cannot re-allocate mutation stack"));

        mutation_stack_limit = mutation_stack_bottom + newmssize;
        mutation_stack_top = mutation_stack_bottom + mssize;
    }

    *(mutation_stack_top++) = slot;
    ++tracked_mutation_count;
    return *slot = val;
}

void C_ccall C_become(C_word c, C_word closure, C_word k, C_word table)
{
    C_word tp, x, old, neu, i, *p;

    i = forwarding_table_size;
    p = forwarding_table;

    for(tp = table; tp != C_SCHEME_END_OF_LIST; tp = C_u_i_cdr(tp)) {
        x = C_u_i_car(tp);
        old = C_u_i_car(x);
        neu = C_u_i_cdr(x);

        if(i == 0) {
            if((forwarding_table = (C_word *)realloc(forwarding_table, (forwarding_table_size + 1) * 4 * sizeof(C_word))) == NULL)
                panic(C_text("out of memory - cannot re-allocate forwarding table"));

            i = forwarding_table_size;
            p = forwarding_table + forwarding_table_size * 2;
            forwarding_table_size *= 2;
        }

        *(p++) = old;
        *(p++) = neu;
        --i;
    }

    *p = 0;
    C_fromspace_top = C_fromspace_limit;
    C_save_and_reclaim((void *)become_2, NULL, 1, k);
}


void become_2(void *dummy)
{
    C_word k = C_restore;
    *forwarding_table = 0;
    C_kontinue(k, C_SCHEME_UNDEFINED);
}

/* Modify stack-size at runtime: */

void C_do_resize_stack(C_word stack)
{
    C_uword old = stack_size,
            diff = stack - old;

    if(diff != 0 && !stack_size_changed) {
        if(debug_mode)
            C_dbg(C_text("debug"), C_text("stack resized to %d bytes\n"), (int)stack);

        stack_size = stack;

#if C_STACK_GROWS_DOWNWARD
        C_stack_limit = (C_word *)((C_byte *)C_stack_limit - diff);
#else
        C_stack_limit = (C_word *)((C_byte *)C_stack_limit + diff);
#endif
    }
}


/* Check whether nursery is sufficiently big: */

void C_check_nursery_minimum(C_word words)
{
    if(words >= C_bytestowords(stack_size))
        panic(C_text("nursery is too small - try higher setting using the `-:s' option"));
}


C_regparm int C_in_stackp(C_word x)
{
    C_word *ptr = (C_word *)(C_uword)x;

#if C_STACK_GROWS_DOWNWARD
    return ptr >= C_stack_pointer_test && ptr <= stack_bottom;
#else
    return ptr < C_stack_pointer_test && ptr >= stack_bottom;
#endif
}
