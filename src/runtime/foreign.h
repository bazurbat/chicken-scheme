#ifndef RUNTIME_FOREIGN_H
#define RUNTIME_FOREIGN_H

#include "definitions.h"

C_fctexport C_word C_fcall C_a_i_make_locative(C_word **a, int c, C_word type, C_word object, C_word index, C_word weak) C_regparm;
C_fctexport void C_ccall C_locative_ref(C_word c, C_word closure, C_word k, C_word loc) C_noret;
C_fctexport C_word C_fcall C_i_locative_set(C_word loc, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_locative_to_object(C_word loc) C_regparm;

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

C_fctexport void C_ccall C_make_structure(C_word c, C_word closure, C_word k, C_word type, ...) C_noret;
C_fctexport void C_ccall C_make_pointer(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_make_tagged_pointer(C_word c, C_word closure, C_word k, C_word tag) C_noret;

#endif /* RUNTIME_FOREIGN_H */
