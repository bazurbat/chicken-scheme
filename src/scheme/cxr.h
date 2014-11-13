#ifndef SCHEME_CXR_H
#define SCHEME_CXR_H

#include <common.h>
#include <runtime/errors.h>

#define C_u_i_caaar(x)                  C_u_i_car( C_u_i_caar( x ) )
#define C_u_i_caadr(x)                  C_u_i_car( C_u_i_cadr( x ) )
#define C_u_i_cadar(x)                  C_u_i_car( C_u_i_cdar( x ) )
#define C_u_i_caddr(x)                  C_u_i_car( C_u_i_cddr( x ) )
#define C_u_i_cdaar(x)                  C_u_i_cdr( C_u_i_caar( x ) )
#define C_u_i_cdadr(x)                  C_u_i_cdr( C_u_i_cadr( x ) )
#define C_u_i_cddar(x)                  C_u_i_cdr( C_u_i_cdar( x ) )
#define C_u_i_cdddr(x)                  C_u_i_cdr( C_u_i_cddr( x ) )
#define C_u_i_caaaar(x)                 C_u_i_car( C_u_i_caaar( x ) )
#define C_u_i_caaadr(x)                 C_u_i_car( C_u_i_caadr( x ) )
#define C_u_i_caadar(x)                 C_u_i_car( C_u_i_cadar( x ) )
#define C_u_i_caaddr(x)                 C_u_i_car( C_u_i_caddr( x ) )
#define C_u_i_cadaar(x)                 C_u_i_car( C_u_i_cdaar( x ) )
#define C_u_i_cadadr(x)                 C_u_i_car( C_u_i_cdadr( x ) )
#define C_u_i_caddar(x)                 C_u_i_car( C_u_i_cddar( x ) )
#define C_u_i_cadddr(x)                 C_u_i_car( C_u_i_cdddr( x ) )
#define C_u_i_cdaaar(x)                 C_u_i_cdr( C_u_i_caaar( x ) )
#define C_u_i_cdaadr(x)                 C_u_i_cdr( C_u_i_caadr( x ) )
#define C_u_i_cdadar(x)                 C_u_i_cdr( C_u_i_cadar( x ) )
#define C_u_i_cdaddr(x)                 C_u_i_cdr( C_u_i_caddr( x ) )
#define C_u_i_cddaar(x)                 C_u_i_cdr( C_u_i_cdaar( x ) )
#define C_u_i_cddadr(x)                 C_u_i_cdr( C_u_i_cdadr( x ) )
#define C_u_i_cdddar(x)                 C_u_i_cdr( C_u_i_cddar( x ) )
#define C_u_i_cddddr(x)                 C_u_i_cdr( C_u_i_cdddr( x ) )

C_fctexport C_word C_fcall C_i_cadddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_caddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cddddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cdddr(C_word x) C_regparm;

#endif /* SCHEME_CXR_H */
