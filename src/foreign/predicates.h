#ifndef FOREIGN_PREDICATES_H
#define FOREIGN_PREDICATES_H

#include <common.h>

C_fctexport C_word C_fcall C_i_foreign_char_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_fixnum_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_flonum_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_block_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_struct_wrapper_argumentp(C_word t, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_string_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_symbol_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_pointer_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_scheme_or_c_pointer_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_tagged_pointer_argumentp(C_word x, C_word t) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_integer_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_integer64_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_unsigned_integer_argumentp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_foreign_unsigned_integer64_argumentp(C_word x) C_regparm;

#endif /* FOREIGN_PREDICATES_H */
