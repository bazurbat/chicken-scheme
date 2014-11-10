#include "lists.h"
#include <math/arithmetic.h>
#include <math/fixnum.h>
#include <memory/nursery.h>
#include <runtime/errors.h>
#include <runtime/types.h>

C_word C_a_i_list(C_word **a, int c, ...)
{
    va_list v;
    C_word x, last, current,
           first = C_SCHEME_END_OF_LIST;

    va_start(v, c);

    for(last = C_SCHEME_UNDEFINED; c--; last = current) {
        x = va_arg(v, C_word);
        current = C_a_pair(a, x, C_SCHEME_END_OF_LIST);

        if(last != C_SCHEME_UNDEFINED)
            C_set_block_item(last, 1, current);
        else first = current;
    }

    va_end(v);
    return first;
}

C_regparm C_word C_fcall C_i_list_tail(C_word lst, C_word i)
{
    C_word lst0 = lst;
    int n;

    if(lst != C_SCHEME_END_OF_LIST &&
       (C_immediatep(lst) || C_block_header(lst) != C_PAIR_TAG))
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "list-tail", lst);

    if(i & C_FIXNUM_BIT) n = C_unfix(i);
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "list-tail", i);

    while(n--) {
        if(C_immediatep(lst) || C_block_header(lst) != C_PAIR_TAG)
            barf(C_OUT_OF_RANGE_ERROR, "list-tail", lst0, i);

        lst = C_u_i_cdr(lst);
    }

    return lst;
}

C_regparm C_word C_fcall C_i_listp(C_word x)
{
    C_word fast = x, slow = x;

    while(fast != C_SCHEME_END_OF_LIST)
        if(!C_immediatep(fast) && C_block_header(fast) == C_PAIR_TAG) {
            fast = C_u_i_cdr(fast);

            if(fast == C_SCHEME_END_OF_LIST) return C_SCHEME_TRUE;
            else if(!C_immediatep(fast) && C_block_header(fast) == C_PAIR_TAG) {
                fast = C_u_i_cdr(fast);
                slow = C_u_i_cdr(slow);

                if(fast == slow) return C_SCHEME_FALSE;
            }
            else return C_SCHEME_FALSE;
        }
        else return C_SCHEME_FALSE;

    return C_SCHEME_TRUE;
}

C_regparm C_word C_fcall C_i_length(C_word lst)
{
    C_word fast = lst, slow = lst;
    int n = 0;

    while(slow != C_SCHEME_END_OF_LIST) {
        if(fast != C_SCHEME_END_OF_LIST) {
            if(!C_immediatep(fast) && C_block_header(fast) == C_PAIR_TAG) {
                fast = C_u_i_cdr(fast);

                if(fast != C_SCHEME_END_OF_LIST) {
                    if(!C_immediatep(fast) && C_block_header(fast) == C_PAIR_TAG) {
                        fast = C_u_i_cdr(fast);
                    }
                    else barf(C_NOT_A_PROPER_LIST_ERROR, "length", lst);
                }

                if(fast == slow)
                    barf(C_BAD_ARGUMENT_TYPE_CYCLIC_LIST_ERROR, "length", lst);
            }
        }

        if(C_immediatep(slow) || C_block_header(lst) != C_PAIR_TAG)
            barf(C_NOT_A_PROPER_LIST_ERROR, "length", lst);

        slow = C_u_i_cdr(slow);
        ++n;
    }

    return C_fix(n);
}

C_regparm C_word C_fcall C_u_i_length(C_word lst)
{
    int n = 0;

    while(!C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG) {
        lst = C_u_i_cdr(lst);
        ++n;
    }

    return C_fix(n);
}

C_regparm C_word C_fcall C_i_assoc(C_word x, C_word lst)
{
    C_word a;

    while(!C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG) {
        a = C_u_i_car(lst);

        if(!C_immediatep(a) && C_block_header(a) == C_PAIR_TAG) {
            if(C_equalp(C_u_i_car(a), x)) return a;
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "assoc", a);

        lst = C_u_i_cdr(lst);
    }

    if(lst!=C_SCHEME_END_OF_LIST)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "assoc", lst);

    return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_assq(C_word x, C_word lst)
{
    C_word a;

    while(!C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG) {
        a = C_u_i_car(lst);

        if(!C_immediatep(a) && C_block_header(a) == C_PAIR_TAG) {
            if(C_u_i_car(a) == x) return a;
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "assq", a);

        lst = C_u_i_cdr(lst);
    }

    if(lst!=C_SCHEME_END_OF_LIST)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "assq", lst);

    return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_assv(C_word x, C_word lst)
{
    C_word a;

    while(!C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG) {
        a = C_u_i_car(lst);

        if(!C_immediatep(a) && C_block_header(a) == C_PAIR_TAG) {
            if(C_truep(C_i_eqvp(C_u_i_car(a), x))) return a;
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "assv", a);

        lst = C_u_i_cdr(lst);
    }

    if(lst!=C_SCHEME_END_OF_LIST)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "assv", lst);

    return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_member(C_word x, C_word lst)
{
    while(!C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG) {
        if(C_equalp(C_u_i_car(lst), x)) return lst;
        else lst = C_u_i_cdr(lst);
    }

    if(lst!=C_SCHEME_END_OF_LIST)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "member", lst);

    return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_memq(C_word x, C_word lst)
{
    while(!C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG) {
        if(C_u_i_car(lst) == x) return lst;
        else lst = C_u_i_cdr(lst);
    }

    if(lst!=C_SCHEME_END_OF_LIST)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "memq", lst);

    return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_memv(C_word x, C_word lst)
{
    while(!C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG) {
        if(C_truep(C_i_eqvp(C_u_i_car(lst), x))) return lst;
        else lst = C_u_i_cdr(lst);
    }

    if(lst!=C_SCHEME_END_OF_LIST)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "memv", lst);

    return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_u_i_memq(C_word x, C_word lst)
{
    while(!C_immediatep(lst)) {
        if(C_u_i_car(lst) == x) return lst;
        else lst = C_u_i_cdr(lst);
    }

    return C_SCHEME_FALSE;
}

/* Cons the rest-aguments together: */

C_regparm C_word C_fcall C_restore_rest(C_word *ptr, int num)
{
    C_word x = C_SCHEME_END_OF_LIST;
    C_SCHEME_BLOCK *node;

    while(num--) {
        node = (C_SCHEME_BLOCK *)ptr;
        ptr += 3;
        node->header = C_PAIR_TYPE | (C_SIZEOF_PAIR - 1);
        node->data[ 0 ] = C_restore;
        node->data[ 1 ] = x;
        x = (C_word)node;
    }

    return x;
}

