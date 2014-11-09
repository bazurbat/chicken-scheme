#ifndef RUNTIME_LOCATIVES_H
#define RUNTIME_LOCATIVES_H

#include "definitions.h"

C_fctexport C_word C_fcall C_a_i_make_locative(C_word **a, int c, C_word type, C_word object, C_word index, C_word weak) C_regparm;
C_fctexport void C_ccall C_locative_ref(C_word c, C_word closure, C_word k, C_word loc) C_noret;
C_fctexport C_word C_fcall C_i_locative_set(C_word loc, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_locative_to_object(C_word loc) C_regparm;

#endif /* RUNTIME_LOCATIVES_H */
