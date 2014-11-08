#include "timing.h"
#include <chicken.h>

#if !defined(C_NONUNIX)
# include <sys/time.h>
#else

#endif

C_TLS unsigned int
    mutation_count,
    tracked_mutation_count;

static C_TLS double
    timer_start_ms;

/* Timing routines: */

C_regparm double C_fcall C_milliseconds(void)
{
#ifdef C_NONUNIX
    if(CLOCKS_PER_SEC == 1000) return clock();
    else return C_floor(((double)clock() / (double)CLOCKS_PER_SEC) * 1000);
#else
    struct timeval tv;

    if(C_gettimeofday(&tv, NULL) == -1) return 0;
    else return
        C_floor(((double)tv.tv_sec - C_startup_time_seconds) * 1000.0 + tv.tv_usec / 1000);
#endif
}

C_regparm time_t C_fcall C_seconds(C_long *ms)
{
#ifdef C_NONUNIX
    if(ms != NULL) *ms = 0;

    return (time_t)(clock() / CLOCKS_PER_SEC);
#else
    struct timeval tv;

    if(C_gettimeofday(&tv, NULL) == -1) {
        if(ms != NULL) *ms = 0;

        return (time_t)0;
    }
    else {
        if(ms != NULL) *ms = tv.tv_usec / 1000;

        return tv.tv_sec;
    }
#endif
}

C_regparm double C_fcall C_cpu_milliseconds(void)
{
#if defined(C_NONUNIX)
    if(CLOCKS_PER_SEC == 1000) return clock();
    else return C_floor(((double)clock() / (double)CLOCKS_PER_SEC) * 1000);
#else
    struct rusage ru;

    if(C_getrusage(RUSAGE_SELF, &ru) == -1) return 0;
    else return
        C_floor(((double)ru.ru_utime.tv_sec + ru.ru_stime.tv_sec) * 1000
                + ((double)ru.ru_utime.tv_usec + ru.ru_stime.tv_usec) / 1000);
#endif
}

C_regparm C_word C_fcall C_start_timer(void)
{
    tracked_mutation_count = 0;
    mutation_count = 0;
    gc_count_1_total = 0;
    gc_count_2 = 0;
    timer_start_ms = C_cpu_milliseconds();
    gc_ms = 0;
    return C_SCHEME_UNDEFINED;
}

void C_ccall C_stop_timer(C_word c, C_word closure, C_word k)
{
    double t0 = C_cpu_milliseconds() - timer_start_ms;
    C_word
        ab[ WORDS_PER_FLONUM * 2 + C_SIZEOF_VECTOR(6) ],
        *a = ab,
        elapsed = C_flonum(&a, t0 / 1000.0),
        gc_time = C_flonum(&a, gc_ms / 1000.0),
        info;

    info = C_vector(&a, 6, elapsed, gc_time, C_fix(mutation_count),
                    C_fix(tracked_mutation_count), C_fix(gc_count_1_total),
                    C_fix(gc_count_2));
    C_kontinue(k, info);
}
