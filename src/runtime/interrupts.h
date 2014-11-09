#ifndef RUNTIME_INTERRUPTS_H
#define RUNTIME_INTERRUPTS_H

#include "definitions.h"

extern C_TLS double last_interrupt_latency;

C_varextern C_TLS int
    C_interrupts_enabled;

C_varextern C_TLS C_long
    C_timer_interrupt_counter,
    C_initial_timer_interrupt_period;

C_fctexport C_word C_fcall C_enable_interrupts(void) C_regparm;
C_fctexport C_word C_fcall C_disable_interrupts(void) C_regparm;
C_fctexport void C_fcall C_paranoid_check_for_interrupt(void) C_regparm;
C_fctexport void C_fcall C_raise_interrupt(int reason) C_regparm;
C_fctexport C_word C_fcall C_i_pending_interrupt(C_word dummy) C_regparm;

#endif /* RUNTIME_INTERRUPTS_H */
