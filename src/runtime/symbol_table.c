#include "symbol_table.h"
#include <chicken.h>

C_TLS C_SYMBOL_TABLE
    *symbol_table,
    *symbol_table_list;

C_regparm C_word C_fcall hash_string(int len, C_char *str, C_word m, C_word r, int ci)
{
    C_uword key = r;

    if (ci)
        while(len--) key ^= (key << 6) + (key >> 2) + C_tolower((int)(*str++));
    else
        while(len--) key ^= (key << 6) + (key >> 2) + *(str++);

    return (C_word)(key % (C_uword)m);
}

C_regparm C_word C_fcall lookup(C_word key, int len, C_char *str, C_SYMBOL_TABLE *stable)
{
    C_word bucket, sym, s;

    for(bucket = stable->table[ key ]; bucket != C_SCHEME_END_OF_LIST;
        bucket = C_block_item(bucket,1)) {
        sym = C_block_item(bucket,0);
        s = C_block_item(sym, 1);

        if(C_header_size(s) == (C_word)len
           && !C_memcmp(str, (C_char *)C_data_pointer(s), len))
            return sym;
    }

    return C_SCHEME_FALSE;
}

/* Setup symbol-table with internally used symbols; */

void initialize_symbol_table(void)
{
    int i;

    for(i = 0; i < symbol_table->size; symbol_table->table[ i++ ] = C_SCHEME_END_OF_LIST) ;

    /* Obtain reference to hooks for later: */
    interrupt_hook_symbol = C_intern2(C_heaptop, C_text("\003sysinterrupt-hook"));
    error_hook_symbol = C_intern2(C_heaptop, C_text("\003syserror-hook"));
    callback_continuation_stack_symbol = C_intern3(C_heaptop, C_text("\003syscallback-continuation-stack"), C_SCHEME_END_OF_LIST);
    pending_finalizers_symbol = C_intern2(C_heaptop, C_text("\003syspending-finalizers"));
    current_thread_symbol = C_intern3(C_heaptop, C_text("\003syscurrent-thread"), C_SCHEME_FALSE);
}

static C_word add_symbol(C_word **ptr, C_word key, C_word string, C_SYMBOL_TABLE *stable)
{
    C_word bucket, sym, b2, *p;
    int keyw = C_header_size(string) > 0 && *((char *)C_data_pointer(string)) == 0;

    p = *ptr;
    sym = (C_word)p;
    p += C_SIZEOF_SYMBOL;
    C_block_header_init(sym, C_SYMBOL_TYPE | (C_SIZEOF_SYMBOL - 1));
    C_set_block_item(sym, 0, keyw ? sym : C_SCHEME_UNBOUND); /* keyword? */
    C_set_block_item(sym, 1, string);
    C_set_block_item(sym, 2, C_SCHEME_END_OF_LIST);
    *ptr = p;
    b2 = stable->table[ key ];  /* previous bucket */
    bucket = C_a_bucket(ptr, sym, b2); /* create new bucket */

    if(ptr != C_heaptop) C_mutate_slot(&stable->table[ key ], bucket);
    else {
        /* If a stack-allocated bucket was here, and we allocate from
           heap-top (say, in a toplevel literal frame allocation) then we have
           to inform the memory manager that a 2nd gen. block points to a
           1st gen. block, hence the mutation: */
        C_mutate2(&C_block_item(bucket,1), b2);
        stable->table[ key ] = bucket;
    }

    return sym;
}


void C_ccall C_make_symbol(C_word c, C_word closure, C_word k, C_word name)
{
    C_word ab[ C_SIZEOF_SYMBOL ], *a = ab,
           s0 = (C_word)a;

    *(a++) = C_SYMBOL_TYPE | (C_SIZEOF_SYMBOL - 1);
    *(a++) = C_SCHEME_UNBOUND;
    *(a++) = name;
    *a = C_SCHEME_END_OF_LIST;
    C_kontinue(k, s0);
}

void C_ccall C_string_to_symbol(C_word c, C_word closure, C_word k, C_word string)
{
    int len, key;
    C_word s, *a = C_alloc(C_SIZEOF_SYMBOL + C_SIZEOF_BUCKET);
    C_char *name;

    if(c != 3) C_bad_argc(c, 3);

    if(C_immediatep(string) || C_header_bits(string) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string->symbol", string);

    len = C_header_size(string);
    name = (C_char *)C_data_pointer(string);
    key = hash_string(len, name, symbol_table->size, symbol_table->rand, 0);

    if(!C_truep(s = lookup(key, len, name, symbol_table)))
        s = add_symbol(&a, key, string, symbol_table);

    C_kontinue(k, s);
}

C_regparm C_SYMBOL_TABLE *C_new_symbol_table(char *name, unsigned int size)
{
    C_SYMBOL_TABLE *stp;
    int i;

    if((stp = C_find_symbol_table(name)) != NULL) return stp;

    if((stp = (C_SYMBOL_TABLE *)C_malloc(sizeof(C_SYMBOL_TABLE))) == NULL)
        return NULL;

    stp->name = name;
    stp->size = size;
    stp->next = symbol_table_list;
    stp->rand = rand();

    if((stp->table = (C_word *)C_malloc(size * sizeof(C_word))) == NULL)
        return NULL;

    for(i = 0; i < stp->size; stp->table[ i++ ] = C_SCHEME_END_OF_LIST) ;

    symbol_table_list = stp;
    return stp;
}

C_regparm void C_delete_symbol_table(C_SYMBOL_TABLE *st)
{
    C_SYMBOL_TABLE *stp, *prev = NULL;

    for(stp = symbol_table_list; stp != NULL; stp = stp->next)
        if(stp == st) {
            if(prev != NULL) prev->next = stp->next;
            else symbol_table_list = stp->next;

            return;
        }
}

C_regparm void C_set_symbol_table(C_SYMBOL_TABLE *st)
{
    symbol_table = st;
}

C_regparm C_SYMBOL_TABLE *C_find_symbol_table(char *name)
{
    C_SYMBOL_TABLE *stp;

    for(stp = symbol_table_list; stp != NULL; stp = stp->next)
        if(!C_strcmp(name, stp->name)) return stp;

    return NULL;
}

static double compute_symbol_table_load(double *avg_bucket_len, int *total_n)
{
    C_word bucket;
    int i, j, alen = 0, bcount = 0, total = 0;

    for(i = 0; i < symbol_table->size; ++i) {
        bucket = symbol_table->table[ i ];

        for(j = 0; bucket != C_SCHEME_END_OF_LIST; ++j)
            bucket = C_block_item(bucket,1);

        if(j > 0) {
            alen += j;
            ++bcount;
        }

        total += j;
    }

    if(avg_bucket_len != NULL)
        *avg_bucket_len = (double)alen / (double)bcount;

    *total_n = total;

    /* return load: */
    return (double)total / (double)symbol_table->size;
}

void C_ccall C_get_symbol_table_info(C_word c, C_word closure, C_word k)
{
    double d1, d2;
    int n = 0, total;
    C_SYMBOL_TABLE *stp;
    C_word x, y,
           ab[ WORDS_PER_FLONUM * 2 + C_SIZEOF_VECTOR(4) ],
    *a = ab;

    for(stp = symbol_table_list; stp != NULL; stp = stp->next)
        ++n;

    d1 = compute_symbol_table_load(&d2, &total);
    x = C_flonum(&a, d1);       /* load */
    y = C_flonum(&a, d2);       /* avg bucket length */
    C_kontinue(k, C_vector(&a, 4, x, y, C_fix(total), C_fix(n)));
}

C_regparm C_word C_find_symbol(C_word str, C_SYMBOL_TABLE *stable)
{
    char *sptr = C_c_string(str);
    int
        len = C_header_size(str),
        key = hash_string(len, sptr, stable->size, stable->rand, 0);
    C_word s;

    if(C_truep(s = lookup(key, len, sptr, stable))) return s;
    else return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_lookup_symbol(C_word sym)
{
    int key;
    C_word str = C_block_item(sym, 1);
    int len = C_header_size(str);

    key = hash_string(len, C_c_string(str), symbol_table->size, symbol_table->rand, 0);

    return lookup(key, len, C_c_string(str), symbol_table);
}

/* Intern symbol into symbol-table: */

C_regparm C_word C_fcall C_intern(C_word **ptr, int len, C_char *str)
{
    return C_intern_in(ptr, len, str, symbol_table);
}

C_regparm C_word C_fcall C_intern_in(C_word **ptr, int len, C_char *str, C_SYMBOL_TABLE *stable)
{
    int key;
    C_word s;

    if(stable == NULL) stable = symbol_table;

    key = hash_string(len, str, stable->size, stable->rand, 0);

    if(C_truep(s = lookup(key, len, str, stable))) return s;

    s = C_string(ptr, len, str);
    return add_symbol(ptr, key, s, stable);
}

C_regparm C_word C_fcall C_h_intern(C_word *slot, int len, C_char *str)
{
    return C_h_intern_in(slot, len, str, symbol_table);
}

C_regparm C_word C_fcall C_h_intern_in(C_word *slot, int len, C_char *str, C_SYMBOL_TABLE *stable)
{
    /* Intern as usual, but remember slot, if looked up symbol is in nursery.
       also: allocate in static memory. */
    int key;
    C_word s;

    if(stable == NULL) stable = symbol_table;

    key = hash_string(len, str, stable->size, stable->rand, 0);

    if(C_truep(s = lookup(key, len, str, stable))) {
        if(C_in_stackp(s)) C_mutate_slot(slot, s);

        return s;
    }

    s = C_static_string(C_heaptop, len, str);
    return add_symbol(C_heaptop, key, s, stable);
}

C_regparm C_word C_fcall C_intern2(C_word **ptr, C_char *str)
{
    return C_intern_in(ptr, C_strlen(str), str, symbol_table);
}

C_regparm C_word C_fcall C_intern3(C_word **ptr, C_char *str, C_word value)
{
    C_word s = C_intern_in(ptr, C_strlen(str), str, symbol_table);

    C_mutate2(&C_block_item(s,0), value);
    return s;
}

C_regparm void *C_fcall C_retrieve2_symbol_proc(C_word val, char *name)
{
    C_word *p;
    int len;

    if(val == C_SCHEME_UNBOUND) {
        len = C_strlen(name);
        /* this is ok: we won't return from `C_retrieve2' (or the value isn't needed). */
        p = C_alloc(C_SIZEOF_STRING(len));
        barf(C_UNBOUND_VARIABLE_ERROR, NULL, C_string2(&p, name));
    }

    return C_fast_retrieve_proc(val);
}
