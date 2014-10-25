#ifndef _CSI_H_
#define _CSI_H_

#include <signal.h>

#if defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

#endif
