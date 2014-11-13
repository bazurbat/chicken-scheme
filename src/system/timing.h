#ifndef SYSTEM_TIMING_H
#define SYSTEM_TIMING_H

#include <common.h>
#include <time.h>

C_varextern time_t C_startup_time_seconds;

C_fctexport double C_fcall C_milliseconds(void) C_regparm;
C_fctexport time_t C_fcall C_seconds(C_long *ms) C_regparm;
C_fctexport double C_fcall C_cpu_milliseconds(void) C_regparm;

C_fctexport C_word C_fcall C_start_timer(void) C_regparm;
C_fctexport void C_ccall C_stop_timer(C_word c, C_word closure, C_word k) C_noret;

C_fctexport C_word C_fcall C_a_i_cpu_time(C_word **a, int c, C_word buf) C_regparm;

#endif /* SYSTEM_TIMING_H */
