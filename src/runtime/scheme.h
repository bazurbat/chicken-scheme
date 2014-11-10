#ifndef RUNTIME_SCHEME_H
#define RUNTIME_SCHEME_H

#include "definitions.h"
#include "types.h"
#include "cxr.h"

C_fctexport C_word C_fcall C_static_lambda_info(C_word **ptr, int len, C_char *str) C_regparm;
C_fctexport C_word C_closure(C_word **ptr, int cells, C_word proc, ...);
C_fctexport C_word C_fcall C_number(C_word **ptr, double n) C_regparm;
C_fctexport C_word C_fcall C_mpointer(C_word **ptr, void *mp) C_regparm;
C_fctexport C_word C_fcall C_mpointer_or_false(C_word **ptr, void *mp) C_regparm;
C_fctexport C_word C_fcall C_taggedmpointer(C_word **ptr, C_word tag, void *mp) C_regparm;
C_fctexport C_word C_fcall C_taggedmpointer_or_false(C_word **ptr, C_word tag, void *mp) C_regparm;
C_fctexport C_word C_structure(C_word **ptr, int n, ...);

C_fctexport C_word C_a_i_port(C_word **a, int c);
C_fctexport C_word C_a_i_record(C_word **a, int c, ...);
C_word C_fcall C_a_i_smart_mpointer(C_word **ptr, int c, C_word x);


C_fctexport C_word C_fcall C_i_block_ref(C_word x, C_word i) C_regparm;
C_fctexport C_word C_fcall C_i_evenp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_exactp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_inexactp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_negativep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_oddp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_positivep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_zerop(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_evenp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_negativep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_oddp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_positivep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_zerop(C_word x) C_regparm;

C_fctexport C_word C_fcall C_i_bit_setp(C_word n, C_word i) C_regparm;

C_fctexport C_word C_fcall C_restore_rest(C_word *ptr, int num) C_regparm;

#endif /* RUNTIME_SCHEME_H */
