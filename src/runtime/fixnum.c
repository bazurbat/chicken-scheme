#include "fixnum.h"
#include "errors.h"

/* fixnum arithmetic with overflow detection (from "Hacker's Delight" by Hank Warren)
   These routines return #f if the operation failed due to overflow.
 */

C_regparm C_word C_fcall C_i_o_fixnum_plus(C_word n1, C_word n2)
{
    C_word x1, x2, s;

    if((n1 & C_FIXNUM_BIT) == 0 || (n2 & C_FIXNUM_BIT) == 0) return C_SCHEME_FALSE;

    x1 = C_unfix(n1);
    x2 = C_unfix(n2);
    s = x1 + x2;

#ifdef C_SIXTY_FOUR
    if((((s ^ x1) & (s ^ x2)) >> 62) != 0) return C_SCHEME_FALSE;
#else
    if((((s ^ x1) & (s ^ x2)) >> 30) != 0) return C_SCHEME_FALSE;
#endif
    else return C_fix(s);
}

C_regparm C_word C_fcall C_i_o_fixnum_difference(C_word n1, C_word n2)
{
    C_word x1, x2, s;

    if((n1 & C_FIXNUM_BIT) == 0 || (n2 & C_FIXNUM_BIT) == 0) return C_SCHEME_FALSE;

    x1 = C_unfix(n1);
    x2 = C_unfix(n2);
    s = x1 - x2;

#ifdef C_SIXTY_FOUR
    if((((s ^ x1) & ~(s ^ x2)) >> 62) != 0) return C_SCHEME_FALSE;
#else
    if((((s ^ x1) & ~(s ^ x2)) >> 30) != 0) return C_SCHEME_FALSE;
#endif
    else return C_fix(s);
}

C_regparm C_word C_fcall C_i_o_fixnum_times(C_word n1, C_word n2)
{
    C_word x1, x2;
    C_uword x1u, x2u;
#ifdef C_SIXTY_FOUR
# ifdef C_LLP
    C_uword c = 1ULL<<63ULL;
# else
    C_uword c = 1UL<<63UL;
# endif
#else
    C_uword c = 1UL<<31UL;
#endif

    if((n1 & C_INT_SIGN_BIT) == (n2 & C_INT_SIGN_BIT)) --c;

    x1 = C_unfix(n1);
    x2 = C_unfix(n2);
    x1u = x1 < 0 ? -x1 : x1;
    x2u = x2 < 0 ? -x2 : x2;

    if(x2u != 0 && x1u > (c / x2u)) return C_SCHEME_FALSE;

    x1 = x1 * x2;

    if(C_fitsinfixnump(x1)) return C_fix(x1);
    else return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_o_fixnum_quotient(C_word n1, C_word n2)
{
    C_word x1, x2;

    if((n1 & C_FIXNUM_BIT) == 0 || (n2 & C_FIXNUM_BIT) == 0) return C_SCHEME_FALSE;

    x1 = C_unfix(n1);
    x2 = C_unfix(n2);

    if(x2 == 0)
        barf(C_DIVISION_BY_ZERO_ERROR, "fx/?");

#ifdef C_SIXTY_FOUR
    if(x1 == 0x8000000000000000L && x2 == -1) return C_SCHEME_FALSE;
#else
    if(x1 == 0x80000000L && x2 == -1) return C_SCHEME_FALSE;
#endif

    x1 = x1 / x2;

    if(C_fitsinfixnump(x1)) return C_fix(x1);
    else return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_o_fixnum_and(C_word n1, C_word n2)
{
    C_uword x1, x2, r;

    if((n1 & C_FIXNUM_BIT) == 0 || (n2 & C_FIXNUM_BIT) == 0) return C_SCHEME_FALSE;

    x1 = C_unfix(n1);
    x2 = C_unfix(n2);
    r = x1 & x2;

    if(((r & C_INT_SIGN_BIT) >> 1) != (r & C_INT_TOP_BIT)) return C_SCHEME_FALSE;
    else return C_fix(r);
}

C_regparm C_word C_fcall C_i_o_fixnum_ior(C_word n1, C_word n2)
{
    C_uword x1, x2, r;

    if((n1 & C_FIXNUM_BIT) == 0 || (n2 & C_FIXNUM_BIT) == 0) return C_SCHEME_FALSE;

    x1 = C_unfix(n1);
    x2 = C_unfix(n2);
    r = x1 | x2;

    if(((r & C_INT_SIGN_BIT) >> 1) != (r & C_INT_TOP_BIT)) return C_SCHEME_FALSE;
    else return C_fix(r);
}

C_regparm C_word C_fcall C_i_o_fixnum_xor(C_word n1, C_word n2)
{
    C_uword x1, x2, r;

    if((n1 & C_FIXNUM_BIT) == 0 || (n2 & C_FIXNUM_BIT) == 0) return C_SCHEME_FALSE;

    x1 = C_unfix(n1);
    x2 = C_unfix(n2);
    r = x1 ^ x2;

    if(((r & C_INT_SIGN_BIT) >> 1) != (r & C_INT_TOP_BIT)) return C_SCHEME_FALSE;
    else return C_fix(r);
}