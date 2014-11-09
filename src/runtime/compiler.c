#include "compiler.h"
#include <chicken.h>

static void copy_closure_2(void *dummy) C_noret;

/* XXX: This needs to be given a better name.
   C_retrieve used to exist but it just called C_fast_retrieve */
C_regparm C_word C_fcall C_retrieve2(C_word val, char *name)
{
    C_word *p;
    int len;

    if(val == C_SCHEME_UNBOUND) {
        len = C_strlen(name);
        /* this is ok: we won't return from `C_retrieve2'
         * (or the value isn't needed). */
        p = C_alloc(C_SIZEOF_STRING(len));
        C_unbound_variable(C_string2(&p, name));
    }

    return val;
}


/* Copy blocks into collected or static memory: */

C_regparm C_word C_fcall C_copy_block(C_word from, C_word to)
{
    int n = C_header_size(from);
    C_long bytes;

    if(C_header_bits(from) & C_BYTEBLOCK_BIT) {
        bytes = n;
        C_memcpy((C_SCHEME_BLOCK *)to, (C_SCHEME_BLOCK *)from, bytes + sizeof(C_header));
    }
    else {
        bytes = C_wordstobytes(n);
        C_memcpy((C_SCHEME_BLOCK *)to, (C_SCHEME_BLOCK *)from, bytes + sizeof(C_header));
    }

    return to;
}


C_regparm C_word C_fcall C_evict_block(C_word from, C_word ptr)
{
    int n = C_header_size(from);
    C_long bytes;
    C_word *p = (C_word *)C_pointer_address(ptr);

    if(C_header_bits(from) & C_BYTEBLOCK_BIT) bytes = n;
    else bytes = C_wordstobytes(n);

    C_memcpy(p, (C_SCHEME_BLOCK *)from, bytes + sizeof(C_header));
    return (C_word)p;
}

void C_ccall C_copy_closure(C_word c, C_word closure, C_word k, C_word proc)
{
    int n = C_header_size(proc);

    if(!C_demand(n + 1)) C_save_and_reclaim((void *)copy_closure_2, NULL, 2, proc, k);
    else {
        C_save(proc);
        C_save(k);
        copy_closure_2(NULL);
    }
}


static void copy_closure_2(void *dummy)
{
    C_word
        k = C_restore,
        proc = C_restore;
    int cells = C_header_size(proc);
    C_word
    *ptr = C_alloc(C_SIZEOF_CLOSURE(cells)),
    *p = ptr;

    *(p++) = C_CLOSURE_TYPE | cells;
    /* this is only allowed because the storage is freshly allocated: */
    C_memcpy_slots(p, C_data_pointer(proc), cells);
    C_kontinue(k, (C_word)ptr);
}

C_regparm C_word C_fcall C_i_getprop(C_word sym, C_word prop, C_word def)
{
    C_word pl = C_block_item(sym, 2);

    while(pl != C_SCHEME_END_OF_LIST) {
        if(C_block_item(pl, 0) == prop)
            return C_u_i_car(C_u_i_cdr(pl));
        else pl = C_u_i_cdr(C_u_i_cdr(pl));
    }

    return def;
}


C_regparm C_word C_fcall C_putprop(C_word **ptr, C_word sym, C_word prop, C_word val)
{
    C_word pl = C_block_item(sym, 2);

    while(pl != C_SCHEME_END_OF_LIST) {
        if(C_block_item(pl, 0) == prop) {
            C_mutate2(&C_u_i_car(C_u_i_cdr(pl)), val);
            return val;
        }
        else pl = C_u_i_cdr(C_u_i_cdr(pl));
    }

    pl = C_a_pair(ptr, val, C_block_item(sym, 2));
    pl = C_a_pair(ptr, prop, pl);
    C_mutate_slot(&C_block_item(sym, 2), pl);
    return val;
}

C_regparm C_word C_fcall C_i_get_keyword(C_word kw, C_word args, C_word def)
{
    while(!C_immediatep(args)) {
        if(C_block_header(args) == C_PAIR_TAG) {
            if(kw == C_u_i_car(args)) {
                args = C_u_i_cdr(args);

                if(C_immediatep(args) || C_block_header(args) != C_PAIR_TAG)
                    return def;
                else return C_u_i_car(args);
            }
            else {
                args = C_u_i_cdr(args);

                if(C_immediatep(args) || C_block_header(args) != C_PAIR_TAG)
                    return def;
                else args = C_u_i_cdr(args);
            }
        }
    }

    return def;
}

