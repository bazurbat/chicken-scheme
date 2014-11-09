#ifndef RUNTIME_INEXACT_H
#define RUNTIME_INEXACT_H

#include "definitions.h"

C_fctexport void C_ccall C_quotient(C_word c, C_word closure, C_word k, C_word n1, C_word n2) C_noret;
C_fctexport C_word C_fcall C_a_i_exact_to_inexact(C_word **a, int c, C_word n) C_regparm;

#endif /* RUNTIME_INEXACT_H */
