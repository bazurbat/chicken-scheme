#include "inexact.h"
#include <chicken.h>


C_regparm C_word C_fcall C_a_i_exact_to_inexact(C_word **a, int c, C_word n)
{
    if(n & C_FIXNUM_BIT)
        return C_flonum(a, (double)C_unfix(n));
    else if(C_immediatep(n) || C_block_header(n) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "exact->inexact", n);

    return n;
}


void C_ccall C_quotient(C_word c, C_word closure, C_word k, C_word n1, C_word n2)
{
    double f1, f2, r;
    C_word result;
    C_alloc_flonum;

    if(c != 4) C_bad_argc(c, 4);

    if(n1 &C_FIXNUM_BIT) {
        if(n2 &C_FIXNUM_BIT) {
            if((n2 = C_unfix(n2)) == 0)
                barf(C_DIVISION_BY_ZERO_ERROR, "quotient");

            result = C_fix(C_unfix(n1) / n2);
            C_kontinue(k, result);
        }
        else if(!C_immediatep(n2) && C_block_header(n2) == C_FLONUM_TAG) {
            f1 = (double)C_unfix(n1);
            f2 = C_flonum_magnitude(n2);
            if(C_isnan(f2) || C_isinf(f2) || C_modf(f2, &r) != 0.0)
                barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "quotient", n2);
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "quotient", n2);
    }
    else if(!C_immediatep(n1) && C_block_header(n1) == C_FLONUM_TAG) {
        f1 = C_flonum_magnitude(n1);
        if(C_isnan(f1) || C_isinf(f1) || C_modf(f1, &r) != 0.0)
            barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "quotient", n1);

        if(n2 &C_FIXNUM_BIT)
            f2 = (double)C_unfix(n2);
        else if(!C_immediatep(n2) && C_block_header(n2) == C_FLONUM_TAG) {
            f2 = C_flonum_magnitude(n2);
            if(C_isnan(f2) || C_isinf(f2) || C_modf(f2, &r) != 0.0)
                barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "quotient", n2);
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "quotient", n2);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "quotient", n1);

    if(f2 == 0)
        barf(C_DIVISION_BY_ZERO_ERROR, "quotient");

    modf(f1 / f2, &r);
    C_kontinue_flonum(k, r);
}

