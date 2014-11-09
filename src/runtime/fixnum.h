#ifndef RUNTIME_FIXNUM_H
#define RUNTIME_FIXNUM_H

#include "definitions.h"
#include "errors.h"
#include "types.h"

#define C_fix(n)                   (((C_word)(n) << C_FIXNUM_SHIFT) | C_FIXNUM_BIT)
#define C_unfix(x)                 ((x) >> C_FIXNUM_SHIFT)

#define C_fitsinfixnump(n)         (((n) & C_INT_SIGN_BIT) == (((n) & C_INT_TOP_BIT) << 1))
#define C_ufitsinfixnump(n)        (((n) & (C_INT_SIGN_BIT | (C_INT_SIGN_BIT >> 1))) == 0)

#define C_fixnump(x)              C_mk_bool((x) & C_FIXNUM_BIT)
#define C_nfixnump(x)             C_mk_nbool((x) & C_FIXNUM_BIT)

#define C_u_i_exactp(x)           C_mk_bool((x) & C_FIXNUM_BIT)
#define C_u_i_inexactp(x)         C_mk_bool(((x) & C_FIXNUM_BIT) == 0)

#define C_fixnum_times(n1, n2)          (C_fix(C_unfix(n1) * C_unfix(n2)))
#define C_u_fixnum_plus(n1, n2)         (((n1) - C_FIXNUM_BIT) + (n2))
#define C_fixnum_plus(n1, n2)           (C_u_fixnum_plus(n1, n2) | C_FIXNUM_BIT)
#define C_u_fixnum_difference(n1, n2)   ((n1) - (n2) + C_FIXNUM_BIT)
#define C_fixnum_difference(n1, n2)     (C_u_fixnum_difference(n1, n2) | C_FIXNUM_BIT)
#define C_u_fixnum_divide(n1, n2)       (C_fix(C_unfix(n1) / C_unfix(n2)))
#define C_u_fixnum_modulo(n1, n2)       (C_fix(C_unfix(n1) % C_unfix(n2)))
#define C_u_fixnum_and(n1, n2)          ((n1) & (n2))
#define C_fixnum_and(n1, n2)            (C_u_fixnum_and(n1, n2) | C_FIXNUM_BIT)
#define C_u_fixnum_or(n1, n2)           ((n1) | (n2))
#define C_fixnum_or(n1, n2)             (C_u_fixnum_or(n1, n2) | C_FIXNUM_BIT)
#define C_fixnum_xor(n1, n2)            (((n1) ^ (n2)) | C_FIXNUM_BIT)
#define C_fixnum_not(n)                 ((~(n)) | C_FIXNUM_BIT)
#define C_fixnum_shift_left(n1, n2)     (C_fix(C_unfix(n1) << C_unfix(n2)))
#define C_fixnum_shift_right(n1, n2)    (((n1) >> C_unfix(n2)) | C_FIXNUM_BIT)
#define C_u_fixnum_negate(n)            (-(n) + 2 * C_FIXNUM_BIT)
#define C_fixnum_negate(n)              (C_u_fixnum_negate(n) | C_FIXNUM_BIT)
#define C_fixnum_greaterp(n1, n2)       (C_mk_bool((C_word)(n1) > (C_word)(n2)))
#define C_fixnum_lessp(n1, n2)          (C_mk_bool((C_word)(n1) < (C_word)(n2)))
#define C_fixnum_greater_or_equal_p(n1, n2) (C_mk_bool((C_word)(n1) >= (C_word)(n2)))
#define C_fixnum_less_or_equal_p(n1, n2)(C_mk_bool((C_word)(n1) <= (C_word)(n2)))
#define C_u_fixnum_increase(n)          ((n) + (1 << C_FIXNUM_SHIFT))
#define C_fixnum_increase(n)            (C_u_fixnum_increase(n) | C_FIXNUM_BIT)
#define C_u_fixnum_decrease(n)          ((n) - (1 << C_FIXNUM_SHIFT))
#define C_fixnum_decrease(n)            (C_u_fixnum_decrease(n) | C_FIXNUM_BIT)
#define C_fixnum_abs(n)                 C_fix(abs(C_unfix(n)))

#define C_display_fixnum(p, n)          (C_fprintf(C_port_file(p), C_text("%d"), C_unfix(n)), C_SCHEME_UNDEFINED)

#define C_random_fixnum(n)              C_fix((C_word)(((double)rand())/(RAND_MAX + 1.0) * C_unfix(n)))

#define C_peek_fixnum(b, i)             C_fix(C_block_item(b, C_unfix(i)))

#define C_i_fixnumevenp(x)              C_mk_nbool((x) & 0x00000002)
#define C_i_fixnumoddp(x)               C_mk_bool((x) & 0x00000002)

C_inline C_word C_i_fixnum_min(C_word x, C_word y)
{
    return ((C_word)x < (C_word)y) ? x : y;
}

C_inline C_word C_i_fixnum_max(C_word x, C_word y)
{
    return ((C_word)x > (C_word)y) ? x : y;
}

C_inline C_word C_fixnum_divide(C_word x, C_word y)
{
    if(y == C_fix(0)) C_div_by_zero_error("fx/");
    return C_u_fixnum_divide(x, y);
}

C_inline C_word C_fixnum_modulo(C_word x, C_word y)
{
    if(y == C_fix(0)) C_div_by_zero_error("fxmod");
    return C_u_fixnum_modulo(x, y);
}

C_inline C_word C_i_fixnum_arithmetic_shift(C_word n, C_word c)
{
    if(C_unfix(c) < 0) return C_fixnum_shift_right(n, C_u_fixnum_negate(c));
    else return C_fixnum_shift_left(n, c);
}

C_inline C_word C_double_to_number(C_word n)
{
    double m, f = C_flonum_magnitude(n);

    if(f <= (double)C_MOST_POSITIVE_FIXNUM
       && f >= (double)C_MOST_NEGATIVE_FIXNUM && C_modf(f, &m) == 0.0)
        return C_fix(f);
    else return n;
}

C_fctexport C_word C_fcall C_i_o_fixnum_plus(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_difference(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_times(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_quotient(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_and(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_ior(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_xor(C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_fixnum_to_string(C_word c, C_word closure, C_word k, C_word num) C_noret;

#endif
