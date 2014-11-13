#ifndef MATH_FLONUM_H
#define MATH_FLONUM_H

#include <common.h>
#include <runtime/errors.h>

#define WORDS_PER_FLONUM               C_SIZEOF_FLONUM

C_fctexport C_word C_fcall C_a_i_abs(C_word **a, int c, C_word n) C_regparm;

C_fctexport C_word C_fcall C_a_i_bitwise_and(C_word **a, int c, C_word n1, C_word n2) C_regparm;
C_fctexport C_word C_fcall C_a_i_bitwise_ior(C_word **a, int c, C_word n1, C_word n2) C_regparm;
C_fctexport C_word C_fcall C_a_i_bitwise_xor(C_word **a, int c, C_word n1, C_word n2) C_regparm;
C_fctexport C_word C_fcall C_a_i_bitwise_not(C_word **a, int c, C_word n1) C_regparm;

C_fctexport C_word C_fcall C_a_i_arithmetic_shift(C_word **a, int c, C_word n1, C_word n2) C_regparm;

C_fctexport C_word C_fcall C_a_i_exp(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_log(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_sin(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_cos(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_tan(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_asin(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_acos(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_atan(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_atan2(C_word **a, int c, C_word n1, C_word n2) C_regparm;
C_fctexport C_word C_fcall C_a_i_sqrt(C_word **a, int c, C_word n) C_regparm;

C_fctexport C_word C_fcall C_a_i_flonum_round_proper(C_word **a, int c, C_word n) C_regparm;

C_fctexport void C_ccall C_flonum_fraction(C_word c, C_word closure, C_word k, C_word n) C_noret;
C_fctexport void C_ccall C_flonum_rat(C_word c, C_word closure, C_word k, C_word n) C_noret;

#ifdef BITWISE_UINT_ONLY
#define C_check_uint(x, f, n, w)    if(((x) & C_FIXNUM_BIT) != 0) n = C_unfix(x); \
    else if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG) \
        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, w, x); \
    else { double _m; \
           f = C_flonum_magnitude(x); \
           if(modf(f, &_m) != 0.0 || f < 0 || f > C_UWORD_MAX) \
               barf(C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR, w, x); \
           else n = (C_uword)f; \
    }
#else
#define C_check_uint(x, f, n, w)    if(((x) & C_FIXNUM_BIT) != 0) n = C_unfix(x); \
    else if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG) \
        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, w, x); \
    else { double _m; \
           f = C_flonum_magnitude(x); \
           if(modf(f, &_m) != 0.0 || f > C_UWORD_MAX) \
               barf(C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR, w, x); \
           else n = (C_uword)f; \
    }
#endif

#define C_flonump(x)              C_mk_bool(C_block_header(x) == C_FLONUM_TAG)

#define C_a_i_flonum(ptr, i, n)         C_flonum(ptr, n)

#define C_a_i_current_milliseconds(ptr, c, dummy) C_flonum(ptr, C_milliseconds())

#define C_a_i_fix_to_flo(p, n, f)       C_flonum(p, C_unfix(f))
#define C_cast_to_flonum(n)             ((double)(n))

#define C_quickflonumtruncate(n)   (C_fix((C_word)C_flonum_magnitude(n)))
#define C_a_double_to_num(ptr, n)       C_double_to_number(C_flonum(ptr, n))

#define C_a_u_i_pointer_f32_ref(ap, n, ptr)  C_flonum(ap, *((float *)C_block_item(ptr, 0)))
#define C_a_u_i_pointer_f64_ref(ap, n, ptr)  C_flonum(ap, *((double *)C_block_item(ptr, 0)))

#define C_u_i_pointer_f32_set(ptr, x)  \
    (*((float *)C_block_item(ptr, 0)) = C_flonum_magnitude(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_f64_set(ptr, x)  \
    (*((double *)C_block_item(ptr, 0)) = C_flonum_magnitude(x), C_SCHEME_UNDEFINED)

#define C_ub_i_flonum_plus(x, y)        ((x) + (y))
#define C_ub_i_flonum_difference(x, y)  ((x) - (y))
#define C_ub_i_flonum_times(x, y)       ((x) * (y))
#define C_ub_i_flonum_quotient(x, y)    ((x) / (y))

#define C_ub_i_flonum_equalp(n1, n2)    ((n1) == (n2))
#define C_ub_i_flonum_greaterp(n1, n2)  ((n1) > (n2))
#define C_ub_i_flonum_lessp(n1, n2)     ((n1) < (n2))
#define C_ub_i_flonum_greater_or_equal_p(n1, n2)  ((n1) >= (n2))
#define C_ub_i_flonum_less_or_equal_p(n1, n2)  ((n1) <= (n2))

#define C_flonum_equalp(n1, n2)         C_mk_bool(C_flonum_magnitude(n1) == C_flonum_magnitude(n2))
#define C_flonum_greaterp(n1, n2)       C_mk_bool(C_flonum_magnitude(n1) > C_flonum_magnitude(n2))
#define C_flonum_lessp(n1, n2)          C_mk_bool(C_flonum_magnitude(n1) < C_flonum_magnitude(n2))
#define C_flonum_greater_or_equal_p(n1, n2) C_mk_bool(C_flonum_magnitude(n1) >= C_flonum_magnitude(n2))
#define C_flonum_less_or_equal_p(n1, n2) C_mk_bool(C_flonum_magnitude(n1) <= C_flonum_magnitude(n2))

#define C_a_i_flonum_plus(ptr, c, n1, n2) C_flonum(ptr, C_flonum_magnitude(n1) + C_flonum_magnitude(n2))
#define C_a_i_flonum_difference(ptr, c, n1, n2) C_flonum(ptr, C_flonum_magnitude(n1) - C_flonum_magnitude(n2))
#define C_a_i_flonum_times(ptr, c, n1, n2) C_flonum(ptr, C_flonum_magnitude(n1) * C_flonum_magnitude(n2))
#define C_a_i_flonum_quotient(ptr, c, n1, n2) C_flonum(ptr, C_flonum_magnitude(n1) / C_flonum_magnitude(n2))
#define C_a_i_flonum_negate(ptr, c, n)  C_flonum(ptr, -C_flonum_magnitude(n))

#define C_a_i_flonum_sin(ptr, c, x)     C_flonum(ptr, sin(C_flonum_magnitude(x)))
#define C_a_i_flonum_cos(ptr, c, x)     C_flonum(ptr, cos(C_flonum_magnitude(x)))
#define C_a_i_flonum_tan(ptr, c, x)     C_flonum(ptr, tan(C_flonum_magnitude(x)))
#define C_a_i_flonum_asin(ptr, c, x)    C_flonum(ptr, asin(C_flonum_magnitude(x)))
#define C_a_i_flonum_acos(ptr, c, x)    C_flonum(ptr, acos(C_flonum_magnitude(x)))
#define C_a_i_flonum_atan(ptr, c, x)    C_flonum(ptr, atan(C_flonum_magnitude(x)))
#define C_a_i_flonum_atan2(ptr, c, x, y)  C_flonum(ptr, atan2(C_flonum_magnitude(x), C_flonum_magnitude(y)))
#define C_a_i_flonum_exp(ptr, c, x)     C_flonum(ptr, exp(C_flonum_magnitude(x)))
#define C_a_i_flonum_expt(ptr, c, x, y)  C_flonum(ptr, pow(C_flonum_magnitude(x), C_flonum_magnitude(y)))
#define C_a_i_flonum_log(ptr, c, x)     C_flonum(ptr, log(C_flonum_magnitude(x)))
#define C_a_i_flonum_sqrt(ptr, c, x)    C_flonum(ptr, sqrt(C_flonum_magnitude(x)))
#define C_a_i_flonum_abs(ptr, c, x)     C_flonum(ptr, fabs(C_flonum_magnitude(x)))

#define C_alloc_flonum                  C_word *___tmpflonum = C_alloc(WORDS_PER_FLONUM)
#define C_kontinue_flonum(k, n)         C_kontinue((k), C_flonum(&___tmpflonum, (n)))

#define C_a_i_flonum_truncate(ptr, n, x)  C_flonum(ptr, trunc(C_flonum_magnitude(x)))
#define C_a_i_flonum_ceiling(ptr, n, x)  C_flonum(ptr, ceil(C_flonum_magnitude(x)))
#define C_a_i_flonum_floor(ptr, n, x)   C_flonum(ptr, floor(C_flonum_magnitude(x)))
#define C_a_i_flonum_round(ptr, n, x)   C_flonum(ptr, round(C_flonum_magnitude(x)))

#define C_a_u_i_f32vector_ref(ptr, n, b, i)  C_flonum(ptr, ((float *)C_data_pointer(C_block_item((b), 1)))[ C_unfix(i) ])
#define C_a_u_i_f64vector_ref(ptr, n, b, i)  C_flonum(ptr, ((double *)C_data_pointer(C_block_item((b), 1)))[ C_unfix(i) ])
#define C_u_i_f32vector_set(v, i, x)    ((((float *)C_data_pointer(C_block_item((v), 1)))[ C_unfix(i) ] = C_flonum_magnitude(x)), C_SCHEME_UNDEFINED)
#define C_u_i_f64vector_set(v, i, x)    ((((double *)C_data_pointer(C_block_item((v), 1)))[ C_unfix(i) ] = C_flonum_magnitude(x)), C_SCHEME_UNDEFINED)

C_inline C_word C_flonum(C_word **ptr, double n)
{
    C_word
    *p = *ptr,
    *p0;

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

C_inline C_word C_i_flonump(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG);
}

C_inline C_word C_flonum_in_fixnum_range_p(C_word n)
{
    double f = C_flonum_magnitude(n);

    return C_mk_bool(f <= (double)C_MOST_POSITIVE_FIXNUM && f >= (double)C_MOST_NEGATIVE_FIXNUM);
}

C_inline C_word C_flonum_in_int_range_p(C_word n)
{
    double m = C_flonum_magnitude(n);

    return C_mk_bool(m >= C_WORD_MIN && m <= C_WORD_MAX);
}

C_inline C_word C_flonum_in_uint_range_p(C_word n)
{
    double m = C_flonum_magnitude(n);

    return C_mk_bool(m >= 0 && m <= C_UWORD_MAX);
}

C_inline C_word C_i_flonum_min(C_word x, C_word y)
{
    double
        xf = C_flonum_magnitude(x),
        yf = C_flonum_magnitude(y);

    return xf < yf ? x : y;
}

C_inline C_word C_i_flonum_max(C_word x, C_word y)
{
    double
        xf = C_flonum_magnitude(x),
        yf = C_flonum_magnitude(y);

    return xf > yf ? x : y;
}

C_inline C_word C_a_i_flonum_quotient_checked(C_word **ptr, int c, C_word n1, C_word n2)
{
    double n3 = C_flonum_magnitude(n2);

    if(n3 == 0.0) C_div_by_zero_error("fp/?");
    return C_flonum(ptr, C_flonum_magnitude(n1) / n3);
}

C_inline double C_ub_i_flonum_quotient_checked(double n1, double n2)
{
    if(n2 == 0.0) C_div_by_zero_error("fp/?");
    return n1 / n2;
}

C_inline C_word C_i_rationalp(C_word x)
{
    if((x & C_FIXNUM_BIT) != 0) return C_SCHEME_TRUE;

    if((!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG)) {
        double n = C_flonum_magnitude(x);

        if(!isinf(n) && !isnan(n)) return C_SCHEME_TRUE;
    }

    return C_SCHEME_FALSE;
}

C_inline C_word C_u_i_fpintegerp(C_word x)
{
    double dummy, val;

    val = C_flonum_magnitude(x);

    if(isnan(val) || isinf(val)) return C_SCHEME_FALSE;

    return C_mk_bool(modf(val, &dummy) == 0.0);
}

#endif /* MATH_FLONUM_H */
