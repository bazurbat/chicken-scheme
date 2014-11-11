#ifndef FOREIGN_CALLBACKS_H
#define FOREIGN_CALLBACKS_H

#include <runtime/definitions.h>

extern C_TLS int callback_continuation_level;

C_ccall void callback_return_continuation(C_word c, C_word self, C_word r) C_noret;

C_fctexport int C_fcall C_save_callback_continuation(C_word **ptr, C_word k);
C_fctexport C_word C_fcall C_restore_callback_continuation(void);
C_fctexport C_word C_fcall C_restore_callback_continuation2(int level);
C_fctexport C_word C_fcall C_callback(C_word closure, int argc);
C_fctexport C_word C_fcall C_callback_wrapper(void *proc, int argc);
C_fctexport void C_fcall C_callback_adjust_stack(C_word *base, int size);

#endif /* FOREIGN_CALLBACKS_H */
