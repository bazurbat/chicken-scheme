#include "flonum.h"
#include <chicken.h>

#ifdef C_SIXTY_FOUR
#define C_limit_fixnum(n)            ((n) & C_MOST_POSITIVE_FIXNUM)
#else
#define C_limit_fixnum(n)            (n)
#endif

#define C_check_real(x, w, v)       if(((x) & C_FIXNUM_BIT) != 0) v = C_unfix(x); \
    else if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG) \
        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, w, x); \
    else v = C_flonum_magnitude(x);

#define C_check_flonum(x, w)        if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG) \
        barf(C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR, w, x);

C_regparm C_word C_fcall C_a_i_abs(C_word **a, int c, C_word x)
{
    if(x & C_FIXNUM_BIT) return C_fix(labs(C_unfix(x)));

    if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "abs", x);

    return C_flonum(a, fabs(C_flonum_magnitude(x)));
}

C_regparm C_word C_fcall C_a_i_bitwise_and(C_word **a, int c, C_word n1, C_word n2)
{
    double f1, f2;
    C_uword nn1, nn2;

    C_check_uint(n1, f1, nn1, "bitwise-and");
    C_check_uint(n2, f2, nn2, "bitwise-and");
    nn1 = C_limit_fixnum(nn1 & nn2);

    if(C_ufitsinfixnump(nn1)) return C_fix(nn1);
    else return C_flonum(a, nn1);
}

C_regparm C_word C_fcall C_a_i_bitwise_ior(C_word **a, int c, C_word n1, C_word n2)
{
    double f1, f2;
    C_uword nn1, nn2;

    C_check_uint(n1, f1, nn1, "bitwise-ior");
    C_check_uint(n2, f2, nn2, "bitwise-ior");
    nn1 = C_limit_fixnum(nn1 | nn2);

    if(C_ufitsinfixnump(nn1)) return C_fix(nn1);
    else return C_flonum(a, nn1);
}

C_regparm C_word C_fcall C_a_i_bitwise_xor(C_word **a, int c, C_word n1, C_word n2)
{
    double f1, f2;
    C_uword nn1, nn2;

    C_check_uint(n1, f1, nn1, "bitwise-xor");
    C_check_uint(n2, f2, nn2, "bitwise-xor");
    nn1 = C_limit_fixnum(nn1 ^ nn2);

    if(C_ufitsinfixnump(nn1)) return C_fix(nn1);
    else return C_flonum(a, nn1);
}

C_regparm C_word C_fcall C_a_i_bitwise_not(C_word **a, int c, C_word n)
{
    double f;
    C_uword nn;

    C_check_uint(n, f, nn, "bitwise-not");
    nn = C_limit_fixnum(~nn);

    if(C_ufitsinfixnump(nn)) return C_fix(nn);
    else return C_flonum(a, nn);
}

C_regparm C_word C_fcall C_a_i_arithmetic_shift(C_word **a, int c, C_word n1, C_word n2)
{
    C_word nn;
    C_uword unn;
    C_word s;
    int sgn = 1;

    if((n1 & C_FIXNUM_BIT) != 0) {
        nn = C_unfix(n1);

        if((sgn = nn < 0 ? -1 : 1) >= 0) unn = nn;
    }
    else if(C_immediatep(n1) || C_block_header(n1) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "arithmetic-shift", n1);
    else {
        double m, f;

        f = C_flonum_magnitude(n1);

        if(C_isnan(f) || C_isinf(f) || C_modf(f, &m) != 0.0)
            barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "arithmetic-shift", n1);

        if(f < C_WORD_MIN || f > C_UWORD_MAX)
            barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "arithmetic-shift", n1);
        else if(f < 0) {
            if(f > C_WORD_MAX)
                barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "arithmetic-shift", n1);
            else {
                sgn = -1;
                nn = (C_word)f;
            }
        }
        else if(f > C_WORD_MAX) unn = (C_uword)f;
        else {
            nn = (C_word)f;
            sgn = -1;
        }
    }

    if((n2 & C_FIXNUM_BIT) != 0) s = C_unfix(n2);
    else barf(C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR, "arithmetic-shift", n2);

    if(sgn < 0) {
        if(s < 0) nn >>= -s;
        else nn <<= s;

        if(C_fitsinfixnump(nn)) return C_fix(nn);
        else return C_flonum(a, nn);
    }
    else {
        if(s < 0) unn >>= -s;
        else unn <<= s;

        if(C_ufitsinfixnump(unn)) return C_fix(unn);
        else return C_flonum(a, unn);
    }
}

/* I */
C_regparm C_word C_fcall C_a_i_exp(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "exp", f);
    return C_flonum(a, exp(f));
}

/* I */
C_regparm C_word C_fcall C_a_i_log(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "log", f);
    return C_flonum(a, log(f));
}

/* I */
C_regparm C_word C_fcall C_a_i_sin(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "sin", f);
    return C_flonum(a, sin(f));
}

/* I */
C_regparm C_word C_fcall C_a_i_cos(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "cos", f);
    return C_flonum(a, cos(f));
}

/* I */
C_regparm C_word C_fcall C_a_i_tan(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "tan", f);
    return C_flonum(a, tan(f));
}

/* I */
C_regparm C_word C_fcall C_a_i_asin(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "asin", f);
    return C_flonum(a, asin(f));
}

/* I */
C_regparm C_word C_fcall C_a_i_acos(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "acos", f);
    return C_flonum(a, acos(f));
}

/* I */
C_regparm C_word C_fcall C_a_i_atan(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "atan", f);
    return C_flonum(a, atan(f));
}

/* I */
C_regparm C_word C_fcall C_a_i_atan2(C_word **a, int c, C_word n1, C_word n2)
{
    double f1, f2;

    C_check_real(n1, "atan", f1);
    C_check_real(n2, "atan", f2);
    return C_flonum(a, atan2(f1, f2));
}

/* I */
C_regparm C_word C_fcall C_a_i_sqrt(C_word **a, int c, C_word n)
{
    double f;

    C_check_real(n, "sqrt", f);
    return C_flonum(a, sqrt(f));
}

/* this is different from C_a_i_flonum_round, for R5RS compatibility */
C_regparm C_word C_fcall C_a_i_flonum_round_proper(C_word **ptr, int c, C_word n)
{
    double fn, i, f, i2, r;

    fn = C_flonum_magnitude(n);
    if(fn < 0.0) {
        f = modf(-fn, &i);
        if(f < 0.5 || (f == 0.5 && modf(i * 0.5, &i2) == 0.0))
            r = -i;
        else
            r = -(i + 1.0);
    }
    else if(fn == 0.0 /* || fn == -0.0*/)
        r = fn;
    else {
        f = modf(fn, &i);
        if(f < 0.5 || (f == 0.5 && modf(i * 0.5, &i2) == 0.0))
            r = i;
        else
            r = i + 1.0;
    }

    return C_flonum(ptr, r);
}

void C_ccall C_flonum_fraction(C_word c, C_word closure, C_word k, C_word n)
{
    double i, fn = C_flonum_magnitude(n);
    C_alloc_flonum;

    C_kontinue_flonum(k, modf(fn, &i));
}

void C_ccall C_flonum_rat(C_word c, C_word closure, C_word k, C_word n)
{
    double frac, tmp, numer, denom, fn = C_flonum_magnitude(n);
    double ga, gb;
    C_word ab[WORDS_PER_FLONUM * 2], *ap = ab;
    int i = 0;

    if (isnormal(fn)) {
        /* Calculate bit-length of the fractional part (ie, after decimal point) */
        frac = fn;
        while(!C_isnan(frac) && !C_isinf(frac) && C_modf(frac, &tmp) != 0.0) {
            frac *= 2;
            if (i++ > 3000) /* should this be flonum-maximum-exponent? */
                barf(C_CANT_REPRESENT_INEXACT_ERROR, "fprat", n);
        }

        /* Now we can compute the rational number r = 2^i/X*2^i = numer/denom. */
        denom = pow(2, i);
        numer = fn*denom;
    } else { /* denormalised/subnormal number: [+-]1.0/+inf.0 */
        numer = fn > 0.0 ? 1.0 : -1.0;
        denom = INFINITY; /* +inf */
    }
    C_values(4, C_SCHEME_UNDEFINED, k, C_flonum(&ap, numer), C_flonum(&ap, denom));
}
