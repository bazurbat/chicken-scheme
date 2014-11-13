#ifndef SYSTEM_DLOAD_H
#define SYSTEM_DLOAD_H

#include <common.h>

#if !defined(PIC)
# define NO_DLOAD2
#endif

#ifndef NO_DLOAD2
# ifdef HAVE_DLFCN_H
#  include <dlfcn.h>
# endif

# ifdef HAVE_DL_H
#  include <dl.h>
# endif
#endif

extern C_TLS int dlopen_flags;

extern C_TLS C_char *current_module_name;
extern C_TLS void *current_module_handle;

C_fctexport void C_ccall C_set_dlopen_flags(C_word c, C_word closure, C_word k, C_word now, C_word global) C_noret;
C_fctexport void C_ccall C_dload(C_word c, C_word closure, C_word k, C_word name, C_word entry) C_noret;

#endif /* SYSTEM_DLOAD_H */
