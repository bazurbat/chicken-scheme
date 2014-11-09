#include "chicken.h"
#include "runtime/errors.h"
#include "runtime/symbol_table.h"
#include "runtime/fixnum.h"
#include "runtime/arithmetic.h"

#include <assert.h>
#include <signal.h>

#ifdef HAVE_SYSEXITS_H
# include <sysexits.h>
#endif

#if !defined(C_NONUNIX)

# include <sys/time.h>
# include <sys/resource.h>
# include <sys/wait.h>

#else

#endif

#if defined(_WIN32)
/* Include winsock2 to get select() for check_fd_ready() */
# include <winsock2.h>
# include <windows.h>
#endif
