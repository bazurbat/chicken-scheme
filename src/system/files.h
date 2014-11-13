#ifndef SYSTEM_SYSTEM_H
#define SYSTEM_SYSTEM_H

#include <common.h>

C_fctexport C_word C_fcall C_i_file_exists_p(C_word name, C_word file, C_word dir) C_regparm;
C_fctexport C_word C_fcall C_execute_shell_command(C_word string) C_regparm;
C_fctexport int C_fcall C_check_fd_ready(int fd) C_regparm;
C_fctexport void C_ccall C_open_file_port(C_word c, C_word closure, C_word k, C_word port, C_word channel, C_word mode) C_noret;

#endif /* SYSTEM_SYSTEM_H */
