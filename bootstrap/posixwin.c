/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-01-04 09:30
   Version 4.2.2-private
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2009-10-20 on lenovo-1 (MINGW32_NT-6.0)
   command line: posixwin.scm -optimize-level 2 -include-path . -include-path ./ -inline -explicit-use -no-trace -output-file posixwin.c
   unit: posix
*/

#include "chicken.h"

#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

/*
MinGW should have winsock2.h and ws2tcpip.h as well.
The CMake build will set HAVE_WINSOCK2_H and HAVE_WS2TCPIP_H.
However, the _MSC_VER test is still needed for vcbuild.bat.
./configure doesn't test for these.  It should, for MinGW.
*/
#if (_MSC_VER > 1300) || (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
# include <winsock2.h>
# include <ws2tcpip.h>
#else
# include <winsock.h>
#endif

#include <signal.h>
#include <errno.h>
#include <io.h>
#include <stdio.h>
#include <process.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <direct.h>

#include <time.h>

#define ARG_MAX		256
#define PIPE_BUF	512
#ifndef ENV_MAX
# define ENV_MAX	1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct group *C_group;
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct tm C_tm;
static C_TLS struct stat C_statbuf;

/* pipe handles */
static C_TLS HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static C_TLS HANDLE C_save0, C_save1; /* saved I/O handles */
static C_TLS char C_rdbuf; /* one-char buffer for read */
static C_TLS int C_exstatus;

/* platform information; initialized for cached testing */
static C_TLS char C_hostname[256] = "";
static C_TLS char C_osver[16] = "";
static C_TLS char C_osrel[16] = "";
static C_TLS char C_processor[16] = "";
static C_TLS char C_shlcmd[256] = "";

/* Windows NT or better */
static int C_isNT = 0;

/* Current user name */
static C_TLS TCHAR C_username[255 + 1] = "";

/* Directory Operations */

#define C_mkdir(str)	    C_fix(mkdir(C_c_string(str)))
#define C_chdir(str)	    C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)	    C_fix(rmdir(C_c_string(str)))

#ifndef __WATCOMC__
/* DIRENT stuff */
struct dirent
{
    char *		d_name;
};

typedef struct
{
    struct _finddata_t	fdata;
    int			handle;
    struct dirent	current;
} DIR;

static DIR * C_fcall
opendir(const char *name)
{
    int name_len = strlen(name);
    DIR *dir = (DIR *)malloc(sizeof(DIR));
    char *what;
    if (!dir)
    {
	errno = ENOMEM;
	return NULL;
    }
    what = (char *)malloc(name_len + 3);
    if (!what)
    {
	free(dir);
	errno = ENOMEM;
	return NULL;
    }
    strcpy(what, name);
    if (strchr("\\/", name[name_len - 1]))
	strcat(what, "*");
    else
	strcat(what, "\\*");

    dir->handle = _findfirst(what, &dir->fdata);
    if (dir->handle == -1)
    {
	free(what);
	free(dir);
	return NULL;
    }
    dir->current.d_name = NULL; /* as the first-time indicator */
    free(what);
    return dir;
}

static int C_fcall
closedir(DIR * dir)
{
    if (dir)
    {
	int res = _findclose(dir->handle);
	free(dir);
	return res;
    }
    return -1;
}

static struct dirent * C_fcall
readdir(DIR * dir)
{
    if (dir)
    {
	if (!dir->current.d_name /* first time after opendir */
	     || _findnext(dir->handle, &dir->fdata) != -1)
	{
	    dir->current.d_name = dir->fdata.name;
	    return &dir->current;
	}
    }
    return NULL;
}
#endif /* ifndef __WATCOMC__ */

#ifdef __WATCOMC__
# define mktemp _mktemp
/* there is no P_DETACH in Watcom CRTL */
# define P_DETACH P_NOWAIT
#endif

#define C_opendir(x,h)		C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)		(closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)		C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b)	(strcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

#define C_curdir(buf)	    (getcwd(C_c_string(buf), 256) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)			     C_fix(_pclose(C_port_file(p)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#define C_getpid	    getpid
#define C_chmod(fn, m)	    C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)	    C_fix(fileno(C_port_file(p)))
#define C_dup(x)	    C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)	    C_fix(dup2(C_unfix(x), C_unfix(y)))
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_access(fn, m)	    C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_pipe(d, m)	    C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)	    C_fix(close(C_unfix(fd)))

#define C_getenventry(i)   environ[ i ]

#define C_putenv(s)	    C_fix(putenv((char *)C_data_pointer(s)))
#define C_stat(fn)	    C_fix(stat((char *)C_data_pointer(fn), &C_statbuf))
#define C_fstat(f)	    C_fix(fstat(C_unfix(f), &C_statbuf))

static C_word C_fcall
C_setenv(C_word x, C_word y)
{
    char *sx = C_data_pointer(x),
	 *sy = C_data_pointer(y);
    int n1 = C_strlen(sx),
	n2 = C_strlen(sy);
    char *buf = (char *)C_malloc(n1 + n2 + 2);
    if (buf == NULL)
	return(C_fix(0));
    else
    {
	C_strcpy(buf, sx);
	buf[ n1 ] = '=';
	C_strcpy(buf + n1 + 1, sy);
	return(C_fix(putenv(buf)));
    }
}

static void C_fcall
C_set_arg_string(char **where, int i, char *dat, int len)
{
    char *ptr;
    if (dat)
    {
	ptr = (char *)C_malloc(len + 1);
	C_memcpy(ptr, dat, len);
	ptr[ len ] = '\0';
    }
    else
	ptr = NULL;
    where[ i ] = ptr;
}

static void C_fcall
C_free_arg_string(char **where) {
  while (*where) C_free(*(where++));
}

#define C_set_exec_arg(i, a, len)	C_set_arg_string(C_exec_args, i, a, len)
#define C_set_exec_env(i, a, len)	C_set_arg_string(C_exec_env, i, a, len)

#define C_free_exec_args()		(C_free_arg_string(C_exec_args), C_SCHEME_TRUE)
#define C_free_exec_env()		(C_free_arg_string(C_exec_env), C_SCHEME_TRUE)

#define C_execvp(f)	    C_fix(execvp(C_data_pointer(f), (const char *const *)C_exec_args))
#define C_execve(f)	    C_fix(execve(C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

/* MS replacement for the fork-exec pair */
#define C_spawnvp(m, f)	    C_fix(spawnvp(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args))
#define C_spawnvpe(m, f)    C_fix(spawnvpe(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)	    C_fix(mktemp(C_c_string(t)))

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(p)          C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int(n), C_unfix(w)))
#define C_lseek(fd, o, w)   C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#define C_flushall()	    C_fix(_flushall())

#define C_ctime(n)	    (C_secs = (n), ctime(&C_secs))

#define C_tm_set_08(v) \
        (memset(&C_tm, 0, sizeof(struct tm)), \
        C_tm.tm_sec = C_unfix(C_block_item(v, 0)), \
        C_tm.tm_min = C_unfix(C_block_item(v, 1)), \
        C_tm.tm_hour = C_unfix(C_block_item(v, 2)), \
        C_tm.tm_mday = C_unfix(C_block_item(v, 3)), \
        C_tm.tm_mon = C_unfix(C_block_item(v, 4)), \
        C_tm.tm_year = C_unfix(C_block_item(v, 5)), \
        C_tm.tm_wday = C_unfix(C_block_item(v, 6)), \
        C_tm.tm_yday = C_unfix(C_block_item(v, 7)), \
        C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE))

#define C_tm_set(v) (C_tm_set_08(v), &C_tm)

#define C_asctime(v)    (asctime(C_tm_set(v)))
#define C_a_mktime(ptr, c, v)  C_flonum(ptr, mktime(C_tm_set(v)))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

#define C_strftime(v, f) \
        (strftime(C_time_string, sizeof(C_time_string), C_c_string(f), C_tm_set(v)) ? C_time_string : NULL)

/*
  mapping from Win32 error codes to errno
*/

typedef struct
{
    DWORD   win32;
    int	    libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,	  EINVAL},
    {ERROR_FILE_NOT_FOUND,	  ENOENT},
    {ERROR_PATH_NOT_FOUND,	  ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,	  EMFILE},
    {ERROR_ACCESS_DENIED,	  EACCES},
    {ERROR_INVALID_HANDLE,	  EBADF},
    {ERROR_ARENA_TRASHED,	  ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,	  ENOMEM},
    {ERROR_INVALID_BLOCK,	  ENOMEM},
    {ERROR_BAD_ENVIRONMENT,	  E2BIG},
    {ERROR_BAD_FORMAT,		  ENOEXEC},
    {ERROR_INVALID_ACCESS,	  EINVAL},
    {ERROR_INVALID_DATA,	  EINVAL},
    {ERROR_INVALID_DRIVE,	  ENOENT},
    {ERROR_CURRENT_DIRECTORY,	  EACCES},
    {ERROR_NOT_SAME_DEVICE,	  EXDEV},
    {ERROR_NO_MORE_FILES,	  ENOENT},
    {ERROR_LOCK_VIOLATION,	  EACCES},
    {ERROR_BAD_NETPATH,		  ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,	  ENOENT},
    {ERROR_FILE_EXISTS,		  EEXIST},
    {ERROR_CANNOT_MAKE,		  EACCES},
    {ERROR_FAIL_I24,		  EACCES},
    {ERROR_INVALID_PARAMETER,	  EINVAL},
    {ERROR_NO_PROC_SLOTS,	  EAGAIN},
    {ERROR_DRIVE_LOCKED,	  EACCES},
    {ERROR_BROKEN_PIPE,		  EPIPE},
    {ERROR_DISK_FULL,		  ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,	  EINVAL},
    {ERROR_WAIT_NO_CHILDREN,	  ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,	  ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,	  EINVAL},
    {ERROR_SEEK_ON_DEVICE,	  EACCES},
    {ERROR_DIR_NOT_EMPTY,	  ENOTEMPTY},
    {ERROR_NOT_LOCKED,		  EACCES},
    {ERROR_BAD_PATHNAME,	  ENOENT},
    {ERROR_MAX_THRDS_REACHED,	  EAGAIN},
    {ERROR_LOCK_FAILED,		  EACCES},
    {ERROR_ALREADY_EXISTS,	  EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,	  EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,	  ENOMEM},
    {0, 0}
};

static void C_fcall
set_errno(DWORD w32err)
{
    errmap_t *map = errmap;
    for (; errmap->win32; ++map)
    {
	if (errmap->win32 == w32err)
	{
	    errno = errmap->libc;
	    return;
	}
    }
}

static int C_fcall
set_last_errno()
{
    set_errno(GetLastError());
    return 0;
}

/* Functions for creating process with redirected I/O */

static int C_fcall
zero_handles()
{
    C_rd0 = C_wr0 = C_wr0_ = INVALID_HANDLE_VALUE;
    C_rd1 = C_wr1 = C_rd1_ = INVALID_HANDLE_VALUE;
    C_save0 = C_save1 = INVALID_HANDLE_VALUE;
    return 1;
}

static int C_fcall
close_handles()
{
    if (C_rd0 != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd0);
    if (C_rd1 != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd1);
    if (C_wr0 != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr0);
    if (C_wr1 != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr1);
    if (C_rd1_ != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd1_);
    if (C_wr0_ != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr0_);
    if (C_save0 != INVALID_HANDLE_VALUE)
    {
	SetStdHandle(STD_INPUT_HANDLE, C_save0);
	CloseHandle(C_save0);
    }
    if (C_save1 != INVALID_HANDLE_VALUE)
    {
	SetStdHandle(STD_OUTPUT_HANDLE, C_save1);
	CloseHandle(C_save1);
    }
    return zero_handles();
}

static int C_fcall
redir_io()
{
    SECURITY_ATTRIBUTES sa;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;

    zero_handles();

    C_save0 = GetStdHandle(STD_INPUT_HANDLE);
    C_save1 = GetStdHandle(STD_OUTPUT_HANDLE);
    if (!CreatePipe(&C_rd0, &C_wr0, &sa, 0)
	    || !SetStdHandle(STD_INPUT_HANDLE, C_rd0)
	    || !DuplicateHandle(GetCurrentProcess(), C_wr0, GetCurrentProcess(),
		&C_wr0_, 0, FALSE, DUPLICATE_SAME_ACCESS)
	    || !CreatePipe(&C_rd1, &C_wr1, &sa, 0)
	    || !SetStdHandle(STD_OUTPUT_HANDLE, C_wr1)
	    || !DuplicateHandle(GetCurrentProcess(), C_rd1, GetCurrentProcess(),
		&C_rd1_, 0, FALSE, DUPLICATE_SAME_ACCESS))
    {
	set_last_errno();
	close_handles();
	return 0;
    }

    CloseHandle(C_wr0);
    C_wr0 = INVALID_HANDLE_VALUE;
    CloseHandle(C_rd1);
    C_rd1 = INVALID_HANDLE_VALUE;
    return 1;
}

static int C_fcall
run_process(char *cmdline)
{
    PROCESS_INFORMATION pi;
    STARTUPINFO si;

    ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));
    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);

    C_wr0_ = C_rd1_ = INVALID_HANDLE_VALUE; /* these handles are saved */

    if (CreateProcess(NULL, cmdline, NULL, NULL, TRUE, 0, NULL,
		      NULL, &si, &pi))
    {
	CloseHandle(pi.hThread);

	SetStdHandle(STD_INPUT_HANDLE, C_save0);
	SetStdHandle(STD_OUTPUT_HANDLE, C_save1);
	C_save0 = C_save1 = INVALID_HANDLE_VALUE;

	CloseHandle(C_rd0);
	CloseHandle(C_wr1);
	C_rd0 = C_wr1 = INVALID_HANDLE_VALUE;
	return (int)pi.hProcess;
    }
    else
	return set_last_errno();
}

static int C_fcall
pipe_write(int hpipe, void* buf, int count)
{
    DWORD done = 0;
    if (WriteFile((HANDLE)hpipe, buf, count, &done, NULL))
	return 1;
    else
	return set_last_errno();
}

static int C_fcall
pipe_read(int hpipe)
{
    DWORD done = 0;
    /* TODO:
    if (!pipe_ready(hpipe))
	go_to_sleep;
    */
    if (ReadFile((HANDLE)hpipe, &C_rdbuf, 1, &done, NULL))
    {
	if (done > 0) /* not EOF yet */
	    return 1;
	else
	    return -1;
    }
    return set_last_errno();
}

static int C_fcall
pipe_ready(int hpipe)
{
    DWORD avail = 0;
    if (PeekNamedPipe((HANDLE)hpipe, NULL, 0, NULL, &avail, NULL) && avail)
	return 1;
    else
    {
	Sleep(0); /* give pipe a chance */
	if (PeekNamedPipe((HANDLE)hpipe, NULL, 0, NULL, &avail, NULL))
	    return (avail > 0);
	else
	    return 0;
    }
}

#define C_zero_handles() C_fix(zero_handles())
#define C_close_handles() C_fix(close_handles())
#define C_redir_io() (redir_io() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_run_process(cmdline) C_fix(run_process(C_c_string(cmdline)))
#define C_pipe_write(h, b, n) (pipe_write(C_unfix(h), C_c_string(b), C_unfix(n)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_pipe_read(h) C_fix(pipe_read(C_unfix(h)))
#define C_pipe_ready(h) (pipe_ready(C_unfix(h)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define close_handle(h) CloseHandle((HANDLE)h)

static int C_fcall
process_wait(int h, int t)
{
    if (WaitForSingleObject((HANDLE)h, (t ? 0 : INFINITE)) == WAIT_OBJECT_0)
    {
	DWORD ret;
	if (GetExitCodeProcess((HANDLE)h, &ret))
	{
	    CloseHandle((HANDLE)h);
	    C_exstatus = ret;
	    return 1;
	}
    }
    return set_last_errno();
}

#define C_process_wait(p, t) (process_wait(C_unfix(p), C_truep(t)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sleep(t) (Sleep(C_unfix(t) * 1000), C_SCHEME_UNDEFINED)

static int C_fcall
get_hostname()
{
    /* Do we already have hostname? */
    if (strlen(C_hostname))
    {
	return 1;
    }
    else
    {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(1, 1), &wsa) == 0)
	{
	    int nok = gethostname(C_hostname, sizeof(C_hostname));
	    WSACleanup();
	    return !nok;
	}
	return 0;
    }
}

static int C_fcall
sysinfo()
{
    /* Do we need to build the sysinfo? */
    if (!strlen(C_osrel))
    {
	OSVERSIONINFO ovf;
	ZeroMemory(&ovf, sizeof(ovf));
	ovf.dwOSVersionInfoSize = sizeof(ovf);
	if (get_hostname() && GetVersionEx(&ovf))
	{
	    SYSTEM_INFO si;
	    _snprintf(C_osver, sizeof(C_osver) - 1, "%d.%d.%d",
			ovf.dwMajorVersion, ovf.dwMinorVersion, ovf.dwBuildNumber);
	    strncpy(C_osrel, "Win", sizeof(C_osrel) - 1);
	    switch (ovf.dwPlatformId)
	    {
	    case VER_PLATFORM_WIN32s:
		strncpy(C_osrel, "Win32s", sizeof(C_osrel) - 1);
		break;
	    case VER_PLATFORM_WIN32_WINDOWS:
		if (ovf.dwMajorVersion == 4)
		{
		    if (ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win95", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 10)
			strncpy(C_osrel, "Win98", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 90)
			strncpy(C_osrel, "WinMe", sizeof(C_osrel) - 1);
		}
		break;
	    case VER_PLATFORM_WIN32_NT:
		C_isNT = 1;
		if (ovf.dwMajorVersion == 6)
		    strncpy(C_osrel, "WinVista", sizeof(C_osrel) - 1);
		else if (ovf.dwMajorVersion == 5)
		{
		    if (ovf.dwMinorVersion == 2)
			strncpy(C_osrel, "WinServer2003", sizeof(C_osrel) - 1);
		    else if (ovf.dwMinorVersion == 1)
			strncpy(C_osrel, "WinXP", sizeof(C_osrel) - 1);
		    else if ( ovf.dwMinorVersion == 0)
			strncpy(C_osrel, "Win2000", sizeof(C_osrel) - 1);
		}
		else if (ovf.dwMajorVersion <= 4)
		   strncpy(C_osrel, "WinNT", sizeof(C_osrel) - 1);
		break;
	    }
	    GetSystemInfo(&si);
	    strncpy(C_processor, "Unknown", sizeof(C_processor) - 1);
	    switch (si.wProcessorArchitecture)
	    {
	    case PROCESSOR_ARCHITECTURE_INTEL:
		strncpy(C_processor, "x86", sizeof(C_processor) - 1);
		break;
#	    ifdef PROCESSOR_ARCHITECTURE_IA64
	    case PROCESSOR_ARCHITECTURE_IA64:
		strncpy(C_processor, "IA64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_AMD64
	    case PROCESSOR_ARCHITECTURE_AMD64:
		strncpy(C_processor, "x64", sizeof(C_processor) - 1);
		break;
#	    endif
#	    ifdef PROCESSOR_ARCHITECTURE_IA32_ON_WIN64
	    case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64:
		strncpy(C_processor, "WOW64", sizeof(C_processor) - 1);
		break;
#	    endif
	    }
	}
	else
	    return set_last_errno();
    }
    return 1;
}

static int C_fcall
get_shlcmd()
{
    /* Do we need to build the shell command pathname? */
    if (!strlen(C_shlcmd))
    {
	if (sysinfo())
	{
	    char *cmdnam = C_isNT ? "\\cmd.exe" : "\\command.com";
	    UINT len = GetSystemDirectory(C_shlcmd, sizeof(C_shlcmd) - strlen(cmdnam));
	    if (len)
		strcpy(C_shlcmd + len, cmdnam);
	    else
		return set_last_errno();
	}
	else
	    return 0;
    }
    return 1;
}

#define C_get_hostname() (get_hostname() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sysinfo() (sysinfo() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_get_shlcmd() (get_shlcmd() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* GetUserName */

static int C_fcall
get_user_name()
{
    if (!strlen(C_username))
    {
	DWORD bufCharCount = sizeof(C_username) / sizeof(C_username[0]);
	if (!GetUserName(C_username, &bufCharCount))
	    return set_last_errno();
    }
    return 1;
}

#define C_get_user_name() (get_user_name() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/* User Information */

#if 0
static int C_fcall
get_netinfo()
{
    HINSTANCE hNet = 0,
	      hLoc = 0;

    if (isNT)
	hNet = LoadLibrary("netapi32.dll");
    else
    {
	hLoc = LoadLibrary("rlocal32.dll");
	hNet = LoadLibrary("radmin32.dll");
	//hNet = LoadLibrary("netapi.dll");
    }

    if (!hNet)
	return 0;

    
}
#endif

/*
    Spawn a process directly.
    Params:
    app		Command to execute.
    cmdlin	Command line (arguments).
    env		Environment for the new process (may be NULL).
    handle, stdin, stdout, stderr
		Spawned process info are returned in integers.
		When spawned process shares standard io stream with the parent
		process the respective value in handle, stdin, stdout, stderr
		is -1.
    params	A bitmask controling operation.
		Bit 1: Child & parent share standard input if this bit is set.
		Bit 2: Share standard output if bit is set.
		Bit 3: Share standard error if bit is set.

    Returns: zero return value indicates failure.
*/
static int C_fcall
C_process(const char * app, const char * cmdlin, const char ** env,
	  int * phandle,
	  int * pstdin_fd, int * pstdout_fd, int * pstderr_fd,
	  int params)
{
    int i;
    int success = TRUE;
    const int f_share_io[3] = { params & 1, params & 2, params & 4};
    int io_fds[3] = { -1, -1, -1 };
    HANDLE
	child_io_handles[3] = { NULL, NULL, NULL },
	standard_io_handles[3] = {
	    GetStdHandle(STD_INPUT_HANDLE),
	    GetStdHandle(STD_OUTPUT_HANDLE),
	    GetStdHandle(STD_ERROR_HANDLE)};
    const char modes[3] = "rww";
    HANDLE cur_process = GetCurrentProcess(), child_process = NULL;
    void* envblk = NULL;

    /****** create io handles & fds ***/

    for (i=0; i<3 && success; ++i)
    {
	if (f_share_io[i])
	{
	    success = DuplicateHandle(
		cur_process, standard_io_handles[i],
		cur_process, &child_io_handles[i],
		0, FALSE, DUPLICATE_SAME_ACCESS);
	}
	else
	{
	    HANDLE a, b;
	    success = CreatePipe(&a,&b,NULL,0);
	    if(success)
	    {
		HANDLE parent_end;
		if (modes[i]=='r') { child_io_handles[i]=a; parent_end=b; }
		else		   { parent_end=a; child_io_handles[i]=b; }
		success = (io_fds[i] = _open_osfhandle((long)parent_end,0)) >= 0;
	    }
	}
    }

    /****** make handles inheritable */

    for (i=0; i<3 && success; ++i)
	success = SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);

#if 0 /* Requires a sorted list by key! */
    /****** create environment block if necessary ****/

    if (env && success)
    {
	char** p;
	int len = 0;

	for (p = env; *p; ++p) len += strlen(*p) + 1;

	if (envblk = C_malloc(len + 1))
	{
	    char* pb = (char*)envblk;
	    for (p = env; *p; ++p)
	    {
		strcpy(pb, *p);
		pb += strlen(*p) + 1;
	    }
	    *pb = '\0';
	}
	else
	    success = FALSE;
    }
#endif

    /****** finally spawn process ****/

    if (success)
    {
	PROCESS_INFORMATION pi;
	STARTUPINFO si;

	ZeroMemory(&pi,sizeof pi);
	ZeroMemory(&si,sizeof si);
	si.cb = sizeof si;
	si.dwFlags = STARTF_USESTDHANDLES;
	si.hStdInput = child_io_handles[0];
	si.hStdOutput = child_io_handles[1];
	si.hStdError = child_io_handles[2];

	/* FIXME passing 'app' param causes failure & possible stack corruption */
	success = CreateProcess(
	    NULL, (char*)cmdlin, NULL, NULL, TRUE, 0, envblk, NULL, &si, &pi);

	if (success)
	{
	    child_process=pi.hProcess;
	    CloseHandle(pi.hThread);
	}
	else
	    set_last_errno();
    }
    else
	set_last_errno();

    /****** cleanup & return *********/

    /* parent must close child end */
    for (i=0; i<3; ++i) CloseHandle(child_io_handles[i]);

    if (success)
    {
	*phandle = (int)child_process;
	*pstdin_fd = io_fds[0];
	*pstdout_fd = io_fds[1];
	*pstderr_fd = io_fds[2];
    }
    else
    {
	for (i=0; i<3; ++i) _close(io_fds[i]);
    }

    return success;
}

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_files_toplevel)
C_externimport void C_ccall C_files_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[392];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,41),40,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,49,54,32,108,111,99,49,55,32,109,115,103,49,56,32,46,32,97,114,103,115,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,39),40,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,50,50,32,102,108,97,103,115,50,51,32,46,32,109,111,100,101,50,52,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,99,108,111,115,101,32,102,100,51,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,34),40,102,105,108,101,45,114,101,97,100,32,102,100,52,48,32,115,105,122,101,52,49,32,46,32,98,117,102,102,101,114,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,35),40,102,105,108,101,45,119,114,105,116,101,32,102,100,53,54,32,98,117,102,102,101,114,53,55,32,46,32,115,105,122,101,53,56,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,55,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,19),40,35,35,115,121,115,35,115,116,97,116,32,102,105,108,101,56,52,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,115,116,97,116,32,102,49,48,50,32,46,32,116,109,112,49,48,49,49,48,51,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,16),40,102,105,108,101,45,115,105,122,101,32,102,49,49,50,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,29),40,102,105,108,101,45,109,111,100,105,102,105,99,97,116,105,111,110,45,116,105,109,101,32,102,49,49,53,41,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,49,49,56,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,49,50,49,41,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,111,119,110,101,114,32,102,49,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,32,102,49,50,55,41,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,24),40,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,110,97,109,101,49,51,48,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,25),40,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,110,97,109,101,49,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,102,54,52,55,51,32,102,110,97,109,101,49,52,48,54,52,55,50,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,20),40,102,54,52,54,55,32,102,110,97,109,101,49,52,48,54,52,54,54,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,20),40,102,54,52,54,49,32,102,110,97,109,101,49,52,48,54,52,54,48,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,20),40,102,54,52,53,53,32,102,110,97,109,101,49,52,48,54,52,53,52,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,49,52,53,32,112,111,115,49,52,54,32,46,32,119,104,101,110,99,101,49,52,55,41,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,57,57,32,103,50,48,51,50,48,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,49,56,53,32,46,32,116,109,112,49,56,52,49,56,54,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,26),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,35),40,98,111,100,121,50,53,49,32,115,112,101,99,50,54,48,32,115,104,111,119,45,100,111,116,102,105,108,101,115,63,50,54,49,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,35),40,100,101,102,45,115,104,111,119,45,100,111,116,102,105,108,101,115,63,50,53,52,32,37,115,112,101,99,50,52,57,50,57,52,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,115,112,101,99,50,53,51,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,52,52,50,52,53,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,21),40,100,105,114,101,99,116,111,114,121,63,32,102,110,97,109,101,51,48,49,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,51,49,50,51,49,51,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,50,55,53,55,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,19),40,97,50,55,53,49,32,101,120,118,97,114,51,53,53,51,54,54,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,50,55,55,53,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,50,55,56,55,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,20),40,97,50,55,56,49,32,46,32,97,114,103,115,51,54,51,51,55,55,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,50,55,54,57,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,15),40,97,50,55,52,53,32,107,51,54,50,51,54,53,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,5),40,99,119,100,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,51,57,57,32,114,52,48,48,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,45,112,97,116,104,32,112,97,116,104,51,55,56,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,26),40,99,104,101,99,107,32,99,109,100,52,48,56,32,105,110,112,52,48,57,32,114,52,49,48,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,52,49,52,32,46,32,109,52,49,53,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,52,50,51,32,46,32,109,52,50,52,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,52,51,50,41,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,51,50,56,53,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,20),40,97,51,50,57,49,32,46,32,114,101,115,117,108,116,115,52,53,50,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,52,52,56,32,112,114,111,99,52,52,57,32,46,32,109,111,100,101,52,53,48,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,51,51,48,57,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,20),40,97,51,51,49,53,32,46,32,114,101,115,117,108,116,115,52,53,56,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,52,53,52,32,112,114,111,99,52,53,53,32,46,32,109,111,100,101,52,53,54,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,20),40,97,51,51,51,52,32,46,32,114,101,115,117,108,116,115,52,54,53,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,52,54,48,32,116,104,117,110,107,52,54,49,32,46,32,109,111,100,101,52,54,50,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,97,51,51,53,52,32,46,32,114,101,115,117,108,116,115,52,55,52,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,47),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,52,54,57,32,116,104,117,110,107,52,55,48,32,46,32,109,111,100,101,52,55,49,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,112,105,112,101,32,46,32,116,109,112,52,56,54,52,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,104,97,110,100,108,101,114,32,115,105,103,52,57,57,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,53,48,49,32,112,114,111,99,53,48,50,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,53,48,55,32,115,116,97,116,101,53,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,32),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,53,49,51,32,109,53,49,52,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,53,50,49,32,97,99,99,53,50,50,32,108,111,99,53,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,50,57,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,51,48,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,34),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,18),40,109,111,100,101,32,105,110,112,53,51,55,32,109,53,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,25),40,99,104,101,99,107,32,102,100,53,53,49,32,105,110,112,53,53,50,32,114,53,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,53,53,55,32,46,32,109,53,53,56,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,53,54,48,32,46,32,109,53,54,49,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,22),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,53,54,54,41,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,34),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,53,55,51,32,46,32,110,101,119,53,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,22),40,115,101,116,101,110,118,32,118,97,114,53,56,51,32,118,97,108,53,56,52,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,17),40,117,110,115,101,116,101,110,118,32,118,97,114,53,56,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,54,48,51,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,54,48,48,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,54,48,55,32,116,109,54,48,56,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,54,49,56,54,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,54,51,50,54,51,51,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,29),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,54,53,49,54,53,50,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,32),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,54,55,57,32,46,32,116,109,112,54,55,56,54,56,48,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,27),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,54,57,53,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,17),40,95,101,120,105,116,32,46,32,99,111,100,101,55,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,55,48,56,41};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,55,49,48,32,109,111,100,101,55,49,49,32,46,32,115,105,122,101,55,49,50,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,49,57,53,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,55,53,55,41,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,46),40,97,52,50,48,49,32,100,105,114,55,51,54,55,51,55,55,52,50,32,102,105,108,55,51,56,55,51,57,55,52,51,32,101,120,116,55,52,48,55,52,49,55,52,52,41,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,55,51,50,41,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,55,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,55,56,52,41,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,21),40,110,101,101,100,115,45,113,117,111,116,105,110,103,63,32,115,55,56,49,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,105,108,115,116,55,57,51,32,111,108,115,116,55,57,52,41,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,35),40,36,113,117,111,116,101,45,97,114,103,115,45,108,105,115,116,32,108,115,116,55,55,56,32,101,120,97,99,116,102,55,55,57,41,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,32),40,115,101,116,97,114,103,32,97,56,48,51,56,48,55,32,97,56,48,50,56,48,56,32,97,56,48,49,56,48,57,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,32),40,115,101,116,101,110,118,32,97,56,49,51,56,49,55,32,97,56,49,50,56,49,56,32,97,56,49,49,56,49,57,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,56,50,53,32,108,56,50,57,32,105,56,51,48,41,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,57),40,98,117,105,108,100,45,101,120,101,99,45,97,114,103,118,101,99,32,108,111,99,56,50,49,32,108,115,116,56,50,50,32,97,114,103,118,101,99,45,115,101,116,116,101,114,56,50,51,32,105,100,120,56,50,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,62),40,36,101,120,101,99,45,115,101,116,117,112,32,108,111,99,56,51,54,32,102,105,108,101,110,97,109,101,56,51,55,32,97,114,103,108,115,116,56,51,56,32,101,110,118,108,115,116,56,51,57,32,101,120,97,99,116,102,56,52,48,41,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,49),40,36,101,120,101,99,45,116,101,97,114,100,111,119,110,32,108,111,99,56,53,48,32,109,115,103,56,53,49,32,102,105,108,101,110,97,109,101,56,53,50,32,114,101,115,56,53,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,39),40,98,111,100,121,56,55,50,32,97,114,103,108,115,116,56,56,50,32,101,110,118,108,115,116,56,56,51,32,101,120,97,99,116,102,56,56,52,41,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,56,55,54,32,37,97,114,103,108,115,116,56,54,57,56,56,55,32,37,101,110,118,108,115,116,56,55,48,56,56,56,41,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,101,110,118,108,115,116,56,55,53,32,37,97,114,103,108,115,116,56,54,57,56,57,48,41,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,97,114,103,108,115,116,56,55,52,41,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,41),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,56,54,52,32,46,32,116,109,112,56,54,51,56,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,39),40,98,111,100,121,57,49,52,32,97,114,103,108,115,116,57,50,52,32,101,110,118,108,115,116,57,50,53,32,101,120,97,99,116,102,57,50,54,41,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,57,49,56,32,37,97,114,103,108,115,116,57,49,49,57,50,57,32,37,101,110,118,108,115,116,57,49,50,57,51,48,41,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,101,110,118,108,115,116,57,49,55,32,37,97,114,103,108,115,116,57,49,49,57,51,50,41,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,97,114,103,108,115,116,57,49,54,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,47),40,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,57,48,53,32,102,105,108,101,110,97,109,101,57,48,54,32,46,32,116,109,112,57,48,52,57,48,55,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,57,53,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,114,117,110,32,102,57,53,51,32,46,32,97,114,103,115,57,53,52,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,91),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,57,57,53,32,99,109,100,57,57,54,32,97,114,103,115,57,57,55,32,101,110,118,57,57,56,32,115,116,100,111,117,116,102,57,57,57,32,115,116,100,105,110,102,49,48,48,48,32,115,116,100,101,114,114,102,49,48,48,49,32,46,32,116,109,112,57,57,52,49,48,48,50,41,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,21),40,97,52,57,50,54,32,103,49,48,55,51,49,48,55,52,49,48,55,53,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,49,48,54,50,41,0,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,7),40,97,52,57,52,52,41,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,38),40,97,52,57,53,48,32,105,110,49,48,56,51,32,111,117,116,49,48,56,52,32,112,105,100,49,48,56,53,32,101,114,114,49,48,56,54,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,63),40,37,112,114,111,99,101,115,115,32,108,111,99,49,48,53,53,32,101,114,114,63,49,48,53,54,32,99,109,100,49,48,53,55,32,97,114,103,115,49,48,53,56,32,101,110,118,49,48,53,57,32,101,120,97,99,116,102,49,48,54,48,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,49,48,52,32,97,114,103,115,49,49,49,52,32,101,110,118,49,49,49,53,32,101,120,97,99,116,102,49,49,49,54,41,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,49,49,48,56,32,37,97,114,103,115,49,49,48,49,49,49,49,56,32,37,101,110,118,49,49,48,50,49,49,49,57,41,0,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,49,49,48,55,32,37,97,114,103,115,49,49,48,49,49,49,50,49,41,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,49,49,48,54,41,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,49,48,57,54,32,46,32,116,109,112,49,48,57,53,49,48,57,55,41,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,49,52,51,32,97,114,103,115,49,49,53,51,32,101,110,118,49,49,53,52,32,101,120,97,99,116,102,49,49,53,53,41,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,49,49,52,55,32,37,97,114,103,115,49,49,52,48,49,49,53,55,32,37,101,110,118,49,49,52,49,49,49,53,56,41,0,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,49,49,52,54,32,37,97,114,103,115,49,49,52,48,49,49,54,48,41,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,49,49,52,53,41,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,49,49,51,53,32,46,32,116,109,112,49,49,51,52,49,49,51,54,41};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,49,55,48,32,110,111,104,97,110,103,49,49,55,49,41,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,7),40,97,53,49,55,48,41,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,36),40,97,53,49,55,54,32,101,112,105,100,49,49,56,53,32,101,110,111,114,109,49,49,56,54,32,101,99,111,100,101,49,49,56,55,41,0,0,0,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,33),40,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,49,55,50,32,46,32,97,114,103,115,49,49,55,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,13),40,115,108,101,101,112,32,116,49,49,57,48,41,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,14),40,102,95,53,51,57,49,32,120,49,50,51,52,41,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,7),40,97,53,51,51,55,41,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,7),40,97,53,51,52,50,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,7),40,97,53,51,53,54,41,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,102,115,49,50,51,54,32,114,49,50,51,55,41,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,16),40,102,95,53,52,48,55,32,46,32,95,49,50,51,50,41};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,16),40,102,95,53,51,57,57,32,46,32,95,49,50,51,49,41};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,50,48,57,32,97,99,116,105,111,110,49,50,49,57,32,105,100,49,50,50,48,32,108,105,109,105,116,49,50,50,49,41,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,108,105,109,105,116,49,50,49,51,32,37,97,99,116,105,111,110,49,50,48,54,49,50,54,55,32,37,105,100,49,50,48,55,49,50,54,56,41,0,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,28),40,100,101,102,45,105,100,49,50,49,50,32,37,97,99,116,105,111,110,49,50,48,54,49,50,55,48,41,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,19),40,97,53,52,50,55,32,120,49,50,55,50,32,121,49,50,55,51,41,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,97,99,116,105,111,110,49,50,49,49,41};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,51),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,49,50,48,48,32,112,114,101,100,49,50,48,49,32,46,32,97,99,116,105,111,110,45,105,100,45,108,105,109,105,116,49,50,48,50,41,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,46,32,95,49,51,49,52,49,51,49,56,41,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,49,51,50,49,49,51,50,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,49,51,50,55,49,51,51,49,41,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,51,51,51,49,51,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,40),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,49,51,51,57,49,51,52,51,41};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,39),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,49,51,52,53,49,51,52,57,41,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,41),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,49,51,53,49,49,51,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,30),40,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,49,51,53,55,49,51,54,49,41,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,49,51,54,51,49,51,54,55,41,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,46,32,95,49,51,54,57,49,51,55,51,41};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,105,110,107,32,46,32,95,49,51,55,53,49,51,55,57,41,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,111,99,107,32,46,32,95,49,51,56,49,49,51,56,53,41,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,49,51,56,55,49,51,57,49,41};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,49,51,57,51,49,51,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,49,51,57,57,49,52,48,51,41,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,49,52,48,53,49,52,48,57,41,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,49,52,49,49,49,52,49,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,24),40,103,101,116,45,103,114,111,117,112,115,32,46,32,95,49,52,49,55,49,52,50,49,41};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,31),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,52,50,51,49,52,50,55,41,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,31),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,46,32,95,49,52,50,57,49,52,51,51,41,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,40),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,46,32,95,49,52,51,53,49,52,51,57,41};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,31),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,49,52,52,49,49,52,52,53,41,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,49,52,52,55,49,52,53,49,41,0,0,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,49,52,53,51,49,52,53,55,41,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,49,52,53,57,49,52,54,51,41,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,32),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,52,54,53,49,52,54,57,41};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,24),40,115,101,116,45,97,108,97,114,109,33,32,46,32,95,49,52,55,49,49,52,55,53,41};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,52,55,55,49,52,56,49,41,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,25),40,115,101,116,45,103,114,111,117,112,115,33,32,46,32,95,49,52,56,51,49,52,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,35),40,115,101,116,45,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,52,56,57,49,52,57,51,41,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,33),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,49,52,57,53,49,52,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,53,48,49,49,53,48,53,41,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,117,115,101,114,45,105,100,33,32,46,32,95,49,53,48,55,49,53,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,25),40,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,49,53,49,51,49,53,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,26),40,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,53,49,57,49,53,50,51,41,0,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,49,53,50,53,49,53,50,57,41,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,49,53,51,49,49,53,51,53,41,0,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,46,32,95,49,53,51,55,49,53,52,49,41,0,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,46,32,95,49,53,52,51,49,53,52,55,41,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,36),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,46,32,95,49,53,52,57,49,53,53,51,41,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,30),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,53,53,53,49,53,53,57,41,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,31),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,49,53,54,49,49,53,54,53,41,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,26),40,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,49,53,54,55,49,53,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,13),40,102,105,102,111,63,32,95,49,53,55,51,41,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,95,49,53,55,53,41,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,15),40,97,53,55,55,49,32,112,111,114,116,49,54,52,41,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k4765 */
static C_word C_fcall stub965(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7) C_regparm;
C_regparm static C_word C_fcall stub965(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
int *t3=(int *)C_c_pointer_or_null(C_a3);
int *t4=(int *)C_c_pointer_or_null(C_a4);
int *t5=(int *)C_c_pointer_or_null(C_a5);
int *t6=(int *)C_c_pointer_or_null(C_a6);
int t7=(int )C_unfix(C_a7);
C_r=C_mk_bool(C_process(t0,t1,t2,t3,t4,t5,t6,t7));
return C_r;}

/* from current-process-id in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static C_word C_fcall stub940(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub940(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k4394 */
static C_word C_fcall stub814(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub814(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from k4377 */
static C_word C_fcall stub804(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub804(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k4091 */
static C_word C_fcall stub703(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub703(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from local-timezone-abbreviation in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub698(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub698(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);
return(z);
C_ret:
#undef return

return C_r;}

/* from strftime */
static C_word C_fcall stub668(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub668(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from asctime */
static C_word C_fcall stub662(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub662(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k3939 */
static C_word C_fcall stub642(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub642(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k3776 */
static C_word C_fcall stub595(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub595(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k1851 */
static C_word C_fcall stub12(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub12(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1833)
static void C_ccall f_1833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1836)
static void C_ccall f_1836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5788)
static void C_ccall f_5788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5776)
static void C_ccall f_5776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2301)
static void C_ccall f_2301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3439)
static void C_ccall f_3439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5750)
static void C_ccall f_5750(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5743)
static void C_ccall f_5743(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5737)
static void C_ccall f_5737(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5701)
static void C_ccall f_5701(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5689)
static void C_ccall f_5689(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5683)
static void C_ccall f_5683(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5671)
static void C_ccall f_5671(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5665)
static void C_ccall f_5665(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5659)
static void C_ccall f_5659(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5641)
static void C_ccall f_5641(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5635)
static void C_ccall f_5635(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5623)
static void C_ccall f_5623(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5617)
static void C_ccall f_5617(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5611)
static void C_ccall f_5611(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5605)
static void C_ccall f_5605(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5581)
static void C_ccall f_5581(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5551)
static void C_ccall f_5551(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5545)
static void C_ccall f_5545(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5533)
static void C_ccall f_5533(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5521)
static void C_ccall f_5521(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5515)
static void C_ccall f_5515(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5491)
static void C_ccall f_5491(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5271)
static void C_ccall f_5271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5271)
static void C_ccall f_5271r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5422)
static void C_fcall f_5422(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5428)
static void C_ccall f_5428(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5417)
static void C_fcall f_5417(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5412)
static void C_fcall f_5412(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5273)
static void C_fcall f_5273(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5399)
static void C_ccall f_5399(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5407)
static void C_ccall f_5407(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5280)
static void C_fcall f_5280(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5387)
static void C_ccall f_5387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5292)
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5311)
static void C_ccall f_5311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5373)
static void C_ccall f_5373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5367)
static void C_ccall f_5367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5326)
static void C_ccall f_5326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_ccall f_5343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5351)
static void C_ccall f_5351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5225)
static void C_ccall f_5225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5244)
static void C_ccall f_5244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5248)
static void C_ccall f_5248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5213)
static void C_ccall f_5213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5210)
static void C_ccall f_5210(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5177)
static void C_ccall f_5177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5187)
static void C_ccall f_5187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5075)
static void C_fcall f_5075(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5070)
static void C_fcall f_5070(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5065)
static void C_fcall f_5065(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5060)
static void C_fcall f_5060(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4978)
static void C_ccall f_4978r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4995)
static void C_fcall f_4995(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4990)
static void C_fcall f_4990(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4985)
static void C_fcall f_4985(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4980)
static void C_fcall f_4980(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4916)
static void C_fcall f_4916(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4937)
static void C_ccall f_4937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4918)
static void C_fcall f_4918(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...) C_noret;
C_noret_decl(f_4797)
static void C_ccall f_4797r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t10) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4864)
static void C_ccall f_4864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4853)
static void C_ccall f_4853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4837)
static void C_ccall f_4837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4841)
static void C_ccall f_4841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4699)
static void C_ccall f_4699(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4682)
static void C_ccall f_4682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4612)
static void C_fcall f_4612(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4607)
static void C_fcall f_4607(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4602)
static void C_fcall f_4602(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4590)
static void C_fcall f_4590(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4525)
static void C_fcall f_4525(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4520)
static void C_fcall f_4520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4515)
static void C_fcall f_4515(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4503)
static void C_fcall f_4503(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4507)
static void C_ccall f_4507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_fcall f_4486(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4450)
static void C_fcall f_4450(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4460)
static void C_ccall f_4460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4400)
static void C_fcall f_4400(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4412)
static void C_fcall f_4412(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4431)
static void C_ccall f_4431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4287)
static void C_fcall f_4287(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4330)
static void C_fcall f_4330(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4361)
static void C_ccall f_4361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4358)
static void C_ccall f_4358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_fcall f_4301(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4325)
static void C_ccall f_4325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4181)
static void C_fcall f_4181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4206)
static void C_ccall f_4206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4216)
static void C_ccall f_4216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4218)
static void C_fcall f_4218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4249)
static void C_ccall f_4249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_fcall f_4135(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4110)
static void C_ccall f_4110(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4094)
static void C_ccall f_4094r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4067)
static void C_ccall f_4067(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4000)
static void C_ccall f_4000r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4026)
static void C_ccall f_4026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3946)
static void C_ccall f_3946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3868)
static void C_ccall f_3868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3845)
static void C_fcall f_3845(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3779)
static void C_ccall f_3779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3785)
static void C_fcall f_3785(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3797)
static void C_fcall f_3797(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3823)
static void C_ccall f_3823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3815)
static void C_ccall f_3815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3759)
static void C_ccall f_3759(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3767)
static void C_ccall f_3767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3742)
static void C_ccall f_3742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3719)
static void C_fcall f_3719(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3728)
static void C_ccall f_3728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3696)
static void C_ccall f_3696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3675)
static void C_ccall f_3675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3661)
static void C_ccall f_3661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3631)
static void C_fcall f_3631(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3635)
static void C_ccall f_3635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3647)
static void C_ccall f_3647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3594)
static void C_fcall f_3594(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3549)
static void C_fcall f_3549(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3547)
static void C_ccall f_3547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3463)
static void C_ccall f_3463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3473)
static void C_ccall f_3473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3365)
static void C_ccall f_3365r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3369)
static void C_ccall f_3369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3355)
static void C_ccall f_3355r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3359)
static void C_ccall f_3359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3335)
static void C_ccall f_3335r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3339)
static void C_ccall f_3339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3320)
static void C_ccall f_3320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3277)
static void C_ccall f_3277r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_fcall f_3168(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_fcall f_2939(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_fcall f_2969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_fcall f_3011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3063)
static void C_ccall f_3063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3056)
static void C_ccall f_3056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_ccall f_2992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2933)
static void C_ccall f_2933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2809)
static void C_fcall f_2809(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2900)
static void C_ccall f_2900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2865)
static void C_ccall f_2865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2737)
static void C_fcall f_2737(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2770)
static void C_ccall f_2770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2744)
static void C_ccall f_2744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2591)
static void C_fcall f_2591(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_fcall f_2586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2485)
static void C_fcall f_2485(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2502)
static void C_ccall f_2502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_fcall f_2519(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_fcall f_2541(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2450)
static void C_ccall f_2450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2319)
static void C_ccall f_2319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_fcall f_2331(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2345)
static void C_ccall f_2345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_fcall f_2358(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2254)
static void C_ccall f_2254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_ccall f_2266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6455)
static void C_ccall f6455(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6461)
static void C_ccall f6461(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6467)
static void C_ccall f6467(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6473)
static void C_ccall f6473(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_ccall f_2171(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2157)
static void C_ccall f_2157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2084)
static void C_fcall f_2084(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2113)
static void C_ccall f_2113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2053)
static void C_ccall f_2053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2056)
static void C_ccall f_2056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2011)
static void C_ccall f_2011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_ccall f_1972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_5422)
static void C_fcall trf_5422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5422(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5422(t0,t1);}

C_noret_decl(trf_5417)
static void C_fcall trf_5417(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5417(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5417(t0,t1,t2);}

C_noret_decl(trf_5412)
static void C_fcall trf_5412(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5412(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5412(t0,t1,t2,t3);}

C_noret_decl(trf_5273)
static void C_fcall trf_5273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5273(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5273(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5280)
static void C_fcall trf_5280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5280(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5280(t0,t1);}

C_noret_decl(trf_5292)
static void C_fcall trf_5292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5292(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5292(t0,t1,t2,t3);}

C_noret_decl(trf_5075)
static void C_fcall trf_5075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5075(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5075(t0,t1);}

C_noret_decl(trf_5070)
static void C_fcall trf_5070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5070(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5070(t0,t1,t2);}

C_noret_decl(trf_5065)
static void C_fcall trf_5065(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5065(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5065(t0,t1,t2,t3);}

C_noret_decl(trf_5060)
static void C_fcall trf_5060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5060(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5060(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4995)
static void C_fcall trf_4995(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4995(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4995(t0,t1);}

C_noret_decl(trf_4990)
static void C_fcall trf_4990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4990(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4990(t0,t1,t2);}

C_noret_decl(trf_4985)
static void C_fcall trf_4985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4985(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4985(t0,t1,t2,t3);}

C_noret_decl(trf_4980)
static void C_fcall trf_4980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4980(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4980(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4916)
static void C_fcall trf_4916(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4916(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4916(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4918)
static void C_fcall trf_4918(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4918(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4918(t0,t1,t2);}

C_noret_decl(trf_4612)
static void C_fcall trf_4612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4612(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4612(t0,t1);}

C_noret_decl(trf_4607)
static void C_fcall trf_4607(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4607(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4607(t0,t1,t2);}

C_noret_decl(trf_4602)
static void C_fcall trf_4602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4602(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4602(t0,t1,t2,t3);}

C_noret_decl(trf_4590)
static void C_fcall trf_4590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4590(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4590(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4525)
static void C_fcall trf_4525(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4525(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4525(t0,t1);}

C_noret_decl(trf_4520)
static void C_fcall trf_4520(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4520(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4520(t0,t1,t2);}

C_noret_decl(trf_4515)
static void C_fcall trf_4515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4515(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4515(t0,t1,t2,t3);}

C_noret_decl(trf_4503)
static void C_fcall trf_4503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4503(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4503(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4486)
static void C_fcall trf_4486(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4486(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4486(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4450)
static void C_fcall trf_4450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4450(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4450(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4400)
static void C_fcall trf_4400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4400(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4400(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4412)
static void C_fcall trf_4412(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4412(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4412(t0,t1,t2,t3);}

C_noret_decl(trf_4287)
static void C_fcall trf_4287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4287(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4287(t0,t1,t2,t3);}

C_noret_decl(trf_4330)
static void C_fcall trf_4330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4330(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4330(t0,t1,t2,t3);}

C_noret_decl(trf_4292)
static void C_fcall trf_4292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4292(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4292(t0,t1,t2);}

C_noret_decl(trf_4301)
static void C_fcall trf_4301(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4301(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4301(t0,t1,t2);}

C_noret_decl(trf_4181)
static void C_fcall trf_4181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4181(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4181(t0,t1,t2);}

C_noret_decl(trf_4218)
static void C_fcall trf_4218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4218(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4218(t0,t1,t2);}

C_noret_decl(trf_4135)
static void C_fcall trf_4135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4135(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4135(t0,t1);}

C_noret_decl(trf_3845)
static void C_fcall trf_3845(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3845(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3845(t0,t1,t2);}

C_noret_decl(trf_3785)
static void C_fcall trf_3785(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3785(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3785(t0,t1,t2);}

C_noret_decl(trf_3797)
static void C_fcall trf_3797(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3797(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3797(t0,t1,t2);}

C_noret_decl(trf_3719)
static void C_fcall trf_3719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3719(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3719(t0,t1);}

C_noret_decl(trf_3631)
static void C_fcall trf_3631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3631(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3631(t0,t1,t2,t3);}

C_noret_decl(trf_3594)
static void C_fcall trf_3594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3594(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3594(t0,t1,t2);}

C_noret_decl(trf_3549)
static void C_fcall trf_3549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3549(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3549(t0,t1,t2,t3);}

C_noret_decl(trf_3168)
static void C_fcall trf_3168(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3168(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3168(t0,t1,t2,t3);}

C_noret_decl(trf_2939)
static void C_fcall trf_2939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2939(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2939(t0,t1);}

C_noret_decl(trf_2969)
static void C_fcall trf_2969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2969(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2969(t0,t1);}

C_noret_decl(trf_3011)
static void C_fcall trf_3011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3011(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3011(t0,t1);}

C_noret_decl(trf_2809)
static void C_fcall trf_2809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2809(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2809(t0,t1,t2,t3);}

C_noret_decl(trf_2737)
static void C_fcall trf_2737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2737(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2737(t0,t1);}

C_noret_decl(trf_2591)
static void C_fcall trf_2591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2591(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2591(t0,t1);}

C_noret_decl(trf_2586)
static void C_fcall trf_2586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2586(t0,t1,t2);}

C_noret_decl(trf_2485)
static void C_fcall trf_2485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2485(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2485(t0,t1,t2,t3);}

C_noret_decl(trf_2519)
static void C_fcall trf_2519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2519(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2519(t0,t1);}

C_noret_decl(trf_2541)
static void C_fcall trf_2541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2541(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2541(t0,t1);}

C_noret_decl(trf_2331)
static void C_fcall trf_2331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2331(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2331(t0,t1,t2);}

C_noret_decl(trf_2358)
static void C_fcall trf_2358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2358(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2358(t0,t1);}

C_noret_decl(trf_2084)
static void C_fcall trf_2084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2084(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2084(t0,t1);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr9r)
static void C_fcall tr9r(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9r(C_proc9 k){
int n;
C_word *a,t9;
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
n=C_rest_count(0);
a=C_alloc(n*3);
t9=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr2rv)
static void C_fcall tr2rv(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2rv(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n+1);
t2=C_restore_rest_vector(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr4rv)
static void C_fcall tr4rv(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4rv(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n+1);
t4=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr3rv)
static void C_fcall tr3rv(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3rv(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n+1);
t3=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_posix_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3054)){
C_save(t1);
C_rereclaim2(3054*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,392);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000/this function is not available on this platform");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[4]=C_h_intern(&lf[4],13,"string-append");
lf[6]=C_h_intern(&lf[6],15,"\003syssignal-hook");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[8]=C_h_intern(&lf[8],17,"\003syspeek-c-string");
lf[9]=C_h_intern(&lf[9],16,"\003sysupdate-errno");
lf[10]=C_h_intern(&lf[10],15,"\003sysposix-error");
lf[11]=C_h_intern(&lf[11],8,"pipe/buf");
lf[12]=C_h_intern(&lf[12],11,"open/rdonly");
lf[13]=C_h_intern(&lf[13],11,"open/wronly");
lf[14]=C_h_intern(&lf[14],9,"open/rdwr");
lf[15]=C_h_intern(&lf[15],9,"open/read");
lf[16]=C_h_intern(&lf[16],10,"open/write");
lf[17]=C_h_intern(&lf[17],10,"open/creat");
lf[18]=C_h_intern(&lf[18],11,"open/append");
lf[19]=C_h_intern(&lf[19],9,"open/excl");
lf[20]=C_h_intern(&lf[20],10,"open/trunc");
lf[21]=C_h_intern(&lf[21],11,"open/binary");
lf[22]=C_h_intern(&lf[22],9,"open/text");
lf[23]=C_h_intern(&lf[23],14,"open/noinherit");
lf[24]=C_h_intern(&lf[24],10,"perm/irusr");
lf[25]=C_h_intern(&lf[25],10,"perm/iwusr");
lf[26]=C_h_intern(&lf[26],10,"perm/ixusr");
lf[27]=C_h_intern(&lf[27],10,"perm/irgrp");
lf[28]=C_h_intern(&lf[28],10,"perm/iwgrp");
lf[29]=C_h_intern(&lf[29],10,"perm/ixgrp");
lf[30]=C_h_intern(&lf[30],10,"perm/iroth");
lf[31]=C_h_intern(&lf[31],10,"perm/iwoth");
lf[32]=C_h_intern(&lf[32],10,"perm/ixoth");
lf[33]=C_h_intern(&lf[33],10,"perm/irwxu");
lf[34]=C_h_intern(&lf[34],10,"perm/irwxg");
lf[35]=C_h_intern(&lf[35],10,"perm/irwxo");
lf[36]=C_h_intern(&lf[36],9,"file-open");
lf[37]=C_h_intern(&lf[37],11,"\000file-error");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[39]=C_h_intern(&lf[39],17,"\003sysmake-c-string");
lf[40]=C_h_intern(&lf[40],20,"\003sysexpand-home-path");
lf[41]=C_h_intern(&lf[41],10,"file-close");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[43]=C_h_intern(&lf[43],11,"make-string");
lf[44]=C_h_intern(&lf[44],9,"file-read");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[46]=C_h_intern(&lf[46],11,"\000type-error");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[48]=C_h_intern(&lf[48],10,"file-write");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[51]=C_h_intern(&lf[51],13,"string-length");
lf[52]=C_h_intern(&lf[52],12,"file-mkstemp");
lf[53]=C_h_intern(&lf[53],13,"\003syssubstring");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[55]=C_h_intern(&lf[55],8,"seek/set");
lf[56]=C_h_intern(&lf[56],8,"seek/end");
lf[57]=C_h_intern(&lf[57],8,"seek/cur");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000*bad argument type - not a fixnum or string");
lf[61]=C_h_intern(&lf[61],9,"file-stat");
lf[62]=C_h_intern(&lf[62],9,"\003syserror");
lf[63]=C_h_intern(&lf[63],9,"file-size");
lf[64]=C_h_intern(&lf[64],22,"file-modification-time");
lf[65]=C_h_intern(&lf[65],16,"file-access-time");
lf[66]=C_h_intern(&lf[66],16,"file-change-time");
lf[67]=C_h_intern(&lf[67],10,"file-owner");
lf[68]=C_h_intern(&lf[68],16,"file-permissions");
lf[69]=C_h_intern(&lf[69],13,"regular-file\077");
lf[70]=C_h_intern(&lf[70],13,"\003sysfile-info");
lf[71]=C_h_intern(&lf[71],14,"symbolic-link\077");
lf[72]=C_h_intern(&lf[72],17,"character-device\077");
lf[73]=C_h_intern(&lf[73],13,"block-device\077");
lf[74]=C_h_intern(&lf[74],5,"fifo\077");
lf[75]=C_h_intern(&lf[75],7,"socket\077");
lf[76]=C_h_intern(&lf[76],18,"set-file-position!");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[78]=C_h_intern(&lf[78],6,"stream");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[80]=C_h_intern(&lf[80],5,"port\077");
lf[81]=C_h_intern(&lf[81],13,"\000bounds-error");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid negative port position");
lf[83]=C_h_intern(&lf[83],13,"file-position");
lf[84]=C_h_intern(&lf[84],16,"create-directory");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[86]=C_h_intern(&lf[86],12,"file-exists\077");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[88]=C_h_intern(&lf[88],12,"string-split");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[90]=C_h_intern(&lf[90],16,"change-directory");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[92]=C_h_intern(&lf[92],16,"delete-directory");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[94]=C_h_intern(&lf[94],6,"string");
lf[95]=C_h_intern(&lf[95],9,"directory");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[97]=C_h_intern(&lf[97],16,"\003sysmake-pointer");
lf[98]=C_h_intern(&lf[98],17,"current-directory");
lf[99]=C_h_intern(&lf[99],10,"directory\077");
lf[100]=C_h_intern(&lf[100],27,"\003sysplatform-fixup-pathname");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[102]=C_h_intern(&lf[102],5,"null\077");
lf[103]=C_h_intern(&lf[103],6,"char=\077");
lf[104]=C_h_intern(&lf[104],8,"string=\077");
lf[105]=C_h_intern(&lf[105],16,"char-alphabetic\077");
lf[106]=C_h_intern(&lf[106],10,"string-ref");
lf[107]=C_h_intern(&lf[107],17,"current-user-name");
lf[108]=C_h_intern(&lf[108],9,"condition");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\003c:\134");
lf[110]=C_h_intern(&lf[110],22,"with-exception-handler");
lf[111]=C_h_intern(&lf[111],30,"call-with-current-continuation");
lf[112]=C_h_intern(&lf[112],14,"canonical-path");
lf[113]=C_h_intern(&lf[113],18,"string-intersperse");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[115]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[116]=C_h_intern(&lf[116],7,"reverse");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\027Documents and Settings\134");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[127]=C_h_intern(&lf[127],13,"\003sysmake-port");
lf[128]=C_h_intern(&lf[128],21,"\003sysstream-port-class");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[130]=C_h_intern(&lf[130],15,"open-input-pipe");
lf[131]=C_h_intern(&lf[131],5,"\000text");
lf[132]=C_h_intern(&lf[132],7,"\000binary");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[134]=C_h_intern(&lf[134],16,"open-output-pipe");
lf[135]=C_h_intern(&lf[135],16,"close-input-pipe");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[137]=C_h_intern(&lf[137],14,"\003syscheck-port");
lf[138]=C_h_intern(&lf[138],17,"close-output-pipe");
lf[139]=C_h_intern(&lf[139],20,"call-with-input-pipe");
lf[140]=C_h_intern(&lf[140],21,"call-with-output-pipe");
lf[141]=C_h_intern(&lf[141],20,"with-input-from-pipe");
lf[142]=C_h_intern(&lf[142],18,"\003sysstandard-input");
lf[143]=C_h_intern(&lf[143],19,"with-output-to-pipe");
lf[144]=C_h_intern(&lf[144],19,"\003sysstandard-output");
lf[145]=C_h_intern(&lf[145],11,"create-pipe");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[147]=C_h_intern(&lf[147],11,"signal/term");
lf[148]=C_h_intern(&lf[148],10,"signal/int");
lf[149]=C_h_intern(&lf[149],10,"signal/fpe");
lf[150]=C_h_intern(&lf[150],10,"signal/ill");
lf[151]=C_h_intern(&lf[151],11,"signal/segv");
lf[152]=C_h_intern(&lf[152],11,"signal/abrt");
lf[153]=C_h_intern(&lf[153],12,"signal/break");
lf[154]=C_h_intern(&lf[154],11,"signal/alrm");
lf[155]=C_h_intern(&lf[155],11,"signal/chld");
lf[156]=C_h_intern(&lf[156],11,"signal/cont");
lf[157]=C_h_intern(&lf[157],10,"signal/hup");
lf[158]=C_h_intern(&lf[158],9,"signal/io");
lf[159]=C_h_intern(&lf[159],11,"signal/kill");
lf[160]=C_h_intern(&lf[160],11,"signal/pipe");
lf[161]=C_h_intern(&lf[161],11,"signal/prof");
lf[162]=C_h_intern(&lf[162],11,"signal/quit");
lf[163]=C_h_intern(&lf[163],11,"signal/stop");
lf[164]=C_h_intern(&lf[164],11,"signal/trap");
lf[165]=C_h_intern(&lf[165],11,"signal/tstp");
lf[166]=C_h_intern(&lf[166],10,"signal/urg");
lf[167]=C_h_intern(&lf[167],11,"signal/usr1");
lf[168]=C_h_intern(&lf[168],11,"signal/usr2");
lf[169]=C_h_intern(&lf[169],13,"signal/vtalrm");
lf[170]=C_h_intern(&lf[170],12,"signal/winch");
lf[171]=C_h_intern(&lf[171],11,"signal/xcpu");
lf[172]=C_h_intern(&lf[172],11,"signal/xfsz");
lf[173]=C_h_intern(&lf[173],12,"signals-list");
lf[174]=C_h_intern(&lf[174],18,"\003sysinterrupt-hook");
lf[175]=C_h_intern(&lf[175],14,"signal-handler");
lf[176]=C_h_intern(&lf[176],19,"set-signal-handler!");
lf[177]=C_h_intern(&lf[177],10,"errno/perm");
lf[178]=C_h_intern(&lf[178],11,"errno/noent");
lf[179]=C_h_intern(&lf[179],10,"errno/srch");
lf[180]=C_h_intern(&lf[180],10,"errno/intr");
lf[181]=C_h_intern(&lf[181],8,"errno/io");
lf[182]=C_h_intern(&lf[182],12,"errno/noexec");
lf[183]=C_h_intern(&lf[183],10,"errno/badf");
lf[184]=C_h_intern(&lf[184],11,"errno/child");
lf[185]=C_h_intern(&lf[185],11,"errno/nomem");
lf[186]=C_h_intern(&lf[186],11,"errno/acces");
lf[187]=C_h_intern(&lf[187],11,"errno/fault");
lf[188]=C_h_intern(&lf[188],10,"errno/busy");
lf[189]=C_h_intern(&lf[189],11,"errno/exist");
lf[190]=C_h_intern(&lf[190],12,"errno/notdir");
lf[191]=C_h_intern(&lf[191],11,"errno/isdir");
lf[192]=C_h_intern(&lf[192],11,"errno/inval");
lf[193]=C_h_intern(&lf[193],11,"errno/mfile");
lf[194]=C_h_intern(&lf[194],11,"errno/nospc");
lf[195]=C_h_intern(&lf[195],11,"errno/spipe");
lf[196]=C_h_intern(&lf[196],10,"errno/pipe");
lf[197]=C_h_intern(&lf[197],11,"errno/again");
lf[198]=C_h_intern(&lf[198],10,"errno/rofs");
lf[199]=C_h_intern(&lf[199],10,"errno/nxio");
lf[200]=C_h_intern(&lf[200],10,"errno/2big");
lf[201]=C_h_intern(&lf[201],10,"errno/xdev");
lf[202]=C_h_intern(&lf[202],11,"errno/nodev");
lf[203]=C_h_intern(&lf[203],11,"errno/nfile");
lf[204]=C_h_intern(&lf[204],11,"errno/notty");
lf[205]=C_h_intern(&lf[205],10,"errno/fbig");
lf[206]=C_h_intern(&lf[206],11,"errno/mlink");
lf[207]=C_h_intern(&lf[207],9,"errno/dom");
lf[208]=C_h_intern(&lf[208],11,"errno/range");
lf[209]=C_h_intern(&lf[209],12,"errno/deadlk");
lf[210]=C_h_intern(&lf[210],17,"errno/nametoolong");
lf[211]=C_h_intern(&lf[211],11,"errno/nolck");
lf[212]=C_h_intern(&lf[212],11,"errno/nosys");
lf[213]=C_h_intern(&lf[213],14,"errno/notempty");
lf[214]=C_h_intern(&lf[214],11,"errno/ilseq");
lf[215]=C_h_intern(&lf[215],16,"change-file-mode");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[217]=C_h_intern(&lf[217],17,"file-read-access\077");
lf[218]=C_h_intern(&lf[218],18,"file-write-access\077");
lf[219]=C_h_intern(&lf[219],20,"file-execute-access\077");
lf[220]=C_h_intern(&lf[220],12,"fileno/stdin");
lf[221]=C_h_intern(&lf[221],13,"fileno/stdout");
lf[222]=C_h_intern(&lf[222],13,"fileno/stderr");
lf[223]=C_h_intern(&lf[223],7,"\000append");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[231]=C_h_intern(&lf[231],16,"open-input-file*");
lf[232]=C_h_intern(&lf[232],17,"open-output-file*");
lf[233]=C_h_intern(&lf[233],12,"port->fileno");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[236]=C_h_intern(&lf[236],25,"\003syspeek-unsigned-integer");
lf[237]=C_h_intern(&lf[237],16,"duplicate-fileno");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file descriptor");
lf[239]=C_h_intern(&lf[239],6,"setenv");
lf[240]=C_h_intern(&lf[240],8,"unsetenv");
lf[241]=C_h_intern(&lf[241],9,"substring");
lf[242]=C_h_intern(&lf[242],25,"get-environment-variables");
lf[243]=C_h_intern(&lf[243],19,"current-environment");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[246]=C_h_intern(&lf[246],19,"seconds->local-time");
lf[247]=C_h_intern(&lf[247],18,"\003sysdecode-seconds");
lf[248]=C_h_intern(&lf[248],15,"current-seconds");
lf[249]=C_h_intern(&lf[249],17,"seconds->utc-time");
lf[250]=C_h_intern(&lf[250],15,"seconds->string");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[252]=C_h_intern(&lf[252],12,"time->string");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[255]=C_h_intern(&lf[255],19,"local-time->seconds");
lf[256]=C_decode_literal(C_heaptop,"\376U-1.\000");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[258]=C_h_intern(&lf[258],27,"local-timezone-abbreviation");
lf[259]=C_h_intern(&lf[259],5,"_exit");
lf[260]=C_h_intern(&lf[260],14,"terminal-port\077");
lf[261]=C_h_intern(&lf[261],19,"set-buffering-mode!");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[263]=C_h_intern(&lf[263],5,"\000full");
lf[264]=C_h_intern(&lf[264],5,"\000line");
lf[265]=C_h_intern(&lf[265],5,"\000none");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[267]=C_h_intern(&lf[267],6,"regexp");
lf[268]=C_h_intern(&lf[268],12,"string-match");
lf[269]=C_h_intern(&lf[269],12,"glob->regexp");
lf[270]=C_h_intern(&lf[270],13,"make-pathname");
lf[271]=C_h_intern(&lf[271],18,"decompose-pathname");
lf[272]=C_h_intern(&lf[272],4,"glob");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[275]=C_h_intern(&lf[275],13,"spawn/overlay");
lf[276]=C_h_intern(&lf[276],10,"spawn/wait");
lf[277]=C_h_intern(&lf[277],12,"spawn/nowait");
lf[278]=C_h_intern(&lf[278],13,"spawn/nowaito");
lf[279]=C_h_intern(&lf[279],12,"spawn/detach");
lf[280]=C_h_intern(&lf[280],16,"char-whitespace\077");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[284]=C_h_intern(&lf[284],24,"pathname-strip-directory");
lf[287]=C_h_intern(&lf[287],15,"process-execute");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[289]=C_h_intern(&lf[289],13,"process-spawn");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot spawn process");
lf[291]=C_h_intern(&lf[291],18,"current-process-id");
lf[292]=C_h_intern(&lf[292],17,"\003sysshell-command");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve system directory");
lf[294]=C_h_intern(&lf[294],24,"get-environment-variable");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\007COMSPEC");
lf[296]=C_h_intern(&lf[296],27,"\003sysshell-command-arguments");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\002/c");
lf[298]=C_h_intern(&lf[298],11,"process-run");
lf[299]=C_h_intern(&lf[299],11,"\003sysprocess");
lf[300]=C_h_intern(&lf[300],14,"\000process-error");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[302]=C_h_intern(&lf[302],17,"\003sysmake-locative");
lf[303]=C_h_intern(&lf[303],8,"location");
lf[304]=C_h_intern(&lf[304],12,"\003sysfor-each");
lf[305]=C_h_intern(&lf[305],7,"process");
lf[306]=C_h_intern(&lf[306],8,"process*");
lf[307]=C_h_intern(&lf[307],16,"\003sysprocess-wait");
lf[308]=C_h_intern(&lf[308],12,"process-wait");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[310]=C_h_intern(&lf[310],5,"sleep");
lf[311]=C_h_intern(&lf[311],13,"get-host-name");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[313]=C_h_intern(&lf[313],18,"system-information");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\007windows");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system-information");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current user-name");
lf[317]=C_h_intern(&lf[317],13,"pathname-file");
lf[318]=C_h_intern(&lf[318],10,"find-files");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[322]=C_h_intern(&lf[322],16,"\003sysdynamic-wind");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[324]=C_h_intern(&lf[324],17,"change-file-owner");
lf[325]=C_h_intern(&lf[325],5,"error");
lf[326]=C_h_intern(&lf[326],11,"create-fifo");
lf[327]=C_h_intern(&lf[327],14,"create-session");
lf[328]=C_h_intern(&lf[328],20,"create-symbolic-link");
lf[329]=C_h_intern(&lf[329],26,"current-effective-group-id");
lf[330]=C_h_intern(&lf[330],25,"current-effective-user-id");
lf[331]=C_h_intern(&lf[331],27,"current-effective-user-name");
lf[332]=C_h_intern(&lf[332],16,"current-group-id");
lf[333]=C_h_intern(&lf[333],15,"current-user-id");
lf[334]=C_h_intern(&lf[334],18,"map-file-to-memory");
lf[335]=C_h_intern(&lf[335],9,"file-link");
lf[336]=C_h_intern(&lf[336],9,"file-lock");
lf[337]=C_h_intern(&lf[337],18,"file-lock/blocking");
lf[338]=C_h_intern(&lf[338],11,"file-select");
lf[339]=C_h_intern(&lf[339],14,"file-test-lock");
lf[340]=C_h_intern(&lf[340],13,"file-truncate");
lf[341]=C_h_intern(&lf[341],11,"file-unlock");
lf[342]=C_h_intern(&lf[342],10,"get-groups");
lf[343]=C_h_intern(&lf[343],17,"group-information");
lf[344]=C_h_intern(&lf[344],17,"initialize-groups");
lf[345]=C_h_intern(&lf[345],26,"memory-mapped-file-pointer");
lf[346]=C_h_intern(&lf[346],17,"parent-process-id");
lf[347]=C_h_intern(&lf[347],12,"process-fork");
lf[348]=C_h_intern(&lf[348],16,"process-group-id");
lf[349]=C_h_intern(&lf[349],14,"process-signal");
lf[350]=C_h_intern(&lf[350],18,"read-symbolic-link");
lf[351]=C_h_intern(&lf[351],10,"set-alarm!");
lf[352]=C_h_intern(&lf[352],13,"set-group-id!");
lf[353]=C_h_intern(&lf[353],11,"set-groups!");
lf[354]=C_h_intern(&lf[354],21,"set-process-group-id!");
lf[355]=C_h_intern(&lf[355],19,"set-root-directory!");
lf[356]=C_h_intern(&lf[356],16,"set-signal-mask!");
lf[357]=C_h_intern(&lf[357],12,"set-user-id!");
lf[358]=C_h_intern(&lf[358],11,"signal-mask");
lf[359]=C_h_intern(&lf[359],12,"signal-mask!");
lf[360]=C_h_intern(&lf[360],14,"signal-masked\077");
lf[361]=C_h_intern(&lf[361],14,"signal-unmask!");
lf[362]=C_h_intern(&lf[362],13,"terminal-name");
lf[363]=C_h_intern(&lf[363],13,"terminal-size");
lf[364]=C_h_intern(&lf[364],22,"unmap-file-from-memory");
lf[365]=C_h_intern(&lf[365],16,"user-information");
lf[366]=C_h_intern(&lf[366],17,"utc-time->seconds");
lf[367]=C_h_intern(&lf[367],12,"string->time");
lf[368]=C_h_intern(&lf[368],16,"errno/wouldblock");
lf[369]=C_h_intern(&lf[369],19,"memory-mapped-file\077");
lf[370]=C_h_intern(&lf[370],13,"map/anonymous");
lf[371]=C_h_intern(&lf[371],8,"map/file");
lf[372]=C_h_intern(&lf[372],9,"map/fixed");
lf[373]=C_h_intern(&lf[373],11,"map/private");
lf[374]=C_h_intern(&lf[374],10,"map/shared");
lf[375]=C_h_intern(&lf[375],10,"open/fsync");
lf[376]=C_h_intern(&lf[376],11,"open/noctty");
lf[377]=C_h_intern(&lf[377],13,"open/nonblock");
lf[378]=C_h_intern(&lf[378],9,"open/sync");
lf[379]=C_h_intern(&lf[379],10,"perm/isgid");
lf[380]=C_h_intern(&lf[380],10,"perm/isuid");
lf[381]=C_h_intern(&lf[381],10,"perm/isvtx");
lf[382]=C_h_intern(&lf[382],9,"prot/exec");
lf[383]=C_h_intern(&lf[383],9,"prot/none");
lf[384]=C_h_intern(&lf[384],9,"prot/read");
lf[385]=C_h_intern(&lf[385],10,"prot/write");
lf[386]=C_h_intern(&lf[386],11,"make-vector");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[389]=C_h_intern(&lf[389],18,"getter-with-setter");
lf[390]=C_h_intern(&lf[390],17,"register-feature!");
lf[391]=C_h_intern(&lf[391],5,"posix");
C_register_lf2(lf,392,create_ptable());
t2=C_mutate(&lf[0] /* (set! c1319 ...) */,lf[1]);
t3=C_mutate(&lf[2] /* (set! c109 ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1824,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t4);}

/* k1822 */
static void C_ccall f_1824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1827,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1825 in k1822 */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1828 in k1825 in k1822 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1833,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1836,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 932  register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[390]+1)))(3,*((C_word*)lf[390]+1),t2,lf[391]);}

/* k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word ab[77],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1842,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=C_mutate(&lf[5] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1854,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[10]+1 /* (set! posix-error ...) */,lf[5]);
t5=C_mutate((C_word*)lf[11]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t6=C_mutate((C_word*)lf[12]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t7=C_mutate((C_word*)lf[13]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t8=C_mutate((C_word*)lf[14]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t9=C_mutate((C_word*)lf[15]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDWR));
t10=C_mutate((C_word*)lf[16]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t11=C_mutate((C_word*)lf[17]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t12=C_mutate((C_word*)lf[18]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t13=C_mutate((C_word*)lf[19]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t14=C_mutate((C_word*)lf[20]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t15=C_mutate((C_word*)lf[21]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t16=C_mutate((C_word*)lf[22]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t17=C_mutate((C_word*)lf[23]+1 /* (set! open/noinherit ...) */,C_fix((C_word)O_NOINHERIT));
t18=C_mutate((C_word*)lf[24]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IREAD));
t19=C_mutate((C_word*)lf[25]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWRITE));
t20=C_mutate((C_word*)lf[26]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IEXEC));
t21=C_mutate((C_word*)lf[27]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IREAD));
t22=C_mutate((C_word*)lf[28]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWRITE));
t23=C_mutate((C_word*)lf[29]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IEXEC));
t24=C_mutate((C_word*)lf[30]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IREAD));
t25=C_mutate((C_word*)lf[31]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWRITE));
t26=C_mutate((C_word*)lf[32]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IEXEC));
t27=C_mutate((C_word*)lf[33]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t28=C_mutate((C_word*)lf[34]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t29=C_mutate((C_word*)lf[35]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t30=(C_word)C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t31=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t30);
t32=C_mutate((C_word*)lf[36]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1900,a[2]=t31,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t33=C_mutate((C_word*)lf[41]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1941,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t34=*((C_word*)lf[43]+1);
t35=C_mutate((C_word*)lf[44]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1959,a[2]=t34,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t36=C_mutate((C_word*)lf[48]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2004,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t37=*((C_word*)lf[51]+1);
t38=C_mutate((C_word*)lf[52]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2046,a[2]=t37,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t39=C_mutate((C_word*)lf[55]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t40=C_mutate((C_word*)lf[56]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t41=C_mutate((C_word*)lf[57]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t42=C_mutate(&lf[58] /* (set! stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2084,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[61]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2122,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[63]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2153,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[64]+1 /* (set! file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2159,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[65]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2165,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[66]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2171,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[67]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2177,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[68]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2183,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[69]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[71]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2212,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t52=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6473,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
t53=C_mutate((C_word*)lf[72]+1 /* (set! character-device? ...) */,t52);
t54=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6467,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t55=C_mutate((C_word*)lf[73]+1 /* (set! block-device? ...) */,t54);
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6461,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t57=C_mutate((C_word*)lf[74]+1 /* (set! fifo? ...) */,t56);
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6455,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t59=C_mutate((C_word*)lf[75]+1 /* (set! socket? ...) */,t58);
t60=C_mutate((C_word*)lf[76]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2241,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2301,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5772,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1138 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[389]+1)))(4,*((C_word*)lf[389]+1),t61,t62,*((C_word*)lf[76]+1));}

/* a5771 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5772(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5772,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5776,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5788,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1140 port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[80]+1)))(3,*((C_word*)lf[80]+1),t4,t2);}

/* k5786 in a5771 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(t2,lf[78]);
if(C_truep(t3)){
t4=(C_word)C_ftell(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_5776(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_5776(2,t4,C_fix(-1));}}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t2=(C_word)C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[2];
f_5776(2,t3,t2);}
else{
/* posixwin.scm: 1147 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[46],lf[83],lf[388],((C_word*)t0)[3]);}}}

/* k5774 in a5771 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5779,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_lessp(t1,C_fix(0)))){
/* posixwin.scm: 1149 posix-error */
t3=lf[5];
f_1854(6,t3,t2,lf[37],lf[83],lf[387],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5777 in k5774 in a5771 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word ab[97],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2301,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1 /* (set! file-position ...) */,t1);
t3=C_mutate((C_word*)lf[84]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2303,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[90]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2429,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[92]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2456,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[4]+1);
t7=*((C_word*)lf[43]+1);
t8=*((C_word*)lf[94]+1);
t9=C_mutate((C_word*)lf[95]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2483,a[2]=t7,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[99]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2643,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[43]+1);
t12=C_mutate((C_word*)lf[98]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2670,a[2]=t11,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t13=*((C_word*)lf[102]+1);
t14=*((C_word*)lf[103]+1);
t15=*((C_word*)lf[104]+1);
t16=*((C_word*)lf[105]+1);
t17=*((C_word*)lf[106]+1);
t18=*((C_word*)lf[4]+1);
t19=*((C_word*)lf[107]+1);
t20=*((C_word*)lf[98]+1);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2737,a[2]=t20,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t22=C_mutate((C_word*)lf[112]+1 /* (set! canonical-path ...) */,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2793,a[2]=t16,a[3]=t14,a[4]=t19,a[5]=t21,a[6]=t15,a[7]=t13,a[8]=t17,a[9]=t18,a[10]=((C_word)li41),tmp=(C_word)a,a+=11,tmp));
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t24=C_mutate((C_word*)lf[130]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3186,a[2]=t23,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp));
t25=C_mutate((C_word*)lf[134]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3222,a[2]=t23,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t26=C_mutate((C_word*)lf[135]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3258,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[138]+1 /* (set! close-output-pipe ...) */,*((C_word*)lf[135]+1));
t28=*((C_word*)lf[130]+1);
t29=*((C_word*)lf[134]+1);
t30=*((C_word*)lf[135]+1);
t31=*((C_word*)lf[138]+1);
t32=C_mutate((C_word*)lf[139]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3277,a[2]=t28,a[3]=t30,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t33=C_mutate((C_word*)lf[140]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3301,a[2]=t29,a[3]=t31,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t34=C_mutate((C_word*)lf[141]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3325,a[2]=t28,a[3]=t30,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t35=C_mutate((C_word*)lf[143]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3345,a[2]=t29,a[3]=t31,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[145]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3365,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[147]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t38=C_mutate((C_word*)lf[148]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t39=C_mutate((C_word*)lf[149]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t40=C_mutate((C_word*)lf[150]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t41=C_mutate((C_word*)lf[151]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t42=C_mutate((C_word*)lf[152]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t43=C_mutate((C_word*)lf[153]+1 /* (set! signal/break ...) */,C_fix((C_word)SIGBREAK));
t44=C_set_block_item(lf[154] /* signal/alrm */,0,C_fix(0));
t45=C_set_block_item(lf[155] /* signal/chld */,0,C_fix(0));
t46=C_set_block_item(lf[156] /* signal/cont */,0,C_fix(0));
t47=C_set_block_item(lf[157] /* signal/hup */,0,C_fix(0));
t48=C_set_block_item(lf[158] /* signal/io */,0,C_fix(0));
t49=C_set_block_item(lf[159] /* signal/kill */,0,C_fix(0));
t50=C_set_block_item(lf[160] /* signal/pipe */,0,C_fix(0));
t51=C_set_block_item(lf[161] /* signal/prof */,0,C_fix(0));
t52=C_set_block_item(lf[162] /* signal/quit */,0,C_fix(0));
t53=C_set_block_item(lf[163] /* signal/stop */,0,C_fix(0));
t54=C_set_block_item(lf[164] /* signal/trap */,0,C_fix(0));
t55=C_set_block_item(lf[165] /* signal/tstp */,0,C_fix(0));
t56=C_set_block_item(lf[166] /* signal/urg */,0,C_fix(0));
t57=C_set_block_item(lf[167] /* signal/usr1 */,0,C_fix(0));
t58=C_set_block_item(lf[168] /* signal/usr2 */,0,C_fix(0));
t59=C_set_block_item(lf[169] /* signal/vtalrm */,0,C_fix(0));
t60=C_set_block_item(lf[170] /* signal/winch */,0,C_fix(0));
t61=C_set_block_item(lf[171] /* signal/xcpu */,0,C_fix(0));
t62=C_set_block_item(lf[172] /* signal/xfsz */,0,C_fix(0));
t63=(C_word)C_a_i_list(&a,7,*((C_word*)lf[147]+1),*((C_word*)lf[148]+1),*((C_word*)lf[149]+1),*((C_word*)lf[150]+1),*((C_word*)lf[151]+1),*((C_word*)lf[152]+1),*((C_word*)lf[153]+1));
t64=C_mutate((C_word*)lf[173]+1 /* (set! signals-list ...) */,t63);
t65=*((C_word*)lf[174]+1);
t66=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3439,a[2]=((C_word*)t0)[2],a[3]=t65,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1467 make-vector */
t67=*((C_word*)lf[386]+1);
((C_proc4)(void*)(*((C_word*)t67+1)))(4,t67,t66,C_fix(256),C_SCHEME_FALSE);}

/* k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word t165;
C_word t166;
C_word t167;
C_word t168;
C_word t169;
C_word t170;
C_word t171;
C_word t172;
C_word t173;
C_word t174;
C_word t175;
C_word t176;
C_word t177;
C_word t178;
C_word t179;
C_word t180;
C_word t181;
C_word ab[322],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3439,2,t0,t1);}
t2=C_mutate((C_word*)lf[175]+1 /* (set! signal-handler ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3441,a[2]=t1,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[176]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3450,a[2]=t1,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[174]+1 /* (set! interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3463,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[177]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t6=C_mutate((C_word*)lf[178]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t7=C_mutate((C_word*)lf[179]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t8=C_mutate((C_word*)lf[180]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t9=C_mutate((C_word*)lf[181]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t10=C_mutate((C_word*)lf[182]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t11=C_mutate((C_word*)lf[183]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t12=C_mutate((C_word*)lf[184]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t13=C_mutate((C_word*)lf[185]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t14=C_mutate((C_word*)lf[186]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t15=C_mutate((C_word*)lf[187]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t16=C_mutate((C_word*)lf[188]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t17=C_mutate((C_word*)lf[189]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t18=C_mutate((C_word*)lf[190]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t19=C_mutate((C_word*)lf[191]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t20=C_mutate((C_word*)lf[192]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t21=C_mutate((C_word*)lf[193]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t22=C_mutate((C_word*)lf[194]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t23=C_mutate((C_word*)lf[195]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t24=C_mutate((C_word*)lf[196]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t25=C_mutate((C_word*)lf[197]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t26=C_mutate((C_word*)lf[198]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t27=C_mutate((C_word*)lf[199]+1 /* (set! errno/nxio ...) */,C_fix((C_word)ENXIO));
t28=C_mutate((C_word*)lf[200]+1 /* (set! errno/2big ...) */,C_fix((C_word)E2BIG));
t29=C_mutate((C_word*)lf[201]+1 /* (set! errno/xdev ...) */,C_fix((C_word)EXDEV));
t30=C_mutate((C_word*)lf[202]+1 /* (set! errno/nodev ...) */,C_fix((C_word)ENODEV));
t31=C_mutate((C_word*)lf[203]+1 /* (set! errno/nfile ...) */,C_fix((C_word)ENFILE));
t32=C_mutate((C_word*)lf[204]+1 /* (set! errno/notty ...) */,C_fix((C_word)ENOTTY));
t33=C_mutate((C_word*)lf[205]+1 /* (set! errno/fbig ...) */,C_fix((C_word)EFBIG));
t34=C_mutate((C_word*)lf[206]+1 /* (set! errno/mlink ...) */,C_fix((C_word)EMLINK));
t35=C_mutate((C_word*)lf[207]+1 /* (set! errno/dom ...) */,C_fix((C_word)EDOM));
t36=C_mutate((C_word*)lf[208]+1 /* (set! errno/range ...) */,C_fix((C_word)ERANGE));
t37=C_mutate((C_word*)lf[209]+1 /* (set! errno/deadlk ...) */,C_fix((C_word)EDEADLK));
t38=C_mutate((C_word*)lf[210]+1 /* (set! errno/nametoolong ...) */,C_fix((C_word)ENAMETOOLONG));
t39=C_mutate((C_word*)lf[211]+1 /* (set! errno/nolck ...) */,C_fix((C_word)ENOLCK));
t40=C_mutate((C_word*)lf[212]+1 /* (set! errno/nosys ...) */,C_fix((C_word)ENOSYS));
t41=C_mutate((C_word*)lf[213]+1 /* (set! errno/notempty ...) */,C_fix((C_word)ENOTEMPTY));
t42=C_mutate((C_word*)lf[214]+1 /* (set! errno/ilseq ...) */,C_fix((C_word)EILSEQ));
t43=C_mutate((C_word*)lf[215]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3519,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3549,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
t45=C_mutate((C_word*)lf[217]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3573,a[2]=t44,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp));
t46=C_mutate((C_word*)lf[218]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3579,a[2]=t44,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp));
t47=C_mutate((C_word*)lf[219]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3585,a[2]=t44,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp));
t48=C_mutate((C_word*)lf[220]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)0));
t49=C_mutate((C_word*)lf[221]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)1));
t50=C_mutate((C_word*)lf[222]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)2));
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3594,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp);
t52=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3631,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp);
t53=C_mutate((C_word*)lf[231]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3649,a[2]=t51,a[3]=t52,a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp));
t54=C_mutate((C_word*)lf[232]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3663,a[2]=t51,a[3]=t52,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t55=C_mutate((C_word*)lf[233]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3677,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[237]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3712,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[239]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3742,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[240]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3759,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t59=*((C_word*)lf[241]+1);
t60=C_mutate((C_word*)lf[242]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3779,a[2]=t59,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp));
t61=C_mutate((C_word*)lf[243]+1 /* (set! current-environment ...) */,*((C_word*)lf[242]+1));
t62=C_mutate(&lf[244] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3845,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[246]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3864,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[249]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3898,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[250]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3942,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[252]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4000,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[255]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4067,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[258]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4082,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[259]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4094,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[260]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4110,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[261]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4116,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t72=*((C_word*)lf[267]+1);
t73=*((C_word*)lf[268]+1);
t74=*((C_word*)lf[269]+1);
t75=*((C_word*)lf[95]+1);
t76=*((C_word*)lf[270]+1);
t77=*((C_word*)lf[271]+1);
t78=C_mutate((C_word*)lf[272]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4175,a[2]=t74,a[3]=t72,a[4]=t75,a[5]=t73,a[6]=t76,a[7]=t77,a[8]=((C_word)li90),tmp=(C_word)a,a+=9,tmp));
t79=C_mutate((C_word*)lf[275]+1 /* (set! spawn/overlay ...) */,C_fix((C_word)P_OVERLAY));
t80=C_mutate((C_word*)lf[276]+1 /* (set! spawn/wait ...) */,C_fix((C_word)P_WAIT));
t81=C_mutate((C_word*)lf[277]+1 /* (set! spawn/nowait ...) */,C_fix((C_word)P_NOWAIT));
t82=C_mutate((C_word*)lf[278]+1 /* (set! spawn/nowaito ...) */,C_fix((C_word)P_NOWAITO));
t83=C_mutate((C_word*)lf[279]+1 /* (set! spawn/detach ...) */,C_fix((C_word)P_DETACH));
t84=*((C_word*)lf[280]+1);
t85=*((C_word*)lf[51]+1);
t86=*((C_word*)lf[106]+1);
t87=*((C_word*)lf[4]+1);
t88=C_mutate(&lf[281] /* (set! $quote-args-list ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4287,a[2]=t87,a[3]=t85,a[4]=t86,a[5]=t84,a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp));
t89=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4366,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
t90=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4383,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
t91=*((C_word*)lf[284]+1);
t92=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4400,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp);
t93=C_mutate(&lf[285] /* (set! $exec-setup ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4450,a[2]=t91,a[3]=t89,a[4]=t90,a[5]=t92,a[6]=((C_word)li99),tmp=(C_word)a,a+=7,tmp));
t94=C_mutate(&lf[286] /* (set! $exec-teardown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4486,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[287]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4501,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t96=C_mutate((C_word*)lf[289]+1 /* (set! process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4588,a[2]=((C_word)li110),tmp=(C_word)a,a+=3,tmp));
t97=C_mutate((C_word*)lf[291]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4675,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[292]+1 /* (set! shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[296]+1 /* (set! shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4699,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t100=*((C_word*)lf[289]+1);
t101=*((C_word*)lf[294]+1);
t102=C_mutate((C_word*)lf[298]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4705,a[2]=t100,a[3]=((C_word)li114),tmp=(C_word)a,a+=4,tmp));
t103=C_mutate((C_word*)lf[299]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4797,a[2]=((C_word)li115),tmp=(C_word)a,a+=3,tmp));
t104=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4916,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp);
t105=C_mutate((C_word*)lf[305]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4978,a[2]=t104,a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp));
t106=C_mutate((C_word*)lf[306]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5058,a[2]=t104,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp));
t107=C_mutate((C_word*)lf[307]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5138,a[2]=((C_word)li131),tmp=(C_word)a,a+=3,tmp));
t108=C_mutate((C_word*)lf[308]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5150,a[2]=((C_word)li134),tmp=(C_word)a,a+=3,tmp));
t109=C_mutate((C_word*)lf[310]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5210,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t110=C_mutate((C_word*)lf[311]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5213,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t111=C_mutate((C_word*)lf[313]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5225,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t112=C_mutate((C_word*)lf[107]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5256,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t113=*((C_word*)lf[272]+1);
t114=*((C_word*)lf[268]+1);
t115=*((C_word*)lf[270]+1);
t116=*((C_word*)lf[317]+1);
t117=*((C_word*)lf[99]+1);
t118=C_mutate((C_word*)lf[318]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5271,a[2]=t117,a[3]=t116,a[4]=t115,a[5]=t113,a[6]=t114,a[7]=((C_word)li151),tmp=(C_word)a,a+=8,tmp));
t119=C_mutate((C_word*)lf[324]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5491,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t120=C_mutate((C_word*)lf[326]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5497,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t121=C_mutate((C_word*)lf[327]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5503,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t122=C_mutate((C_word*)lf[328]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5509,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t123=C_mutate((C_word*)lf[329]+1 /* (set! current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5515,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t124=C_mutate((C_word*)lf[330]+1 /* (set! current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5521,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t125=C_mutate((C_word*)lf[331]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5527,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t126=C_mutate((C_word*)lf[332]+1 /* (set! current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5533,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t127=C_mutate((C_word*)lf[333]+1 /* (set! current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5539,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t128=C_mutate((C_word*)lf[334]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5545,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t129=C_mutate((C_word*)lf[335]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5551,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t130=C_mutate((C_word*)lf[336]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5557,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t131=C_mutate((C_word*)lf[337]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5563,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t132=C_mutate((C_word*)lf[338]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5569,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t133=C_mutate((C_word*)lf[339]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5575,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t134=C_mutate((C_word*)lf[340]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5581,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t135=C_mutate((C_word*)lf[341]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5587,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t136=C_mutate((C_word*)lf[342]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5593,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t137=C_mutate((C_word*)lf[343]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5599,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t138=C_mutate((C_word*)lf[344]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5605,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t139=C_mutate((C_word*)lf[345]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5611,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t140=C_mutate((C_word*)lf[346]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5617,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t141=C_mutate((C_word*)lf[347]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5623,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t142=C_mutate((C_word*)lf[348]+1 /* (set! process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5629,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t143=C_mutate((C_word*)lf[349]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5635,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t144=C_mutate((C_word*)lf[350]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5641,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t145=C_mutate((C_word*)lf[351]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5647,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t146=C_mutate((C_word*)lf[352]+1 /* (set! set-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5653,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t147=C_mutate((C_word*)lf[353]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5659,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t148=C_mutate((C_word*)lf[354]+1 /* (set! set-process-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5665,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t149=C_mutate((C_word*)lf[355]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5671,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t150=C_mutate((C_word*)lf[356]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5677,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t151=C_mutate((C_word*)lf[357]+1 /* (set! set-user-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5683,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t152=C_mutate((C_word*)lf[358]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5689,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t153=C_mutate((C_word*)lf[359]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5695,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t154=C_mutate((C_word*)lf[360]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5701,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t155=C_mutate((C_word*)lf[361]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5707,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t156=C_mutate((C_word*)lf[362]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5713,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t157=C_mutate((C_word*)lf[363]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5719,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp));
t158=C_mutate((C_word*)lf[364]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5725,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp));
t159=C_mutate((C_word*)lf[365]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5731,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp));
t160=C_mutate((C_word*)lf[366]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5737,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp));
t161=C_mutate((C_word*)lf[367]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5743,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t162=C_set_block_item(lf[368] /* errno/wouldblock */,0,C_fix(0));
t163=C_mutate((C_word*)lf[74]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5750,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t164=C_mutate((C_word*)lf[369]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5753,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t165=C_set_block_item(lf[370] /* map/anonymous */,0,C_fix(0));
t166=C_set_block_item(lf[371] /* map/file */,0,C_fix(0));
t167=C_set_block_item(lf[372] /* map/fixed */,0,C_fix(0));
t168=C_set_block_item(lf[373] /* map/private */,0,C_fix(0));
t169=C_set_block_item(lf[374] /* map/shared */,0,C_fix(0));
t170=C_set_block_item(lf[375] /* open/fsync */,0,C_fix(0));
t171=C_set_block_item(lf[376] /* open/noctty */,0,C_fix(0));
t172=C_set_block_item(lf[377] /* open/nonblock */,0,C_fix(0));
t173=C_set_block_item(lf[378] /* open/sync */,0,C_fix(0));
t174=C_set_block_item(lf[379] /* perm/isgid */,0,C_fix(0));
t175=C_set_block_item(lf[380] /* perm/isuid */,0,C_fix(0));
t176=C_set_block_item(lf[381] /* perm/isvtx */,0,C_fix(0));
t177=C_set_block_item(lf[382] /* prot/exec */,0,C_fix(0));
t178=C_set_block_item(lf[383] /* prot/none */,0,C_fix(0));
t179=C_set_block_item(lf[384] /* prot/read */,0,C_fix(0));
t180=C_set_block_item(lf[385] /* prot/write */,0,C_fix(0));
t181=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t181+1)))(2,t181,C_SCHEME_UNDEFINED);}

/* memory-mapped-file? in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5753(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5753,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* fifo? in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5750(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5750,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* string->time in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5743(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5743,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[367],lf[0]);}

/* utc-time->seconds in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5737(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5737,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[366],lf[0]);}

/* user-information in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5731,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[365],lf[0]);}

/* unmap-file-from-memory in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5725(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5725,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[364],lf[0]);}

/* terminal-size in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5719(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5719,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[363],lf[0]);}

/* terminal-name in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5713(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5713,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[362],lf[0]);}

/* signal-unmask! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5707,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[361],lf[0]);}

/* signal-masked? in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5701(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5701,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[360],lf[0]);}

/* signal-mask! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5695,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[359],lf[0]);}

/* signal-mask in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5689(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5689,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[358],lf[0]);}

/* set-user-id! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5683(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5683,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[357],lf[0]);}

/* set-signal-mask! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5677(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5677,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[356],lf[0]);}

/* set-root-directory! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5671(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5671,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[355],lf[0]);}

/* set-process-group-id! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5665(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5665,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[354],lf[0]);}

/* set-groups! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5659(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5659,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[353],lf[0]);}

/* set-group-id! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5653(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5653,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[352],lf[0]);}

/* set-alarm! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5647(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5647,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[351],lf[0]);}

/* read-symbolic-link in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5641(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5641,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[350],lf[0]);}

/* process-signal in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5635(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5635,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[349],lf[0]);}

/* process-group-id in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5629(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5629,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[348],lf[0]);}

/* process-fork in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5623(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5623,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[347],lf[0]);}

/* parent-process-id in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5617(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5617,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[346],lf[0]);}

/* memory-mapped-file-pointer in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5611(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5611,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[345],lf[0]);}

/* initialize-groups in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5605(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5605,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[344],lf[0]);}

/* group-information in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5599(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5599,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[343],lf[0]);}

/* get-groups in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5593(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5593,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[342],lf[0]);}

/* file-unlock in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5587(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5587,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[341],lf[0]);}

/* file-truncate in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5581(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5581,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[340],lf[0]);}

/* file-test-lock in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5575(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5575,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[339],lf[0]);}

/* file-select in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5569,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[338],lf[0]);}

/* file-lock/blocking in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5563(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5563,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[337],lf[0]);}

/* file-lock in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5557(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5557,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[336],lf[0]);}

/* file-link in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5551(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5551,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[335],lf[0]);}

/* map-file-to-memory in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5545(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5545,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[334],lf[0]);}

/* current-user-id in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5539(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5539,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[333],lf[0]);}

/* current-group-id in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5533(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5533,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[332],lf[0]);}

/* current-effective-user-name in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5527(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5527,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[331],lf[0]);}

/* current-effective-user-id in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5521(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5521,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[330],lf[0]);}

/* current-effective-group-id in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5515(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5515,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[329],lf[0]);}

/* create-symbolic-link in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5509(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5509,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[328],lf[0]);}

/* create-session in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5503(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5503,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[327],lf[0]);}

/* create-fifo in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5497(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5497,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[326],lf[0]);}

/* change-file-owner in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5491(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5491,2,t0,t1);}
/* error */
t2=*((C_word*)lf[325]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[324],lf[0]);}

/* find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5271(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+22)){
C_save_and_reclaim((void*)tr4r,(void*)f_5271r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5271r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5271r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a=C_alloc(22);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t2,a[9]=((C_word)li146),tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5412,a[2]=t5,a[3]=((C_word)li147),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5417,a[2]=t6,a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5422,a[2]=t7,a[3]=((C_word)li150),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-action12111271 */
t9=t8;
f_5422(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-id12121269 */
t11=t7;
f_5417(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-limit12131266 */
t13=t6;
f_5412(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body12091218 */
t15=t5;
f_5273(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[2],t14);}}}}}

/* def-action1211 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5422(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5422,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5428,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp);
/* def-id12121269 */
t3=((C_word*)t0)[2];
f_5417(t3,t1,t2);}

/* a5427 in def-action1211 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5428(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5428,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* def-id1212 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5417(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5417,NULL,3,t0,t1,t2);}
/* def-limit12131266 */
t3=((C_word*)t0)[2];
f_5412(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit1213 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5412(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5412,NULL,4,t0,t1,t2,t3);}
/* body12091218 */
t4=((C_word*)t0)[2];
f_5273(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5273(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5273,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(((C_word*)t0)[8],lf[318]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5280,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=t7,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
t9=t4;
if(C_truep(t9)){
if(C_truep((C_word)C_fixnump(t4))){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5407,a[2]=t4,a[3]=t7,a[4]=((C_word)li144),tmp=(C_word)a,a+=5,tmp);
t11=t8;
f_5280(t11,t10);}
else{
t10=t4;
t11=t8;
f_5280(t11,t10);}}
else{
t10=t8;
f_5280(t10,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5399,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));}}

/* f_5399 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5399(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5399,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_5407 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5407(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5407,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5280(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5280,NULL,2,t0,t1);}
t2=(C_word)C_i_stringp(((C_word*)t0)[12]);
t3=(C_truep(t2)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5391,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[11],a[4]=((C_word)li139),tmp=(C_word)a,a+=5,tmp):((C_word*)t0)[12]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5290,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5387,a[2]=t4,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 2051 make-pathname */
t6=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[2],lf[323]);}

/* k5385 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2051 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5290,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5292,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t3,a[11]=((C_word)li143),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_5292(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5292,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5311,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=t5,a[12]=t1,a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* posixwin.scm: 2057 directory? */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}}

/* k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5311,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5367,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 2058 pathname-file */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5373,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 2064 pproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}}

/* k5371 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5373,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 2064 action */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm: 2065 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_5292(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k5378 in k5371 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2064 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5292(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5365 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5367,2,t0,t1);}
if(C_truep((C_truep((C_word)C_i_equalp(t1,lf[319]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t1,lf[320]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixwin.scm: 2058 loop */
t2=((C_word*)((C_word*)t0)[10])[1];
f_5292(t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5326,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* posixwin.scm: 2059 lproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}}

/* k5324 in k5365 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5326,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5338,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=t6,a[5]=((C_word)li140),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word)li141),tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5357,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t4,a[5]=((C_word)li142),tmp=(C_word)a,a+=6,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[322]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
/* posixwin.scm: 2063 loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_5292(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}}

/* a5356 in k5324 in k5365 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5357,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a5342 in k5324 in k5365 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5351,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5355,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 2062 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],lf[321]);}

/* k5353 in a5342 in k5324 in k5365 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2062 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5349 in a5342 in k5324 in k5365 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2062 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5292(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a5337 in k5324 in k5365 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5338,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5334 in k5324 in k5365 in k5309 in loop in k5288 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2060 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5292(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_5391 in k5278 in body1209 in find-files in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5391(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5391,3,t0,t1,t2);}
/* posixwin.scm: 2049 string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* current-user-name in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5256,2,t0,t1);}
if(C_truep((C_word)C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_username),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5266,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 2024 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5264 in current-user-name in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2025 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[107],lf[316]);}

/* system-information in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5225,2,t0,t1);}
if(C_truep((C_word)C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5236,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5251,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 2015 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5249 in system-information in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2016 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[313],lf[315]);}

/* k5234 in system-information in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5240,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osrel),C_fix(0));}

/* k5238 in k5234 in system-information in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5244,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osver),C_fix(0));}

/* k5242 in k5238 in k5234 in system-information in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5248,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_processor),C_fix(0));}

/* k5246 in k5242 in k5238 in k5234 in system-information in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5248,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,5,lf[314],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* get-host-name in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5213,2,t0,t1);}
if(C_truep((C_word)C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
/* posixwin.scm: 2005 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[311],lf[312]);}}

/* sleep in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5210(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5210,3,t0,t1,t2);}
t3=(C_word)C_sleep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}

/* process-wait in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_5150r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5150r(t0,t1,t2,t3);}}

static void C_ccall f_5150r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
if(C_truep((C_word)C_i_nullp(t7))){
t8=(C_word)C_i_check_exact_2(t2,lf[308]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5171,a[2]=t5,a[3]=t2,a[4]=((C_word)li132),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5177,a[2]=t2,a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}
else{
/* ##sys#error */
t8=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[2],t7);}}

/* a5176 in process-wait in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5177,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5187,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1987 ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* posixwin.scm: 1989 values */
C_values(5,0,t1,t2,t3,t4);}}

/* k5185 in a5176 in process-wait in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1988 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[300],lf[308],lf[309],((C_word*)t0)[2]);}

/* a5170 in process-wait in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5171,2,t0,t1);}
/* posixwin.scm: 1984 ##sys#process-wait */
((C_proc4)C_retrieve_proc(*((C_word*)lf[307]+1)))(4,*((C_word*)lf[307]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5138(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5138,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_process_wait(t2,t3))){
/* posixwin.scm: 1977 values */
C_values(5,0,t1,t2,C_SCHEME_TRUE,C_fix((C_word)C_exstatus));}
else{
/* posixwin.scm: 1978 values */
C_values(5,0,t1,C_fix(-1),C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* process* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_5058r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5058r(t0,t1,t2,t3);}}

static void C_ccall f_5058r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a=C_alloc(17);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5060,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5065,a[2]=t4,a[3]=((C_word)li127),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5070,a[2]=t5,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5075,a[2]=t6,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args11451161 */
t8=t7;
f_5075(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-env11461159 */
t10=t6;
f_5070(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-exactf11471156 */
t12=t5;
f_5065(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body11431152 */
t14=t4;
f_5060(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-args1145 in process* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5075(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5075,NULL,2,t0,t1);}
/* def-env11461159 */
t2=((C_word*)t0)[2];
f_5070(t2,t1,C_SCHEME_FALSE);}

/* def-env1146 in process* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5070(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5070,NULL,3,t0,t1,t2);}
/* def-exactf11471156 */
t3=((C_word*)t0)[2];
f_5065(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf1147 in process* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5065(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5065,NULL,4,t0,t1,t2,t3);}
/* body11431152 */
t4=((C_word*)t0)[2];
f_5060(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1143 in process* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_5060(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5060,NULL,5,t0,t1,t2,t3,t4);}
/* posixwin.scm: 1971 %process */
f_4916(t1,lf[306],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3,t4);}

/* process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4978(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_4978r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4978r(t0,t1,t2,t3);}}

static void C_ccall f_4978r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a=C_alloc(17);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4980,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li121),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4985,a[2]=t4,a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4990,a[2]=t5,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4995,a[2]=t6,a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args11061122 */
t8=t7;
f_4995(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-env11071120 */
t10=t6;
f_4990(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-exactf11081117 */
t12=t5;
f_4985(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body11041113 */
t14=t4;
f_4980(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-args1106 in process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4995(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4995,NULL,2,t0,t1);}
/* def-env11071120 */
t2=((C_word*)t0)[2];
f_4990(t2,t1,C_SCHEME_FALSE);}

/* def-env1107 in process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4990(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4990,NULL,3,t0,t1,t2);}
/* def-exactf11081117 */
t3=((C_word*)t0)[2];
f_4985(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf1108 in process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4985(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4985,NULL,4,t0,t1,t2,t3);}
/* body11041113 */
t4=((C_word*)t0)[2];
f_4980(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1104 in process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4980(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4980,NULL,5,t0,t1,t2,t3,t4);}
/* posixwin.scm: 1968 %process */
f_4916(t1,lf[305],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3,t4);}

/* %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4916(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4916,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4918,a[2]=t2,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp);
t12=(C_word)C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4937,a[2]=t11,a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t6,a[7]=t9,a[8]=t8,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm: 1956 chkstrlst */
t14=t11;
f_4918(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4972,a[2]=t13,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1959 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[296]+1)))(3,*((C_word*)lf[296]+1),t15,((C_word*)t8)[1]);}}

/* k4970 in %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4972,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1960 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[292]+1)))(2,*((C_word*)lf[292]+1),t3);}

/* k4974 in k4970 in %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_4937(2,t3,t2);}

/* k4935 in %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4940,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posixwin.scm: 1961 chkstrlst */
t3=((C_word*)t0)[2];
f_4918(t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
f_4940(2,t3,C_SCHEME_UNDEFINED);}}

/* k4938 in k4935 in %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li118),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[4],a[3]=((C_word)li119),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4950 in k4938 in k4935 in %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_4951,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm: 1964 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixwin.scm: 1965 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a4944 in k4938 in k4935 in %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4945,2,t0,t1);}
/* posixwin.scm: 1962 ##sys#process */
t2=*((C_word*)lf[299]+1);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,t1,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* chkstrlst in %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4918(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4918,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[2],a[3]=((C_word)li116),tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[304]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a4926 in chkstrlst in %process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4927(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4927,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4797(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...){
C_word tmp;
C_word t9;
va_list v;
C_word *a,c2=c;
C_save_rest(t8,c2,9);
if(c<9) C_bad_min_argc_2(c,9,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr9r,(void*)f_4797r,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
else{
a=C_alloc((c-9)*3);
t9=C_restore_rest(a,C_rest_count(0));
f_4797r(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}}

static void C_ccall f_4797r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4801,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=t7,a[6]=t8,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(t9))){
t11=t10;
f_4801(2,t11,C_SCHEME_FALSE);}
else{
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
t12=t10;
f_4801(2,t12,(C_word)C_i_car(t9));}
else{
/* ##sys#error */
t12=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,lf[2],t9);}}}

/* k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4804,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4892,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[2]);
/* posixwin.scm: 1928 $quote-args-list */
t5=lf[281];
f_4287(t5,t3,t4,t1);}

/* k4890 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1928 string-intersperse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[113]+1)))(3,*((C_word*)lf[113]+1),((C_word*)t0)[2],t1);}

/* k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4804,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(-1));
t4=((*(int *)C_data_pointer(t2))=C_unfix(t3),C_SCHEME_UNDEFINED);
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t6=(C_word)C_i_foreign_fixnum_argumentp(C_fix(-1));
t7=((*(int *)C_data_pointer(t5))=C_unfix(t6),C_SCHEME_UNDEFINED);
t8=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t9=(C_word)C_i_foreign_fixnum_argumentp(C_fix(-1));
t10=((*(int *)C_data_pointer(t8))=C_unfix(t9),C_SCHEME_UNDEFINED);
t11=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t12=(C_word)C_i_foreign_fixnum_argumentp(C_fix(-1));
t13=((*(int *)C_data_pointer(t11))=C_unfix(t12),C_SCHEME_UNDEFINED);
t14=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=t11,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=t1,a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[302]+1)))(6,*((C_word*)lf[302]+1),t14,t2,C_fix(0),C_SCHEME_FALSE,lf[303]);}

/* k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4864,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[302]+1)))(6,*((C_word*)lf[302]+1),t2,((C_word*)t0)[5],C_fix(0),C_SCHEME_FALSE,lf[303]);}

/* k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4868,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[302]+1)))(6,*((C_word*)lf[302]+1),t2,((C_word*)t0)[3],C_fix(0),C_SCHEME_FALSE,lf[303]);}

/* k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[302]+1)))(6,*((C_word*)lf[302]+1),t2,((C_word*)t0)[7],C_fix(0),C_SCHEME_FALSE,lf[303]);}

/* k4870 in k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)t0)[6])?C_fix(0):C_fix(1));
t4=(C_truep(((C_word*)t0)[4])?C_fix(0):C_fix(2));
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm: 1935 + */
C_plus(5,0,t2,t3,t4,C_fix(0));}
else{
/* posixwin.scm: 1935 + */
C_plus(5,0,t2,t3,t4,C_fix(4));}}

/* k4874 in k4870 in k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4876,2,t0,t1);}
t2=((C_word*)t0)[16];
t3=((C_word*)t0)[15];
t4=((C_word*)t0)[14];
t5=((C_word*)t0)[13];
t6=((C_word*)t0)[12];
t7=((C_word*)t0)[11];
t8=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4739,a[2]=t3,a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=t1,a[14]=t7,a[15]=t6,a[16]=t5,a[17]=t4,tmp=(C_word)a,a+=18,tmp);
if(C_truep(t2)){
t9=(C_word)C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t9=t8;
f_4739(2,t9,C_SCHEME_FALSE);}}

/* k4737 in k4874 in k4870 in k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
t4=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t3=t2;
f_4743(2,t3,C_SCHEME_FALSE);}}

/* k4741 in k4737 in k4874 in k4870 in k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4743,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[17])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[17]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[16])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[16]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[15])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[15]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[14])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[14]):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[13]);
if(C_truep((C_word)stub965(C_SCHEME_UNDEFINED,((C_word*)t0)[12],t1,C_SCHEME_FALSE,t2,t3,t4,t5,t6))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm: 1938 open-input-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[231]+1)))(3,*((C_word*)lf[231]+1),t7,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))));}
else{
t8=t7;
f_4833(2,t8,C_SCHEME_FALSE);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1943 ##sys#update-errno */
t8=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k4851 in k4741 in k4737 in k4874 in k4870 in k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1944 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[300],((C_word*)t0)[3],lf[301],((C_word*)t0)[2]);}

/* k4831 in k4741 in k4737 in k4874 in k4870 in k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4837,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1939 open-output-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[232]+1)))(3,*((C_word*)lf[232]+1),t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
t3=t2;
f_4837(2,t3,C_SCHEME_FALSE);}}

/* k4835 in k4831 in k4741 in k4737 in k4874 in k4870 in k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4841,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1941 open-input-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[231]+1)))(3,*((C_word*)lf[231]+1),t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
/* posixwin.scm: 1937 values */
C_values(6,0,((C_word*)t0)[6],((C_word*)t0)[5],t1,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))),C_SCHEME_FALSE);}}

/* k4839 in k4835 in k4831 in k4741 in k4737 in k4874 in k4870 in k4866 in k4862 in k4858 in k4802 in k4799 in ##sys#process in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1937 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))),t1);}

/* process-run in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4705r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4705r(t0,t1,t2,t3);}}

static void C_ccall f_4705r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t5)){
/* posixwin.scm: 1899 process-spawn */
t6=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,*((C_word*)lf[277]+1),t2,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4722,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1900 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[292]+1)))(2,*((C_word*)lf[292]+1),t6);}}

/* k4720 in process-run in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4726,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1900 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[296]+1)))(3,*((C_word*)lf[296]+1),t2,((C_word*)t0)[2]);}

/* k4724 in k4720 in process-run in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1900 process-spawn */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[277]+1),((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4699(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4699,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[297],t2));}

/* ##sys#shell-command in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4678,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4682,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1883 get-environment-variable */
((C_proc3)C_retrieve_proc(*((C_word*)lf[294]+1)))(3,*((C_word*)lf[294]+1),t2,lf[295]);}

/* k4680 in ##sys#shell-command in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4682,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep((C_word)C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_shlcmd),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4694,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1887 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}}

/* k4692 in k4680 in ##sys#shell-command in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1888 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[292],lf[293]);}

/* current-process-id in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4675,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub940(C_SCHEME_UNDEFINED));}

/* process-spawn in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_4588r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4588r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4588r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4590,a[2]=t3,a[3]=t2,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4602,a[2]=t5,a[3]=((C_word)li107),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4607,a[2]=t6,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4612,a[2]=t7,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-arglst916933 */
t9=t8;
f_4612(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-envlst917931 */
t11=t7;
f_4607(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-exactf918928 */
t13=t6;
f_4602(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body914923 */
t15=t5;
f_4590(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[2],t14);}}}}}

/* def-arglst916 in process-spawn in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4612(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4612,NULL,2,t0,t1);}
/* def-envlst917931 */
t2=((C_word*)t0)[2];
f_4607(t2,t1,C_SCHEME_FALSE);}

/* def-envlst917 in process-spawn in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4607(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4607,NULL,3,t0,t1,t2);}
/* def-exactf918928 */
t3=((C_word*)t0)[2];
f_4602(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf918 in process-spawn in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4602(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4602,NULL,4,t0,t1,t2,t3);}
/* body914923 */
t4=((C_word*)t0)[2];
f_4590(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body914 in process-spawn in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4590(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4590,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4594,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1874 $exec-setup */
t6=lf[285];
f_4450(t6,t5,lf[289],((C_word*)t0)[2],t2,t3,t4);}

/* k4592 in body914 in process-spawn in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[5])){
t2=(C_word)C_spawnvpe(((C_word*)t0)[4],t1);
/* posixwin.scm: 1875 $exec-teardown */
f_4486(((C_word*)t0)[3],lf[289],lf[290],((C_word*)t0)[2],t2);}
else{
t2=(C_word)C_spawnvp(((C_word*)t0)[4],t1);
/* posixwin.scm: 1875 $exec-teardown */
f_4486(((C_word*)t0)[3],lf[289],lf[290],((C_word*)t0)[2],t2);}}

/* process-execute in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr3r,(void*)f_4501r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4501r(t0,t1,t2,t3);}}

static void C_ccall f_4501r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word *a=C_alloc(16);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4503,a[2]=t2,a[3]=((C_word)li101),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4515,a[2]=t4,a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4520,a[2]=t5,a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4525,a[2]=t6,a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-arglst874891 */
t8=t7;
f_4525(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-envlst875889 */
t10=t6;
f_4520(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-exactf876886 */
t12=t5;
f_4515(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body872881 */
t14=t4;
f_4503(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-arglst874 in process-execute in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4525(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4525,NULL,2,t0,t1);}
/* def-envlst875889 */
t2=((C_word*)t0)[2];
f_4520(t2,t1,C_SCHEME_FALSE);}

/* def-envlst875 in process-execute in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4520(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4520,NULL,3,t0,t1,t2);}
/* def-exactf876886 */
t3=((C_word*)t0)[2];
f_4515(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf876 in process-execute in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4515(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4515,NULL,4,t0,t1,t2,t3);}
/* body872881 */
t4=((C_word*)t0)[2];
f_4503(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body872 in process-execute in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4503(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4503,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4507,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1869 $exec-setup */
t6=lf[285];
f_4450(t6,t5,lf[287],((C_word*)t0)[2],t2,t3,t4);}

/* k4505 in body872 in process-execute in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_execve(t1);
/* posixwin.scm: 1870 $exec-teardown */
f_4486(((C_word*)t0)[3],lf[287],lf[288],((C_word*)t0)[2],t2);}
else{
t2=(C_word)C_execvp(t1);
/* posixwin.scm: 1870 $exec-teardown */
f_4486(((C_word*)t0)[3],lf[287],lf[288],((C_word*)t0)[2],t2);}}

/* $exec-teardown in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4486(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4486,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4490,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1861 ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k4488 in $exec-teardown in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_free_exec_args();
t3=(C_word)C_free_exec_env();
t4=(C_word)C_eqp(((C_word*)t0)[6],C_fix(-1));
if(C_truep(t4)){
/* posixwin.scm: 1865 ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* $exec-setup in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4450(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4450,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t3,t2);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4457,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 1853 pathname-strip-directory */
t9=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t3);}

/* k4455 in $exec-setup in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_block_size(t1);
/* posixwin.scm: 1854 setarg */
t4=((C_word*)t0)[4];
f_4366(5,t4,t2,C_fix(0),t1,t3);}

/* k4458 in k4455 in $exec-setup in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4477,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1855 $quote-args-list */
t4=lf[281];
f_4287(t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm: 1855 build-exec-argvec */
f_4400(t2,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],C_fix(1));}}

/* k4475 in k4458 in k4455 in $exec-setup in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1855 build-exec-argvec */
f_4400(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],C_fix(1));}

/* k4461 in k4458 in k4455 in $exec-setup in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4466,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1856 build-exec-argvec */
f_4400(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k4464 in k4461 in k4458 in k4455 in $exec-setup in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4466,2,t0,t1);}
t2=(C_word)C_flushall();
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4473,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1858 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[2]);}

/* k4471 in k4464 in k4461 in k4458 in k4455 in $exec-setup in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1858 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* build-exec-argvec in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4400(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4400,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(t3)){
t6=(C_word)C_i_check_list_2(t3,t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4412,a[2]=t8,a[3]=t2,a[4]=t4,a[5]=((C_word)li97),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_4412(t10,t1,t3,t5);}
else{
/* posixwin.scm: 1850 argvec-setter */
t6=t4;
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,t5,C_SCHEME_FALSE,C_fix(0));}}

/* doloop825 in build-exec-argvec in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4412(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4412,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1846 argvec-setter */
t4=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_check_string_2(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4431,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_block_size(t4);
/* posixwin.scm: 1849 argvec-setter */
t8=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,t3,t4,t7);}}

/* k4429 in doloop825 in build-exec-argvec in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4412(t4,((C_word*)t0)[2],t2,t3);}

/* setenv in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4383(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4383,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub814(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* setarg in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4366,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub804(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4287(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4287,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li92),tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4330,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li93),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4330(t8,t1,t2,C_SCHEME_END_OF_LIST);}}

/* loop in $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4330(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4330,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1827 reverse */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4358,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4361,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t4,a[7]=t6,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm: 1832 needs-quoting? */
t8=((C_word*)t0)[2];
f_4292(t8,t7,t4);}}

/* k4359 in loop in $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4361,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1832 string-append */
t2=((C_word*)t0)[8];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[7],lf[282],((C_word*)t0)[6],lf[283]);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* posixwin.scm: 1829 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4330(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k4356 in loop in $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4358,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* posixwin.scm: 1829 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4330(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* needs-quoting? in $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4292,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4296,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1819 string-length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4294 in needs-quoting? in $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4296,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t1,a[7]=((C_word)li91),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_4301(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k4294 in needs-quoting? in $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4301(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4301,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[6]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4325,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1823 string-ref */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[2],t2);}}

/* k4323 in loop in k4294 in needs-quoting? in $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1823 char-whitespace? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4312 in loop in k4294 in needs-quoting? in $quote-args-list in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1824 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4301(t3,((C_word*)t0)[4],t2);}}

/* glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4175(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_4175r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4175r(t0,t1,t2);}}

static void C_ccall f_4175r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(12);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=((C_word)li89),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_4181(t6,t1,t2);}

/* conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4181,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4196,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li88),tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4202(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4202,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4206,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4276,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=t3;
/* posixwin.scm: 1781 make-pathname */
t8=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posixwin.scm: 1781 make-pathname */
t7=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,C_SCHEME_FALSE,lf[274],t4);}}

/* k4274 in a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1781 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4204 in a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm: 1782 regexp */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k4207 in k4204 in a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4216,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=((C_word*)t0)[5];
/* posixwin.scm: 1783 directory */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posixwin.scm: 1783 directory */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[273],C_SCHEME_TRUE);}}

/* k4214 in k4207 in k4204 in a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4216,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4218,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li87),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_4218(t5,((C_word*)t0)[2],t1);}

/* loop in k4214 in k4207 in k4204 in a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4218,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cdr(((C_word*)t0)[8]);
/* posixwin.scm: 1784 conc-loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4181(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4235,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(t2);
/* posixwin.scm: 1785 string-match */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k4233 in loop in k4214 in k4207 in k4204 in a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4235,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4245,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(t1);
/* posixwin.scm: 1786 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],t3);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* posixwin.scm: 1787 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4218(t3,((C_word*)t0)[6],t2);}}

/* k4243 in k4233 in loop in k4214 in k4207 in k4204 in a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4249,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* posixwin.scm: 1786 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4218(t4,t2,t3);}

/* k4247 in k4243 in k4233 in loop in k4214 in k4207 in k4204 in a4201 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4249,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a4195 in conc-loop in glob in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4196,2,t0,t1);}
/* posixwin.scm: 1780 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* set-buffering-mode! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4116(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4116r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4116r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4116r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4120,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1752 ##sys#check-port */
t6=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[261]);}

/* k4118 in set-buffering-mode! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4120,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[263]);
if(C_truep(t6)){
t7=t5;
f_4126(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=(C_word)C_eqp(t4,lf[264]);
if(C_truep(t7)){
t8=C_fix((C_word)_IOLBF);
t9=t5;
f_4126(2,t9,t8);}
else{
t8=(C_word)C_eqp(t4,lf[265]);
if(C_truep(t8)){
t9=t5;
f_4126(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixwin.scm: 1758 ##sys#error */
t9=*((C_word*)lf[62]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[261],lf[266],((C_word*)t0)[4],((C_word*)t0)[2]);}}}}

/* k4124 in k4118 in set-buffering-mode! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4126,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[261]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(7));
t5=(C_word)C_eqp(lf[78],t4);
if(C_truep(t5)){
t6=(C_word)C_setvbuf(((C_word*)t0)[2],t1,((C_word*)t0)[4]);
t7=t3;
f_4135(t7,(C_word)C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_4135(t6,C_SCHEME_TRUE);}}

/* k4133 in k4124 in k4118 in set-buffering-mode! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_4135(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm: 1764 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],lf[261],lf[262],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* terminal-port? in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4110(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4110,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4114,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1742 ##sys#check-port */
t4=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[260]);}

/* k4112 in terminal-port? in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* _exit in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4094(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_4094r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_4094r(t0,t1,t2);}}

static void C_ccall f_4094r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
if(C_truep((C_word)C_notvemptyp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
t4=t1;
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub703(C_SCHEME_UNDEFINED,t5));}
else{
t3=t1;
t4=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub703(C_SCHEME_UNDEFINED,t4));}}

/* local-timezone-abbreviation in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4082,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,(C_word)stub698(t2),C_fix(0));}

/* local-time->seconds in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4067(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4067,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4071,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1723 check-time-vector */
f_3845(t3,lf[255],t2);}

/* k4069 in local-time->seconds in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4071,2,t0,t1);}
t2=(C_word)C_a_mktime(&a,1,((C_word*)t0)[3]);
if(C_truep((C_word)C_flonum_equalp(t2,lf[256]))){
/* posixwin.scm: 1726 ##sys#error */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[255],lf[257],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* time->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4000(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4000r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4000r(t0,t1,t2,t3);}}

static void C_ccall f_4000r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4004,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_4004(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_4004(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k4002 in time->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1711 check-time-vector */
f_3845(t2,lf[252],((C_word*)t0)[2]);}

/* k4005 in k4002 in time->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4007,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_i_check_string_2(((C_word*)t0)[4],lf[252]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4026,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1715 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub662(t4,t3),C_fix(0));}}

/* k4027 in k4005 in k4002 in time->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(t1);
t3=(C_word)C_fixnum_difference(t2,C_fix(1));
/* posixwin.scm: 1719 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixwin.scm: 1720 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[252],lf[254],((C_word*)t0)[2]);}}

/* k4024 in k4005 in k4002 in time->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4026,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],(C_word)stub668(t3,t2,t1),C_fix(0));}

/* k4014 in k4005 in k4002 in time->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_4016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posixwin.scm: 1716 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[252],lf[253],((C_word*)t0)[2]);}}

/* seconds->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3942r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3942r(t0,t1,t2);}}

static void C_ccall f_3942r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3946,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1701 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[248]+1)))(2,*((C_word*)lf[248]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_3946(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3944 in seconds->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3949,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=t1;
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_integer_argumentp(t3);
t6=(C_word)stub642(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k3947 in k3944 in seconds->string in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(t1);
t3=(C_word)C_fixnum_difference(t2,C_fix(1));
/* posixwin.scm: 1704 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixwin.scm: 1705 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[250],lf[251],((C_word*)t0)[2]);}}

/* seconds->utc-time in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3898r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3898r(t0,t1,t2);}}

static void C_ccall f_3898r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3902,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1695 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[248]+1)))(2,*((C_word*)lf[248]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_check_number_2(t5,lf[249]);
/* posixwin.scm: 1697 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[247]+1)))(4,*((C_word*)lf[247]+1),t1,t5,C_SCHEME_TRUE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3900 in seconds->utc-time in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_number_2(t1,lf[249]);
/* posixwin.scm: 1697 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[247]+1)))(4,*((C_word*)lf[247]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* seconds->local-time in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3864(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3864r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3864r(t0,t1,t2);}}

static void C_ccall f_3864r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3868,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1691 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[248]+1)))(2,*((C_word*)lf[248]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_check_number_2(t5,lf[246]);
/* posixwin.scm: 1693 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[247]+1)))(4,*((C_word*)lf[247]+1),t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3866 in seconds->local-time in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_number_2(t1,lf[246]);
/* posixwin.scm: 1693 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[247]+1)))(4,*((C_word*)lf[247]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* check-time-vector in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3845(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3845,NULL,3,t1,t2,t3);}
t4=(C_word)C_i_check_vector_2(t3,t2);
t5=(C_word)C_block_size(t3);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixwin.scm: 1689 ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[245],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* get-environment-variables in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3779,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3785(t5,t1,C_fix(0));}

/* loop in get-environment-variables in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3785(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3785,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3789,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)stub595(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k3787 in loop in get-environment-variables in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3789,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3797,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word)li73),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3797(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k3787 in loop in get-environment-variables in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3797(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3797,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(C_make_character(61),(C_word)C_subchar(((C_word*)t0)[6],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3823,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 1678 substring */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[6],C_fix(0),t2);}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* posixwin.scm: 1679 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k3821 in scan in k3787 in loop in get-environment-variables in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3827,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_block_size(((C_word*)t0)[3]);
/* posixwin.scm: 1678 substring */
t5=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,((C_word*)t0)[3],t3,t4);}

/* k3825 in k3821 in scan in k3787 in loop in get-environment-variables in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3827,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3815,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1678 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3785(t5,t3,t4);}

/* k3813 in k3825 in k3821 in scan in k3787 in loop in get-environment-variables in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3815,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3759(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3759,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[240]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3767,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1666 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3765 in unsetenv in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3742(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3742,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[239]);
t5=(C_word)C_i_check_string_2(t3,lf[239]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3753,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1661 ##sys#make-c-string */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k3751 in setenv in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3757,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1661 ##sys#make-c-string */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3755 in k3751 in setenv in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* duplicate-fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3712(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_3712r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_3712r(t0,t1,t2,t3);}}

static void C_ccall f_3712r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_exact_2(t2,*((C_word*)lf[237]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3719,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_vemptyp(t3))){
t6=t5;
f_3719(t6,(C_word)C_dup(t2));}
else{
t6=(C_word)C_i_vector_ref(t3,C_fix(0));
t7=(C_word)C_i_check_exact_2(t6,lf[237]);
t8=t5;
f_3719(t8,(C_word)C_dup2(t2,t6));}}

/* k3717 in duplicate-fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3719(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3719,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3722,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3728,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1650 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k3726 in k3717 in duplicate-fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1651 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[237],lf[238],((C_word*)t0)[2]);}

/* k3720 in k3717 in duplicate-fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3677,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3681,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1632 ##sys#check-port */
t4=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[233]);}

/* k3679 in port->fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1633 ##sys#peek-unsigned-integer */
t3=*((C_word*)lf[236]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3708 in k3679 in port->fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3710,2,t0,t1);}
if(C_truep((C_word)C_i_zerop(t1))){
/* posixwin.scm: 1639 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[46],lf[233],lf[234],((C_word*)t0)[2]);}
else{
t2=(C_word)C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3690,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3696,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1636 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k3694 in k3708 in k3679 in port->fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1637 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[233],lf[235],((C_word*)t0)[2]);}

/* k3688 in k3708 in k3679 in port->fileno in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3663(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3663r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3663r(t0,t1,t2,t3);}}

static void C_ccall f_3663r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[232]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3675,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1628 mode */
f_3594(t5,C_SCHEME_FALSE,t3);}

/* k3673 in open-output-file* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3675,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1628 check */
f_3631(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3649(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3649r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3649r(t0,t1,t2,t3);}}

static void C_ccall f_3649r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[231]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3661,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1624 mode */
f_3594(t5,C_SCHEME_TRUE,t3);}

/* k3659 in open-input-file* in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3661,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1624 check */
f_3631(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3631(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3631,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3635,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1615 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3633 in check in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3635,2,t0,t1);}
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1617 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[37],lf[229],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3647,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1618 ##sys#make-port */
t3=*((C_word*)lf[127]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[128]+1),lf[230],lf[78]);}}

/* k3645 in k3633 in check in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* mode in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3594(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3594,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3602,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_i_car(t3);
t6=(C_word)C_eqp(t5,lf[223]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixwin.scm: 1610 ##sys#error */
t8=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[224],t5);}
else{
/* posixwin.scm: 1606 ##sys#make-c-string */
t8=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,lf[225]);}}
else{
/* posixwin.scm: 1611 ##sys#error */
t7=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[226],t5);}}
else{
if(C_truep(t2)){
/* posixwin.scm: 1606 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[227]);}
else{
/* posixwin.scm: 1606 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[228]);}}}

/* k3600 in mode in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1606 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-execute-access? in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3585,3,t0,t1,t2);}
/* posixwin.scm: 1590 check */
f_3549(t1,t2,C_fix((C_word)2),lf[219]);}

/* file-write-access? in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3579,3,t0,t1,t2);}
/* posixwin.scm: 1589 check */
f_3549(t1,t2,C_fix((C_word)4),lf[218]);}

/* file-read-access? in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3573(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3573,3,t0,t1,t2);}
/* posixwin.scm: 1588 check */
f_3549(t1,t2,C_fix((C_word)2),lf[217]);}

/* check in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3549(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3549,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3567,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3571,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1585 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t7,t2);}

/* k3569 in check in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1585 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3565 in check in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3567,2,t0,t1);}
t2=(C_word)C_access(t1,((C_word*)t0)[3]);
t3=(C_word)C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3559,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixwin.scm: 1586 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3557 in k3565 in check in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-file-mode in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3519(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3519,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[215]);
t5=(C_word)C_i_check_exact_2(t3,lf[215]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3543,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3547,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1574 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t7,t2);}

/* k3545 in change-file-mode in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1574 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3541 in change-file-mode in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3543,2,t0,t1);}
t2=(C_word)C_chmod(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3535,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1575 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3533 in k3541 in change-file-mode in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1576 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[215],lf[216],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#interrupt-hook in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3463,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3473,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1482 h */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixwin.scm: 1484 oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k3471 in ##sys#interrupt-hook in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1483 ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3450,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t2,lf[176]);
if(C_truep(t3)){
t5=t2;
t6=(C_word)C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_vector_set(((C_word*)t0)[2],t2,t3));}
else{
t5=(C_word)C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_vector_set(((C_word*)t0)[2],t2,t3));}}

/* signal-handler in k3437 in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3441,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[175]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3365(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3365r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3365r(t0,t1,t2);}}

static void C_ccall f_3365r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3369,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_3369(2,t4,(C_word)C_fixnum_or(*((C_word*)lf[21]+1),*((C_word*)lf[23]+1)));}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_3369(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3367 in create-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3372,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_pipe(C_SCHEME_FALSE,t1),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1419 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixwin.scm: 1421 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k3379 in k3367 in create-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1420 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[37],lf[145],lf[146]);}

/* k3370 in k3367 in create-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1421 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3345r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3345r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3345r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[144]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3349,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k3347 in with-output-to-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3349,2,t0,t1);}
t2=C_mutate((C_word*)lf[144]+1 /* (set! standard-output ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3355,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1404 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a3354 in k3347 in with-output-to-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3355(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_3355r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3355r(t0,t1,t2);}}

static void C_ccall f_3355r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3359,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1406 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3357 in a3354 in k3347 in with-output-to-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[144]+1 /* (set! standard-output ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3325r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3325r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3325r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[142]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3329,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k3327 in with-input-from-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
t2=C_mutate((C_word*)lf[142]+1 /* (set! standard-input ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3335,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1394 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a3334 in k3327 in with-input-from-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3335(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_3335r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3335r(t0,t1,t2);}}

static void C_ccall f_3335r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3339,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1396 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3337 in a3334 in k3327 in with-input-from-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[142]+1 /* (set! standard-input ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3301r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3301r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3301r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3305,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k3303 in call-with-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3310,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3316,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1384 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3315 in k3303 in call-with-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3316r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3316r(t0,t1,t2);}}

static void C_ccall f_3316r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3320,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1387 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3318 in a3315 in k3303 in call-with-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3309 in k3303 in call-with-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3310,2,t0,t1);}
/* posixwin.scm: 1385 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3277r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3277r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3277r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3281,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k3279 in call-with-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3286,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3292,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1376 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3291 in k3279 in call-with-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3292r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3292r(t0,t1,t2);}}

static void C_ccall f_3292r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3296,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1379 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3294 in a3291 in k3279 in call-with-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3285 in k3279 in call-with-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3286,2,t0,t1);}
/* posixwin.scm: 1377 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3258(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3258,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3262,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1363 ##sys#check-port */
t4=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[135]);}

/* k3260 in close-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3262,2,t0,t1);}
t2=(C_word)close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3265,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1365 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3263 in k3260 in close-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t2)){
/* posixwin.scm: 1366 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[37],lf[135],lf[136],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* open-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3222(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3222r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3222r(t0,t1,t2,t3);}}

static void C_ccall f_3222r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t4=(C_word)C_i_check_string_2(t2,lf[134]);
t5=(C_word)C_i_pairp(t3);
t6=(C_truep(t5)?(C_word)C_slot(t3,C_fix(0)):lf[131]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3236,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_eqp(t6,lf[131]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3243,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1358 ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=(C_word)C_eqp(t6,lf[132]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3253,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1359 ##sys#make-c-string */
t11=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixwin.scm: 1333 ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[133],t6);}}}

/* k3251 in open-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3253,2,t0,t1);}
t2=(C_word)open_binary_output_pipe(&a,1,t1);
/* posixwin.scm: 1355 check */
f_3168(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k3241 in open-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3243,2,t0,t1);}
t2=(C_word)open_text_output_pipe(&a,1,t1);
/* posixwin.scm: 1355 check */
f_3168(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k3234 in open-output-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1355 check */
f_3168(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3186r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3186r(t0,t1,t2,t3);}}

static void C_ccall f_3186r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(10);
t4=(C_word)C_i_check_string_2(t2,lf[130]);
t5=(C_word)C_i_pairp(t3);
t6=(C_truep(t5)?(C_word)C_slot(t3,C_fix(0)):lf[131]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3200,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_eqp(t6,lf[131]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3207,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1348 ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=(C_word)C_eqp(t6,lf[132]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3217,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1349 ##sys#make-c-string */
t11=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixwin.scm: 1333 ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[133],t6);}}}

/* k3215 in open-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3217,2,t0,t1);}
t2=(C_word)open_binary_input_pipe(&a,1,t1);
/* posixwin.scm: 1345 check */
f_3168(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3205 in open-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3207,2,t0,t1);}
t2=(C_word)open_text_input_pipe(&a,1,t1);
/* posixwin.scm: 1345 check */
f_3168(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3198 in open-input-pipe in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1345 check */
f_3168(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3168(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3168,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3172,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1335 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3170 in check in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1337 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[37],lf[126],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3184,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1338 ##sys#make-port */
t3=*((C_word*)lf[127]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[128]+1),lf[129],lf[78]);}}

/* k3182 in k3170 in check in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2793,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[112]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2800,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_block_size(t2);
t6=(C_word)C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2933,a[2]=t4,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1272 cwd */
t8=((C_word*)t0)[5];
f_2737(t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=t4,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3140,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1274 sref */
t10=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,t2,C_fix(0));}
else{
t9=t7;
f_2939(t9,C_SCHEME_FALSE);}}}

/* k3138 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_2939(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2939(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2939,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2946,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2950,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1276 cwd */
t4=((C_word*)t0)[6];
f_2737(t4,t3);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[7]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1279 cwd */
t5=((C_word*)t0)[6];
f_2737(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3126,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1280 sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[7],C_fix(0));}}}

/* k3124 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1280 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(126),t1);}

/* k3113 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3122,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1281 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(1));}
else{
t2=((C_word*)t0)[4];
f_2969(t2,C_SCHEME_FALSE);}}

/* k3120 in k3113 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_2969(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2969(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2969,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2992,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1283 cwd */
t4=((C_word*)t0)[5];
f_2737(t4,t3);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[7]);
t3=(C_word)C_eqp(C_fix(2),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1289 cwd */
t5=((C_word*)t0)[5];
f_2737(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3087,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3108,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1290 sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[7],C_fix(0));}}}

/* k3106 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1290 alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3085 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3087,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3093,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3104,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1291 sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_3011(t2,C_SCHEME_FALSE);}}

/* k3102 in k3085 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1291 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k3091 in k3085 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3093,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1292 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_3011(t2,C_SCHEME_FALSE);}}

/* k3098 in k3091 in k3085 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3011(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_3011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3011,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
f_2800(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3017,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3063,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3084,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1294 sref */
t5=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[8],C_fix(0));}}

/* k3082 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1294 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(47),t1);}

/* k3061 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3063,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3069,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3080,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1295 sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_3017(2,t2,C_SCHEME_FALSE);}}

/* k3078 in k3061 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1295 alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3067 in k3061 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3069,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1296 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_3017(2,t2,C_SCHEME_FALSE);}}

/* k3074 in k3067 in k3061 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1296 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k3015 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3017,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1298 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[4],C_fix(1),C_fix(3));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1302 sref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[4],C_fix(0));}}

/* k3058 in k3015 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3060,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1304 cwd */
t6=((C_word*)t0)[2];
f_2737(t6,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3056,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1307 cwd */
t5=((C_word*)t0)[2];
f_2737(t5,t4);}}

/* k3054 in k3058 in k3015 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1307 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[125],((C_word*)t0)[2]);}

/* k3047 in k3058 in k3015 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1304 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(2));}

/* k3043 in k3058 in k3015 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1303 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3022 in k3015 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3028,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
/* posixwin.scm: 1300 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(3),t3);}

/* k3026 in k3022 in k3015 in k3009 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1297 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[124],t1);}

/* k3003 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1289 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[123],((C_word*)t0)[2]);}

/* k2990 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1283 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(3));}

/* k2974 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1285 user */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2978 in k2974 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2984,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
/* posixwin.scm: 1286 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(1),t3);}

/* k2982 in k2978 in k2974 in k2967 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1282 sappend */
t2=((C_word*)t0)[5];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],lf[122],((C_word*)t0)[2],t1);}

/* k2961 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1279 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[121],((C_word*)t0)[2]);}

/* k2948 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1276 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(2));}

/* k2944 in k2937 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1275 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2931 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1272 sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[120]);}

/* k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2919,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_block_size(t1);
/* posixwin.scm: 1308 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t3,t1,C_fix(3),t4);}

/* k2917 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string-split */
((C_proc4)C_retrieve_proc(*((C_word*)lf[88]+1)))(4,*((C_word*)lf[88]+1),((C_word*)t0)[2],t1,lf[119]);}

/* k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2807,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2809,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li40),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_2809(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2809(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2809,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 1310 null? */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2816,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1311 null? */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
/* posixwin.scm: 1322 string=? */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,lf[118],t4);}}

/* k2889 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2891,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* posixwin.scm: 1320 loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2809(t3,((C_word*)t0)[5],((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2900,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* posixwin.scm: 1324 string=? */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[117],t3);}}

/* k2898 in k2889 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2900,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
/* posixwin.scm: 1320 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2809(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[6]);
/* posixwin.scm: 1320 loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2809(t4,((C_word*)t0)[4],((C_word*)t0)[3],t3);}}

/* k2820 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2822,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1312 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[6],((C_word*)t0)[5],C_fix(0),C_fix(3));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2869,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[5]);
t4=(C_word)C_a_i_minus(&a,2,t3,C_fix(1));
/* posixwin.scm: 1313 sref */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[5],t4);}}

/* k2867 in k2820 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2869,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1315 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[2],C_fix(0),C_fix(3));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1318 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[2],C_fix(0),C_fix(3));}}

/* k2855 in k2867 in k2820 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2861,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2865,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1319 reverse */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2863 in k2855 in k2867 in k2820 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string-intersperse */
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],t1,lf[114]);}

/* k2859 in k2855 in k2867 in k2820 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1317 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2836 in k2867 in k2820 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2842,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2846,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_cons(&a,2,lf[115],((C_word*)t0)[2]);
/* posixwin.scm: 1316 reverse */
t5=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k2844 in k2836 in k2867 in k2820 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string-intersperse */
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[2],t1,lf[114]);}

/* k2840 in k2836 in k2867 in k2820 in k2814 in loop in k2805 in k2798 in canonical-path in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1314 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2737(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2737,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2744,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2746,a[2]=((C_word*)t0)[2],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a2745 in cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2746,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2752,a[2]=t2,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2770,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[110]+1)))(4,*((C_word*)lf[110]+1),t1,t3,t4);}

/* a2769 in a2745 in cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2776,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2782,a[2]=((C_word*)t0)[2],a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a2781 in a2769 in a2745 in cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2782(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2782r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2782r(t0,t1,t2);}}

static void C_ccall f_2782r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2788,a[2]=t2,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
/* k362365 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2787 in a2781 in a2769 in a2745 in cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2788,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a2775 in a2769 in a2745 in cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2776,2,t0,t1);}
/* posixwin.scm: 1267 cw */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a2751 in a2745 in cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2752,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2758,a[2]=t2,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
/* k362365 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2757 in a2751 in a2745 in cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2758,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[2],lf[108]))){
t2=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[109]);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[109]);}}

/* k2742 in cwd in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* current-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2670r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2670r(t0,t1,t2);}}

static void C_ccall f_2670r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2674,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_2674(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_2674(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k2672 in current-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2674,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1245 change-directory */
((C_proc3)C_retrieve_proc(*((C_word*)lf[90]+1)))(3,*((C_word*)lf[90]+1),((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2683,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1246 make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(256));}}

/* k2681 in k2672 in current-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2683,2,t0,t1);}
t2=(C_word)C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2686,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1248 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2684 in k2681 in k2672 in current-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* posixwin.scm: 1250 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4]);}
else{
/* posixwin.scm: 1251 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],lf[98],lf[101]);}}

/* directory? in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2643,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[99]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2650,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2668,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1238 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t6,t2);}

/* k2666 in directory? in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1238 ##sys#platform-fixup-pathname */
((C_proc3)C_retrieve_proc(*((C_word*)lf[100]+1)))(3,*((C_word*)lf[100]+1),((C_word*)t0)[2],t1);}

/* k2662 in directory? in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1237 ##sys#file-info */
t2=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2648 in directory? in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(C_fix(1),t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_2483r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2483r(t0,t1,t2);}}

static void C_ccall f_2483r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2485,a[2]=((C_word*)t0)[2],a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2586,a[2]=t3,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2591,a[2]=t4,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-spec253295 */
t6=t5;
f_2591(t6,t1);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-show-dotfiles?254293 */
t8=t4;
f_2586(t8,t1,t6);}
else{
t8=(C_word)C_i_car(t7);
t9=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t9))){
/* body251259 */
t10=t3;
f_2485(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[2],t9);}}}}

/* def-spec253 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2591(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2591,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2599,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1208 current-directory */
((C_proc2)C_retrieve_proc(*((C_word*)lf[98]+1)))(2,*((C_word*)lf[98]+1),t2);}

/* k2597 in def-spec253 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?254293 */
t2=((C_word*)t0)[3];
f_2586(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?254 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2586,NULL,3,t0,t1,t2);}
/* body251259 */
t3=((C_word*)t0)[2];
f_2485(t3,t1,t2,C_SCHEME_FALSE);}

/* body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2485(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2485,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[95]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2492,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1210 make-string */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_fix(256));}

/* k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1211 ##sys#make-pointer */
((C_proc2)C_retrieve_proc(*((C_word*)lf[97]+1)))(2,*((C_word*)lf[97]+1),t2);}

/* k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1212 ##sys#make-pointer */
((C_proc2)C_retrieve_proc(*((C_word*)lf[97]+1)))(2,*((C_word*)lf[97]+1),t2);}

/* k2496 in k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2502,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2585,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1213 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[4]);}

/* k2583 in k2496 in k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1213 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2500 in k2496 in k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2502,2,t0,t1);}
t2=(C_word)C_opendir(t1,((C_word*)t0)[7]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[7]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1216 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word)li25),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2519(t6,((C_word*)t0)[6]);}}

/* loop in k2500 in k2496 in k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2519(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2519,NULL,2,t0,t1);}
t2=(C_word)C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
t3=(C_word)C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1225 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k2527 in loop in k2500 in k2496 in k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=(C_word)C_i_string_ref(t1,C_fix(0));
t3=(C_word)C_i_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?(C_word)C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2541,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t2,C_make_character(46));
if(C_truep(t6)){
t7=(C_word)C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_2541(t8,t7);}
else{
t8=(C_word)C_eqp(t4,C_make_character(46));
if(C_truep(t8)){
t9=(C_word)C_eqp(((C_word*)t0)[5],C_fix(2));
t10=t5;
f_2541(t10,(C_truep(t9)?t9:(C_word)C_i_not(((C_word*)t0)[2])));}
else{
t9=t5;
f_2541(t9,(C_word)C_i_not(((C_word*)t0)[2]));}}}
else{
t7=t5;
f_2541(t7,C_SCHEME_FALSE);}}

/* k2539 in k2527 in loop in k2500 in k2496 in k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2541(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2541,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1232 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2519(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1233 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2519(t3,t2);}}

/* k2549 in k2539 in k2527 in loop in k2500 in k2496 in k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2509 in k2500 in k2496 in k2493 in k2490 in body251 in directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1217 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[95],lf[96],((C_word*)t0)[2]);}

/* delete-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2456,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[92]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2477,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1200 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2479 in delete-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1200 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2475 in delete-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2477,2,t0,t1);}
t2=(C_word)C_rmdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1201 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2467 in k2475 in delete-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1202 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[92],lf[93],((C_word*)t0)[2]);}

/* change-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2429,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[90]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2450,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2454,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1193 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2452 in change-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1193 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2448 in change-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2450,2,t0,t1);}
t2=(C_word)C_chdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1194 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2440 in k2448 in change-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1195 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[90],lf[91],((C_word*)t0)[2]);}

/* create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2303r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2303r(t0,t1,t2,t3);}}

static void C_ccall f_2303r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2307,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2307(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2307(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2307,2,t0,t1);}
t2=(C_word)C_i_check_string_2(((C_word*)t0)[3],lf[84]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1185 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[3]);}

/* k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2319,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1174 string-split */
((C_proc4)C_retrieve_proc(*((C_word*)lf[88]+1)))(4,*((C_word*)lf[88]+1),t2,t1,lf[89]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2408,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1157 ##sys#make-c-string */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}}

/* k2406 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2408,2,t0,t1);}
t2=(C_word)C_mkdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1158 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2398 in k2406 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1159 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[84],lf[85],((C_word*)t0)[2]);}

/* k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2319,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_cdr(t1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2331,a[2]=t7,a[3]=t4,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2331(t9,((C_word*)t0)[2],t5);}

/* loop199 in k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2331(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2331,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2345,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1178 string-append */
t5=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)((C_word*)t0)[3])[1],lf[87],t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2343 in loop199 in k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2345,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=((C_word*)((C_word*)t0)[5])[1];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2358,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2378,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1163 file-exists? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),t6,t3);}

/* k2376 in k2343 in loop199 in k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2378,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1164 ##sys#file-info */
t3=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2358(t2,C_SCHEME_FALSE);}}

/* k2379 in k2376 in k2343 in loop199 in k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
f_2358(t3,(C_word)C_eqp(C_fix(1),t2));}
else{
t2=((C_word*)t0)[2];
f_2358(t2,C_SCHEME_FALSE);}}

/* k2356 in k2343 in loop199 in k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2358,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t3=((C_word*)((C_word*)t0)[5])[1];
f_2331(t3,((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1157 ##sys#make-c-string */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k2373 in k2356 in k2343 in loop199 in k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=(C_word)C_mkdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=(C_word)C_slot(((C_word*)t0)[6],C_fix(1));
t5=((C_word*)((C_word*)t0)[5])[1];
f_2331(t5,((C_word*)t0)[4],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1158 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2365 in k2373 in k2356 in k2343 in loop199 in k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1159 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[84],lf[85],((C_word*)t0)[2]);}

/* k2346 in k2343 in loop199 in k2317 in k2311 in k2305 in create-directory in k2299 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2331(t3,((C_word*)t0)[2],t2);}

/* set-file-position! in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2241r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2241r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2241r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_fix((C_word)SEEK_SET));
t7=(C_word)C_i_check_exact_2(t3,lf[76]);
t8=(C_word)C_i_check_exact_2(t6,lf[76]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2254,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_negativep(t3))){
/* posixwin.scm: 1127 ##sys#signal-hook */
t10=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t9,lf[81],lf[76],lf[82],t3,t2);}
else{
t10=t9;
f_2254(2,t10,C_SCHEME_UNDEFINED);}}

/* k2252 in set-file-position! in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2254,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2260,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2266,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1128 port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[80]+1)))(3,*((C_word*)lf[80]+1),t3,((C_word*)t0)[4]);}

/* k2264 in k2252 in set-file-position! in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t3=(C_word)C_eqp(t2,lf[78]);
if(C_truep(t3)){
t4=(C_word)C_fseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_2260(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_2260(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[5]))){
t2=(C_word)C_lseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2260(2,t3,t2);}
else{
/* posixwin.scm: 1134 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[46],lf[76],lf[79],((C_word*)t0)[5]);}}}

/* k2258 in k2252 in set-file-position! in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixwin.scm: 1135 posix-error */
t2=lf[5];
f_1854(7,t2,((C_word*)t0)[4],lf[37],lf[76],lf[77],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* f6455 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f6455(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6455,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[75]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6461 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f6461(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6461,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6467 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f6467(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6467,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[73]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6473 in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f6473(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6473,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[72]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* symbolic-link? in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2212,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[71]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* regular-file? in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2189,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[69]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2196,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2210,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1104 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2208 in regular-file? in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1104 ##sys#file-info */
t2=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2194 in regular-file? in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(C_fix(0),t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* file-permissions in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2183,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2187,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1100 ##sys#stat */
f_2084(t3,t2);}

/* k2185 in file-permissions in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2177,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2181,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1099 ##sys#stat */
f_2084(t3,t2);}

/* k2179 in file-owner in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2171(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2171,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2175,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1098 ##sys#stat */
f_2084(t3,t2);}

/* k2173 in file-change-time in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2175,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2165,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2169,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1097 ##sys#stat */
f_2084(t3,t2);}

/* k2167 in file-access-time in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2169,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-modification-time in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2159,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2163,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1096 ##sys#stat */
f_2084(t3,t2);}

/* k2161 in file-modification-time in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2163,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* file-size in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2153,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2157,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1095 ##sys#stat */
f_2084(t3,t2);}

/* k2155 in file-size in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size));}

/* file-stat in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2122(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2122r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2122r(t0,t1,t2,t3);}}

static void C_ccall f_2122r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2126,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2126(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2126(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k2124 in file-stat in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1089 ##sys#stat */
f_2084(t2,((C_word*)t0)[2]);}

/* k2127 in k2124 in file-stat in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2129,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(0),C_fix(0),C_fix(0),C_fix(0)));}

/* ##sys#stat in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_fcall f_2084(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2084,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2088,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_2088(2,t4,(C_word)C_fstat(t2));}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2113,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2117,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1082 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}
else{
/* posixwin.scm: 1083 ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[46],lf[60],t2);}}}

/* k2115 in ##sys#stat in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1082 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2111 in ##sys#stat in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_stat(t1);
t3=((C_word*)t0)[2];
f_2088(2,t3,t2);}

/* k2086 in ##sys#stat in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2088,2,t0,t1);}
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1085 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2095 in k2086 in ##sys#stat in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1086 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],lf[59],((C_word*)t0)[2]);}

/* file-mkstemp in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2046,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[52]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2053,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1051 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2051 in file-mkstemp in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2053,2,t0,t1);}
t2=(C_word)C_mkstemp(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2056,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1053 string-length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}

/* k2054 in k2051 in file-mkstemp in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2059,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2076,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1055 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_2059(2,t4,C_SCHEME_UNDEFINED);}}

/* k2074 in k2054 in k2051 in file-mkstemp in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1056 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[52],lf[54],((C_word*)t0)[2]);}

/* k2057 in k2054 in k2051 in file-mkstemp in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2066,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1057 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k2064 in k2057 in k2054 in k2051 in file-mkstemp in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1057 values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2004r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2004r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2004r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=(C_word)C_i_check_exact_2(t2,lf[48]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2011,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(t3))){
if(C_truep((C_word)C_byteblockp(t3))){
t7=t6;
f_2011(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1038 ##sys#signal-hook */
t7=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[46],lf[48],lf[50],t3);}}
else{
/* posixwin.scm: 1038 ##sys#signal-hook */
t7=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[46],lf[48],lf[50],t3);}}

/* k2009 in file-write in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2011,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):(C_word)C_block_size(((C_word*)t0)[4]));
t4=(C_word)C_i_check_exact_2(t3,lf[48]);
t5=(C_word)C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2020,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2026,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1043 ##sys#update-errno */
t9=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* k2024 in k2009 in file-write in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1044 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[48],lf[49],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2018 in k2009 in file-write in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1959r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1959r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1959r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_i_check_exact_2(t2,lf[44]);
t6=(C_word)C_i_check_exact_2(t3,lf[44]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1969,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(t4))){
t8=t7;
f_1969(2,t8,(C_word)C_i_vector_ref(t4,C_fix(0)));}
else{
/* posixwin.scm: 1025 make-string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k1967 in file-read in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(t1))){
if(C_truep((C_word)C_byteblockp(t1))){
t3=t2;
f_1972(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1027 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[46],lf[44],lf[47],t1);}}
else{
/* posixwin.scm: 1027 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[46],lf[44],lf[47],t1);}}

/* k1970 in k1967 in file-read in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1972,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1975,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1030 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t2));}}

/* k1982 in k1970 in k1967 in file-read in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1031 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[44],lf[45],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1973 in k1970 in k1967 in file-read in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1975,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1941,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[41]);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1954,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1017 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1952 in file-close in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1018 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[41],lf[42],((C_word*)t0)[2]);}

/* file-open in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1900r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1900r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1900r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t4,C_fix(0)):((C_word*)t0)[2]);
t7=(C_word)C_i_check_string_2(t2,lf[36]);
t8=(C_word)C_i_check_exact_2(t3,lf[36]);
t9=(C_word)C_i_check_exact_2(t6,lf[36]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1917,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1933,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1007 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t11,t2);}

/* k1931 in file-open in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1007 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1915 in file-open in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1917,2,t0,t1);}
t2=(C_word)C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1920,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1926,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1009 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k1924 in k1915 in file-open in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1010 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[5],lf[37],lf[36],lf[38],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1918 in k1915 in file-open in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* posix-error in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1854(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_1854r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1854r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1854r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1858,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 938  ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k1856 in posix-error in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1869,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t1);
t6=(C_word)stub12(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k1867 in k1856 in posix-error in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 939  string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[7],t1);}

/* k1863 in k1856 in posix-error in k1840 in k1837 in k1834 in k1831 in k1828 in k1825 in k1822 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[6]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[454] = {
{"toplevel:posixwin_scm",(void*)C_posix_toplevel},
{"f_1824:posixwin_scm",(void*)f_1824},
{"f_1827:posixwin_scm",(void*)f_1827},
{"f_1830:posixwin_scm",(void*)f_1830},
{"f_1833:posixwin_scm",(void*)f_1833},
{"f_1836:posixwin_scm",(void*)f_1836},
{"f_1839:posixwin_scm",(void*)f_1839},
{"f_1842:posixwin_scm",(void*)f_1842},
{"f_5772:posixwin_scm",(void*)f_5772},
{"f_5788:posixwin_scm",(void*)f_5788},
{"f_5776:posixwin_scm",(void*)f_5776},
{"f_5779:posixwin_scm",(void*)f_5779},
{"f_2301:posixwin_scm",(void*)f_2301},
{"f_3439:posixwin_scm",(void*)f_3439},
{"f_5753:posixwin_scm",(void*)f_5753},
{"f_5750:posixwin_scm",(void*)f_5750},
{"f_5743:posixwin_scm",(void*)f_5743},
{"f_5737:posixwin_scm",(void*)f_5737},
{"f_5731:posixwin_scm",(void*)f_5731},
{"f_5725:posixwin_scm",(void*)f_5725},
{"f_5719:posixwin_scm",(void*)f_5719},
{"f_5713:posixwin_scm",(void*)f_5713},
{"f_5707:posixwin_scm",(void*)f_5707},
{"f_5701:posixwin_scm",(void*)f_5701},
{"f_5695:posixwin_scm",(void*)f_5695},
{"f_5689:posixwin_scm",(void*)f_5689},
{"f_5683:posixwin_scm",(void*)f_5683},
{"f_5677:posixwin_scm",(void*)f_5677},
{"f_5671:posixwin_scm",(void*)f_5671},
{"f_5665:posixwin_scm",(void*)f_5665},
{"f_5659:posixwin_scm",(void*)f_5659},
{"f_5653:posixwin_scm",(void*)f_5653},
{"f_5647:posixwin_scm",(void*)f_5647},
{"f_5641:posixwin_scm",(void*)f_5641},
{"f_5635:posixwin_scm",(void*)f_5635},
{"f_5629:posixwin_scm",(void*)f_5629},
{"f_5623:posixwin_scm",(void*)f_5623},
{"f_5617:posixwin_scm",(void*)f_5617},
{"f_5611:posixwin_scm",(void*)f_5611},
{"f_5605:posixwin_scm",(void*)f_5605},
{"f_5599:posixwin_scm",(void*)f_5599},
{"f_5593:posixwin_scm",(void*)f_5593},
{"f_5587:posixwin_scm",(void*)f_5587},
{"f_5581:posixwin_scm",(void*)f_5581},
{"f_5575:posixwin_scm",(void*)f_5575},
{"f_5569:posixwin_scm",(void*)f_5569},
{"f_5563:posixwin_scm",(void*)f_5563},
{"f_5557:posixwin_scm",(void*)f_5557},
{"f_5551:posixwin_scm",(void*)f_5551},
{"f_5545:posixwin_scm",(void*)f_5545},
{"f_5539:posixwin_scm",(void*)f_5539},
{"f_5533:posixwin_scm",(void*)f_5533},
{"f_5527:posixwin_scm",(void*)f_5527},
{"f_5521:posixwin_scm",(void*)f_5521},
{"f_5515:posixwin_scm",(void*)f_5515},
{"f_5509:posixwin_scm",(void*)f_5509},
{"f_5503:posixwin_scm",(void*)f_5503},
{"f_5497:posixwin_scm",(void*)f_5497},
{"f_5491:posixwin_scm",(void*)f_5491},
{"f_5271:posixwin_scm",(void*)f_5271},
{"f_5422:posixwin_scm",(void*)f_5422},
{"f_5428:posixwin_scm",(void*)f_5428},
{"f_5417:posixwin_scm",(void*)f_5417},
{"f_5412:posixwin_scm",(void*)f_5412},
{"f_5273:posixwin_scm",(void*)f_5273},
{"f_5399:posixwin_scm",(void*)f_5399},
{"f_5407:posixwin_scm",(void*)f_5407},
{"f_5280:posixwin_scm",(void*)f_5280},
{"f_5387:posixwin_scm",(void*)f_5387},
{"f_5290:posixwin_scm",(void*)f_5290},
{"f_5292:posixwin_scm",(void*)f_5292},
{"f_5311:posixwin_scm",(void*)f_5311},
{"f_5373:posixwin_scm",(void*)f_5373},
{"f_5380:posixwin_scm",(void*)f_5380},
{"f_5367:posixwin_scm",(void*)f_5367},
{"f_5326:posixwin_scm",(void*)f_5326},
{"f_5357:posixwin_scm",(void*)f_5357},
{"f_5343:posixwin_scm",(void*)f_5343},
{"f_5355:posixwin_scm",(void*)f_5355},
{"f_5351:posixwin_scm",(void*)f_5351},
{"f_5338:posixwin_scm",(void*)f_5338},
{"f_5336:posixwin_scm",(void*)f_5336},
{"f_5391:posixwin_scm",(void*)f_5391},
{"f_5256:posixwin_scm",(void*)f_5256},
{"f_5266:posixwin_scm",(void*)f_5266},
{"f_5225:posixwin_scm",(void*)f_5225},
{"f_5251:posixwin_scm",(void*)f_5251},
{"f_5236:posixwin_scm",(void*)f_5236},
{"f_5240:posixwin_scm",(void*)f_5240},
{"f_5244:posixwin_scm",(void*)f_5244},
{"f_5248:posixwin_scm",(void*)f_5248},
{"f_5213:posixwin_scm",(void*)f_5213},
{"f_5210:posixwin_scm",(void*)f_5210},
{"f_5150:posixwin_scm",(void*)f_5150},
{"f_5177:posixwin_scm",(void*)f_5177},
{"f_5187:posixwin_scm",(void*)f_5187},
{"f_5171:posixwin_scm",(void*)f_5171},
{"f_5138:posixwin_scm",(void*)f_5138},
{"f_5058:posixwin_scm",(void*)f_5058},
{"f_5075:posixwin_scm",(void*)f_5075},
{"f_5070:posixwin_scm",(void*)f_5070},
{"f_5065:posixwin_scm",(void*)f_5065},
{"f_5060:posixwin_scm",(void*)f_5060},
{"f_4978:posixwin_scm",(void*)f_4978},
{"f_4995:posixwin_scm",(void*)f_4995},
{"f_4990:posixwin_scm",(void*)f_4990},
{"f_4985:posixwin_scm",(void*)f_4985},
{"f_4980:posixwin_scm",(void*)f_4980},
{"f_4916:posixwin_scm",(void*)f_4916},
{"f_4972:posixwin_scm",(void*)f_4972},
{"f_4976:posixwin_scm",(void*)f_4976},
{"f_4937:posixwin_scm",(void*)f_4937},
{"f_4940:posixwin_scm",(void*)f_4940},
{"f_4951:posixwin_scm",(void*)f_4951},
{"f_4945:posixwin_scm",(void*)f_4945},
{"f_4918:posixwin_scm",(void*)f_4918},
{"f_4927:posixwin_scm",(void*)f_4927},
{"f_4797:posixwin_scm",(void*)f_4797},
{"f_4801:posixwin_scm",(void*)f_4801},
{"f_4892:posixwin_scm",(void*)f_4892},
{"f_4804:posixwin_scm",(void*)f_4804},
{"f_4860:posixwin_scm",(void*)f_4860},
{"f_4864:posixwin_scm",(void*)f_4864},
{"f_4868:posixwin_scm",(void*)f_4868},
{"f_4872:posixwin_scm",(void*)f_4872},
{"f_4876:posixwin_scm",(void*)f_4876},
{"f_4739:posixwin_scm",(void*)f_4739},
{"f_4743:posixwin_scm",(void*)f_4743},
{"f_4853:posixwin_scm",(void*)f_4853},
{"f_4833:posixwin_scm",(void*)f_4833},
{"f_4837:posixwin_scm",(void*)f_4837},
{"f_4841:posixwin_scm",(void*)f_4841},
{"f_4705:posixwin_scm",(void*)f_4705},
{"f_4722:posixwin_scm",(void*)f_4722},
{"f_4726:posixwin_scm",(void*)f_4726},
{"f_4699:posixwin_scm",(void*)f_4699},
{"f_4678:posixwin_scm",(void*)f_4678},
{"f_4682:posixwin_scm",(void*)f_4682},
{"f_4694:posixwin_scm",(void*)f_4694},
{"f_4675:posixwin_scm",(void*)f_4675},
{"f_4588:posixwin_scm",(void*)f_4588},
{"f_4612:posixwin_scm",(void*)f_4612},
{"f_4607:posixwin_scm",(void*)f_4607},
{"f_4602:posixwin_scm",(void*)f_4602},
{"f_4590:posixwin_scm",(void*)f_4590},
{"f_4594:posixwin_scm",(void*)f_4594},
{"f_4501:posixwin_scm",(void*)f_4501},
{"f_4525:posixwin_scm",(void*)f_4525},
{"f_4520:posixwin_scm",(void*)f_4520},
{"f_4515:posixwin_scm",(void*)f_4515},
{"f_4503:posixwin_scm",(void*)f_4503},
{"f_4507:posixwin_scm",(void*)f_4507},
{"f_4486:posixwin_scm",(void*)f_4486},
{"f_4490:posixwin_scm",(void*)f_4490},
{"f_4450:posixwin_scm",(void*)f_4450},
{"f_4457:posixwin_scm",(void*)f_4457},
{"f_4460:posixwin_scm",(void*)f_4460},
{"f_4477:posixwin_scm",(void*)f_4477},
{"f_4463:posixwin_scm",(void*)f_4463},
{"f_4466:posixwin_scm",(void*)f_4466},
{"f_4473:posixwin_scm",(void*)f_4473},
{"f_4400:posixwin_scm",(void*)f_4400},
{"f_4412:posixwin_scm",(void*)f_4412},
{"f_4431:posixwin_scm",(void*)f_4431},
{"f_4383:posixwin_scm",(void*)f_4383},
{"f_4366:posixwin_scm",(void*)f_4366},
{"f_4287:posixwin_scm",(void*)f_4287},
{"f_4330:posixwin_scm",(void*)f_4330},
{"f_4361:posixwin_scm",(void*)f_4361},
{"f_4358:posixwin_scm",(void*)f_4358},
{"f_4292:posixwin_scm",(void*)f_4292},
{"f_4296:posixwin_scm",(void*)f_4296},
{"f_4301:posixwin_scm",(void*)f_4301},
{"f_4325:posixwin_scm",(void*)f_4325},
{"f_4314:posixwin_scm",(void*)f_4314},
{"f_4175:posixwin_scm",(void*)f_4175},
{"f_4181:posixwin_scm",(void*)f_4181},
{"f_4202:posixwin_scm",(void*)f_4202},
{"f_4276:posixwin_scm",(void*)f_4276},
{"f_4206:posixwin_scm",(void*)f_4206},
{"f_4209:posixwin_scm",(void*)f_4209},
{"f_4216:posixwin_scm",(void*)f_4216},
{"f_4218:posixwin_scm",(void*)f_4218},
{"f_4235:posixwin_scm",(void*)f_4235},
{"f_4245:posixwin_scm",(void*)f_4245},
{"f_4249:posixwin_scm",(void*)f_4249},
{"f_4196:posixwin_scm",(void*)f_4196},
{"f_4116:posixwin_scm",(void*)f_4116},
{"f_4120:posixwin_scm",(void*)f_4120},
{"f_4126:posixwin_scm",(void*)f_4126},
{"f_4135:posixwin_scm",(void*)f_4135},
{"f_4110:posixwin_scm",(void*)f_4110},
{"f_4114:posixwin_scm",(void*)f_4114},
{"f_4094:posixwin_scm",(void*)f_4094},
{"f_4082:posixwin_scm",(void*)f_4082},
{"f_4067:posixwin_scm",(void*)f_4067},
{"f_4071:posixwin_scm",(void*)f_4071},
{"f_4000:posixwin_scm",(void*)f_4000},
{"f_4004:posixwin_scm",(void*)f_4004},
{"f_4007:posixwin_scm",(void*)f_4007},
{"f_4029:posixwin_scm",(void*)f_4029},
{"f_4026:posixwin_scm",(void*)f_4026},
{"f_4016:posixwin_scm",(void*)f_4016},
{"f_3942:posixwin_scm",(void*)f_3942},
{"f_3946:posixwin_scm",(void*)f_3946},
{"f_3949:posixwin_scm",(void*)f_3949},
{"f_3898:posixwin_scm",(void*)f_3898},
{"f_3902:posixwin_scm",(void*)f_3902},
{"f_3864:posixwin_scm",(void*)f_3864},
{"f_3868:posixwin_scm",(void*)f_3868},
{"f_3845:posixwin_scm",(void*)f_3845},
{"f_3779:posixwin_scm",(void*)f_3779},
{"f_3785:posixwin_scm",(void*)f_3785},
{"f_3789:posixwin_scm",(void*)f_3789},
{"f_3797:posixwin_scm",(void*)f_3797},
{"f_3823:posixwin_scm",(void*)f_3823},
{"f_3827:posixwin_scm",(void*)f_3827},
{"f_3815:posixwin_scm",(void*)f_3815},
{"f_3759:posixwin_scm",(void*)f_3759},
{"f_3767:posixwin_scm",(void*)f_3767},
{"f_3742:posixwin_scm",(void*)f_3742},
{"f_3753:posixwin_scm",(void*)f_3753},
{"f_3757:posixwin_scm",(void*)f_3757},
{"f_3712:posixwin_scm",(void*)f_3712},
{"f_3719:posixwin_scm",(void*)f_3719},
{"f_3728:posixwin_scm",(void*)f_3728},
{"f_3722:posixwin_scm",(void*)f_3722},
{"f_3677:posixwin_scm",(void*)f_3677},
{"f_3681:posixwin_scm",(void*)f_3681},
{"f_3710:posixwin_scm",(void*)f_3710},
{"f_3696:posixwin_scm",(void*)f_3696},
{"f_3690:posixwin_scm",(void*)f_3690},
{"f_3663:posixwin_scm",(void*)f_3663},
{"f_3675:posixwin_scm",(void*)f_3675},
{"f_3649:posixwin_scm",(void*)f_3649},
{"f_3661:posixwin_scm",(void*)f_3661},
{"f_3631:posixwin_scm",(void*)f_3631},
{"f_3635:posixwin_scm",(void*)f_3635},
{"f_3647:posixwin_scm",(void*)f_3647},
{"f_3594:posixwin_scm",(void*)f_3594},
{"f_3602:posixwin_scm",(void*)f_3602},
{"f_3585:posixwin_scm",(void*)f_3585},
{"f_3579:posixwin_scm",(void*)f_3579},
{"f_3573:posixwin_scm",(void*)f_3573},
{"f_3549:posixwin_scm",(void*)f_3549},
{"f_3571:posixwin_scm",(void*)f_3571},
{"f_3567:posixwin_scm",(void*)f_3567},
{"f_3559:posixwin_scm",(void*)f_3559},
{"f_3519:posixwin_scm",(void*)f_3519},
{"f_3547:posixwin_scm",(void*)f_3547},
{"f_3543:posixwin_scm",(void*)f_3543},
{"f_3535:posixwin_scm",(void*)f_3535},
{"f_3463:posixwin_scm",(void*)f_3463},
{"f_3473:posixwin_scm",(void*)f_3473},
{"f_3450:posixwin_scm",(void*)f_3450},
{"f_3441:posixwin_scm",(void*)f_3441},
{"f_3365:posixwin_scm",(void*)f_3365},
{"f_3369:posixwin_scm",(void*)f_3369},
{"f_3381:posixwin_scm",(void*)f_3381},
{"f_3372:posixwin_scm",(void*)f_3372},
{"f_3345:posixwin_scm",(void*)f_3345},
{"f_3349:posixwin_scm",(void*)f_3349},
{"f_3355:posixwin_scm",(void*)f_3355},
{"f_3359:posixwin_scm",(void*)f_3359},
{"f_3325:posixwin_scm",(void*)f_3325},
{"f_3329:posixwin_scm",(void*)f_3329},
{"f_3335:posixwin_scm",(void*)f_3335},
{"f_3339:posixwin_scm",(void*)f_3339},
{"f_3301:posixwin_scm",(void*)f_3301},
{"f_3305:posixwin_scm",(void*)f_3305},
{"f_3316:posixwin_scm",(void*)f_3316},
{"f_3320:posixwin_scm",(void*)f_3320},
{"f_3310:posixwin_scm",(void*)f_3310},
{"f_3277:posixwin_scm",(void*)f_3277},
{"f_3281:posixwin_scm",(void*)f_3281},
{"f_3292:posixwin_scm",(void*)f_3292},
{"f_3296:posixwin_scm",(void*)f_3296},
{"f_3286:posixwin_scm",(void*)f_3286},
{"f_3258:posixwin_scm",(void*)f_3258},
{"f_3262:posixwin_scm",(void*)f_3262},
{"f_3265:posixwin_scm",(void*)f_3265},
{"f_3222:posixwin_scm",(void*)f_3222},
{"f_3253:posixwin_scm",(void*)f_3253},
{"f_3243:posixwin_scm",(void*)f_3243},
{"f_3236:posixwin_scm",(void*)f_3236},
{"f_3186:posixwin_scm",(void*)f_3186},
{"f_3217:posixwin_scm",(void*)f_3217},
{"f_3207:posixwin_scm",(void*)f_3207},
{"f_3200:posixwin_scm",(void*)f_3200},
{"f_3168:posixwin_scm",(void*)f_3168},
{"f_3172:posixwin_scm",(void*)f_3172},
{"f_3184:posixwin_scm",(void*)f_3184},
{"f_2793:posixwin_scm",(void*)f_2793},
{"f_3140:posixwin_scm",(void*)f_3140},
{"f_2939:posixwin_scm",(void*)f_2939},
{"f_3126:posixwin_scm",(void*)f_3126},
{"f_3115:posixwin_scm",(void*)f_3115},
{"f_3122:posixwin_scm",(void*)f_3122},
{"f_2969:posixwin_scm",(void*)f_2969},
{"f_3108:posixwin_scm",(void*)f_3108},
{"f_3087:posixwin_scm",(void*)f_3087},
{"f_3104:posixwin_scm",(void*)f_3104},
{"f_3093:posixwin_scm",(void*)f_3093},
{"f_3100:posixwin_scm",(void*)f_3100},
{"f_3011:posixwin_scm",(void*)f_3011},
{"f_3084:posixwin_scm",(void*)f_3084},
{"f_3063:posixwin_scm",(void*)f_3063},
{"f_3080:posixwin_scm",(void*)f_3080},
{"f_3069:posixwin_scm",(void*)f_3069},
{"f_3076:posixwin_scm",(void*)f_3076},
{"f_3017:posixwin_scm",(void*)f_3017},
{"f_3060:posixwin_scm",(void*)f_3060},
{"f_3056:posixwin_scm",(void*)f_3056},
{"f_3049:posixwin_scm",(void*)f_3049},
{"f_3045:posixwin_scm",(void*)f_3045},
{"f_3024:posixwin_scm",(void*)f_3024},
{"f_3028:posixwin_scm",(void*)f_3028},
{"f_3005:posixwin_scm",(void*)f_3005},
{"f_2992:posixwin_scm",(void*)f_2992},
{"f_2976:posixwin_scm",(void*)f_2976},
{"f_2980:posixwin_scm",(void*)f_2980},
{"f_2984:posixwin_scm",(void*)f_2984},
{"f_2963:posixwin_scm",(void*)f_2963},
{"f_2950:posixwin_scm",(void*)f_2950},
{"f_2946:posixwin_scm",(void*)f_2946},
{"f_2933:posixwin_scm",(void*)f_2933},
{"f_2800:posixwin_scm",(void*)f_2800},
{"f_2919:posixwin_scm",(void*)f_2919},
{"f_2807:posixwin_scm",(void*)f_2807},
{"f_2809:posixwin_scm",(void*)f_2809},
{"f_2816:posixwin_scm",(void*)f_2816},
{"f_2891:posixwin_scm",(void*)f_2891},
{"f_2900:posixwin_scm",(void*)f_2900},
{"f_2822:posixwin_scm",(void*)f_2822},
{"f_2869:posixwin_scm",(void*)f_2869},
{"f_2857:posixwin_scm",(void*)f_2857},
{"f_2865:posixwin_scm",(void*)f_2865},
{"f_2861:posixwin_scm",(void*)f_2861},
{"f_2838:posixwin_scm",(void*)f_2838},
{"f_2846:posixwin_scm",(void*)f_2846},
{"f_2842:posixwin_scm",(void*)f_2842},
{"f_2737:posixwin_scm",(void*)f_2737},
{"f_2746:posixwin_scm",(void*)f_2746},
{"f_2770:posixwin_scm",(void*)f_2770},
{"f_2782:posixwin_scm",(void*)f_2782},
{"f_2788:posixwin_scm",(void*)f_2788},
{"f_2776:posixwin_scm",(void*)f_2776},
{"f_2752:posixwin_scm",(void*)f_2752},
{"f_2758:posixwin_scm",(void*)f_2758},
{"f_2744:posixwin_scm",(void*)f_2744},
{"f_2670:posixwin_scm",(void*)f_2670},
{"f_2674:posixwin_scm",(void*)f_2674},
{"f_2683:posixwin_scm",(void*)f_2683},
{"f_2686:posixwin_scm",(void*)f_2686},
{"f_2643:posixwin_scm",(void*)f_2643},
{"f_2668:posixwin_scm",(void*)f_2668},
{"f_2664:posixwin_scm",(void*)f_2664},
{"f_2650:posixwin_scm",(void*)f_2650},
{"f_2483:posixwin_scm",(void*)f_2483},
{"f_2591:posixwin_scm",(void*)f_2591},
{"f_2599:posixwin_scm",(void*)f_2599},
{"f_2586:posixwin_scm",(void*)f_2586},
{"f_2485:posixwin_scm",(void*)f_2485},
{"f_2492:posixwin_scm",(void*)f_2492},
{"f_2495:posixwin_scm",(void*)f_2495},
{"f_2498:posixwin_scm",(void*)f_2498},
{"f_2585:posixwin_scm",(void*)f_2585},
{"f_2502:posixwin_scm",(void*)f_2502},
{"f_2519:posixwin_scm",(void*)f_2519},
{"f_2529:posixwin_scm",(void*)f_2529},
{"f_2541:posixwin_scm",(void*)f_2541},
{"f_2551:posixwin_scm",(void*)f_2551},
{"f_2511:posixwin_scm",(void*)f_2511},
{"f_2456:posixwin_scm",(void*)f_2456},
{"f_2481:posixwin_scm",(void*)f_2481},
{"f_2477:posixwin_scm",(void*)f_2477},
{"f_2469:posixwin_scm",(void*)f_2469},
{"f_2429:posixwin_scm",(void*)f_2429},
{"f_2454:posixwin_scm",(void*)f_2454},
{"f_2450:posixwin_scm",(void*)f_2450},
{"f_2442:posixwin_scm",(void*)f_2442},
{"f_2303:posixwin_scm",(void*)f_2303},
{"f_2307:posixwin_scm",(void*)f_2307},
{"f_2313:posixwin_scm",(void*)f_2313},
{"f_2408:posixwin_scm",(void*)f_2408},
{"f_2400:posixwin_scm",(void*)f_2400},
{"f_2319:posixwin_scm",(void*)f_2319},
{"f_2331:posixwin_scm",(void*)f_2331},
{"f_2345:posixwin_scm",(void*)f_2345},
{"f_2378:posixwin_scm",(void*)f_2378},
{"f_2381:posixwin_scm",(void*)f_2381},
{"f_2358:posixwin_scm",(void*)f_2358},
{"f_2375:posixwin_scm",(void*)f_2375},
{"f_2367:posixwin_scm",(void*)f_2367},
{"f_2348:posixwin_scm",(void*)f_2348},
{"f_2241:posixwin_scm",(void*)f_2241},
{"f_2254:posixwin_scm",(void*)f_2254},
{"f_2266:posixwin_scm",(void*)f_2266},
{"f_2260:posixwin_scm",(void*)f_2260},
{"f6455:posixwin_scm",(void*)f6455},
{"f6461:posixwin_scm",(void*)f6461},
{"f6467:posixwin_scm",(void*)f6467},
{"f6473:posixwin_scm",(void*)f6473},
{"f_2212:posixwin_scm",(void*)f_2212},
{"f_2189:posixwin_scm",(void*)f_2189},
{"f_2210:posixwin_scm",(void*)f_2210},
{"f_2196:posixwin_scm",(void*)f_2196},
{"f_2183:posixwin_scm",(void*)f_2183},
{"f_2187:posixwin_scm",(void*)f_2187},
{"f_2177:posixwin_scm",(void*)f_2177},
{"f_2181:posixwin_scm",(void*)f_2181},
{"f_2171:posixwin_scm",(void*)f_2171},
{"f_2175:posixwin_scm",(void*)f_2175},
{"f_2165:posixwin_scm",(void*)f_2165},
{"f_2169:posixwin_scm",(void*)f_2169},
{"f_2159:posixwin_scm",(void*)f_2159},
{"f_2163:posixwin_scm",(void*)f_2163},
{"f_2153:posixwin_scm",(void*)f_2153},
{"f_2157:posixwin_scm",(void*)f_2157},
{"f_2122:posixwin_scm",(void*)f_2122},
{"f_2126:posixwin_scm",(void*)f_2126},
{"f_2129:posixwin_scm",(void*)f_2129},
{"f_2084:posixwin_scm",(void*)f_2084},
{"f_2117:posixwin_scm",(void*)f_2117},
{"f_2113:posixwin_scm",(void*)f_2113},
{"f_2088:posixwin_scm",(void*)f_2088},
{"f_2097:posixwin_scm",(void*)f_2097},
{"f_2046:posixwin_scm",(void*)f_2046},
{"f_2053:posixwin_scm",(void*)f_2053},
{"f_2056:posixwin_scm",(void*)f_2056},
{"f_2076:posixwin_scm",(void*)f_2076},
{"f_2059:posixwin_scm",(void*)f_2059},
{"f_2066:posixwin_scm",(void*)f_2066},
{"f_2004:posixwin_scm",(void*)f_2004},
{"f_2011:posixwin_scm",(void*)f_2011},
{"f_2026:posixwin_scm",(void*)f_2026},
{"f_2020:posixwin_scm",(void*)f_2020},
{"f_1959:posixwin_scm",(void*)f_1959},
{"f_1969:posixwin_scm",(void*)f_1969},
{"f_1972:posixwin_scm",(void*)f_1972},
{"f_1984:posixwin_scm",(void*)f_1984},
{"f_1975:posixwin_scm",(void*)f_1975},
{"f_1941:posixwin_scm",(void*)f_1941},
{"f_1954:posixwin_scm",(void*)f_1954},
{"f_1900:posixwin_scm",(void*)f_1900},
{"f_1933:posixwin_scm",(void*)f_1933},
{"f_1917:posixwin_scm",(void*)f_1917},
{"f_1926:posixwin_scm",(void*)f_1926},
{"f_1920:posixwin_scm",(void*)f_1920},
{"f_1854:posixwin_scm",(void*)f_1854},
{"f_1858:posixwin_scm",(void*)f_1858},
{"f_1869:posixwin_scm",(void*)f_1869},
{"f_1865:posixwin_scm",(void*)f_1865},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}
/* end of file */
