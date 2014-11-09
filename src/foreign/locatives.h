#ifndef FOREIGN_LOCATIVES_H
#define FOREIGN_LOCATIVES_H

#include <runtime/definitions.h>

/* Locative subtypes */
#define C_SLOT_LOCATIVE           0
#define C_CHAR_LOCATIVE           1
#define C_U8_LOCATIVE             2
#define C_S8_LOCATIVE             3
#define C_U16_LOCATIVE            4
#define C_S16_LOCATIVE            5
#define C_U32_LOCATIVE            6
#define C_S32_LOCATIVE            7
#define C_F32_LOCATIVE            8
#define C_F64_LOCATIVE            9

extern C_TLS C_word *locative_table;
extern C_TLS int locative_table_size;
extern C_TLS int locative_table_count;

C_fctexport C_word C_fcall C_a_i_make_locative(C_word **a, int c, C_word type, C_word object, C_word index, C_word weak) C_regparm;
C_fctexport void C_ccall C_locative_ref(C_word c, C_word closure, C_word k, C_word loc) C_noret;
C_fctexport C_word C_fcall C_i_locative_set(C_word loc, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_locative_to_object(C_word loc) C_regparm;

#endif /* FOREIGN_LOCATIVES_H */
