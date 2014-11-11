#include "interrupts.h"
#include <math/fixnum.h>
#include <memory/gc.h>
#include <runtime/errors.h>
#include <runtime/types.h>
#include <scheme/apply.h>
#include <system/timing.h>

C_TLS double last_interrupt_latency;

C_TLS C_word interrupt_hook_symbol;

C_TLS int
    pending_interrupts[ MAX_PENDING_INTERRUPTS ],
    pending_interrupts_count,
    handling_interrupts;

static C_TLS double interrupt_time;

C_TLS C_long
    C_timer_interrupt_counter,
    C_initial_timer_interrupt_period;

C_regparm void C_fcall C_paranoid_check_for_interrupt(void)
{
    if(--C_timer_interrupt_counter <= 0)
        C_raise_interrupt(C_TIMER_INTERRUPT_NUMBER);
}


C_regparm void C_fcall C_raise_interrupt(int reason)
{
    if(C_interrupts_enabled) {
        if(pending_interrupts_count == 0 && !handling_interrupts) {
            /* Force the next stack check to fail by faking a "full" stack.
               That causes save_and_reclaim() to be called, which will
               invoke handle_interrupt() (which restores the stack limit). */
            saved_stack_limit = C_stack_limit;

#if C_STACK_GROWS_DOWNWARD
            C_stack_limit = C_stack_pointer + 1000;
#else
            C_stack_limit = C_stack_pointer - 1000;
#endif
            interrupt_time = C_cpu_milliseconds();
            pending_interrupts[ pending_interrupts_count++ ] = reason;
        } else if(pending_interrupts_count < MAX_PENDING_INTERRUPTS) {
            int i;
            /*
             * Drop signals if too many, but don't queue up multiple entries
             * for the same signal.
             */
            for (i = 0; i < pending_interrupts_count; ++i) {
                if (pending_interrupts[i] == reason)
                    return;
            }
            pending_interrupts[ pending_interrupts_count++ ] = reason;
        }
    }
}


C_regparm C_word C_fcall C_enable_interrupts(void)
{
    C_timer_interrupt_counter = C_initial_timer_interrupt_period;
    /* assert(C_timer_interrupt_counter > 0); */
    C_interrupts_enabled = 1;
    return C_SCHEME_UNDEFINED;
}


C_regparm C_word C_fcall C_disable_interrupts(void)
{
    C_interrupts_enabled = 0;
    return C_SCHEME_UNDEFINED;
}


void handle_interrupt(void *trampoline, void *proc)
{
    C_word *p, x, n;
    double c;

    /* Build vector with context information: */
    n = C_temporary_stack_bottom - C_temporary_stack;
    p = C_alloc(C_SIZEOF_VECTOR(2) + C_SIZEOF_VECTOR(n+1));
    x = (C_word)p;
    *(p++) = C_VECTOR_TYPE | C_BYTEBLOCK_BIT | (2 * sizeof(C_word));
    *(p++) = (C_word)trampoline;
    *(p++) = (C_word)proc;
    C_save(x);
    x = (C_word)p;
    *(p++) = C_VECTOR_TYPE | (n + 1);
    *(p++) = C_restore;
    memcpy(p, C_temporary_stack, n * sizeof(C_word));

    /* Restore state to the one at the time of the interrupt: */
    C_temporary_stack = C_temporary_stack_bottom;
    C_stack_limit = saved_stack_limit;

    /* Invoke high-level interrupt handler: */
    C_save(C_fix(pending_interrupts[ --pending_interrupts_count ]));
    C_save(x);
    x = C_block_item(interrupt_hook_symbol, 0);

    if(C_immediatep(x))
        panic(C_text("`##sys#interrupt-hook' is not defined"));

    c = C_cpu_milliseconds() - interrupt_time;
    last_interrupt_latency = c;
    C_timer_interrupt_counter = C_initial_timer_interrupt_period;
    /* <- no continuation is passed: "##sys#interrupt-hook" may not return! */
    C_do_apply(2, x, C_SCHEME_UNDEFINED);
}


C_regparm C_word C_fcall C_i_pending_interrupt(C_word dummy)
{
    if(pending_interrupts_count > 0) {
        handling_interrupts = 1; /* Lock out further forced GCs until we're done */
        return C_fix(pending_interrupts[ --pending_interrupts_count ]);
    } else {
        handling_interrupts = 0; /* OK, can go on */
        return C_SCHEME_FALSE;
    }
}
