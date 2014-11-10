#ifndef SCHEME_PAIRS_H
#define SCHEME_PAIRS_H

#include <runtime/definitions.h>

#define C_u_i_car(x)                    (C_block_item(x, 0))
#define C_u_i_cdr(x)                    (C_block_item(x, 1))
#define C_u_i_caar(x)                   C_u_i_car( C_u_i_car( x ) )
#define C_u_i_cadr(x)                   C_u_i_car( C_u_i_cdr( x ) )
#define C_u_i_cdar(x)                   C_u_i_cdr( C_u_i_car( x ) )
#define C_u_i_cddr(x)                   C_u_i_cdr( C_u_i_cdr( x ) )

C_fctexport C_word C_fcall C_i_caar(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cadr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_car(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cdar(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cdr(C_word x) C_regparm;

C_fctexport C_word C_fcall C_i_set_car(C_word p, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_set_cdr(C_word p, C_word x) C_regparm;

#endif /* SCHEME_PAIRS_H */
