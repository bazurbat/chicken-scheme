#include "platform.h"
#include <math/fixnum.h>
#include <memory/gc.h>
#include <memory/heap.h>
#include <runtime/debug.h>
#include <scheduler/interrupts.h>
#include <scheme/strings.h>
#include <scheme/vectors.h>

#include <time.h>

#if defined(C_BIG_ENDIAN)
# define C_MACHINE_BYTE_ORDER "big-endian"
#elif defined(C_LITTLE_ENDIAN)
# define C_MACHINE_BYTE_ORDER "little-endian"
#endif

#if defined(__alpha__)
# define C_MACHINE_TYPE "alpha"
#elif defined(__mips__)
# define C_MACHINE_TYPE "mips"
#elif defined(__sparc_v9__) || defined(__sparcv9)
# define C_MACHINE_TYPE "ultrasparc"
#elif defined(__sparc__)
# define C_MACHINE_TYPE "sparc"
#elif defined(__powerpc64__) || defined(_ARCH_PPC64)
# define C_MACHINE_TYPE "ppc64"
#elif defined(__ppc__) || defined(__powerpc__) || defined(_ARCH_PPC)
# define C_MACHINE_TYPE "ppc"
#elif defined(_M_IX86) || defined(__i386__)
# define C_MACHINE_TYPE "x86"
#elif defined(__ia64__)
# define C_MACHINE_TYPE "ia64"
#elif defined(__x86_64__)
# define C_MACHINE_TYPE "x86-64"
#elif defined(__arm__)
# define C_MACHINE_TYPE "arm"
#else
# define C_MACHINE_TYPE "unknown"
#endif

#if defined(__MINGW32__) || defined(_WIN32) || defined(__WINNT__)
# define C_SOFTWARE_TYPE "windows"
#elif defined(__unix__) || defined(C_XXXBSD)
# define C_SOFTWARE_TYPE "unix"
#else
# define C_SOFTWARE_TYPE "unknown"
#endif

#if defined(__MINGW32__)
# define C_BUILD_PLATFORM "mingw32"
#elif defined(_MSC_VER)
# define C_BUILD_PLATFORM "msvc"
#elif defined(__clang__)
# define C_BUILD_PLATFORM "clang"
#elif defined(__GNUC__)
# define C_BUILD_PLATFORM "gnu"
#elif defined(__INTEL_COMPILER)
# define C_BUILD_PLATFORM "intel"
#else
# define C_BUILD_PLATFORM "unknown"
#endif

#if defined(__linux__)
# define C_SOFTWARE_VERSION "linux"
#elif defined(C_MACOSX)
# define C_SOFTWARE_VERSION "macosx"
#else
# define C_SOFTWARE_VERSION "unknown"
#endif

C_TLS int fake_tty_flag;
C_TLS int C_enable_repl;

void C_ccall C_software_type(C_word c, C_word closure, C_word k)
{
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

    a = C_alloc(2 + C_bytestowords(strlen(C_SOFTWARE_TYPE)));
    s = C_string2(&a, C_SOFTWARE_TYPE);

    C_kontinue(k, s);
}

void C_ccall C_software_version(C_word c, C_word closure, C_word k)
{
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

    a = C_alloc(2 + C_bytestowords(strlen(C_SOFTWARE_VERSION)));
    s = C_string2(&a, C_SOFTWARE_VERSION);

    C_kontinue(k, s);
}

void C_ccall C_machine_type(C_word c, C_word closure, C_word k)
{
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

    a = C_alloc(2 + C_bytestowords(strlen(C_MACHINE_TYPE)));
    s = C_string2(&a, C_MACHINE_TYPE);

    C_kontinue(k, s);
}

void C_ccall C_machine_byte_order(C_word c, C_word closure, C_word k)
{
    char *str;
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

#if defined(C_MACHINE_BYTE_ORDER)
    str = C_MACHINE_BYTE_ORDER;
#else
    C_cblock
    static C_word one_two_three = 123;
    str = (*((C_char *)&one_two_three) != 123) ? "big-endian" : "little-endian";
    C_cblockend;
#endif

    a = C_alloc(2 + C_bytestowords(strlen(str)));
    s = C_string2(&a, str);

    C_kontinue(k, s);
}

void C_ccall C_build_platform(C_word c, C_word closure, C_word k)
{
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

    a = C_alloc(2 + C_bytestowords(strlen(C_BUILD_PLATFORM)));
    s = C_string2(&a, C_BUILD_PLATFORM);

    C_kontinue(k, s);
}

void C_ccall C_get_memory_info(C_word c, C_word closure, C_word k)
{
    C_word ab[ C_SIZEOF_VECTOR(2) ], *a = ab;

    C_kontinue(k, C_vector(&a, 2, C_fix(heap_size), C_fix(stack_size)));
}

C_regparm C_word C_fcall C_fudge(C_word fudge_factor)
{
    int i, j;
    double tgc;

    switch(fudge_factor) {
    case C_fix(3):              /* 64-bit system? */
#ifdef C_SIXTY_FOUR
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(4):              /* is this a console application? */
        return C_SCHEME_TRUE;

    case C_fix(7):              /* wordsize */
        return C_fix(sizeof(C_word));

    case C_fix(10):             /* clocks per sec */
        return C_fix(CLOCKS_PER_SEC);

    case C_fix(11):             /* not a unix system? */
#if defined(C_NONUNIX)
        return C_SCHEME_FALSE;
#else
        return C_SCHEME_TRUE;
#endif

    case C_fix(12):             /* tty forced? */
        return C_mk_bool(fake_tty_flag);

    case C_fix(13):             /* debug mode */
        return C_mk_bool(debug_mode);

    case C_fix(14):             /* interrupts enabled? */
        return C_mk_bool(C_interrupts_enabled);

    case C_fix(15):             /* symbol-gc enabled? */
        return C_mk_bool(C_enable_gcweak);

    case C_fix(17):             /* fixed heap? */
        return(C_mk_bool(C_heap_size_is_fixed));

    case C_fix(18):             /* stack direction */
        return(C_fix(C_STACK_GROWS_DOWNWARD));

    case C_fix(21):             /* largest fixnum */
        return C_fix(C_MOST_POSITIVE_FIXNUM);

    case C_fix(24):             /* dynamic loading available? */
#ifdef NO_DLOAD2
        return C_SCHEME_FALSE;
#else
        return C_SCHEME_TRUE;
#endif

    case C_fix(25):             /* REPL on error? XXX Is this used anywhere? */
        return C_mk_bool(C_enable_repl);

    case C_fix(26):             /* number of untriggered finalizers */
        return C_fix(live_finalizer_count);

    case C_fix(27):             /* total number of finalizers used and unused */
        return C_fix(allocated_finalizer_count);

    case C_fix(28):             /* are procedure-tabled enabled? */
#ifdef C_ENABLE_PTABLES
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(31):             /* GC time since last invocation */
        tgc = timer_accumulated_gc_ms;
        timer_accumulated_gc_ms = 0;
        return C_fix(tgc);

    case C_fix(32):             /* are GC-hooks enabled? */
#ifdef C_GC_HOOKS
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(33):             /* return process-ID */
        return C_fix(C_getpid());

    case C_fix(34):             /* effective maximum for procedure arguments */
#ifdef C_HACKED_APPLY
        return C_fix(TEMPORARY_STACK_SIZE);
#else
        return C_fix(126);
#endif

    case C_fix(36):             /* toggle debug mode */
        debug_mode = !debug_mode;
        return C_mk_bool(debug_mode);

    case C_fix(37):             /* heap-dump enabled? */
        return C_mk_bool(dump_heap_on_exit);

    case C_fix(39):             /* is this a cross-chicken? */
#if defined(C_CROSS_CHICKEN) && C_CROSS_CHICKEN
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(40):             /* assembly stub for "apply" available? */
#if defined(C_HACKED_APPLY)
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(41):             /* major CHICKEN version */
        return C_fix(C_MAJOR_VERSION);

    case C_fix(42):             /* binary version number */
#ifdef C_BINARY_VERSION
        return C_fix(C_BINARY_VERSION);
#else
        return C_fix(0);
#endif

    case C_fix(43):             /* minor CHICKEN version */
        return C_fix(C_MINOR_VERSION);

    default:
        panic(C_text("unknown fudge factor"));
    }
}
