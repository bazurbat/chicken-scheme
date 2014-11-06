#ifndef RUNTIME_CHECK_H
#define RUNTIME_CHECK_H

#include <runtime/definitions.h>

C_fctexport C_word C_fcall C_i_check_closure_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_exact_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_inexact_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_char_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_number_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_string_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_bytevector_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_vector_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_structure_2(C_word x, C_word st, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_pair_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_boolean_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_locative_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_symbol_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_list_2(C_word x, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_check_port_2(C_word x, C_word in, C_word op, C_word loc) C_regparm;
C_fctexport C_word C_fcall C_i_not_pair_p_2(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_null_list_p(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_string_null_p(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_null_pointerp(C_word x) C_regparm;

#endif /* RUNTIME_CHECK_H */
