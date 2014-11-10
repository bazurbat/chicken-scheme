#ifndef FOREIGN_DATA_H
#define FOREIGN_DATA_H

#include <runtime/definitions.h>

C_fctexport C_word C_fcall C_i_block_ref(C_word x, C_word i) C_regparm;

C_fctexport C_word C_fcall C_i_bit_setp(C_word n, C_word i) C_regparm;

#endif /* FOREIGN_DATA_H */
