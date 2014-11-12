#ifndef RUNTIME_ALIASES_H
#define RUNTIME_ALIASES_H

#include "definitions.h"

#define C_FILEPTR                  FILE *

// temp for bootstrapping
#define C_strlen                   strlen

#if defined(_WIN32)
# define C_snprintf                _snprintf
#else
# define C_snprintf                snprintf
#endif
#define C_exit                     exit
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
#define round(fp) ((int)((fp) >= 0 ? (fp) + 0.5 : (fp) - 0.5))
#define trunc(fp) ((int)(fp))
#endif

#ifdef C_LLP
# define C_strtow                  strtoll
#else
# define C_strtow                  strtol
#endif

#endif /* RUNTIME_ALIASES_H */
