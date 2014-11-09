#ifndef RUNTIME_ALIASES_H
#define RUNTIME_ALIASES_H

#include "definitions.h"

#ifndef C_PROVIDE_LIBC_STUBS
# define C_FILEPTR                  FILE *

# define C_stdin                    stdin
# define C_stdout                   stdout
# define C_stderr                   stderr

# define C_memcpy                   memcpy
# define C_memcmp                   memcmp
# define C_strncpy                  strncpy
# define C_strcmp                   strcmp
# define C_strncmp                  strncmp
# define C_strlen                   strlen
# define C_memset                   memset
# define C_memmove                  memmove
# if defined(_WIN32)
#  define C_strncasecmp              _strnicmp
# else
#  define C_strncasecmp              strncasecmp
# endif
# define C_malloc                   malloc
# define C_calloc                   calloc
# define C_free                     free
# define C_strchr                   strchr
# define C_realloc                  realloc
# define C_strdup                   strdup
# define C_strtol                   strtol
# define C_strtoll                  strtoll
# define C_strtod                   strtod
# define C_strtoul                  strtoul
# define C_fopen                    fopen
# define C_fclose                   fclose
# define C_strpbrk                  strpbrk
# if defined(_WIN32)
#  define C_snprintf                _snprintf
# else
#  define C_snprintf                snprintf
# endif
# define C_printf                   printf
# define C_fprintf                  fprintf
# define C_vfprintf                 vfprintf
# define C_fflush                   fflush
# define C_getchar                  getchar
# define C_exit                     exit
# define C_dlopen                   dlopen
# define C_dlclose                  dlclose
# define C_dlsym                    dlsym
# define C_fwrite                   fwrite
# define C_fread                    fread
# define C_fputs                    fputs
# define C_fputc                    fputc
# define C_putchar                  putchar
# if (defined getc_unlocked || _POSIX_C_SOURCE >= 199506L)
#  define C_getc                    getc_unlocked
# else
#  define C_getc                    getc
# endif
# define C_fgetc                    fgetc
# define C_fgets                    fgets
# define C_ungetc                   ungetc
# define C_system                   system
# if defined(_MSC_VER)
#  define C_isatty                  _isatty
# else
#  define C_isatty                  isatty
# endif
# define C_fileno                   fileno
# define C_select                   select
# if defined(HAVE_SIGACTION)
# define C_sigaction                sigaction
# endif
# define C_signal                   signal
# define C_getrusage                getrusage
# define C_tolower                  tolower
# define C_toupper                  toupper
# define C_gettimeofday             gettimeofday
# define C_gmtime                   gmtime
# define C_localtime                localtime
/*
 * It is undefined whether regular setjmp/longjmp save/restore signal mask
 * so try to use versions that we know won't try to save & restore.
 */
# if defined(HAVE_SIGSETJMP)
#   define C_sigsetjmp              sigsetjmp
#   define C_siglongjmp             siglongjmp
# endif
# ifdef HAVE_SIGPROCMASK
#  define C_sigprocmask             sigprocmask
# endif
# define C_setjmp                   setjmp
# define C_longjmp                  longjmp
# define C_alloca                   alloca
# define C_strerror                 strerror
# define C_isalpha                  isalpha
# define C_isdigit                  isdigit
# define C_isspace                  isspace
# define C_islower                  islower
# define C_isupper                  isupper
# define C_readlink                 readlink
# define C_getcwd                   getcwd
# define C_access                   access
# if defined(_MSC_VER)
#  define C_getpid                  _getpid
# else
#  define C_getpid                  getpid
# endif
# define C_getenv                   getenv
# ifdef __linux__
extern double round(double);
extern double trunc(double);
# elif defined(_MSC_VER)
# define round(fp) ((int)((fp) >= 0 ? (fp) + 0.5 : (fp) - 0.5))
# define trunc(fp) ((int)(fp))
# endif
#else
/* provide this file and define C_PROVIDE_LIBC_STUBS if you want to use
   your own libc-replacements or -wrappers */
# include "chicken-libc-stubs.h"
#endif

#ifdef C_LLP
# define C_strtow                  C_strtoll
#else
# define C_strtow                  C_strtol
#endif

#endif /* RUNTIME_ALIASES_H */
