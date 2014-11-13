#ifndef SCHEME_APPLY_H
#define SCHEME_APPLY_H

#include <common.h>

#ifdef C_HACKED_APPLY
# if defined(C_MACOSX) || defined(__MINGW32__)
extern void C_do_apply_hack(void *proc, C_word *args, int count) C_noret;
# else
extern void _C_do_apply_hack(void *proc, C_word *args, int count) C_noret;
#  define C_do_apply_hack _C_do_apply_hack
# endif
#endif

#if defined(C_NO_HACKED_APPLY) && defined(C_HACKED_APPLY)
# undef C_HACKED_APPLY
#endif

C_fctexport void C_ccall C_apply(C_word c, C_word closure, C_word k, C_word fn, ...) C_noret;
C_fctexport void C_ccall C_do_apply(C_word n, C_word closure, C_word k) C_noret;

#endif /* SCHEME_APPLY_H */
