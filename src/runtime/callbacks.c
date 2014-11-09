#include "callbacks.h"
#include <chicken.h>
#include <assert.h>

C_TLS int callback_continuation_level;

C_ccall void callback_return_continuation(C_word c, C_word self, C_word r) C_noret;

static C_TLS int callback_returned_flag;

/* Support code for callbacks: */

int C_fcall C_save_callback_continuation(C_word **ptr, C_word k)
{
    C_word p = C_a_pair(ptr, k, C_block_item(callback_continuation_stack_symbol, 0));

    C_mutate_slot(&C_block_item(callback_continuation_stack_symbol, 0), p);
    return ++callback_continuation_level;
}

C_word C_fcall C_restore_callback_continuation(void)
{
    /* obsolete, but retained for keeping old code working */
    C_word p = C_block_item(callback_continuation_stack_symbol, 0),
           k;

    assert(!C_immediatep(p) && C_block_header(p) == C_PAIR_TAG);
    k = C_u_i_car(p);

    C_mutate(&C_block_item(callback_continuation_stack_symbol, 0), C_u_i_cdr(p));
    --callback_continuation_level;
    return k;
}

C_word C_fcall C_restore_callback_continuation2(int level)
{
    C_word p = C_block_item(callback_continuation_stack_symbol, 0),
           k;

    if(level != callback_continuation_level || C_immediatep(p) || C_block_header(p) != C_PAIR_TAG)
        panic(C_text("unbalanced callback continuation stack"));

    k = C_u_i_car(p);

    C_mutate(&C_block_item(callback_continuation_stack_symbol, 0), C_u_i_cdr(p));
    --callback_continuation_level;
    return k;
}

C_word C_fcall C_callback(C_word closure, int argc)
{
#ifdef HAVE_SIGSETJMP
    sigjmp_buf prev;
#else
    jmp_buf prev;
#endif
    C_word
        *a = C_alloc(C_SIZEOF_CLOSURE(2)),
        k = C_closure(&a, 2, (C_word)callback_return_continuation, C_SCHEME_FALSE);
    int old = chicken_is_running;

    if(old && C_block_item(callback_continuation_stack_symbol, 0) == C_SCHEME_END_OF_LIST)
        panic(C_text("callback invoked in non-safe context"));

    C_memcpy(&prev, &C_restart, sizeof(C_restart));
    callback_returned_flag = 0;
    chicken_is_running = 1;

#ifdef HAVE_SIGSETJMP
    if(!C_sigsetjmp(C_restart, 0)) C_do_apply(argc, closure, k);
#else
    if(!C_setjmp(C_restart)) C_do_apply(argc, closure, k);
#endif

    serious_signal_occurred = 0;

    if(!callback_returned_flag) (C_restart_trampoline)(C_restart_address);
    else {
        C_memcpy(&C_restart, &prev, sizeof(C_restart));
        callback_returned_flag = 0;
    }

    chicken_is_running = old;
    return C_restore;
}

void C_fcall C_callback_adjust_stack(C_word *a, int size)
{
    if(!chicken_is_running && !C_in_stackp((C_word)a)) {
        if(debug_mode)
            C_dbg(C_text("debug"),
                  C_text("callback invoked in lower stack region - adjusting limits:\n"
                         "[debug]   current:  \t%p\n"
                         "[debug]   previous: \t%p (bottom) - %p (limit)\n"),
                  a, stack_bottom, C_stack_limit);

#if C_STACK_GROWS_DOWNWARD
        C_stack_limit = (C_word *)((C_byte *)a - stack_size);
        stack_bottom = a + size;
#else
        C_stack_limit = (C_word *)((C_byte *)a + stack_size);
        stack_bottom = a;
#endif

        if(debug_mode)
            C_dbg(C_text("debug"), C_text("new:      \t%p (bottom) - %p (limit)\n"),
                  stack_bottom, C_stack_limit);
    }
}

C_word C_fcall C_callback_wrapper(void *proc, int argc)
{
    C_word
        *a = C_alloc(C_SIZEOF_CLOSURE(1)),
        closure = C_closure(&a, 1, (C_word)proc),
        result;

    result = C_callback(closure, argc);
    assert(C_temporary_stack == C_temporary_stack_bottom);
    return result;
}

void C_ccall callback_return_continuation(C_word c, C_word self, C_word r)
{
    if(C_block_item(self, 1) == C_SCHEME_TRUE)
        panic(C_text("callback returned twice"));

    assert(callback_returned_flag == 0);
    callback_returned_flag = 1;
    C_set_block_item(self, 1, C_SCHEME_TRUE);
    C_save(r);
    C_reclaim(NULL, NULL);
}
