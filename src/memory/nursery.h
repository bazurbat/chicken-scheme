#ifndef RUNTIME_NURSERY_H
#define RUNTIME_NURSERY_H

#include <runtime/definitions.h>

#ifdef C_STRESS_TEST
# define C_STRESS_FAILURE          3
# define C_stress                  (rand() % C_STRESS_FAILURE)
#else
# define C_stress                  1
#endif

#define C_stack_overflow_check    C_stack_check1(C_stack_overflow())

#if C_STACK_GROWS_DOWNWARD
# define C_demand(n)              (C_stress && ((C_word)(C_stack_pointer - C_stack_limit) > (n)))
# define C_stack_probe(p)         (C_stress && ((C_word *)(p) >= C_stack_limit))

# define C_stack_check1(err)      if(!C_disable_overflow_check) {       \
        do { C_byte *_sp = (C_byte*)(C_stack_pointer); \
             if(_sp < (C_byte *)C_stack_limit && \
                ((C_byte *)C_stack_limit - _sp) > C_STACK_RESERVE) \
                 err; }                          \
        while(0); }

#else
# define C_demand(n)              (C_stress && ((C_word)(C_stack_limit - C_stack_pointer) > (n)))
# define C_stack_probe(p)         (C_stress && ((C_word *)(p) < C_stack_limit))

# define C_stack_check1(err)      if(!C_disable_overflow_check) {       \
        do { C_byte *_sp = (C_byte*)(C_stack_pointer); \
             if(_sp > (C_byte *)C_stack_limit && \
                (_sp - (C_byte *)C_stack_limit) > C_STACK_RESERVE) \
                 err; }                          \
        while(0); }

#endif

extern C_TLS C_word *stack_bottom;
extern C_TLS C_word *saved_stack_limit;

C_varextern C_TLS C_word
    *C_temporary_stack,
    *C_temporary_stack_bottom,
    *C_temporary_stack_limit,
    *C_stack_limit;

C_fctexport void C_check_nursery_minimum(C_word size);

C_fctexport void C_do_resize_stack(C_word stack);
C_fctexport int C_in_stackp(C_word x) C_regparm;

#endif /* RUNTIME_NURSERY_H */
