#include "nursery.h"
#include <chicken.h>

C_TLS C_word *stack_bottom;

C_TLS C_word *saved_stack_limit;

C_TLS C_word
*C_temporary_stack,
*C_temporary_stack_bottom,
*C_temporary_stack_limit,
*C_stack_limit;

C_TLS int C_disable_overflow_check;

/* Modify stack-size at runtime: */

void C_do_resize_stack(C_word stack)
{
    C_uword old = stack_size,
            diff = stack - old;

    if(diff != 0 && !stack_size_changed) {
        if(debug_mode)
            C_dbg(C_text("debug"), C_text("stack resized to %d bytes\n"), (int)stack);

        stack_size = stack;

#if C_STACK_GROWS_DOWNWARD
        C_stack_limit = (C_word *)((C_byte *)C_stack_limit - diff);
#else
        C_stack_limit = (C_word *)((C_byte *)C_stack_limit + diff);
#endif
    }
}


/* Check whether nursery is sufficiently big: */

void C_check_nursery_minimum(C_word words)
{
    if(words >= C_bytestowords(stack_size))
        panic(C_text("nursery is too small - try higher setting using the `-:s' option"));
}


C_regparm int C_in_stackp(C_word x)
{
    C_word *ptr = (C_word *)(C_uword)x;

#if C_STACK_GROWS_DOWNWARD
    return ptr >= C_stack_pointer_test && ptr <= stack_bottom;
#else
    return ptr < C_stack_pointer_test && ptr >= stack_bottom;
#endif
}


