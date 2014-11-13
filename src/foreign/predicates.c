#include "predicates.h"
#include <math/arithmetic.h>
#include <runtime/errors.h>

/*XXX these are not correctly named */

C_regparm C_word C_fcall C_i_foreign_char_argumentp(C_word x)
{
    if((x & C_IMMEDIATE_TYPE_BITS) != C_CHARACTER_BITS)
        barf(C_BAD_ARGUMENT_TYPE_NO_CHAR_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_fixnum_argumentp(C_word x)
{
    if((x & C_FIXNUM_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_flonum_argumentp(C_word x)
{
    if((x & C_FIXNUM_BIT) != 0) return x;

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_block_argumentp(C_word x)
{
    if(C_immediatep(x))
        barf(C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_struct_wrapper_argumentp(C_word t, C_word x)
{
    if(C_immediatep(x) || C_header_bits(x) != C_STRUCTURE_TYPE || C_block_item(x, 0) != t)
        barf(C_BAD_ARGUMENT_TYPE_BAD_STRUCT_ERROR, NULL, t, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_string_argumentp(C_word x)
{
    if(C_immediatep(x) || C_header_bits(x) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_NO_STRING_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_symbol_argumentp(C_word x)
{
    if(C_immediatep(x) || C_header_bits(x) != C_SYMBOL_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_NO_SYMBOL_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_pointer_argumentp(C_word x)
{
    if(C_immediatep(x) || (C_header_bits(x) & C_SPECIALBLOCK_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_scheme_or_c_pointer_argumentp(C_word x)
{
    if(C_immediatep(x) || (C_header_bits(x) & C_SPECIALBLOCK_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR, NULL, x);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_tagged_pointer_argumentp(C_word x, C_word t)
{
    if(C_immediatep(x) || (C_header_bits(x) & C_SPECIALBLOCK_BIT) == 0
       || (t != C_SCHEME_FALSE && !C_equalp(C_block_item(x, 1), t)))
        barf(C_BAD_ARGUMENT_TYPE_NO_TAGGED_POINTER_ERROR, NULL, x, t);

    return x;
}

C_regparm C_word C_fcall C_i_foreign_integer_argumentp(C_word x)
{
    double m;

    if((x & C_FIXNUM_BIT) != 0) return x;

    if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        m = C_flonum_magnitude(x);

        if(m >= C_WORD_MIN && m <= C_WORD_MAX) return x;
    }

    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, NULL, x);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_foreign_integer64_argumentp(C_word x)
{
    double m, r;

    if((x & C_FIXNUM_BIT) != 0) return x;

    if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        m = C_flonum_magnitude(x);

        if(m >= C_S64_MIN && m <= C_S64_MAX && C_modf(m, &r) == 0.0) return x;
    }

    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, NULL, x);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_foreign_unsigned_integer_argumentp(C_word x)
{
    double m,r;

    if((x & C_FIXNUM_BIT) != 0) return x;

    if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        m = C_flonum_magnitude(x);

        if(m >= 0 && m <= C_UWORD_MAX && C_modf(m, &r) == 0.0) return x;
    }

    barf(C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR, NULL, x);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_foreign_unsigned_integer64_argumentp(C_word x)
{
    double m, r;

    if((x & C_FIXNUM_BIT) != 0) return x;

    if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        m = C_flonum_magnitude(x);

        if(m >= 0 && m <= C_U64_MAX && C_modf(m, &r) == 0.0) return x;
    }

    barf(C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR, NULL, x);
    return C_SCHEME_UNDEFINED;
}
