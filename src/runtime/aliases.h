#ifndef RUNTIME_ALIASES_H
#define RUNTIME_ALIASES_H

#include "definitions.h"

#define C_FILEPTR                  FILE *

// temp for bootstrapping
#define C_strlen                   strlen

#define C_strtol                   strtol
#define C_strtoll                  strtoll
#define C_fclose                   fclose
#if defined(_WIN32)
# define C_snprintf                _snprintf
#else
# define C_snprintf                snprintf
#endif
#define C_fprintf                  fprintf
#define C_fflush                   fflush
#define C_exit                     exit
#define C_fwrite                   fwrite
#define C_fputs                    fputs
#define C_fputc                    fputc
#define C_putchar                  putchar
#if (defined getc_unlocked || _POSIX_C_SOURCE >= 199506L)
# define C_getc                    getc_unlocked
#else
# define C_getc                    getc
#endif
#define C_ungetc                   ungetc
#if defined(_MSC_VER)
# define C_isatty                  _isatty
#else
# define C_isatty                  isatty
#endif
#define C_fileno                   fileno
#if defined(HAVE_SIGACTION)
#define C_sigaction                sigaction
#endif
#define C_signal                   signal
#define C_tolower                  tolower
#define C_toupper                  toupper
#define C_gettimeofday             gettimeofday
#define C_gmtime                   gmtime
#define C_localtime                localtime
/*
 * It is undefined whether regular setjmp/longjmp save/restore signal mask
 * so try to use versions that we know won't try to save & restore.
 */
#if defined(HAVE_SIGSETJMP)
#  define C_sigsetjmp              sigsetjmp
#  define C_siglongjmp             siglongjmp
#endif
#define C_setjmp                   setjmp
#define C_longjmp                  longjmp
#define C_alloca                   alloca
#define C_isalpha                  isalpha
#define C_isdigit                  isdigit
#define C_isspace                  isspace
#define C_islower                  islower
#define C_isupper                  isupper
#if defined(_MSC_VER)
# define C_getpid                  _getpid
#else
# define C_getpid                  getpid
#endif
#define C_getenv                   getenv
#ifdef __linux__
extern double round(double);
extern double trunc(double);
#elif _MSC_VER && _MSC_VER < 1800
#define round(fp) ((int)((fp) >= 0 ? (fp) + 0.5 : (fp) - 0.5))
#define trunc(fp) ((int)(fp))
#endif

#ifdef C_LLP
# define C_strtow                  C_strtoll
#else
# define C_strtow                  C_strtol
#endif

#endif /* RUNTIME_ALIASES_H */
