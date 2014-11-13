#ifndef FOREIGN_CONSRUCTORS_H
#define FOREIGN_CONSRUCTORS_H

#include <common.h>

C_fctexport void C_ccall C_make_structure(C_word c, C_word closure, C_word k, C_word type, ...) C_noret;
C_fctexport void C_ccall C_make_pointer(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_make_tagged_pointer(C_word c, C_word closure, C_word k, C_word tag) C_noret;

C_fctexport C_word C_structure(C_word **ptr, int n, ...);
C_fctexport C_word C_closure(C_word **ptr, int cells, C_word proc, ...);

C_fctexport C_word C_a_i_port(C_word **a, int c);

C_fctexport C_word C_fcall C_static_lambda_info(C_word **ptr, int len, C_char *str) C_regparm;
C_fctexport C_word C_fcall C_number(C_word **ptr, double n) C_regparm;
C_fctexport C_word C_fcall C_mpointer(C_word **ptr, void *mp) C_regparm;
C_fctexport C_word C_fcall C_mpointer_or_false(C_word **ptr, void *mp) C_regparm;
C_fctexport C_word C_fcall C_taggedmpointer(C_word **ptr, C_word tag, void *mp) C_regparm;
C_fctexport C_word C_fcall C_taggedmpointer_or_false(C_word **ptr, C_word tag, void *mp) C_regparm;

C_word C_fcall C_a_i_smart_mpointer(C_word **ptr, int c, C_word x);

#endif /* FOREIGN_CONSRUCTORS_H */
