#include "signals.h"
#include <runtime/errors.h>
#include <memory/gc.h>
#include <math/fixnum.h>

#include <signal.h>

#ifndef SIGBUS
# define SIGBUS                      0
#endif

#ifdef HAVE_SIGPROCMASK
# define C_sigprocmask             sigprocmask
#endif

volatile C_TLS int serious_signal_occurred = 0;

C_TLS int signal_mapping_table[ NSIG ];

C_TLS int chicken_is_running;

void global_signal_handler(int signum);

static void C_fcall sigsegv_trampoline(void *) C_regparm;
static void C_fcall sigill_trampoline(void *) C_regparm;
static void C_fcall sigfpe_trampoline(void *) C_regparm;
static void C_fcall sigbus_trampoline(void *) C_regparm;

C_regparm void C_fcall sigsegv_trampoline(void *dummy)
{
    barf(C_MEMORY_VIOLATION_ERROR, NULL);
}

C_regparm void C_fcall sigbus_trampoline(void *dummy)
{
    barf(C_BUS_ERROR, NULL);
}

C_regparm void C_fcall sigfpe_trampoline(void *dummy)
{
    barf(C_FLOATING_POINT_EXCEPTION_ERROR, NULL);
}

C_regparm void C_fcall sigill_trampoline(void *dummy)
{
    barf(C_ILLEGAL_INSTRUCTION_ERROR, NULL);
}

/* This is called from POSIX signals: */

void global_signal_handler(int signum)
{
#if defined(HAVE_SIGPROCMASK)
    if(signum == SIGSEGV || signum == SIGFPE || signum == SIGILL || signum == SIGBUS) {
        sigset_t sset;

        if(serious_signal_occurred || !chicken_is_running) {
            switch(signum) {
            case SIGSEGV: panic(C_text("unrecoverable segmentation violation"));
            case SIGFPE: panic(C_text("unrecoverable floating-point exception"));
            case SIGILL: panic(C_text("unrecoverable illegal instruction error"));
            case SIGBUS: panic(C_text("unrecoverable bus error"));
            default: panic(C_text("unrecoverable serious condition"));
            }
        }
        else serious_signal_occurred = 1;

        /* unblock signal to avoid nested invocation of the handler */
        sigemptyset(&sset);
        sigaddset(&sset, signum);
        C_sigprocmask(SIG_UNBLOCK, &sset, NULL);

        switch(signum) {
        case SIGSEGV: C_reclaim(sigsegv_trampoline, NULL);
        case SIGFPE: C_reclaim(sigfpe_trampoline, NULL);
        case SIGILL: C_reclaim(sigill_trampoline, NULL);
        case SIGBUS: C_reclaim(sigbus_trampoline, NULL);
        default: panic(C_text("invalid serious signal"));
        }
    }
#endif

    C_raise_interrupt(signal_mapping_table[ signum ]);
#ifndef HAVE_SIGACTION
    /* not necessarily needed, but older UNIXen may not leave the handler installed: */
    C_signal(signum, global_signal_handler);
#endif
}

C_regparm C_word C_fcall C_establish_signal_handler(C_word signum, C_word reason)
{
    int sig = C_unfix(signum);
#if defined(HAVE_SIGACTION)
    struct sigaction newsig;
#endif

    if(reason == C_SCHEME_FALSE) C_signal(sig, SIG_IGN);
    else {
        signal_mapping_table[ sig ] = C_unfix(reason);
#if defined(HAVE_SIGACTION)
        newsig.sa_flags = 0;
        /* The global signal handler is used for all signals, and
           manipulates a single queue.  Don't allow other signals to
           concurrently arrive while it's doing this, to avoid races. */
        sigfillset(&newsig.sa_mask);
        newsig.sa_handler = global_signal_handler;
        C_sigaction(sig, &newsig, NULL);
#else
        C_signal(sig, global_signal_handler);
#endif
    }

    return C_SCHEME_UNDEFINED;
}

