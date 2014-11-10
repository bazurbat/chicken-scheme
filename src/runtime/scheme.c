#include "scheme.h"
#include <chicken.h>
#include <errno.h>

/* Allocate and initialize record: */

C_regparm C_word C_fcall C_static_lambda_info(C_word **ptr, int len, C_char *str)
{
    int dlen = sizeof(C_header) + C_align(len);
    void *dptr = C_malloc(dlen);
    C_word strblock;

    if(dptr == NULL)
        panic(C_text("out of memory - cannot allocate static lambda info"));

    strblock = (C_word)dptr;
    C_block_header_init(strblock, C_LAMBDA_INFO_TYPE | len);
    C_memcpy(C_data_pointer(strblock), str, len);
    return strblock;
}

C_word C_fcall C_closure(C_word **ptr, int cells, C_word proc, ...)
{
    va_list va;
    C_word *p = *ptr,
    *p0 = p;

    *p = C_CLOSURE_TYPE | cells;
    *(++p) = proc;

    for(va_start(va, proc); --cells; *(++p) = va_arg(va, C_word)) ;

    va_end(va);
    *ptr = p + 1;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_number(C_word **ptr, double n)
{
    C_word
    *p = *ptr,
    *p0;
    double m;

    if(n <= (double)C_MOST_POSITIVE_FIXNUM
       && n >= (double)C_MOST_NEGATIVE_FIXNUM && modf(n, &m) == 0.0) {
        return C_fix(n);
    }

#ifndef C_SIXTY_FOUR
#ifndef C_DOUBLE_IS_32_BITS
    /* Align double on 8-byte boundary: */
    if(C_aligned8(p)) ++p;
#endif
#endif

    p0 = p;
    *(p++) = C_FLONUM_TAG;
    *((double *)p) = n;
    *ptr = p + sizeof(double) / sizeof(C_word);
    return (C_word)p0;
}

C_regparm C_word C_fcall C_mpointer(C_word **ptr, void *mp)
{
    C_word
    *p = *ptr,
    *p0 = p;

    *(p++) = C_POINTER_TYPE | 1;
    *((void **)p) = mp;
    *ptr = p + 1;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_mpointer_or_false(C_word **ptr, void *mp)
{
    C_word
    *p = *ptr,
    *p0 = p;

    if(mp == NULL) return C_SCHEME_FALSE;

    *(p++) = C_POINTER_TYPE | 1;
    *((void **)p) = mp;
    *ptr = p + 1;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_taggedmpointer(C_word **ptr, C_word tag, void *mp)
{
    C_word
    *p = *ptr,
    *p0 = p;

    *(p++) = C_TAGGED_POINTER_TAG;
    *((void **)p) = mp;
    *(++p) = tag;
    *ptr = p + 1;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_taggedmpointer_or_false(C_word **ptr, C_word tag, void *mp)
{
    C_word
    *p = *ptr,
    *p0 = p;

    if(mp == NULL) return C_SCHEME_FALSE;

    *(p++) = C_TAGGED_POINTER_TAG;
    *((void **)p) = mp;
    *(++p) = tag;
    *ptr = p + 1;
    return (C_word)p0;
}

C_word C_structure(C_word **ptr, int n, ...)
{
    va_list v;
    C_word *p = *ptr,
    *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | n;
    va_start(v, n);

    while(n--)
        *(p++) = va_arg(v, C_word);

    *ptr = p;
    va_end(v);
    return (C_word)p0;
}

/* Inline versions of some standard procedures: */

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

C_word C_a_i_port(C_word **ptr, int n)
{
    C_word
    *p = *ptr,
    *p0 = p;
    int i;

    *(p++) = C_PORT_TYPE | (C_SIZEOF_PORT - 1);
    *(p++) = (C_word)NULL;

    for(i = 0; i < C_SIZEOF_PORT - 2; ++i)
        *(p++) = C_SCHEME_FALSE;

    *ptr = p;
    return (C_word)p0;
}

C_word C_a_i_record(C_word **ptr, int n, ...)
{
    va_list v;
    C_word *p = *ptr,
    *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | n;
    va_start(v, n);

    while(n--)
        *(p++) = va_arg(v, C_word);

    *ptr = p;
    va_end(v);
    return (C_word)p0;
}

C_word C_fcall C_a_i_smart_mpointer(C_word **ptr, int c, C_word x)
{
    C_word
    *p = *ptr,
    *p0 = p;
    void *mp;

    if(C_immediatep(x)) mp = NULL;
    else if((C_header_bits(x) & C_SPECIALBLOCK_BIT) != 0) mp = C_pointer_address(x);
    else mp = C_data_pointer(x);

    *(p++) = C_POINTER_TYPE | 1;
    *((void **)p) = mp;
    *ptr = p + 1;
    return (C_word)p0;
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

C_regparm C_word C_fcall C_i_block_ref(C_word x, C_word i)
{
    int j;

    if(C_immediatep(x) || (C_header_bits(x) & C_BYTEBLOCK_BIT) != 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR, "##sys#block-ref", x);

    if(i & C_FIXNUM_BIT) {
        j = C_unfix(i);

        if(j < 0 || j >= C_header_size(x)) barf(C_OUT_OF_RANGE_ERROR, "##sys#block-ref", x, i);

        return C_block_item(x, j);
    }

    barf(C_BAD_ARGUMENT_TYPE_ERROR, "##sys#block-ref", i);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_caar(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "caar", x);
    }

    x = C_u_i_car(x);

    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_car(x);
}

C_regparm C_word C_fcall C_i_cadr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cadr", x);
    }

    x = C_u_i_cdr(x);

    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_car(x);
}

C_regparm C_word C_fcall C_i_car(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "car", x);

    return C_u_i_car(x);
}

C_regparm C_word C_fcall C_i_cdar(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cdar", x);
    }

    x = C_u_i_car(x);

    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_cdr(x);
}

C_regparm C_word C_fcall C_i_cddr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) {
bad:
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cddr", x);
    }

    x = C_u_i_cdr(x);
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG) goto bad;

    return C_u_i_cdr(x);
}

C_regparm C_word C_fcall C_i_cdr(C_word x)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "cdr", x);

    return C_u_i_cdr(x);
}

C_regparm C_word C_fcall C_i_evenp(C_word x)
{
    double val, dummy;
    if(x & C_FIXNUM_BIT) return C_mk_nbool(x & 0x02);

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "even?", x);

    val = C_flonum_magnitude(x);
    if(C_isnan(val) || C_isinf(val) || C_modf(val, &dummy) != 0.0)
        barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "even?", x);

    return C_mk_bool(fmod(val, 2.0) == 0.0);
}

C_regparm C_word C_fcall C_i_exactp(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_SCHEME_TRUE;

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "exact?", x);

    return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_inexactp(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_SCHEME_FALSE;

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "inexact?", x);

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

C_regparm C_word C_fcall C_i_negativep(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_mk_bool(C_unfix(x) < 0);

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "negative?", x);

    return C_mk_bool(C_flonum_magnitude(x) < 0.0);
}

C_regparm C_word C_fcall C_i_oddp(C_word x)
{
    double val, dummy;
    if(x & C_FIXNUM_BIT) return C_mk_bool(x & 0x02);

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "odd?", x);

    val = C_flonum_magnitude(x);
    if(C_isnan(val) || C_isinf(val) || C_modf(val, &dummy) != 0.0)
        barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "odd?", x);

    return C_mk_bool(fmod(val, 2.0) != 0.0);
}

C_regparm C_word C_fcall C_i_positivep(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_mk_bool(C_unfix(x) > 0);

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "positive?", x);

    return C_mk_bool(C_flonum_magnitude(x) > 0.0);
}

C_regparm C_word C_fcall C_i_set_car(C_word x, C_word val)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "set-car!", x);

    C_mutate(&C_u_i_car(x), val);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_set_cdr(C_word x, C_word val)
{
    if(C_immediatep(x) || C_block_header(x) != C_PAIR_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "set-cdr!", x);

    C_mutate(&C_u_i_cdr(x), val);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_zerop(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_mk_bool(x == C_fix(0));

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "zero?", x);

    return C_mk_bool(C_flonum_magnitude(x) == 0.0);
}

/* I */
C_regparm C_word C_fcall C_u_i_evenp(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_mk_nbool(x & 0x02);

    return C_mk_bool(fmod(C_flonum_magnitude(x), 2.0) == 0.0);
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

C_regparm C_word C_fcall C_u_i_memq(C_word x, C_word lst)
{
    while(!C_immediatep(lst)) {
        if(C_u_i_car(lst) == x) return lst;
        else lst = C_u_i_cdr(lst);
    }

    return C_SCHEME_FALSE;
}

/* I */
C_regparm C_word C_fcall C_u_i_negativep(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_mk_bool(C_unfix(x) < 0);

    return C_mk_bool(C_flonum_magnitude(x) < 0.0);
}

/* I */
C_regparm C_word C_fcall C_u_i_oddp(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_mk_bool(x & 0x02);

    return C_mk_bool(fmod(C_flonum_magnitude(x), 2.0) != 0.0);
}

/* I */
C_regparm C_word C_fcall C_u_i_positivep(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_mk_bool(C_unfix(x) > 0);

    return C_mk_bool(C_flonum_magnitude(x) > 0.0);
}

/* I */
C_regparm C_word C_fcall C_u_i_zerop(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_mk_bool(x == C_fix(0));

    return C_mk_bool(C_flonum_magnitude(x) == 0.0);
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

C_regparm C_word C_fcall C_i_bit_setp(C_word n, C_word i)
{
    double f1;
    C_uword nn1;
    int index;

    if((i & C_FIXNUM_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR, "bit-set?", i);

    index = C_unfix(i);

    if(index < 0 || index >= C_WORD_SIZE)
        barf(C_OUT_OF_RANGE_ERROR, "bit-set?", n, i);

    C_check_uint(n, f1, nn1, "bit-set?");
    return C_mk_bool((nn1 & (1 << index)) != 0);
}
