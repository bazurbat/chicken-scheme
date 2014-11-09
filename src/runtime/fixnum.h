#ifndef RUNTIME_FIXNUM_H
#define RUNTIME_FIXNUM_H

#include <chicken.h>

C_fctexport C_word C_fcall C_i_o_fixnum_plus(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_difference(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_times(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_quotient(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_and(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_ior(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_o_fixnum_xor(C_word x, C_word y) C_regparm;

C_fctexport void C_ccall C_fixnum_to_string(C_word c, C_word closure, C_word k, C_word num) C_noret;

#endif
