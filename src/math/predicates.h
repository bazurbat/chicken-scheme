#ifndef MATH_PREDICATES_H
#define MATH_PREDICATES_H

#include "arithmetic.h"
#include <common.h>

C_fctexport C_word C_fcall C_i_evenp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_exactp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_inexactp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_negativep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_oddp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_positivep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_zerop(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_evenp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_negativep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_oddp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_positivep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_zerop(C_word x) C_regparm;

C_inline C_word C_i_integerp(C_word x)
{
    double dummy, val;

    if (x & C_FIXNUM_BIT)
        return C_SCHEME_TRUE;
    if (C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        return C_SCHEME_FALSE;

    val = C_flonum_magnitude(x);
    if(C_isnan(val) || C_isinf(val)) return C_SCHEME_FALSE;

    return C_mk_bool(C_modf(val, &dummy) == 0.0);
}

C_inline int C_ub_i_fpintegerp(double x)
{
    double dummy;

    return C_modf(x, &dummy) == 0.0;
}

C_inline C_word C_i_finitep(C_word x)
{
    double val;

    if((x & C_FIXNUM_BIT) != 0) return C_SCHEME_TRUE;

    val = C_flonum_magnitude(x);
    if(C_isnan(val) || C_isinf(val)) return C_SCHEME_FALSE;
    else return C_SCHEME_TRUE;
}

C_inline C_word C_fits_in_int_p(C_word x)
{
    double n, m;

    if(x & C_FIXNUM_BIT) return C_SCHEME_TRUE;

    n = C_flonum_magnitude(x);
    return C_mk_bool(C_modf(n, &m) == 0.0 && n >= C_WORD_MIN && n <= C_WORD_MAX);
}

C_inline C_word C_fits_in_unsigned_int_p(C_word x)
{
    double n, m;

    if(x & C_FIXNUM_BIT) return C_SCHEME_TRUE;

    n = C_flonum_magnitude(x);
    return C_mk_bool(C_modf(n, &m) == 0.0 && n >= 0 && n <= C_UWORD_MAX);
}

#endif /* MATH_PREDICATES_H */
