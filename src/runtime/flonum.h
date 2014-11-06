#ifndef RUNTIME_FLONUM_H
#define RUNTIME_FLONUM_H

#include <runtime/definitions.h>

C_fctexport C_word C_fcall C_a_i_abs(C_word **a, int c, C_word n) C_regparm;

C_fctexport C_word C_fcall C_a_i_bitwise_and(C_word **a, int c, C_word n1, C_word n2) C_regparm;
C_fctexport C_word C_fcall C_a_i_bitwise_ior(C_word **a, int c, C_word n1, C_word n2) C_regparm;
C_fctexport C_word C_fcall C_a_i_bitwise_xor(C_word **a, int c, C_word n1, C_word n2) C_regparm;
C_fctexport C_word C_fcall C_a_i_bitwise_not(C_word **a, int c, C_word n1) C_regparm;

C_fctexport C_word C_fcall C_a_i_arithmetic_shift(C_word **a, int c, C_word n1, C_word n2) C_regparm;

C_fctexport C_word C_fcall C_a_i_exp(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_log(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_sin(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_cos(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_tan(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_asin(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_acos(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_atan(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_a_i_atan2(C_word **a, int c, C_word n1, C_word n2) C_regparm;
C_fctexport C_word C_fcall C_a_i_sqrt(C_word **a, int c, C_word n) C_regparm;

C_fctexport C_word C_fcall C_a_i_flonum_round_proper(C_word **a, int c, C_word n) C_regparm;

#endif /* RUNTIME_FLONUM_H */
