#ifndef SCHEDULER_INTERRUPTS_H
#define SCHEDULER_INTERRUPTS_H

#include <common.h>

#define C_TIMER_INTERRUPT_NUMBER  255

#define MAX_PENDING_INTERRUPTS         100

#ifdef C_TIMER_INTERRUPTS
# ifdef PARANOIA
#  define C_check_for_interrupt         C_paranoid_check_for_interrupt()
# else
#  define C_check_for_interrupt         if(--C_timer_interrupt_counter <= 0) C_raise_interrupt(C_TIMER_INTERRUPT_NUMBER)
# endif
#else
# define C_check_for_interrupt
#endif

#define C_set_initial_timer_interrupt_period(n) \
    (C_initial_timer_interrupt_period = C_unfix(n), C_SCHEME_UNDEFINED)

extern C_TLS double last_interrupt_latency;

C_varextern C_TLS int
    C_interrupts_enabled;

C_varextern C_TLS C_long
    C_timer_interrupt_counter,
    C_initial_timer_interrupt_period;

extern C_TLS C_word interrupt_hook_symbol;

extern C_TLS int
    pending_interrupts[ MAX_PENDING_INTERRUPTS ],
    pending_interrupts_count,
    handling_interrupts;

C_fctexport C_word C_fcall C_enable_interrupts(void) C_regparm;
C_fctexport C_word C_fcall C_disable_interrupts(void) C_regparm;
C_fctexport void C_fcall C_paranoid_check_for_interrupt(void) C_regparm;
C_fctexport void C_fcall C_raise_interrupt(int reason) C_regparm;
C_fctexport C_word C_fcall C_i_pending_interrupt(C_word dummy) C_regparm;

#endif /* SCHEDULER_INTERRUPTS_H */
