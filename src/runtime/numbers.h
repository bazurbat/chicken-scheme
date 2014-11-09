#ifndef RUNTIME_NUMBERS_H
#define RUNTIME_NUMBERS_H

#include "definitions.h"
#include "types.h"
#include "flonum.h"
#include "fixnum.h"

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

C_inline double C_c_double(C_word x)
{
    if(x & C_FIXNUM_BIT) return (double)C_unfix(x);
    else return C_flonum_magnitude(x);
}

C_inline C_word C_num_to_int(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_unfix(x);
    else return (int)C_flonum_magnitude(x);
}

C_inline C_s64 C_num_to_int64(C_word x)
{
    if(x & C_FIXNUM_BIT) return (C_s64)C_unfix(x);
    else return (C_s64)C_flonum_magnitude(x);
}

C_inline C_u64 C_num_to_uint64(C_word x)
{
    if(x & C_FIXNUM_BIT) return (C_u64)C_unfix(x);
    else return (C_u64)C_flonum_magnitude(x);
}

C_inline C_uword C_num_to_unsigned_int(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_unfix(x);
    else return (unsigned int)C_flonum_magnitude(x);
}

C_inline C_word C_int_to_num(C_word **ptr, C_word n)
{
    if(C_fitsinfixnump(n)) return C_fix(n);
    else return C_flonum(ptr, (double)n);
}

C_inline C_word C_unsigned_int_to_num(C_word **ptr, C_uword n)
{
    if(C_ufitsinfixnump(n)) return C_fix(n);
    else return C_flonum(ptr, (double)n);
}

C_inline C_word C_long_to_num(C_word **ptr, C_long n)
{
    if(C_fitsinfixnump(n)) return C_fix(n);
    else return C_flonum(ptr, (double)n);
}

C_inline C_word C_unsigned_long_to_num(C_word **ptr, C_ulong n)
{
    if(C_ufitsinfixnump(n)) return C_fix(n);
    else return C_flonum(ptr, (double)n);
}

C_inline C_long C_num_to_long(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_unfix(x);
    else return (C_long)C_flonum_magnitude(x);
}

C_inline C_ulong C_num_to_unsigned_long(C_word x)
{
    if(x & C_FIXNUM_BIT) return C_unfix(x);
    else return (C_ulong)C_flonum_magnitude(x);
}

C_inline C_word C_i_eqvp(C_word x, C_word y)
{
    return
        C_mk_bool(x == y ||
                  (!C_immediatep(x) && !C_immediatep(y) &&
                   C_block_header(x) == C_FLONUM_TAG && C_block_header(y) == C_FLONUM_TAG &&
                   C_flonum_magnitude(x) == C_flonum_magnitude(y) ) );
}

#endif /* RUNTIME_NUMBERS_H */
