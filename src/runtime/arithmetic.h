#ifndef RUNTIME_ARITHMETIC_H
#define RUNTIME_ARITHMETIC_H

#include <runtime/definitions.h>

C_fctexport void C_ccall C_times(C_word c, C_word closure, C_word k, ...) C_noret;
C_fctexport C_word C_fcall C_2_times(C_word **ptr, C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_plus(C_word c, C_word closure, C_word k, ...) C_noret;
C_fctexport C_word C_fcall C_2_plus(C_word **ptr, C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_minus(C_word c, C_word closure, C_word k, C_word n1, ...) C_noret;
C_fctexport C_word C_fcall C_2_minus(C_word **ptr, C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_divide(C_word c, C_word closure, C_word k, C_word n1, ...) C_noret;
C_fctexport C_word C_fcall C_2_divide(C_word **ptr, C_word x, C_word y) C_regparm;

C_fctexport C_word C_fcall C_equalp(C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_nequalp(C_word c, C_word closure, C_word k, ...) C_noret;
C_fctexport C_word C_fcall C_i_nequalp(C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_greaterp(C_word c, C_word closure, C_word k, ...) C_noret;
C_fctexport C_word C_fcall C_i_greaterp(C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_lessp(C_word c, C_word closure, C_word k, ...) C_noret;
C_fctexport C_word C_fcall C_i_lessp(C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_greater_or_equal_p(C_word c, C_word closure, C_word k, ...) C_noret;
C_fctexport C_word C_fcall C_i_greater_or_equalp(C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_less_or_equal_p(C_word c, C_word closure, C_word k, ...) C_noret;
C_fctexport C_word C_fcall C_i_less_or_equalp(C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_expt(C_word c, C_word closure, C_word k, C_word n1, C_word n2) C_noret;

#endif /* RUNTIME_ARITHMETIC_H */
