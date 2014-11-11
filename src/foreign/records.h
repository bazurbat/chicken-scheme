#ifndef FOREIGN_RECORDS_H
#define FOREIGN_RECORDS_H

#include <runtime/definitions.h>

C_fctexport C_word C_a_i_record(C_word **a, int c, ...);

C_inline C_word C_a_i_record1(C_word **ptr, int n, C_word x1)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 1;
    *(p++) = x1;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_record2(C_word **ptr, int n, C_word x1, C_word x2)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 2;
    *(p++) = x1;
    *(p++) = x2;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_record3(C_word **ptr, int n, C_word x1, C_word x2, C_word x3)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 3;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_record4(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 4;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_record5(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 5;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_record6(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 6;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_record7(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6, C_word x7)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 7;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *(p++) = x7;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_record8(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6, C_word x7, C_word x8)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | 8;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *(p++) = x7;
    *(p++) = x8;
    *ptr = p;
    return (C_word)p0;
}

#endif /* FOREIGN_RECORDS_H */
