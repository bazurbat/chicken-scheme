#ifndef RUNTIME_ERROR_H
#define RUNTIME_ERROR_H

#include <chicken.h>

extern C_TLS C_word
    error_hook_symbol,
    error_location;

void C_dbg(C_char *prefix, C_char *fstr, ...);

void barf(int code, char *loc, ...) C_noret;

void panic(C_char *msg) C_noret;

void usual_panic(C_char *msg) C_noret;

void horror(C_char *msg) C_noret;

#endif
