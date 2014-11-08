#ifndef RUNTIME_TIMING_H
#define RUNTIME_TIMING_H

#include "definitions.h"

extern C_TLS unsigned int
    mutation_count,
    tracked_mutation_count;

C_fctexport double C_fcall C_milliseconds(void) C_regparm;
C_fctexport time_t C_fcall C_seconds(C_long *ms) C_regparm;
C_fctexport double C_fcall C_cpu_milliseconds(void) C_regparm;

C_fctexport C_word C_fcall C_start_timer(void) C_regparm;
C_fctexport void C_ccall C_stop_timer(C_word c, C_word closure, C_word k) C_noret;

#endif /* RUNTIME_TIMING_H */
