#ifndef CHICKEN_DEFINITIONS_H
#define CHICKEN_DEFINITIONS_H

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

#ifndef _DEFAULT_SOURCE
# define _DEFAULT_SOURCE
#endif

#if defined(__LP64__) || defined(_LP64) || defined(__MINGW64__) || defined(_WIN64)
# define C_SIXTY_FOUR
#endif

#if defined(__APPLE__) && defined(__MACH__)
# define C_MACOSX
#endif

#if defined(C_MACOSX)
# define C_XXXBSD
#endif

#if defined(__linux__) || defined(C_XXXBSD)
# define C_GNU_ENV
#endif

#if defined(__MINGW32__) || defined(_MSC_VER)
# define C_NONUNIX
#endif

#if defined(__MINGW64__) || defined(_WIN64)
# define C_LLP
#endif

#include <chicken-config.h>

#include <ctype.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>

#if defined(HAVE_STDLIB_H)
# include <stdlib.h>
#endif

#if defined(HAVE_LIMITS_H)
# include <limits.h>
#endif

#if defined(HAVE_INTTYPES_H)
# include <inttypes.h>
#endif

#if defined(HAVE_STRING_H)
# include <string.h>
#endif

#ifdef HAVE_PROCESS_H
# include <process.h> /* _getpid */
#endif

#ifdef HAVE_IO_H
# include <io.h> /* _isatty */
#endif

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

#ifdef HAVE_ALLOCA_H
# include <alloca.h>
#endif

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

#ifdef __cplusplus
# define C_extern                  extern "C"
# define C_BEGIN_C_DECLS           extern "C" {
# define C_END_C_DECLS             }
#else
# define C_extern                  extern
# define C_BEGIN_C_DECLS
# define C_END_C_DECLS
#endif

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

#if defined(__GNUC__) || defined(__INTEL_COMPILER)
# define HAVE_STATEMENT_EXPRESSIONS 1
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

#define C_TIMER_INTERRUPTS

/* Mingw's isnormal() is broken on 32bit; use GCC's builtin (see #1062) */
#ifdef __MINGW32__
# undef isnormal
# define isnormal __builtin_isnormal
#endif

#define C_STACK_RESERVE                   0x10000

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

#if _MSC_VER && _MSC_VER < 1800
# define INFINITY (DBL_MAX+DBL_MAX)
# define NAN (INFINITY-INFINITY)
# define isinf(x) (!_finite(x) && !_isnan(x))
# define isnan(x) _isnan(x)
# define isnormal(x) _finite(x)
#endif

#ifdef C_SIXTY_FOUR
# define DEFAULT_STACK_SIZE            (1024 * 1024)
#else
# define DEFAULT_STACK_SIZE            (256 * 1024)
#endif

#define STRING_BUFFER_SIZE             4096

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

#if defined(_WIN32)
# define C_snprintf                _snprintf
#else
# define C_snprintf                snprintf
#endif

#if (defined getc_unlocked || _POSIX_C_SOURCE >= 199506L)
# define C_getc                    getc_unlocked
#else
# define C_getc                    getc
#endif

#if defined(_MSC_VER)
# define C_isatty                  _isatty
#else
# define C_isatty                  isatty
#endif

#if defined(_MSC_VER)
# define C_getpid                  _getpid
#else
# define C_getpid                  getpid
#endif

#ifdef __linux__
extern double round(double);
extern double trunc(double);
#elif _MSC_VER && _MSC_VER < 1800
# define round(fp) ((int)((fp) >= 0 ? (fp) + 0.5 : (fp) - 0.5))
# define trunc(fp) ((int)(fp))
#endif

#ifdef C_LLP
# define C_strtow                  strtoll
#else
# define C_strtow                  strtol
#endif

#define C_align4(n)                (((n) + 3) & ~3)
#define C_align8(n)                (((n) + 7) & ~7)
#define C_align16(n)               (((n) + 15) & ~15)

#define C_aligned8(n)              ((((C_word)(n)) & 7) == 0)

/* for bootstrapping */
#define C_TLS
#define C_strlen                   strlen

#endif /* CHICKEN_DEFINITIONS_H */