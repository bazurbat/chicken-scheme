#ifndef FOREIGN_CONSRUCTORS_H
#define FOREIGN_CONSRUCTORS_H

#include <runtime/definitions.h>

C_fctexport void C_ccall C_make_structure(C_word c, C_word closure, C_word k, C_word type, ...) C_noret;
C_fctexport void C_ccall C_make_pointer(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_make_tagged_pointer(C_word c, C_word closure, C_word k, C_word tag) C_noret;

#endif /* FOREIGN_CONSRUCTORS_H */
