#ifndef RUNTIME_SYSTEM_H
#define RUNTIME_SYSTEM_H

#include "definitions.h"

C_fctexport C_word C_fcall C_i_file_exists_p(C_word name, C_word file, C_word dir) C_regparm;
C_fctexport C_word C_fcall C_execute_shell_command(C_word string) C_regparm;

#endif /* RUNTIME_SYSTEM_H */
