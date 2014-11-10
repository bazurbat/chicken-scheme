#include "vectors.h"
#include <math/fixnum.h>
#include <memory/gc.h>
#include <memory/nursery.h>
#include <runtime/errors.h>
#include <runtime/types.h>
#include <scheme/strings.h>

C_regparm C_word C_fcall C_bytevector(C_word **ptr, int len, C_char *str)
{
    C_word strblock = C_string(ptr, len, str);

    (void)C_string_to_bytevector(strblock);
    return strblock;
}

C_regparm C_word C_fcall C_static_bytevector(C_word **ptr, int len, C_char *str)
{
    C_word strblock = C_static_string(ptr, len, str);

    C_block_header_init(strblock, C_BYTEVECTOR_TYPE | len);
    return strblock;
}

C_word C_vector(C_word **ptr, int n, ...)
{
    va_list v;
    C_word
    *p = *ptr,
    *p0 = p;

    *(p++) = C_VECTOR_TYPE | n;
    va_start(v, n);

    while(n--)
        *(p++) = va_arg(v, C_word);

    *ptr = p;
    va_end(v);
    return (C_word)p0;
}

C_regparm C_word C_fcall C_a_i_bytevector(C_word **ptr, int c, C_word num)
{
    C_word *p = *ptr,
    *p0;
    int n = C_unfix(num);

#ifndef C_SIXTY_FOUR
    /* Align on 8-byte boundary: */
    if(C_aligned8(p)) ++p;
#endif

    p0 = p;
    *(p++) = C_BYTEVECTOR_TYPE | C_wordstobytes(n);
    *ptr = p + n;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_i_vector_length(C_word v)
{
    if(C_immediatep(v) || C_header_bits(v) != C_VECTOR_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "vector-length", v);

    return C_fix(C_header_size(v));
}

C_regparm C_word C_fcall C_i_vector_ref(C_word v, C_word i)
{
    int j;

    if(C_immediatep(v) || C_header_bits(v) != C_VECTOR_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "vector-ref", v);

    if(i & C_FIXNUM_BIT) {
        j = C_unfix(i);

        if(j < 0 || j >= C_header_size(v)) barf(C_OUT_OF_RANGE_ERROR, "vector-ref", v, i);

        return C_block_item(v, j);
    }

    barf(C_BAD_ARGUMENT_TYPE_ERROR, "vector-ref", i);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_vector_set(C_word v, C_word i, C_word x)
{
    int j;

    if(C_immediatep(v) || C_header_bits(v) != C_VECTOR_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "vector-set!", v);

    if(i & C_FIXNUM_BIT) {
        j = C_unfix(i);

        if(j < 0 || j >= C_header_size(v)) barf(C_OUT_OF_RANGE_ERROR, "vector-set!", v, i);

        C_mutate(&C_block_item(v, j), x);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "vector-set!", i);

    return C_SCHEME_UNDEFINED;
}

/* I? */
C_regparm C_word C_fcall C_restore_rest_vector(C_word *ptr, int num)
{
    C_word *p0 = ptr;

    *(ptr++) = C_VECTOR_TYPE | num;
    ptr += num;

    while(num--) *(--ptr) = C_restore;

    return (C_word)p0;
}
