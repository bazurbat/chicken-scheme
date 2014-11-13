#ifndef SCHEME_LISTS_H
#define SCHEME_LISTS_H

#include "pairs.h"

C_fctexport C_word C_a_i_list(C_word **a, int c, ...);
C_fctexport C_word C_fcall C_i_list_tail(C_word lst, C_word i) C_regparm;
C_fctexport C_word C_fcall C_i_listp(C_word x) C_regparm;

C_fctexport C_word C_fcall C_i_length(C_word lst) C_regparm;
C_fctexport C_word C_fcall C_u_i_length(C_word lst) C_regparm;

C_fctexport C_word C_fcall C_i_assoc(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_assq(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_assv(C_word x, C_word lst) C_regparm;

C_fctexport C_word C_fcall C_i_member(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_memq(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_memv(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_u_i_memq(C_word x, C_word lst) C_regparm;

C_fctexport C_word C_fcall C_restore_rest(C_word *ptr, int num) C_regparm;

C_inline C_word C_a_i_list1(C_word **a, int n, C_word x1)
{
    return C_a_pair(a, x1, C_SCHEME_END_OF_LIST);
}

C_inline C_word C_a_i_list2(C_word **a, int n, C_word x1, C_word x2)
{
    C_word x = C_a_pair(a, x2, C_SCHEME_END_OF_LIST);

    return C_a_pair(a, x1, x);
}

C_inline C_word C_a_i_list3(C_word **a, int n, C_word x1, C_word x2, C_word x3)
{
    C_word x = C_a_pair(a, x3, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}

C_inline C_word C_a_i_list4(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4)
{
    C_word x = C_a_pair(a, x4, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}

C_inline C_word C_a_i_list5(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                            C_word x5)
{
    C_word x = C_a_pair(a, x5, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x4, x);
    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}

C_inline C_word C_a_i_list6(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                            C_word x5, C_word x6)
{
    C_word x = C_a_pair(a, x6, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x5, x);
    x = C_a_pair(a, x4, x);
    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}

C_inline C_word C_a_i_list7(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                            C_word x5, C_word x6, C_word x7)
{
    C_word x = C_a_pair(a, x7, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x6, x);
    x = C_a_pair(a, x5, x);
    x = C_a_pair(a, x4, x);
    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}

C_inline C_word C_a_i_list8(C_word **a, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                            C_word x5, C_word x6, C_word x7, C_word x8)
{
    C_word x = C_a_pair(a, x8, C_SCHEME_END_OF_LIST);

    x = C_a_pair(a, x7, x);
    x = C_a_pair(a, x6, x);
    x = C_a_pair(a, x5, x);
    x = C_a_pair(a, x4, x);
    x = C_a_pair(a, x3, x);
    x = C_a_pair(a, x2, x);
    return C_a_pair(a, x1, x);
}

C_inline C_word C_u_i_assq(C_word x, C_word lst)
{
    C_word a;

    while(!C_immediatep(lst)) {
        a = C_u_i_car(lst);

        if(C_u_i_car(a) == x) return a;
        else lst = C_u_i_cdr(lst);
    }

    return C_SCHEME_FALSE;
}

C_inline C_word C_i_eqvp(C_word x, C_word y)
{
    return
        C_mk_bool(x == y ||
                  (!C_immediatep(x) && !C_immediatep(y) &&
                   C_block_header(x) == C_FLONUM_TAG && C_block_header(y) == C_FLONUM_TAG &&
                   C_flonum_magnitude(x) == C_flonum_magnitude(y) ) );
}

#endif /* SCHEME_LISTS_H */
