#ifndef RUNTIME_ERROR_H
#define RUNTIME_ERROR_H

#include "definitions.h"

extern C_TLS C_word
    error_hook_symbol,
    error_location;

void C_dbg(C_char *prefix, C_char *fstr, ...);

void barf(int code, char *loc, ...) C_noret;

void panic(C_char *msg) C_noret;

void usual_panic(C_char *msg) C_noret;

void horror(C_char *msg) C_noret;

C_fctexport void C_bad_memory(void) C_noret;
C_fctexport void C_bad_memory_2(void) C_noret;
C_fctexport void C_bad_argc(int c, int n) C_noret;
C_fctexport void C_bad_min_argc(int c, int n) C_noret;
C_fctexport void C_bad_argc_2(int c, int n, C_word closure) C_noret;
C_fctexport void C_bad_min_argc_2(int c, int n, C_word closure) C_noret;
C_fctexport void C_stack_overflow(void) C_noret;
C_fctexport void C_temp_stack_overflow(void) C_noret;
C_fctexport void C_unbound_error(C_word sym) C_noret;
C_fctexport void C_no_closure_error(C_word x) C_noret;
C_fctexport void C_div_by_zero_error(char *loc) C_noret;
C_fctexport void C_unbound_variable(C_word sym);
C_fctimport void C_ccall C_invalid_procedure(int c, C_word self, ...) C_noret;

#endif
