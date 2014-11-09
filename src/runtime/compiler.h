#ifndef RUNTIME_COMPILER_H
#define RUNTIME_COMPILER_H

#include "definitions.h"
#include "types.h"
#include "errors.h"

#ifdef C_BIG_ENDIAN
# ifdef C_SIXTY_FOUR
#  define C_lihdr(x, y, z)              ((C_LAMBDA_INFO_TYPE >> 56) & 0xff), \
    0, 0, 0, 0, (x), (y), (z)
# else
#  define C_lihdr(x, y, z)              ((C_LAMBDA_INFO_TYPE >> 24) & 0xff), \
    (x), (y), (z)
# endif
#else
# ifdef C_SIXTY_FOUR
#  define C_lihdr(x, y, z)              (z), (y), (x), 0, 0, 0, 0, \
    ((C_LAMBDA_INFO_TYPE >> 56) & 0xff)
# else
#  define C_lihdr(x, y, z)              (z), (y), (x), \
    ((C_LAMBDA_INFO_TYPE >> 24) & 0xff)
# endif
#endif

#if !defined(C_EMBEDDED) && !defined(C_SHARED)
#  define C_main_entry_point                            \
    int main(int argc, char *argv[])                        \
    {                                                       \
        return CHICKEN_main(argc, argv, (void*)C_toplevel); \
    }
#else
#  define C_main_entry_point
#endif

#define C_emit_eval_trace_info(x, y, z) C_emit_trace_info2("<eval>", x, y, z)
#define C_emit_syntax_trace_info(x, y, z) C_emit_trace_info2("<syntax>", x, y, z)

C_fctexport C_word C_fcall C_retrieve2(C_word val, char *name) C_regparm;
C_fctexport C_word C_fcall C_copy_block(C_word from, C_word to) C_regparm;
C_fctexport C_word C_fcall C_evict_block(C_word from, C_word ptr) C_regparm;
C_fctexport void C_ccall C_copy_closure(C_word c, C_word closure, C_word k, C_word proc) C_noret;
C_fctexport C_word C_fcall C_i_getprop(C_word sym, C_word prop, C_word def) C_regparm;
C_fctexport C_word C_fcall C_putprop(C_word **a, C_word sym, C_word prop, C_word val) C_regparm;
C_fctexport C_word C_fcall C_i_get_keyword(C_word key, C_word args, C_word def) C_regparm;

C_inline C_word C_fast_retrieve(C_word sym)
{
    C_word val = C_block_item(sym, 0);

    if(val == C_SCHEME_UNBOUND)
        C_unbound_variable(sym);

    return val;
}

C_inline void * C_fast_retrieve_proc(C_word closure)
{
    if(C_immediatep(closure) || C_header_bits(closure) != C_CLOSURE_TYPE)
        return (void *)C_invalid_procedure;
    else
        return (void *)C_block_item(closure, 0);
}

C_inline void * C_fast_retrieve_symbol_proc(C_word sym)
{
    return C_fast_retrieve_proc(C_fast_retrieve(sym));
}

#endif /* RUNTIME_COMPILER_H */
