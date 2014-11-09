#ifndef RUNTIME_DEFINITIONS_H
#define RUNTIME_DEFINITIONS_H

/* Configuration: */

#define C_MAJOR_VERSION   5
#define C_MINOR_VERSION   0

#ifndef _ISOC99_SOURCE
# define _ISOC99_SOURCE
#endif

#ifndef __C99FEATURES__
# define __C99FEATURES__
#endif

#ifndef _BSD_SOURCE
# define _BSD_SOURCE
#endif

#ifndef _SVID_SOURCE
# define _SVID_SOURCE
#endif

/*
 * glibc >= 2.20 synonym for _BSD_SOURCE & _SVID_SOURCE.
 */
#ifndef _DEFAULT_SOURCE
# define _DEFAULT_SOURCE
#endif

/*
 * N.B. This file MUST not rely upon "chicken-config.h"
 */
#if defined(HAVE_CONFIG_H) || defined(HAVE_CHICKEN_CONFIG_H)
# include <chicken-config.h>
#endif


/* Kind of platform */

#if defined(__LP64__) || defined(_LP64) || defined(__MINGW64__) || defined(_WIN64)
# define C_SIXTY_FOUR
#endif

#if defined(__APPLE__) && defined(__MACH__)
# define C_MACOSX
#endif

#if defined(C_MACOSX)
# define C_XXXBSD
#endif

#if /*defined(__GNUC__) &&*/ (defined(__linux__) || defined(C_XXXBSD))
# define C_GNU_ENV
#endif

#if defined(__MINGW32__) || defined(_MSC_VER)
# define C_NONUNIX
#endif

#if defined(__MINGW64__) || defined(_WIN64)
# define C_LLP
#endif


/* Headers */

#include <ctype.h>
#if defined(HAVE_INTTYPES_H)
# include <inttypes.h>
#endif
#if defined(HAVE_LIMITS_H)
# include <limits.h>
#endif
#include <math.h>
#include <float.h>
#include <setjmp.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#if defined(HAVE_STDLIB_H)
#include <stdlib.h>
#endif
#if defined(HAVE_STRING_H)
#include <string.h>
#endif
#include <time.h>
#if defined(HAVE_UNISTD_H)
# include <unistd.h>
#endif
#if defined(HAVE_SYS_TYPES_H)
# include <sys/types.h>
#endif
#if defined(HAVE_PROCESS_H)
# include <process.h>
#endif
#if defined(HAVE_IO_H)
# include <io.h>
#endif


/* Byteorder in machine word */

#if defined(__MINGW32__)
# include <sys/param.h>
#elif defined(__linux__)
# include <endian.h>
#elif defined(C_XXXBSD)
# include <machine/endian.h>
#endif

#if defined(__MINGW32__) || defined(_MSC_VER)
# include <malloc.h>
#endif

/* Much better with stack allocation API */

#ifdef HAVE_ALLOCA_H
# include <alloca.h>
#elif !defined(alloca) /* predefined by HP cc +Olibcalls */
void *alloca ();
#endif


/* CHICKEN Core C API */

#if defined(__BYTE_ORDER) && __BYTE_ORDER == __BIG_ENDIAN
# define C_BIG_ENDIAN
#elif defined(BYTE_ORDER) && defined(BIG_ENDIAN) && BYTE_ORDER == BIG_ENDIAN
# define C_BIG_ENDIAN
#elif defined(__BIG_ENDIAN__)
# define C_BIG_ENDIAN
#elif defined(__MIPSEL__) || defined(__MIPSEL)
# define C_LITTLE_ENDIAN
#elif defined(__sparc__) || defined(__POWERPC__) || defined(__MC68K__) || defined(__mips__)
# define C_BIG_ENDIAN
#endif

#if defined(__BYTE_ORDER) && defined(__LITTLE_ENDIAN) && __BYTE_ORDER == __LITTLE_ENDIAN
# define C_LITTLE_ENDIAN
#elif defined(BYTE_ORDER) && defined(LITTLE_ENDIAN) && BYTE_ORDER == LITTLE_ENDIAN
# define C_LITTLE_ENDIAN
#elif defined(__LITTLE_ENDIAN__)
# define C_LITTLE_ENDIAN
#elif defined (__alpha__) || defined(_M_IX86) || defined(__i386__) || defined(__x86_64__) || defined(__ia64__)
# define C_LITTLE_ENDIAN
#endif

/* Make sure some common C identifiers are availble w/ Windows */

/* Could be used by C++ source */

#ifdef __cplusplus
# define C_extern                  extern "C"
# define C_BEGIN_C_DECLS           extern "C" {
# define C_END_C_DECLS             }
#else
# define C_extern                  extern
# define C_BEGIN_C_DECLS
# define C_END_C_DECLS
#endif


/* Function declaration modes */

/* Visibility */
#define C_varextern                C_extern
#define C_fctimport
#define C_fctexport
#define C_externimport             C_extern
#define C_externexport             C_extern
#if defined(PIC)
# if defined(__MINGW32__)
#  ifndef C_BUILDING_LIBCHICKEN
#   undef  C_varextern
#   define C_varextern             C_extern __declspec(dllimport)
#  endif
# elif defined(_MSC_VER)
#  undef  C_fctimport
#  define C_fctimport              __declspec(dllexport)
#  undef  C_externimport
#  undef  C_externexport
#  define C_externexport           C_extern __declspec(dllexport)
#  undef  C_varextern
#  undef  C_fctexport
#  ifdef C_BUILDING_LIBCHICKEN
#   define C_varextern             C_extern __declspec(dllexport)
#   define C_fctexport             __declspec(dllexport)
#   define C_externimport          C_extern __declspec(dllexport)
#  else
#   define C_varextern             C_extern __declspec(dllimport)
#   define C_fctexport             __declspec(dllimport)
#   define C_externimport          C_extern __declspec(dllimport)
#  endif
# endif
#endif

/* Language specifics: */
#if defined(__GNUC__) || defined(__INTEL_COMPILER)
#define HAVE_STATEMENT_EXPRESSIONS 1
#endif

#if !defined(__clang__) && !defined(__has_attribute)
/* Define so it won't error on other compilers with keywords like "noreturn" */
#define __has_attribute(x)        0
#endif

#if defined(__GNUC__) || defined(__INTEL_COMPILER)
# ifndef __cplusplus
#  define C_cblock                ({
#  define C_cblockend             })
#  if defined(__clang__) && !__has_attribute(noreturn)
#   define C_noret
#  else
#   define C_noret                __attribute__ ((noreturn))
#  endif
#  define C_noret_decl(name)
#  define C_aligned               __attribute__ ((aligned))
# endif
# if defined(__i386__) && !defined(__clang__)
#  define C_regparm               __attribute__ ((regparm(3)))
# endif
#endif

#ifndef C_cblock
# define C_cblock                 do {
# define C_cblockend              } while(0)
# define C_noret
# define C_noret_decl(name)
#endif

#ifndef C_regparm
# define C_regparm
#endif

#ifndef C_fcall
# define C_fcall
#endif

#ifndef C_ccall
# define C_ccall
#endif

#ifndef C_aligned
# define C_aligned
#endif

#define C_c_regparm

#if defined(__GNUC__) || defined(__INTEL_COMPILER) || defined(__cplusplus)
# define C_inline                  inline static
#else
# define C_inline                  static
#endif

/* Thread Local Stoarage */
#ifdef C_ENABLE_TLS
# if defined(__GNUC__)
#  define C_TLS                    __thread
# endif
#endif

#ifndef C_TLS
# define C_TLS
#endif


/* Stack growth direction; used to compute stack addresses */

#ifndef C_STACK_GROWS_DOWNWARD
# define C_STACK_GROWS_DOWNWARD    -1
#endif

#if C_STACK_GROWS_DOWNWARD == -1
#  undef C_STACK_GROWS_DOWNWARD
#  define C_STACK_GROWS_DOWNWARD 1
#endif

/* Needed for pre-emptive threading */

#define C_TIMER_INTERRUPTS

/* For the `bind' (and the obsolete `easyffi'): */

#define ___fixnum           int
#define ___number           double
#define ___bool             int
#define ___byte             char
#define ___scheme_value     C_word
#define ___scheme_pointer   void *
#define ___blob             void *
#define ___pointer_vector   void **
#define ___symbol           char *
#define ___safe
#define ___declare(x, y)
#define ___specialize
#define ___abstract
#define ___discard
#define ___in
#define ___out
#define ___inout
#define ___mutable
#define ___length(var)
#define ___pointer
#define ___u32              C_u32
#define ___s32              C_s32
#define ___u64              C_u64
#define ___s64              C_s64


/* Mingw's isnormal() is broken on 32bit; use GCC's builtin (see #1062) */
#ifdef __MINGW32__
# undef isnormal
# define isnormal __builtin_isnormal
#endif

/* Constants: */

#define C_STACK_RESERVE                   0x10000
#define C_DEFAULT_MAX_PENDING_FINALIZERS  2048

#define C_IMMEDIATE_MARK_BITS     0x00000003
#define C_IMMEDIATE_TYPE_BITS     0x0000000f

#define C_BOOLEAN_BITS            0x00000006
#define C_CHARACTER_BITS          0x0000000a
#define C_SPECIAL_BITS            0x0000000e

#define C_SCHEME_FALSE            ((C_word)(C_BOOLEAN_BITS | 0x00000000))
#define C_SCHEME_TRUE             ((C_word)(C_BOOLEAN_BITS | 0x00000010))

#define C_SCHEME_END_OF_LIST      ((C_word)(C_SPECIAL_BITS | 0x00000000))
#define C_SCHEME_UNDEFINED        ((C_word)(C_SPECIAL_BITS | 0x00000010))
#define C_SCHEME_UNBOUND          ((C_word)(C_SPECIAL_BITS | 0x00000020))
#define C_SCHEME_END_OF_FILE      ((C_word)(C_SPECIAL_BITS | 0x00000030))

#define C_FIXNUM_BIT              0x00000001
#define C_FIXNUM_SHIFT            1

/* Character range is that of a UTF-8 codepoint, not representable range */
#define C_CHAR_BIT_MASK           0x1fffff
#define C_CHAR_SHIFT              8

#ifdef C_SIXTY_FOUR
# define C_MOST_POSITIVE_FIXNUM   0x3fffffffffffffffL
# define C_WORD_SIZE              64
#else
# define C_MOST_POSITIVE_FIXNUM   0x3fffffff
# define C_WORD_SIZE              32
#endif

#define C_MOST_POSITIVE_32_BIT_FIXNUM  0x3fffffff
#define C_MOST_NEGATIVE_FIXNUM    (-C_MOST_POSITIVE_FIXNUM - 1)

#ifdef C_SIXTY_FOUR
# define C_INT_SIGN_BIT           0x8000000000000000L
# define C_INT_TOP_BIT            0x4000000000000000L
# define C_HEADER_BITS_MASK       0xff00000000000000L
# define C_HEADER_TYPE_BITS       0x0f00000000000000L
# define C_HEADER_SIZE_MASK       0x00ffffffffffffffL
# define C_GC_FORWARDING_BIT      0x8000000000000000L   /* header contains forwarding pointer */
# define C_BYTEBLOCK_BIT          0x4000000000000000L   /* block contains bytes instead of slots */
# define C_SPECIALBLOCK_BIT       0x2000000000000000L   /* 1st item is a non-value */
# define C_8ALIGN_BIT             0x1000000000000000L   /* data is aligned to 8-byte boundary */

# define C_SYMBOL_TYPE            (0x0100000000000000L)
# define C_STRING_TYPE            (0x0200000000000000L | C_BYTEBLOCK_BIT)
# define C_PAIR_TYPE              (0x0300000000000000L)
# define C_CLOSURE_TYPE           (0x0400000000000000L | C_SPECIALBLOCK_BIT)
# define C_FLONUM_TYPE            (0x0500000000000000L | C_BYTEBLOCK_BIT | C_8ALIGN_BIT)
/*       unused                   (0x0600000000000000L ...) */
# define C_PORT_TYPE              (0x0700000000000000L | C_SPECIALBLOCK_BIT)
# define C_STRUCTURE_TYPE         (0x0800000000000000L)
# define C_POINTER_TYPE           (0x0900000000000000L | C_SPECIALBLOCK_BIT)
# define C_LOCATIVE_TYPE          (0x0a00000000000000L | C_SPECIALBLOCK_BIT)
# define C_TAGGED_POINTER_TYPE    (0x0b00000000000000L | C_SPECIALBLOCK_BIT)
# define C_LAMBDA_INFO_TYPE       (0x0d00000000000000L | C_BYTEBLOCK_BIT)
/*       unused                   (0x0e00000000000000L ...) */
# define C_BUCKET_TYPE            (0x0f00000000000000L)
#else
# define C_INT_SIGN_BIT           0x80000000
# define C_INT_TOP_BIT            0x40000000
# define C_HEADER_BITS_MASK       0xff000000
# define C_HEADER_TYPE_BITS       0x0f000000
# define C_HEADER_SIZE_MASK       0x00ffffff
# define C_GC_FORWARDING_BIT      0x80000000
# define C_BYTEBLOCK_BIT          0x40000000
# define C_SPECIALBLOCK_BIT       0x20000000
# define C_8ALIGN_BIT             0x10000000

# define C_SYMBOL_TYPE            (0x01000000)
# define C_STRING_TYPE            (0x02000000 | C_BYTEBLOCK_BIT)
# define C_PAIR_TYPE              (0x03000000)
# define C_CLOSURE_TYPE           (0x04000000 | C_SPECIALBLOCK_BIT)
# ifdef C_DOUBLE_IS_32_BITS
#  define C_FLONUM_TYPE           (0x05000000 | C_BYTEBLOCK_BIT)
# else
#  define C_FLONUM_TYPE           (0x05000000 | C_BYTEBLOCK_BIT | C_8ALIGN_BIT)
# endif
/*       unused                   (0x06000000 ...) */
# define C_PORT_TYPE              (0x07000000 | C_SPECIALBLOCK_BIT)
# define C_STRUCTURE_TYPE         (0x08000000)
# define C_POINTER_TYPE           (0x09000000 | C_SPECIALBLOCK_BIT)
# define C_LOCATIVE_TYPE          (0x0a000000 | C_SPECIALBLOCK_BIT)
# define C_TAGGED_POINTER_TYPE    (0x0b000000 | C_SPECIALBLOCK_BIT)
# define C_LAMBDA_INFO_TYPE       (0x0d000000 | C_BYTEBLOCK_BIT)
/*       unused                   (0x0e000000 ...) */
# define C_BUCKET_TYPE            (0x0f000000)
#endif
#define C_VECTOR_TYPE             0x00000000
#define C_BYTEVECTOR_TYPE         (C_VECTOR_TYPE | C_BYTEBLOCK_BIT | C_8ALIGN_BIT)

#define C_SIZEOF_LIST(n)          ((n) * 3 + 1)
#define C_SIZEOF_PAIR             3
#define C_SIZEOF_STRING(n)        (C_bytestowords(n) + 2)
#define C_SIZEOF_SYMBOL           4
#define C_SIZEOF_INTERNED_SYMBOL(n) (C_SIZEOF_SYMBOL + C_SIZEOF_BUCKET + C_SIZEOF_STRING(n))
#ifdef C_DOUBLE_IS_32_BITS
# define C_SIZEOF_FLONUM          2
#else
# define C_SIZEOF_FLONUM          4
#endif
#define C_SIZEOF_POINTER          2
#define C_SIZEOF_TAGGED_POINTER   3
#define C_SIZEOF_VECTOR(n)        ((n) + 1)
#define C_SIZEOF_BUCKET           3
#define C_SIZEOF_LOCATIVE         5
#define C_SIZEOF_PORT             16
#define C_SIZEOF_STRUCTURE(n)     ((n)+1)
#define C_SIZEOF_CLOSURE(n)       ((n)+1)

/* Fixed size types have pre-computed header tags */
#define C_PAIR_TAG                (C_PAIR_TYPE | (C_SIZEOF_PAIR - 1))
#define C_POINTER_TAG             (C_POINTER_TYPE | (C_SIZEOF_POINTER - 1))
#define C_LOCATIVE_TAG            (C_LOCATIVE_TYPE | (C_SIZEOF_LOCATIVE - 1))
#define C_TAGGED_POINTER_TAG      (C_TAGGED_POINTER_TYPE | (C_SIZEOF_TAGGED_POINTER - 1))
#define C_SYMBOL_TAG              (C_SYMBOL_TYPE | (C_SIZEOF_SYMBOL - 1))
#define C_FLONUM_TAG              (C_FLONUM_TYPE | sizeof(double))

/* Locative subtypes */
#define C_SLOT_LOCATIVE           0
#define C_CHAR_LOCATIVE           1
#define C_U8_LOCATIVE             2
#define C_S8_LOCATIVE             3
#define C_U16_LOCATIVE            4
#define C_S16_LOCATIVE            5
#define C_U32_LOCATIVE            6
#define C_S32_LOCATIVE            7
#define C_F32_LOCATIVE            8
#define C_F64_LOCATIVE            9

#if defined (__MINGW32__) || defined (_MSC_VER)
# define C_s64                    __int64
# define C_u64                    unsigned __int64
#else
# define C_s64                    int64_t
# define C_u64                    uint64_t
#endif

#ifdef C_SIXTY_FOUR
# ifdef C_LLP
#  define C_word                  C_s64
# else
#  define C_word                  long
# endif
# define C_u32                    uint32_t
# define C_s32                    int32_t
#else
# define C_word                   int
# define C_u32                    unsigned int
# define C_s32                    int
#endif

#define C_char                    char
#define C_uchar                   unsigned C_char
#define C_byte                    char
#define C_uword                   unsigned C_word
#define C_header                  C_uword

/* if all else fails, use these:
   #define UINT64_MAX (18446744073709551615ULL)
   #define INT64_MAX  (9223372036854775807LL)
   #define INT64_MIN  (-INT64_MAX - 1)
   #define UINT32_MAX (4294967295U)
   #define INT32_MAX  (2147483647)
   #define INT32_MIN  (-INT32_MAX - 1)
   #define UINT16_MAX (65535U)
   #define INT16_MAX  (32767)
   #define INT16_MIN  (-INT16_MAX - 1)
   #define UINT8_MAX  (255)
   #define INT8_MAX   (127)
   #define INT8_MIN   (-INT8_MAX - 1)
 */

#if defined(_MSC_VER)
# define C_U64_MAX    _UI64_MAX
# define C_S64_MIN    _I64_MIN
# define C_S64_MAX    _I64_MAX
#else
# define C_U64_MAX    UINT64_MAX
# define C_S64_MIN    INT64_MIN
# define C_S64_MAX    INT64_MAX
#endif

#if _MSC_VER && _MSC_VER < 1800
# define INFINITY (DBL_MAX+DBL_MAX)
# define NAN (INFINITY-INFINITY)
# define isinf(x) (!_finite(x) && !_isnan(x))
# define isnan(x) _isnan(x)
# define isnormal(x) _finite(x)
#endif

#if defined(C_LLP)
# define C_long                   C_s64
# ifndef LONG_LONG_MAX
#  define C_LONG_MAX              LLONG_MAX
#  define C_LONG_MIN              LLONG_MIN
# else
#  define C_LONG_MAX              LONG_LONG_MAX
#  define C_LONG_MIN              LONG_LONG_MIN
# endif
#else
# define C_long                   long
# define C_LONG_MAX               LONG_MAX
# define C_LONG_MIN               LONG_MIN
#endif

#define C_ulong                   unsigned C_long

#ifdef __cplusplus
# define C_text(x)                ((C_char *)(x))
#else
# define C_text(x)                (x)
#endif

#define C_TIMER_INTERRUPT_NUMBER  255

#define C_BAD_ARGUMENT_COUNT_ERROR                    1
#define C_BAD_MINIMUM_ARGUMENT_COUNT_ERROR            2
#define C_BAD_ARGUMENT_TYPE_ERROR                     3
#define C_UNBOUND_VARIABLE_ERROR                      4
#define C_TOO_MANY_PARAMETERS_ERROR                   5
#define C_OUT_OF_MEMORY_ERROR                         6
#define C_DIVISION_BY_ZERO_ERROR                      7
#define C_OUT_OF_RANGE_ERROR                          8
#define C_NOT_A_CLOSURE_ERROR                         9
#define C_CONTINUATION_CANT_RECEIVE_VALUES_ERROR      10
#define C_BAD_ARGUMENT_TYPE_CYCLIC_LIST_ERROR         11
#define C_TOO_DEEP_RECURSION_ERROR                    12
#define C_CANT_REPRESENT_INEXACT_ERROR                13
#define C_NOT_A_PROPER_LIST_ERROR                     14
#define C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR           15
#define C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR           16
#define C_BAD_ARGUMENT_TYPE_NO_STRING_ERROR           17
#define C_BAD_ARGUMENT_TYPE_NO_PAIR_ERROR             18
#define C_BAD_ARGUMENT_TYPE_NO_LIST_ERROR             19
#define C_BAD_ARGUMENT_TYPE_NO_CHAR_ERROR             20
#define C_BAD_ARGUMENT_TYPE_NO_VECTOR_ERROR           21
#define C_BAD_ARGUMENT_TYPE_NO_SYMBOL_ERROR           22
#define C_STACK_OVERFLOW_ERROR                        23
#define C_BAD_ARGUMENT_TYPE_BAD_STRUCT_ERROR          24
#define C_BAD_ARGUMENT_TYPE_NO_BYTEVECTOR_ERROR       25
#define C_LOST_LOCATIVE_ERROR                         26
#define C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR            27
#define C_BAD_ARGUMENT_TYPE_NO_NUMBER_VECTOR_ERROR    28
#define C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR          29
#define C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR         30
#define C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR          31
#define C_BAD_ARGUMENT_TYPE_NO_TAGGED_POINTER_ERROR   32
#define C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR           33
#define C_BAD_ARGUMENT_TYPE_NO_CLOSURE_ERROR          34
#define C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR            35
#define C_CIRCULAR_DATA_ERROR                         36
#define C_BAD_ARGUMENT_TYPE_NO_BOOLEAN_ERROR          37
#define C_BAD_ARGUMENT_TYPE_NO_LOCATIVE_ERROR         38
#define C_BAD_ARGUMENT_TYPE_NO_PORT_ERROR             39
#define C_BAD_ARGUMENT_TYPE_NO_INPUT_PORT_ERROR       40
#define C_BAD_ARGUMENT_TYPE_NO_OUTPUT_PORT_ERROR      41
#define C_PORT_CLOSED_ERROR                           42
#define C_ASCIIZ_REPRESENTATION_ERROR                 43
#define C_MEMORY_VIOLATION_ERROR                      44
#define C_FLOATING_POINT_EXCEPTION_ERROR              45
#define C_ILLEGAL_INSTRUCTION_ERROR                   46
#define C_BUS_ERROR                                   47


/* Platform information */
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

#define C_MAX_PATH         PATH_MAX

/* from runtime.c */
#define WORDS_PER_FLONUM               C_SIZEOF_FLONUM
#define INITIAL_TIMER_INTERRUPT_PERIOD 10000
#define HDUMP_TABLE_SIZE               1001

#ifdef C_SIXTY_FOUR
# define DEFAULT_STACK_SIZE            (1024 * 1024)
#else
# define DEFAULT_STACK_SIZE            (256 * 1024)
#endif

#define DEFAULT_HEAP_SIZE              DEFAULT_STACK_SIZE
#define MINIMAL_HEAP_SIZE              DEFAULT_STACK_SIZE
#define DEFAULT_MAXIMAL_HEAP_SIZE      0x7ffffff0
#define DEFAULT_HEAP_GROWTH            200
#define DEFAULT_HEAP_SHRINKAGE         50
#define DEFAULT_HEAP_SHRINKAGE_USED    25

#define DEFAULT_MUTATION_STACK_SIZE    1024

#define DEFAULT_SYMBOL_TABLE_SIZE      2999
#define DEFAULT_FORWARDING_TABLE_SIZE  32
#define DEFAULT_LOCATIVE_TABLE_SIZE    32
#define DEFAULT_COLLECTIBLES_SIZE      1024
#define DEFAULT_TRACE_BUFFER_SIZE      16
#define MIN_TRACE_BUFFER_SIZE          3

#define STRING_BUFFER_SIZE             4096

#define WEAK_TABLE_SIZE                997
#define WEAK_HASH_ITERATIONS           4
#define WEAK_HASH_DISPLACEMENT         7
#define WEAK_COUNTER_MASK              3
#define WEAK_COUNTER_MAX               2

/* Constants: */

#define TEMPORARY_STACK_SIZE           2048

#ifdef C_SIXTY_FOUR
# define ALIGNMENT_HOLE_MARKER         ((C_word)0xfffffffffffffffeL)
# define FORWARDING_BIT_SHIFT          63
# define UWORD_FORMAT_STRING           "0x%016lx"
# define UWORD_COUNT_FORMAT_STRING     "%u"
#else
# define ALIGNMENT_HOLE_MARKER         ((C_word)0xfffffffe)
# define FORWARDING_BIT_SHIFT          31
# define UWORD_FORMAT_STRING           "0x%08x"
# define UWORD_COUNT_FORMAT_STRING     "%u"
#endif

#ifdef C_LLP
# define LONG_FORMAT_STRING            "%lldf"
#else
# define LONG_FORMAT_STRING            "%ld"
#endif

#define MAX_PENDING_INTERRUPTS         100

#endif
