#include "records.h"
#include <stdarg.h>

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

