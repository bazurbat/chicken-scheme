#ifndef SYSTEM_PLATFORM_H
#define SYSTEM_PLATFORM_H

#include <runtime/definitions.h>

extern C_TLS int fake_tty_flag;
extern C_TLS int C_enable_repl;

C_fctexport void C_ccall C_software_type(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_software_version(C_word c, C_word closure, C_word k) C_noret;

C_fctexport void C_ccall C_machine_type(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_machine_byte_order(C_word c, C_word closure, C_word k) C_noret;

C_fctexport void C_ccall C_build_platform(C_word c, C_word closure, C_word k) C_noret;

C_fctexport void C_ccall C_get_memory_info(C_word c, C_word closure, C_word k) C_noret;
C_fctexport C_word C_fcall C_fudge(C_word fudge_factor) C_regparm;

#endif /* SYSTEM_PLATFORM_H */