#ifndef RUNTIME_SYMBOL_TABLE_H
#define RUNTIME_SYMBOL_TABLE_H

#include <common.h>

typedef struct C_symbol_table_struct
{
    char *name;
    unsigned int size;
    unsigned int rand;
    C_word *table;
    struct C_symbol_table_struct *next;
} C_SYMBOL_TABLE;

extern C_TLS C_SYMBOL_TABLE
    *symbol_table,
    *symbol_table_list;

C_word C_fcall lookup(C_word key, int len, C_char *str, C_SYMBOL_TABLE *stable) C_regparm;

void initialize_symbol_table(void);

C_fctexport void C_ccall C_make_symbol(C_word c, C_word closure, C_word k, C_word name) C_noret;
C_fctexport void C_ccall C_string_to_symbol(C_word c, C_word closure, C_word k, C_word string) C_noret;

C_fctexport C_SYMBOL_TABLE *C_new_symbol_table(char *name, unsigned int size) C_regparm;
C_fctexport void C_delete_symbol_table(C_SYMBOL_TABLE *st) C_regparm;
C_fctexport void C_set_symbol_table(C_SYMBOL_TABLE *st) C_regparm;
C_fctexport C_SYMBOL_TABLE *C_find_symbol_table(char *name) C_regparm;
C_fctexport void C_ccall C_get_symbol_table_info(C_word c, C_word closure, C_word k) C_noret;

C_fctexport C_word C_find_symbol(C_word str, C_SYMBOL_TABLE *stable) C_regparm;
C_fctexport C_word C_fcall C_lookup_symbol(C_word sym) C_regparm;

C_fctexport C_word C_fcall C_intern(C_word **ptr, int len, C_char *str) C_regparm;
C_fctexport C_word C_fcall C_intern_in(C_word **ptr, int len, C_char *str, C_SYMBOL_TABLE *stable) C_regparm;
C_fctexport C_word C_fcall C_h_intern(C_word *slot, int len, C_char *str) C_regparm;
C_fctexport C_word C_fcall C_h_intern_in(C_word *slot, int len, C_char *str, C_SYMBOL_TABLE *stable) C_regparm;
C_fctexport C_word C_fcall C_intern2(C_word **ptr, C_char *str) C_regparm;
C_fctexport C_word C_fcall C_intern3(C_word **ptr, C_char *str, C_word value) C_regparm;

C_fctexport void *C_fcall C_retrieve2_symbol_proc(C_word val, char *name) C_regparm;

#endif
