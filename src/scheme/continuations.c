#include "continuations.h"
#include <foreign/constructors.h>
#include <memory/gc.h>
#include <runtime/compiler.h>
#include <runtime/debug.h>
#include <runtime/errors.h>
#include <runtime/macros.h>
#include <runtime/types.h>
#include <scheme/apply.h>
#include <scheme/pairs.h>

#define RELAX_MULTIVAL_CHECK

void C_ccall call_cc_wrapper(C_word c, C_word closure, C_word k, C_word result)
{
    C_word cont = C_block_item(closure,1);

    if(c != 3) C_bad_argc(c, 3);

    C_kontinue(cont, result);
}

void C_ccall call_cc_values_wrapper(C_word c, C_word closure, C_word k, ...)
{
    va_list v;
    C_word cont = C_block_item(closure,1),
           x1;
    int n = c;

    va_start(v, k);

    if(c > 2) {
        x1 = va_arg(v, C_word);
        --n;

        while(--c > 2) C_save(va_arg(v, C_word));
    }
    else x1 = C_SCHEME_UNBOUND;

    va_end(v);
    C_do_apply(n - 2, cont, x1);
}

void C_ccall C_call_cc(C_word c, C_word closure, C_word k, C_word cont)
{
    C_word *a = C_alloc(C_SIZEOF_CLOSURE(2)),
           wrapper;
    void *pr = (void *)C_block_item(cont,0);

    if(C_immediatep(cont) || C_header_bits(cont) != C_CLOSURE_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "call-with-current-continuation", cont);

    /* Check for values-continuation: */
    if(C_block_item(k,0) == (C_word)values_continuation)
        wrapper = C_closure(&a, 2, (C_word)call_cc_values_wrapper, k);
    else wrapper = C_closure(&a, 2, (C_word)call_cc_wrapper, k);

    ((C_proc3)pr)(3, cont, k, wrapper);
}

/* I */
void C_ccall C_continuation_graft(C_word c, C_word self, C_word k, C_word kk, C_word proc)
{
    ((C_proc2)C_fast_retrieve_proc(proc))(2, proc, C_block_item(kk, 1));
}

void C_ccall C_values(C_word c, C_word closure, C_word k, ...)
{
    va_list v;
    C_word n = c;

    if(c < 2) C_bad_min_argc(c, 2);

    va_start(v, k);

    /* Check continuation whether it receives multiple values: */
    if(C_block_item(k, 0) == (C_word)values_continuation) {
        while(c-- > 2)
            C_save(va_arg(v, C_word));

        va_end(v);
        C_do_apply(n - 2, k, C_SCHEME_UNBOUND); /* unbound value marks direct invocation */
    }

    if(c != 3) {
#ifdef RELAX_MULTIVAL_CHECK
        if(c == 2) n = C_SCHEME_UNDEFINED;
        else n = va_arg(v, C_word);
#else
        barf(C_CONTINUATION_CANT_RECEIVE_VALUES_ERROR, "values", k);
#endif
    }
    else n = va_arg(v, C_word);

    va_end(v);
    C_kontinue(k, n);
}

void C_ccall C_apply_values(C_word c, C_word closure, C_word k, C_word lst)
{
    C_word n;

    if(c != 3) C_bad_argc(c, 3);

    /* Check continuation wether it receives multiple values: */
    if(C_block_item(k, 0) == (C_word)values_continuation) {
        for(n = 0; !C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG; ++n) {
            C_save(C_u_i_car(lst));
            lst = C_u_i_cdr(lst);
        }

        C_do_apply(n, k, C_SCHEME_UNBOUND); /* unbound value marks direct invocation */
    }

    if(C_immediatep(lst) || (C_block_header(lst) == C_PAIR_TAG && C_u_i_cdr(lst) == C_SCHEME_END_OF_LIST)) {
#ifdef RELAX_MULTIVAL_CHECK
        if(C_immediatep(lst)) n = C_SCHEME_UNDEFINED;
        else n = C_u_i_car(lst);
#else
        barf(C_CONTINUATION_CANT_RECEIVE_VALUES_ERROR, "values", k);
#endif
    }
    else n = C_u_i_car(lst);

    C_kontinue(k, n);
}

void C_ccall C_call_with_values(C_word c, C_word closure, C_word k, C_word thunk, C_word kont)
{
    C_word *a = C_alloc(C_SIZEOF_CLOSURE(3)),
           kk;

    if(c != 4) C_bad_argc(c, 4);

    if(C_immediatep(thunk) || C_header_bits(thunk) != C_CLOSURE_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "call-with-values", thunk);

    if(C_immediatep(kont) || C_header_bits(kont) != C_CLOSURE_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "call-with-values", kont);

    kk = C_closure(&a, 3, (C_word)values_continuation, kont, k);
    C_do_apply(0, thunk, kk);
}

void C_ccall C_u_call_with_values(C_word c, C_word closure, C_word k, C_word thunk, C_word kont)
{
    C_word *a = C_alloc(C_SIZEOF_CLOSURE(3)),
           kk;

    kk = C_closure(&a, 3, (C_word)values_continuation, kont, k);
    C_do_apply(0, thunk, kk);
}

void C_ccall values_continuation(C_word c, C_word closure, C_word arg0, ...)
{
    C_word kont = C_block_item(closure, 1),
           k = C_block_item(closure, 2),
           n = c,
           *ptr;
    va_list v;

    if(arg0 == C_SCHEME_UNBOUND) { /* This continuation was called by 'values'... */
        va_start(v, arg0);

        for(; c-- > 2; C_save(va_arg(v, C_word))) ;

        va_end(v);
    }
    else {                      /* This continuation was captured and called explicity... */
        ++n;
        c -= 1;

        /* move temporary-stack contents upwards one slot: */
        for(ptr = C_temporary_stack - c; --c; ++ptr) *ptr = ptr[ 1 ];

        C_save(arg0);
    }

    C_do_apply(n - 2, kont, k);
}

/* The final continuation: */

void C_ccall termination_continuation(C_word c, C_word self, C_word result)
{
    if(debug_mode) {
        C_dbg(C_text("debug"), C_text("application terminated normally\n"));
    }

    exit(0);
}
