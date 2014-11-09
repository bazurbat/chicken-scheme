#ifndef RUNTIME_POINTERS_H
#define RUNTIME_POINTERS_H

#include "definitions.h"
#include "types.h"

#if defined (__llvm__) && defined (__GNUC__)
# if defined (__i386__)
#  define C_stack_pointer ({C_word *sp; __asm__ __volatile__ ("movl %%esp,%0" : "=r" (sp) :); sp; })
# elif defined (__x86_64__)
#  define C_stack_pointer ({C_word *sp; __asm__ __volatile__ ("movq %%rsp,%0" : "=r" (sp) :); sp; })
# else
#  define C_stack_pointer ((C_word *)C_alloca(1))
# endif
#else
# define C_stack_pointer ((C_word *)C_alloca(0))
#endif

#define C_stack_pointer_test       ((C_word *)C_alloca(1))

#define C_c_pointer(x)             ((void *)(x))
#define C_c_pointer_nn(x)          ((void *)C_block_item(x, 0))

#define C_pointerp(x)             C_mk_bool(C_block_header(x) == C_POINTER_TAG)
#define C_taggedpointerp(x)       C_mk_bool(C_block_header(x) == C_TAGGED_POINTER_TAG)

#define C_a_i_address_to_pointer(ptr, c, addr)  C_mpointer(ptr, (void *)C_num_to_unsigned_int(addr))
#define C_a_i_pointer_to_address(ptr, c, pptr)  C_unsigned_int_to_num(ptr, (unsigned int)C_c_pointer_nn(pptr))

#define C_pointer_address(x)            ((C_byte *)C_block_item((x), 0))

#define C_pointer_to_block(p, x)        (C_set_block_item(p, 0, (C_word)C_data_pointer(x)), C_SCHEME_UNDEFINED)

#define C_null_pointerp(x)              C_mk_bool((void *)C_block_item(x, 0) == NULL)
#define C_update_pointer(p, ptr)        (C_set_block_item(ptr, 0, C_num_to_unsigned_int(p)), C_SCHEME_UNDEFINED)
#define C_copy_pointer(from, to)        (C_set_block_item(to, 0, C_block_item(from, 0)), C_SCHEME_UNDEFINED)
#define C_pointer_to_object(ptr)        C_block_item(ptr, 0)

#define C_a_u_i_pointer_inc(ptr, n, p, i) C_mpointer(ptr, (C_char *)(p) + C_unfix(i))
#define C_pointer_eqp(x, y)             C_mk_bool(C_c_pointer_nn(x) == C_c_pointer_nn(y))

#define C_u_i_pointer_u8_ref(ptr)         C_fix(*((unsigned char *)C_block_item(ptr, 0)))
#define C_u_i_pointer_s8_ref(ptr)         C_fix(*((signed char *)C_block_item(ptr, 0)))
#define C_u_i_pointer_u16_ref(ptr)        C_fix(*((unsigned short *)C_block_item(ptr, 0)))
#define C_u_i_pointer_s16_ref(ptr)        C_fix(*((short *)C_block_item(ptr, 0)))
#define C_a_u_i_pointer_u32_ref(ap, n, ptr)  \
    C_unsigned_int_to_num(ap, *((C_u32 *)C_block_item(ptr, 0)))
#define C_a_u_i_pointer_s32_ref(ap, n, ptr)  \
    C_int_to_num(ap, *((C_s32 *)C_block_item(ptr, 0)))
#define C_u_i_pointer_u8_set(ptr, x)  \
    (*((unsigned char *)C_block_item(ptr, 0)) = C_unfix(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_s8_set(ptr, x)  \
    (*((signed char *)C_block_item(ptr, 0)) = C_unfix(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_u16_set(ptr, x)  \
    (*((unsigned short *)C_block_item(ptr, 0)) = C_unfix(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_s16_set(ptr, x)  \
    (*((short *)C_block_item(ptr, 0)) = C_unfix(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_u32_set(ptr, x)  \
    (*((C_u32 *)C_block_item(ptr, 0)) = C_num_to_unsigned_int(x), C_SCHEME_UNDEFINED)
#define C_u_i_pointer_s32_set(ptr, x)  \
    (*((C_s32 *)C_block_item(ptr, 0)) = C_num_to_int(x), C_SCHEME_UNDEFINED)

C_inline C_word C_i_safe_pointerp(C_word x)
{
    if(C_immediatep(x)) return C_SCHEME_FALSE;

    switch(C_block_header(x)) {
    case C_POINTER_TAG:
    case C_TAGGED_POINTER_TAG:
        return C_SCHEME_TRUE;
    }

    return C_SCHEME_FALSE;
}

C_inline void *C_data_pointer_or_null(C_word x)
{
    return C_truep(x) ? C_data_pointer(x) : NULL;
}

C_inline void *C_c_pointer_vector_or_null(C_word x)
{
    return C_truep(x) ? C_data_pointer(C_block_item(x, 2)) : NULL;
}

C_inline void *C_c_pointer_or_null(C_word x)
{
    return C_truep(x) ? (void *)C_block_item(x, 0) : NULL;
}

#endif /* RUNTIME_POINTERS_H */
