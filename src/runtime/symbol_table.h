#ifndef RUNTIME_SYMBOL_TABLE_H
#define RUNTIME_SYMBOL_TABLE_H

#include <runtime/definitions.h>
#include <runtime/types.h>

extern C_TLS C_SYMBOL_TABLE
    *symbol_table,
    *symbol_table_list;

C_word C_fcall hash_string(int len, C_char *str, C_word m, C_word r, int ci) C_regparm;

C_word C_fcall lookup(C_word key, int len, C_char *str, C_SYMBOL_TABLE *stable) C_regparm;

#endif
