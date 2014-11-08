#ifndef RUNTIME_PLATFORM_H
#define RUNTIME_PLATFORM_H

#include "definitions.h"

C_fctexport void C_ccall C_software_type(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_software_version(C_word c, C_word closure, C_word k) C_noret;

C_fctexport void C_ccall C_machine_type(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_machine_byte_order(C_word c, C_word closure, C_word k) C_noret;

C_fctexport void C_ccall C_build_platform(C_word c, C_word closure, C_word k) C_noret;

C_fctexport void C_ccall C_get_memory_info(C_word c, C_word closure, C_word k) C_noret;

#endif /* RUNTIME_PLATFORM_H */
