#ifndef RUNTIME_DEBUG_H
#define RUNTIME_DEBUG_H

#include <common.h>

extern int debug_mode;

C_fctexport C_word C_dbg_hook(C_word x);

#endif /* RUNTIME_DEBUG_H */
