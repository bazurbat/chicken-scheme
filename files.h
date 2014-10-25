#ifndef _FILES_H
#define _FILES_H

#include <errno.h>

#ifndef _WIN32
# include <sys/stat.h>
# define C_mkdir(str)       C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#elif _MSC_VER
# ifdef HAVE_DIRECT_H
#  include <direct.h>
# endif
# define C_mkdir(str)       C_fix(_mkdir(C_c_string(str)))
#else
# define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#endif

#endif
