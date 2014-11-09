#ifndef RUNTIME_LISTS_H
#define RUNTIME_LISTS_H

#include "definitions.h"
#include "types.h"

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

#endif /* RUNTIME_LISTS_H */
