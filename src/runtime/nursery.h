#ifndef RUNTIME_NURSERY_H
#define RUNTIME_NURSERY_H

#include "definitions.h"

extern C_TLS C_word *stack_bottom;
extern C_TLS C_word *saved_stack_limit;

C_fctexport void C_check_nursery_minimum(C_word size);

C_fctexport void C_do_resize_stack(C_word stack);
C_fctexport int C_in_stackp(C_word x) C_regparm;

#endif /* RUNTIME_NURSERY_H */
