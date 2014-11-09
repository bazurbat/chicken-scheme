#ifndef MATH_CONSTRUCTORS_H
#define MATH_CONSTRUCTORS_H

#include "common.h"
#include "fixnum.h"
#include "flonum.h"

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

#endif /* MATH_CONSTRUCTORS_H */
