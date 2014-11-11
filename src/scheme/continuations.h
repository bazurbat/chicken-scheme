#ifndef SCHEME_CONTINUATIONS_H
#define SCHEME_CONTINUATIONS_H

#include <runtime/definitions.h>

C_ccall void call_cc_wrapper(C_word c, C_word closure, C_word k, C_word result) C_noret;
C_ccall void call_cc_values_wrapper(C_word c, C_word closure, C_word k, ...) C_noret;

C_fctexport void C_ccall C_call_cc(C_word c, C_word closure, C_word k, C_word cont) C_noret;
C_fctexport void C_ccall C_continuation_graft(C_word c, C_word closure, C_word k, C_word kk, C_word proc) C_noret;
C_fctexport void C_ccall C_values(C_word c, C_word closure, C_word k, ...) C_noret;
C_fctexport void C_ccall C_apply_values(C_word c, C_word closure, C_word k, C_word lst) C_noret;
C_fctexport void C_ccall C_call_with_values(C_word c, C_word closure, C_word k, C_word thunk, C_word kont) C_noret;
C_fctexport void C_ccall C_u_call_with_values(C_word c, C_word closure, C_word k, C_word thunk, C_word kont) C_noret;

C_ccall void values_continuation(C_word c, C_word closure, C_word dummy, ...) C_noret;
C_ccall void termination_continuation(C_word c, C_word self, C_word result) C_noret;

#endif /* SCHEME_CONTINUATIONS_H */
