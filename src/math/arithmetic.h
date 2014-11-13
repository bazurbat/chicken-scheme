#ifndef MATH_ARITHMETIC_H
#define MATH_ARITHMETIC_H

#include "common.h"

#define C_a_i_times( ptr, n, x, y)      C_2_times( ptr, x, y)
#define C_a_i_plus(  ptr, n, x, y)      C_2_plus(  ptr, x, y)
#define C_a_i_minus( ptr, n, x, y)      C_2_minus( ptr, x, y)
#define C_a_i_divide(ptr, n, x, y)      C_2_divide(ptr, x, y)

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

C_fctexport void C_ccall C_quotient(C_word c, C_word closure, C_word k, C_word n1, C_word n2) C_noret;

C_fctexport C_word C_fcall C_a_i_exact_to_inexact(C_word **a, int c, C_word n) C_regparm;

#endif /* MATH_ARITHMETIC_H */
