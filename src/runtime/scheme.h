#ifndef RUNTIME_SCHEME_H
#define RUNTIME_SCHEME_H

#include "definitions.h"

C_fctexport C_word C_fcall C_set_print_precision(C_word n) C_regparm;
C_fctexport C_word C_fcall C_get_print_precision(void) C_regparm;

C_fctexport C_word C_a_i_list(C_word **a, int c, ...);
C_fctexport C_word C_a_i_port(C_word **a, int c);
C_fctexport C_word C_a_i_record(C_word **a, int c, ...);
C_fctexport C_word C_a_i_string(C_word **a, int c, ...);
C_fctexport C_word C_fcall C_a_i_bytevector(C_word **a, int c, C_word x) C_regparm;
C_word C_fcall C_a_i_smart_mpointer(C_word **ptr, int c, C_word x);

C_word C_fcall maybe_inexact_to_exact(C_word n) C_regparm;

C_word C_fcall convert_string_to_number(C_char *str, int radix, C_word *fix, double *flo) C_regparm;
C_fctexport void C_ccall C_number_to_string(C_word c, C_word closure, C_word k, C_word num, ...) C_noret;
C_fctexport C_word C_fcall C_a_i_string_to_number(C_word **a, int c, C_word str, C_word radix) C_regparm;

C_fctexport C_word C_fcall C_i_assoc(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_assq(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_assv(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_block_ref(C_word x, C_word i) C_regparm;
C_fctexport C_word C_fcall C_i_caar(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cadddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_caddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cadr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_car(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cdar(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cddddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cdddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cddr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_cdr(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_evenp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_exactp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_inexact_to_exact(C_word n) C_regparm;
C_fctexport C_word C_fcall C_i_inexactp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_length(C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_list_tail(C_word lst, C_word i) C_regparm;
C_fctexport C_word C_fcall C_i_listp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_member(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_memq(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_memv(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_i_negativep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_oddp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_positivep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_set_car(C_word p, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_set_cdr(C_word p, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_string_ci_equal_p(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_string_equal_p(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_string_length(C_word s) C_regparm;
C_fctexport C_word C_fcall C_i_string_ref(C_word s, C_word i) C_regparm;
C_fctexport C_word C_fcall C_i_string_set(C_word s, C_word i, C_word c) C_regparm;
C_fctexport C_word C_fcall C_i_vector_length(C_word v) C_regparm;
C_fctexport C_word C_fcall C_i_vector_ref(C_word v, C_word i) C_regparm;
C_fctexport C_word C_fcall C_i_vector_set(C_word v, C_word i, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_zerop(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_evenp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_length(C_word lst) C_regparm;
C_fctexport C_word C_fcall C_u_i_memq(C_word x, C_word lst) C_regparm;
C_fctexport C_word C_fcall C_u_i_negativep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_oddp(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_positivep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_zerop(C_word x) C_regparm;

#endif /* RUNTIME_SCHEME_H */
