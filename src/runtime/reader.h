#ifndef RUNTIME_READER_H
#define RUNTIME_READER_H

#include "definitions.h"

C_fctexport C_word C_fcall C_read_char(C_word port) C_regparm;
C_fctexport C_word C_fcall C_peek_char(C_word port) C_regparm;
C_fctexport C_word C_fcall C_char_ready_p(C_word port) C_regparm;

C_fctexport void C_ccall C_peek_signed_integer(C_word c, C_word closure, C_word k, C_word v, C_word index) C_noret;
C_fctexport void C_ccall C_peek_unsigned_integer(C_word c, C_word closure, C_word k, C_word v, C_word index) C_noret;
C_fctexport void C_ccall C_decode_seconds(C_word c, C_word closure, C_word k, C_word secs, C_word mode) C_noret;

C_fctexport C_word C_fcall C_decode_literal(C_word **ptr, C_char *str) C_regparm;

#ifdef C_SIXTY_FOUR
C_fctexport void C_ccall C_peek_signed_integer_32(C_word c, C_word closure, C_word k, C_word v, C_word index) C_noret;
C_fctexport void C_ccall C_peek_unsigned_integer_32(C_word c, C_word closure, C_word k, C_word v, C_word index) C_noret;
#else
# define C_peek_signed_integer_32    C_peek_signed_integer
# define C_peek_unsigned_integer_32  C_peek_unsigned_integer
#endif

#endif /* RUNTIME_READER_H */
