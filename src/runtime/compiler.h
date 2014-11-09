#ifndef RUNTIME_COMPILER_H
#define RUNTIME_COMPILER_H

#include "definitions.h"

C_fctexport C_word C_fcall C_retrieve2(C_word val, char *name) C_regparm;
C_fctexport C_word C_fcall C_copy_block(C_word from, C_word to) C_regparm;
C_fctexport C_word C_fcall C_evict_block(C_word from, C_word ptr) C_regparm;
C_fctexport void C_ccall C_copy_closure(C_word c, C_word closure, C_word k, C_word proc) C_noret;
C_fctexport C_word C_fcall C_i_getprop(C_word sym, C_word prop, C_word def) C_regparm;
C_fctexport C_word C_fcall C_putprop(C_word **a, C_word sym, C_word prop, C_word val) C_regparm;
C_fctexport C_word C_fcall C_i_get_keyword(C_word key, C_word args, C_word def) C_regparm;

#endif /* RUNTIME_COMPILER_H */
