#ifndef RUNTIME_VECTORS_H
#define RUNTIME_VECTORS_H

#include "definitions.h"

#define C_a_i_vector                    C_vector

#define C_vectorp(x)              C_mk_bool(C_header_bits(x) == C_VECTOR_TYPE)
#define C_bytevectorp(x)          C_mk_bool(C_header_bits(x) == C_BYTEVECTOR_TYPE)

#define C_c_bytevector(x)          ((unsigned char *)C_data_pointer(x))
#define C_c_bytevector_or_null(x)  ((unsigned char *)C_data_pointer_or_null(x))
#define C_srfi_4_vector(x)         C_data_pointer(C_block_item(x,1))
#define C_c_u8vector(x)            ((unsigned char *)C_srfi_4_vector(x))
#define C_c_u8vector_or_null(x)    ((unsigned char *)C_srfi_4_vector_or_null(x))
#define C_c_s8vector(x)            ((signed char *)C_srfi_4_vector(x))
#define C_c_s8vector_or_null(x)    ((signed char *)C_srfi_4_vector_or_null(x))
#define C_c_u16vector(x)           ((unsigned short *)C_srfi_4_vector(x))
#define C_c_u16vector_or_null(x)   ((unsigned short *)C_srfi_4_vector_or_null(x))
#define C_c_s16vector(x)           ((short *)C_srfi_4_vector(x))
#define C_c_s16vector_or_null(x)   ((short *)C_srfi_4_vector_or_null(x))
#define C_c_u32vector(x)           ((C_u32 *)C_srfi_4_vector(x))
#define C_c_u32vector_or_null(x)   ((C_u32 *)C_srfi_4_vector_or_null(x))
#define C_c_s32vector(x)           ((C_s32 *)C_srfi_4_vector(x))
#define C_c_s32vector_or_null(x)   ((C_s32 *)C_srfi_4_vector_or_null(x))
#define C_c_f32vector(x)           ((float *)C_srfi_4_vector(x))
#define C_c_f32vector_or_null(x)   ((float *)C_srfi_4_vector_or_null(x))
#define C_c_f64vector(x)           ((double *)C_srfi_4_vector(x))
#define C_c_f64vector_or_null(x)   ((double *)C_srfi_4_vector_or_null(x))
#define C_c_pointer_vector(x)      ((void **)C_data_pointer(C_block_item((x), 2)))

#define C_u_i_8vector_length(x)         C_fix(C_header_size(C_block_item(x, 1)))
#define C_u_i_16vector_length(x)        C_fix(C_header_size(C_block_item(x, 1)) >> 1)
#define C_u_i_32vector_length(x)        C_fix(C_header_size(C_block_item(x, 1)) >> 2)
#define C_u_i_64vector_length(x)        C_fix(C_header_size(C_block_item(x, 1)) >> 3)
#define C_u_i_u8vector_length           C_u_i_8vector_length
#define C_u_i_s8vector_length           C_u_i_8vector_length
#define C_u_i_u16vector_length          C_u_i_16vector_length
#define C_u_i_s16vector_length          C_u_i_16vector_length
#define C_u_i_u32vector_length          C_u_i_32vector_length
#define C_u_i_s32vector_length          C_u_i_32vector_length
#define C_u_i_f32vector_length          C_u_i_32vector_length
#define C_u_i_f64vector_length          C_u_i_64vector_length

#define C_u_i_u8vector_ref(x, i)        C_fix(((unsigned char *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_u_i_s8vector_ref(x, i)        C_fix(((signed char *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_u_i_u16vector_ref(x, i)       C_fix(((unsigned short *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_u_i_s16vector_ref(x, i)       C_fix(((short *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])

/* these assume fixnum mode */
#define C_u_i_u32vector_ref(x, i)       C_fix(((C_u32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_u_i_s32vector_ref(x, i)       C_fix(((C_u32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])

#define C_a_u_i_u32vector_ref(ptr, c, x, i)  C_unsigned_int_to_num(ptr, ((C_u32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])
#define C_a_u_i_s32vector_ref(ptr, c, x, i)  C_int_to_num(ptr, ((C_s32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ])

#define C_u_i_u8vector_set(x, i, v)     ((((unsigned char *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_unfix(v)), C_SCHEME_UNDEFINED)
#define C_u_i_s8vector_set(x, i, v)     ((((signed char *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_unfix(v)), C_SCHEME_UNDEFINED)
#define C_u_i_u16vector_set(x, i, v)    ((((unsigned short *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_unfix(v)), C_SCHEME_UNDEFINED)
#define C_u_i_s16vector_set(x, i, v)    ((((short *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_unfix(v)), C_SCHEME_UNDEFINED)
#define C_u_i_u32vector_set(x, i, v)    ((((C_u32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_num_to_unsigned_int(v)), C_SCHEME_UNDEFINED)
#define C_u_i_s32vector_set(x, i, v)    ((((C_s32 *)C_data_pointer(C_block_item((x), 1)))[ C_unfix(i) ] = C_num_to_int(v)), C_SCHEME_UNDEFINED)

#define C_ub_i_f32vector_ref(b, i)      (((float *)C_data_pointer(C_block_item((b), 1)))[ i ])
#define C_ub_i_f64vector_ref(b, i)      (((double *)C_data_pointer(C_block_item((b), 1)))[ i ])
#define C_ub_i_f32vector_set(v, i, x)   ((((float *)C_data_pointer(C_block_item((v), 1)))[ i ] = (x)), 0)
#define C_ub_i_f64vector_set(v, i, x)   ((((double *)C_data_pointer(C_block_item((v), 1)))[ i ] = (x)), 0)

/* this does not use C_mutate: */
#define C_subvector_copy(v1, v2, start1, end1, start2) \
    (C_memcpy_slots((C_char *)C_data_pointer(v2) + C_unfix(start2), \
                    (C_char *)C_data_pointer(v1) + C_unfix(start1), \
                    C_unfix(end1) - C_unfix(start1) ), C_SCHEME_UNDEFINED)

/* These expect C_VECTOR_TYPE to be 0: */
#define C_vector_to_structure(v)        (C_block_header(v) |= C_STRUCTURE_TYPE, C_SCHEME_UNDEFINED)
#define C_vector_to_closure(v)          (C_block_header(v) |= C_CLOSURE_TYPE, C_SCHEME_UNDEFINED)
#define C_string_to_bytevector(s)       (C_block_header(s) = C_header_size(s) | C_BYTEVECTOR_TYPE, C_SCHEME_UNDEFINED)
#define C_string_to_lambdainfo(s)       (C_block_header(s) = C_header_size(s) | C_LAMBDA_INFO_TYPE, C_SCHEME_UNDEFINED)

C_inline C_word C_a_i_vector1(C_word **ptr, int n, C_word x1)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 1;
    *(p++) = x1;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_vector2(C_word **ptr, int n, C_word x1, C_word x2)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 2;
    *(p++) = x1;
    *(p++) = x2;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_vector3(C_word **ptr, int n, C_word x1, C_word x2, C_word x3)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 3;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_vector4(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 4;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_vector5(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 5;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_vector6(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 6;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_vector7(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6, C_word x7)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 7;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *(p++) = x7;
    *ptr = p;
    return (C_word)p0;
}

C_inline C_word C_a_i_vector8(C_word **ptr, int n, C_word x1, C_word x2, C_word x3, C_word x4,
                              C_word x5, C_word x6, C_word x7, C_word x8)
{
    C_word *p = *ptr, *p0 = p;

    *(p++) = C_VECTOR_TYPE | 8;
    *(p++) = x1;
    *(p++) = x2;
    *(p++) = x3;
    *(p++) = x4;
    *(p++) = x5;
    *(p++) = x6;
    *(p++) = x7;
    *(p++) = x8;
    *ptr = p;
    return (C_word)p0;
}

C_inline void *C_srfi_4_vector_or_null(C_word x)
{
    return C_truep(x) ? C_srfi_4_vector(x) : NULL;
}

#endif /* RUNTIME_VECTORS_H */
