#include "predicates.h"
#include <math/fixnum.h>
#include <runtime/errors.h>

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
