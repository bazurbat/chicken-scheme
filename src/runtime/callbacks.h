#ifndef RUNTIME_CALLBACKS_H
#define RUNTIME_CALLBACKS_H

#include "definitions.h"

extern C_TLS int callback_continuation_level;

C_ccall void callback_return_continuation(C_word c, C_word self, C_word r) C_noret;

#endif /* RUNTIME_CALLBACKS_H */
