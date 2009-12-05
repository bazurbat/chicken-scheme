/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:36
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: posixwin.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file posixwin.c
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

static C_TLS C_word lf[401];
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
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,102,54,53,55,49,32,102,110,97,109,101,49,52,48,54,53,55,48,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,20),40,102,54,53,54,53,32,102,110,97,109,101,49,52,48,54,53,54,52,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,20),40,102,54,53,53,57,32,102,110,97,109,101,49,52,48,54,53,53,56,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,20),40,102,54,53,53,51,32,102,110,97,109,101,49,52,48,54,53,53,50,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,20),40,102,54,53,52,55,32,102,110,97,109,101,49,52,48,54,53,52,54,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,20),40,102,54,53,52,49,32,102,110,97,109,101,49,52,48,54,53,52,48,41,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,20),40,102,54,53,51,53,32,102,110,97,109,101,49,52,48,54,53,51,52,41,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,20),40,102,54,53,50,57,32,102,110,97,109,101,49,52,48,54,53,50,56,41,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,20),40,102,54,53,50,51,32,102,110,97,109,101,49,52,48,54,53,50,50,41,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,20),40,102,54,53,49,55,32,102,110,97,109,101,49,52,48,54,53,49,54,41,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,49,53,50,32,112,111,115,49,53,51,32,46,32,119,104,101,110,99,101,49,53,52,41,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,11),40,103,50,49,53,32,120,50,49,55,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,48,56,32,103,50,49,50,50,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,49,57,50,32,46,32,116,109,112,49,57,49,49,57,51,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,26),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,35),40,98,111,100,121,50,55,48,32,115,112,101,99,50,55,57,32,115,104,111,119,45,100,111,116,102,105,108,101,115,63,50,56,48,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,35),40,100,101,102,45,115,104,111,119,45,100,111,116,102,105,108,101,115,63,50,55,51,32,37,115,112,101,99,50,54,56,51,49,51,41,0,0,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,115,112,101,99,50,55,50,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,54,51,50,54,52,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,21),40,100,105,114,101,99,116,111,114,121,63,32,102,110,97,109,101,51,50,48,41,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,51,51,49,51,51,50,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,7),40,97,50,56,52,50,41,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,19),40,97,50,56,51,54,32,101,120,118,97,114,51,55,56,51,57,49,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,97,50,56,54,48,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,50,56,55,50,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,20),40,97,50,56,54,54,32,46,32,97,114,103,115,51,56,54,52,48,50,41,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,7),40,97,50,56,53,52,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,15),40,97,50,56,51,48,32,107,51,56,53,51,57,48,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,5),40,99,119,100,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,52,50,52,32,114,52,50,53,41};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,45,112,97,116,104,32,112,97,116,104,52,48,51,41};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,26),40,99,104,101,99,107,32,99,109,100,52,51,51,32,105,110,112,52,51,52,32,114,52,51,53,41,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,52,51,57,32,46,32,109,52,52,48,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,52,52,56,32,46,32,109,52,52,57,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,52,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,51,51,55,48,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,97,51,51,55,54,32,46,32,114,101,115,117,108,116,115,52,55,55,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,52,55,51,32,112,114,111,99,52,55,52,32,46,32,109,111,100,101,52,55,53,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,7),40,97,51,51,57,52,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,20),40,97,51,52,48,48,32,46,32,114,101,115,117,108,116,115,52,56,51,41,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,52,55,57,32,112,114,111,99,52,56,48,32,46,32,109,111,100,101,52,56,49,41};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,20),40,97,51,52,49,57,32,46,32,114,101,115,117,108,116,115,52,57,48,41,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,52,56,53,32,116,104,117,110,107,52,56,54,32,46,32,109,111,100,101,52,56,55,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,20),40,97,51,52,51,57,32,46,32,114,101,115,117,108,116,115,52,57,57,41,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,47),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,52,57,52,32,116,104,117,110,107,52,57,53,32,46,32,109,111,100,101,52,57,54,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,112,105,112,101,32,46,32,116,109,112,53,49,49,53,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,104,97,110,100,108,101,114,32,115,105,103,53,50,52,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,53,50,54,32,112,114,111,99,53,50,55,41,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,53,51,50,32,115,116,97,116,101,53,51,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,32),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,53,51,56,32,109,53,51,57,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,53,52,54,32,97,99,99,53,52,55,32,108,111,99,53,52,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,53,52,41,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,53,53,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,34),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,18),40,109,111,100,101,32,105,110,112,53,54,50,32,109,53,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,25),40,99,104,101,99,107,32,102,100,53,55,54,32,105,110,112,53,55,55,32,114,53,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,53,56,50,32,46,32,109,53,56,51,41,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,53,56,53,32,46,32,109,53,56,54,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,22),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,53,57,49,41,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,34),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,53,57,56,32,46,32,110,101,119,53,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,22),40,115,101,116,101,110,118,32,118,97,114,54,48,56,32,118,97,108,54,48,57,41,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,17),40,117,110,115,101,116,101,110,118,32,118,97,114,54,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,54,50,56,41,0,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,54,50,53,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,54,51,50,32,116,109,54,51,51,41};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,54,52,51,54,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,54,53,55,54,53,56,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,29),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,54,55,54,54,55,55,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,32),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,55,48,52,32,46,32,116,109,112,55,48,51,55,48,53,41};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,27),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,55,50,48,41,0,0,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,17),40,95,101,120,105,116,32,46,32,99,111,100,101,55,51,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,55,51,51,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,55,51,53,32,109,111,100,101,55,51,54,32,46,32,115,105,122,101,55,51,55,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,7),40,97,52,50,56,48,41,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,11),40,103,55,57,49,32,109,55,57,51,41,0,0,0,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,55,56,50,41,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,46),40,97,52,50,56,54,32,100,105,114,55,54,49,55,54,50,55,54,55,32,102,105,108,55,54,51,55,54,52,55,54,56,32,101,120,116,55,54,53,55,54,54,55,54,57,41,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,55,53,55,41,0,0,0,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,55,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,49,49,41,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,21),40,110,101,101,100,115,45,113,117,111,116,105,110,103,63,32,115,56,48,56,41,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,105,108,115,116,56,50,48,32,111,108,115,116,56,50,49,41,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,35),40,36,113,117,111,116,101,45,97,114,103,115,45,108,105,115,116,32,108,115,116,56,48,53,32,101,120,97,99,116,102,56,48,54,41,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,32),40,115,101,116,97,114,103,32,97,56,51,48,56,51,52,32,97,56,50,57,56,51,53,32,97,56,50,56,56,51,54,41};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,32),40,115,101,116,101,110,118,32,97,56,52,48,56,52,52,32,97,56,51,57,56,52,53,32,97,56,51,56,56,52,54,41};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,56,53,50,32,108,56,53,54,32,105,56,53,55,41,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,57),40,98,117,105,108,100,45,101,120,101,99,45,97,114,103,118,101,99,32,108,111,99,56,52,56,32,108,115,116,56,52,57,32,97,114,103,118,101,99,45,115,101,116,116,101,114,56,53,48,32,105,100,120,56,53,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,62),40,36,101,120,101,99,45,115,101,116,117,112,32,108,111,99,56,54,51,32,102,105,108,101,110,97,109,101,56,54,52,32,97,114,103,108,115,116,56,54,53,32,101,110,118,108,115,116,56,54,54,32,101,120,97,99,116,102,56,54,55,41,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,49),40,36,101,120,101,99,45,116,101,97,114,100,111,119,110,32,108,111,99,56,55,55,32,109,115,103,56,55,56,32,102,105,108,101,110,97,109,101,56,55,57,32,114,101,115,56,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,39),40,98,111,100,121,56,57,57,32,97,114,103,108,115,116,57,48,57,32,101,110,118,108,115,116,57,49,48,32,101,120,97,99,116,102,57,49,49,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,57,48,51,32,37,97,114,103,108,115,116,56,57,54,57,49,52,32,37,101,110,118,108,115,116,56,57,55,57,49,53,41,0,0,0,0,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,101,110,118,108,115,116,57,48,50,32,37,97,114,103,108,115,116,56,57,54,57,49,55,41,0,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,97,114,103,108,115,116,57,48,49,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,41),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,56,57,49,32,46,32,116,109,112,56,57,48,56,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,39),40,98,111,100,121,57,52,49,32,97,114,103,108,115,116,57,53,49,32,101,110,118,108,115,116,57,53,50,32,101,120,97,99,116,102,57,53,51,41,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,57,52,53,32,37,97,114,103,108,115,116,57,51,56,57,53,54,32,37,101,110,118,108,115,116,57,51,57,57,53,55,41,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,101,110,118,108,115,116,57,52,52,32,37,97,114,103,108,115,116,57,51,56,57,53,57,41,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,97,114,103,108,115,116,57,52,51,41,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,47),40,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,57,51,50,32,102,105,108,101,110,97,109,101,57,51,51,32,46,32,116,109,112,57,51,49,57,51,52,41,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,57,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,114,117,110,32,102,57,56,48,32,46,32,97,114,103,115,57,56,49,41,0,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,49,48,50,50,32,99,109,100,49,48,50,51,32,97,114,103,115,49,48,50,52,32,101,110,118,49,48,50,53,32,115,116,100,111,117,116,102,49,48,50,54,32,115,116,100,105,110,102,49,48,50,55,32,115,116,100,101,114,114,102,49,48,50,56,32,46,32,116,109,112,49,48,50,49,49,48,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,21),40,97,53,48,49,54,32,103,49,49,48,48,49,49,48,49,49,49,48,50,41,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,49,48,56,57,41,0,0,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,7),40,97,53,48,51,52,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,38),40,97,53,48,52,48,32,105,110,49,49,49,50,32,111,117,116,49,49,49,51,32,112,105,100,49,49,49,52,32,101,114,114,49,49,49,53,41,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,63),40,37,112,114,111,99,101,115,115,32,108,111,99,49,48,56,50,32,101,114,114,63,49,48,56,51,32,99,109,100,49,48,56,52,32,97,114,103,115,49,48,56,53,32,101,110,118,49,48,56,54,32,101,120,97,99,116,102,49,48,56,55,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,49,51,51,32,97,114,103,115,49,49,52,51,32,101,110,118,49,49,52,52,32,101,120,97,99,116,102,49,49,52,53,41,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,49,49,51,55,32,37,97,114,103,115,49,49,51,48,49,49,52,55,32,37,101,110,118,49,49,51,49,49,49,52,56,41,0,0,0,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,49,49,51,54,32,37,97,114,103,115,49,49,51,48,49,49,53,48,41,0,0,0,0,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,49,49,51,53,41,0,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,49,49,50,53,32,46,32,116,109,112,49,49,50,52,49,49,50,54,41,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,49,55,50,32,97,114,103,115,49,49,56,50,32,101,110,118,49,49,56,51,32,101,120,97,99,116,102,49,49,56,52,41,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,49,49,55,54,32,37,97,114,103,115,49,49,54,57,49,49,56,54,32,37,101,110,118,49,49,55,48,49,49,56,55,41,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,49,49,55,53,32,37,97,114,103,115,49,49,54,57,49,49,56,57,41,0,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,49,49,55,52,41,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,49,49,54,52,32,46,32,116,109,112,49,49,54,51,49,49,54,53,41};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,49,57,57,32,110,111,104,97,110,103,49,50,48,48,41,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,7),40,97,53,50,54,48,41,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,36),40,97,53,50,54,54,32,101,112,105,100,49,50,49,52,32,101,110,111,114,109,49,50,49,53,32,101,99,111,100,101,49,50,49,54,41,0,0,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,33),40,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,50,48,49,32,46,32,97,114,103,115,49,50,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,13),40,115,108,101,101,112,32,116,49,50,49,57,41,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,14),40,102,95,53,52,56,49,32,120,49,50,54,51,41,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,7),40,97,53,52,50,55,41,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,7),40,97,53,52,51,50,41,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,7),40,97,53,52,52,54,41,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,102,115,49,50,54,53,32,114,49,50,54,54,41,0,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,16),40,102,95,53,52,57,55,32,46,32,95,49,50,54,49,41};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,16),40,102,95,53,52,56,57,32,46,32,95,49,50,54,48,41};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,50,51,56,32,97,99,116,105,111,110,49,50,52,56,32,105,100,49,50,52,57,32,108,105,109,105,116,49,50,53,48,41,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,108,105,109,105,116,49,50,52,50,32,37,97,99,116,105,111,110,49,50,51,53,49,50,57,54,32,37,105,100,49,50,51,54,49,50,57,55,41,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,28),40,100,101,102,45,105,100,49,50,52,49,32,37,97,99,116,105,111,110,49,50,51,53,49,50,57,57,41,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,19),40,97,53,53,49,55,32,120,49,51,48,49,32,121,49,51,48,50,41,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,97,99,116,105,111,110,49,50,52,48,41};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,51),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,49,50,50,57,32,112,114,101,100,49,50,51,48,32,46,32,97,99,116,105,111,110,45,105,100,45,108,105,109,105,116,49,50,51,49,41,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,46,32,95,49,51,52,51,49,51,52,55,41,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,49,51,53,48,49,51,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,49,51,53,54,49,51,54,48,41,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,51,54,50,49,51,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,40),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,49,51,54,56,49,51,55,50,41};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,39),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,49,51,55,52,49,51,55,56,41,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,41),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,49,51,56,48,49,51,56,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,30),40,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,49,51,56,54,49,51,57,48,41,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,49,51,57,50,49,51,57,54,41,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,46,32,95,49,51,57,56,49,52,48,50,41};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,105,110,107,32,46,32,95,49,52,48,52,49,52,48,56,41,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,111,99,107,32,46,32,95,49,52,49,48,49,52,49,52,41,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,49,52,49,54,49,52,50,48,41};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,49,52,50,50,49,52,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,49,52,50,56,49,52,51,50,41,0,0,0,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,49,52,51,52,49,52,51,56,41,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,49,52,52,48,49,52,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,24),40,103,101,116,45,103,114,111,117,112,115,32,46,32,95,49,52,52,54,49,52,53,48,41};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,31),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,52,53,50,49,52,53,54,41,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,31),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,46,32,95,49,52,53,56,49,52,54,50,41,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,40),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,46,32,95,49,52,54,52,49,52,54,56,41};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,31),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,49,52,55,48,49,52,55,52,41,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,49,52,55,54,49,52,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,49,52,56,50,49,52,56,54,41,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,49,52,56,56,49,52,57,50,41,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,32),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,52,57,52,49,52,57,56,41};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,24),40,115,101,116,45,97,108,97,114,109,33,32,46,32,95,49,53,48,48,49,53,48,52,41};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,53,48,54,49,53,49,48,41,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,25),40,115,101,116,45,103,114,111,117,112,115,33,32,46,32,95,49,53,49,50,49,53,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,35),40,115,101,116,45,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,53,49,56,49,53,50,50,41,0,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,33),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,49,53,50,52,49,53,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,53,51,48,49,53,51,52,41,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,117,115,101,114,45,105,100,33,32,46,32,95,49,53,51,54,49,53,52,48,41,0,0,0,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,25),40,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,49,53,52,50,49,53,52,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,26),40,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,53,52,56,49,53,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,49,53,53,52,49,53,53,56,41,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,49,53,54,48,49,53,54,52,41,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,46,32,95,49,53,54,54,49,53,55,48,41,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,46,32,95,49,53,55,50,49,53,55,54,41,0,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,36),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,46,32,95,49,53,55,56,49,53,56,50,41,0,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,30),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,53,56,52,49,53,56,56,41,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,31),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,49,53,57,48,49,53,57,52,41,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,26),40,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,49,53,57,54,49,54,48,48,41,0,0,0,0,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,13),40,102,105,102,111,63,32,95,49,54,48,50,41,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,95,49,54,48,52,41,0,0,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,15),40,97,53,56,54,49,32,112,111,114,116,49,55,49,41,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k4855 */
static C_word C_fcall stub992(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7) C_regparm;
C_regparm static C_word C_fcall stub992(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
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

/* from current-process-id in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static C_word C_fcall stub967(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub967(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k4484 */
static C_word C_fcall stub841(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub841(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from k4467 */
static C_word C_fcall stub831(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub831(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k4176 */
static C_word C_fcall stub728(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub728(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from local-timezone-abbreviation in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub723(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub723(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);
return(z);
C_ret:
#undef return

return C_r;}

/* from strftime */
static C_word C_fcall stub693(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub693(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from asctime */
static C_word C_fcall stub687(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub687(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k4024 */
static C_word C_fcall stub667(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub667(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k3861 */
static C_word C_fcall stub620(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub620(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k1880 */
static C_word C_fcall stub12(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub12(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1868)
static void C_ccall f_1868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5862)
static void C_ccall f_5862(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5866)
static void C_ccall f_5866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5869)
static void C_ccall f_5869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5840)
static void C_ccall f_5840(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5833)
static void C_ccall f_5833(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5827)
static void C_ccall f_5827(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5821)
static void C_ccall f_5821(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5815)
static void C_ccall f_5815(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5803)
static void C_ccall f_5803(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5791)
static void C_ccall f_5791(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5785)
static void C_ccall f_5785(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5773)
static void C_ccall f_5773(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5755)
static void C_ccall f_5755(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5749)
static void C_ccall f_5749(C_word c,C_word t0,C_word t1,...) C_noret;
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
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5512)
static void C_fcall f_5512(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5507)
static void C_fcall f_5507(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5502)
static void C_fcall f_5502(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5363)
static void C_fcall f_5363(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5489)
static void C_ccall f_5489(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5370)
static void C_fcall f_5370(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5477)
static void C_ccall f_5477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5382)
static void C_fcall f_5382(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_ccall f_5463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5470)
static void C_ccall f_5470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5428)
static void C_ccall f_5428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5481)
static void C_ccall f_5481(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5341)
static void C_ccall f_5341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5326)
static void C_ccall f_5326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5303)
static void C_ccall f_5303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5300)
static void C_ccall f_5300(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5240)
static void C_ccall f_5240r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5261)
static void C_ccall f_5261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5165)
static void C_fcall f_5165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5160)
static void C_fcall f_5160(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5155)
static void C_fcall f_5155(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5150)
static void C_fcall f_5150(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5068)
static void C_ccall f_5068(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5068)
static void C_ccall f_5068r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5085)
static void C_fcall f_5085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5080)
static void C_fcall f_5080(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5075)
static void C_fcall f_5075(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5070)
static void C_fcall f_5070(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5006)
static void C_fcall f_5006(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5066)
static void C_ccall f_5066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5041)
static void C_ccall f_5041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5035)
static void C_ccall f_5035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5008)
static void C_fcall f_5008(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4887)
static void C_ccall f_4887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...) C_noret;
C_noret_decl(f_4887)
static void C_ccall f_4887r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t10) C_noret;
C_noret_decl(f_4891)
static void C_ccall f_4891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4982)
static void C_ccall f_4982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4958)
static void C_ccall f_4958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4923)
static void C_ccall f_4923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4927)
static void C_ccall f_4927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4931)
static void C_ccall f_4931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4795)
static void C_ccall f_4795r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4812)
static void C_ccall f_4812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4816)
static void C_ccall f_4816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4768)
static void C_ccall f_4768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4772)
static void C_ccall f_4772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4702)
static void C_fcall f_4702(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4697)
static void C_fcall f_4697(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4692)
static void C_fcall f_4692(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4680)
static void C_fcall f_4680(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4591)
static void C_ccall f_4591(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4591)
static void C_ccall f_4591r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4615)
static void C_fcall f_4615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_fcall f_4610(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4593)
static void C_fcall f_4593(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4597)
static void C_ccall f_4597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4576)
static void C_fcall f_4576(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4540)
static void C_fcall f_4540(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4567)
static void C_ccall f_4567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4556)
static void C_ccall f_4556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4490)
static void C_fcall f_4490(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4502)
static void C_fcall f_4502(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4521)
static void C_ccall f_4521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4377)
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4420)
static void C_fcall f_4420(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4382)
static void C_fcall f_4382(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4386)
static void C_ccall f_4386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4391)
static void C_fcall f_4391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4415)
static void C_ccall f_4415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4266)
static void C_fcall f_4266(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4287)
static void C_ccall f_4287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4303)
static void C_fcall f_4303(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4324)
static void C_fcall f_4324(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4332)
static void C_ccall f_4332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4205)
static void C_ccall f_4205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4211)
static void C_ccall f_4211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4220)
static void C_fcall f_4220(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4179)
static void C_ccall f_4179r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4034)
static void C_ccall f_4034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3930)
static void C_fcall f_3930(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3870)
static void C_fcall f_3870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_fcall f_3882(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3908)
static void C_ccall f_3908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3912)
static void C_ccall f_3912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3844)
static void C_ccall f_3844(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3852)
static void C_ccall f_3852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3827)
static void C_ccall f_3827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3838)
static void C_ccall f_3838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3804)
static void C_fcall f_3804(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3807)
static void C_ccall f_3807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3766)
static void C_ccall f_3766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3775)
static void C_ccall f_3775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3748)
static void C_ccall f_3748r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3716)
static void C_fcall f_3716(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3720)
static void C_ccall f_3720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_fcall f_3679(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3670)
static void C_ccall f_3670(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3634)
static void C_fcall f_3634(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3652)
static void C_ccall f_3652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3644)
static void C_ccall f_3644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3604)
static void C_ccall f_3604(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_ccall f_3620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3558)
static void C_ccall f_3558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3454)
static void C_ccall f_3454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3457)
static void C_ccall f_3457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3386)
static void C_ccall f_3386r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3390)
static void C_ccall f_3390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3405)
static void C_ccall f_3405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3366)
static void C_ccall f_3366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3377)
static void C_ccall f_3377r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_fcall f_3253(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_fcall f_3024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_fcall f_3054(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3096)
static void C_fcall f_3096(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3161)
static void C_ccall f_3161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2892)
static void C_ccall f_2892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2894)
static void C_fcall f_2894(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2985)
static void C_ccall f_2985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2942)
static void C_ccall f_2942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2923)
static void C_ccall f_2923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_fcall f_2822(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2855)
static void C_ccall f_2855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2759)
static void C_ccall f_2759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2735)
static void C_ccall f_2735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2676)
static void C_fcall f_2676(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2671)
static void C_fcall f_2671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2570)
static void C_fcall f_2570(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_fcall f_2604(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_fcall f_2626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2541)
static void C_ccall f_2541(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2395)
static void C_fcall f_2395(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2400)
static void C_ccall f_2400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_fcall f_2429(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6517)
static void C_ccall f6517(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6523)
static void C_ccall f6523(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6529)
static void C_ccall f6529(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6535)
static void C_ccall f6535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6541)
static void C_ccall f6541(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6547)
static void C_ccall f6547(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6553)
static void C_ccall f6553(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6559)
static void C_ccall f6559(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6565)
static void C_ccall f6565(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6571)
static void C_ccall f6571(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_ccall f_2212(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2216)
static void C_ccall f_2216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2210)
static void C_ccall f_2210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2204)
static void C_ccall f_2204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2151)
static void C_ccall f_2151r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_ccall f_2158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2113)
static void C_fcall f_2113(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2142)
static void C_ccall f_2142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2075)
static void C_ccall f_2075(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2082)
static void C_ccall f_2082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2085)
static void C_ccall f_2085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2055)
static void C_ccall f_2055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2001)
static void C_ccall f_2001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1955)
static void C_ccall f_1955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1949)
static void C_ccall f_1949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_5512)
static void C_fcall trf_5512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5512(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5512(t0,t1);}

C_noret_decl(trf_5507)
static void C_fcall trf_5507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5507(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5507(t0,t1,t2);}

C_noret_decl(trf_5502)
static void C_fcall trf_5502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5502(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5502(t0,t1,t2,t3);}

C_noret_decl(trf_5363)
static void C_fcall trf_5363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5363(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5363(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5370)
static void C_fcall trf_5370(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5370(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5370(t0,t1);}

C_noret_decl(trf_5382)
static void C_fcall trf_5382(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5382(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5382(t0,t1,t2,t3);}

C_noret_decl(trf_5165)
static void C_fcall trf_5165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5165(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5165(t0,t1);}

C_noret_decl(trf_5160)
static void C_fcall trf_5160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5160(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5160(t0,t1,t2);}

C_noret_decl(trf_5155)
static void C_fcall trf_5155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5155(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5155(t0,t1,t2,t3);}

C_noret_decl(trf_5150)
static void C_fcall trf_5150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5150(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5150(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5085)
static void C_fcall trf_5085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5085(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5085(t0,t1);}

C_noret_decl(trf_5080)
static void C_fcall trf_5080(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5080(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5080(t0,t1,t2);}

C_noret_decl(trf_5075)
static void C_fcall trf_5075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5075(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5075(t0,t1,t2,t3);}

C_noret_decl(trf_5070)
static void C_fcall trf_5070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5070(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5070(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5006)
static void C_fcall trf_5006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5006(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5006(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5008)
static void C_fcall trf_5008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5008(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5008(t0,t1,t2);}

C_noret_decl(trf_4702)
static void C_fcall trf_4702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4702(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4702(t0,t1);}

C_noret_decl(trf_4697)
static void C_fcall trf_4697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4697(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4697(t0,t1,t2);}

C_noret_decl(trf_4692)
static void C_fcall trf_4692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4692(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4692(t0,t1,t2,t3);}

C_noret_decl(trf_4680)
static void C_fcall trf_4680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4680(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4680(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4615)
static void C_fcall trf_4615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4615(t0,t1);}

C_noret_decl(trf_4610)
static void C_fcall trf_4610(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4610(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4610(t0,t1,t2);}

C_noret_decl(trf_4605)
static void C_fcall trf_4605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4605(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4605(t0,t1,t2,t3);}

C_noret_decl(trf_4593)
static void C_fcall trf_4593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4593(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4593(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4576)
static void C_fcall trf_4576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4576(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4576(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4540)
static void C_fcall trf_4540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4540(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4540(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4490)
static void C_fcall trf_4490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4490(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4490(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4502)
static void C_fcall trf_4502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4502(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4502(t0,t1,t2,t3);}

C_noret_decl(trf_4377)
static void C_fcall trf_4377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4377(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4377(t0,t1,t2,t3);}

C_noret_decl(trf_4420)
static void C_fcall trf_4420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4420(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4420(t0,t1,t2,t3);}

C_noret_decl(trf_4382)
static void C_fcall trf_4382(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4382(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4382(t0,t1,t2);}

C_noret_decl(trf_4391)
static void C_fcall trf_4391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4391(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4391(t0,t1,t2);}

C_noret_decl(trf_4266)
static void C_fcall trf_4266(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4266(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4266(t0,t1,t2);}

C_noret_decl(trf_4303)
static void C_fcall trf_4303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4303(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4303(t0,t1,t2);}

C_noret_decl(trf_4324)
static void C_fcall trf_4324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4324(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4324(t0,t1,t2);}

C_noret_decl(trf_4220)
static void C_fcall trf_4220(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4220(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4220(t0,t1);}

C_noret_decl(trf_3930)
static void C_fcall trf_3930(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3930(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3930(t0,t1,t2);}

C_noret_decl(trf_3870)
static void C_fcall trf_3870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3870(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3870(t0,t1,t2);}

C_noret_decl(trf_3882)
static void C_fcall trf_3882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3882(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3882(t0,t1,t2);}

C_noret_decl(trf_3804)
static void C_fcall trf_3804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3804(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3804(t0,t1);}

C_noret_decl(trf_3716)
static void C_fcall trf_3716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3716(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3716(t0,t1,t2,t3);}

C_noret_decl(trf_3679)
static void C_fcall trf_3679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3679(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3679(t0,t1,t2);}

C_noret_decl(trf_3634)
static void C_fcall trf_3634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3634(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3634(t0,t1,t2,t3);}

C_noret_decl(trf_3253)
static void C_fcall trf_3253(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3253(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3253(t0,t1,t2,t3);}

C_noret_decl(trf_3024)
static void C_fcall trf_3024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3024(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3024(t0,t1);}

C_noret_decl(trf_3054)
static void C_fcall trf_3054(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3054(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3054(t0,t1);}

C_noret_decl(trf_3096)
static void C_fcall trf_3096(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3096(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3096(t0,t1);}

C_noret_decl(trf_2894)
static void C_fcall trf_2894(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2894(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2894(t0,t1,t2,t3);}

C_noret_decl(trf_2822)
static void C_fcall trf_2822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2822(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2822(t0,t1);}

C_noret_decl(trf_2676)
static void C_fcall trf_2676(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2676(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2676(t0,t1);}

C_noret_decl(trf_2671)
static void C_fcall trf_2671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2671(t0,t1,t2);}

C_noret_decl(trf_2570)
static void C_fcall trf_2570(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2570(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2570(t0,t1,t2,t3);}

C_noret_decl(trf_2604)
static void C_fcall trf_2604(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2604(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2604(t0,t1);}

C_noret_decl(trf_2626)
static void C_fcall trf_2626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2626(t0,t1);}

C_noret_decl(trf_2387)
static void C_fcall trf_2387(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2387(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2387(t0,t1,t2);}

C_noret_decl(trf_2395)
static void C_fcall trf_2395(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2395(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2395(t0,t1,t2);}

C_noret_decl(trf_2429)
static void C_fcall trf_2429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2429(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2429(t0,t1);}

C_noret_decl(trf_2113)
static void C_fcall trf_2113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2113(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2113(t0,t1);}

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
if(!C_demand_2(3144)){
C_save(t1);
C_rereclaim2(3144*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,401);
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
lf[72]=C_h_intern(&lf[72],13,"stat-regular\077");
lf[73]=C_h_intern(&lf[73],15,"stat-directory\077");
lf[74]=C_h_intern(&lf[74],17,"stat-char-device\077");
lf[75]=C_h_intern(&lf[75],12,"stat-device\077");
lf[76]=C_h_intern(&lf[76],17,"character-device\077");
lf[77]=C_h_intern(&lf[77],13,"block-device\077");
lf[78]=C_h_intern(&lf[78],18,"stat-block-device\077");
lf[79]=C_h_intern(&lf[79],10,"stat-fifo\077");
lf[80]=C_h_intern(&lf[80],5,"fifo\077");
lf[81]=C_h_intern(&lf[81],13,"stat-symlink\077");
lf[82]=C_h_intern(&lf[82],7,"socket\077");
lf[83]=C_h_intern(&lf[83],12,"stat-socket\077");
lf[84]=C_h_intern(&lf[84],18,"set-file-position!");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[86]=C_h_intern(&lf[86],6,"stream");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[88]=C_h_intern(&lf[88],5,"port\077");
lf[89]=C_h_intern(&lf[89],13,"\000bounds-error");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid negative port position");
lf[91]=C_h_intern(&lf[91],13,"file-position");
lf[92]=C_h_intern(&lf[92],16,"create-directory");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[94]=C_h_intern(&lf[94],12,"file-exists\077");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[96]=C_h_intern(&lf[96],12,"string-split");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[98]=C_h_intern(&lf[98],16,"change-directory");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[100]=C_h_intern(&lf[100],16,"delete-directory");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[102]=C_h_intern(&lf[102],6,"string");
lf[103]=C_h_intern(&lf[103],9,"directory");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[105]=C_h_intern(&lf[105],16,"\003sysmake-pointer");
lf[106]=C_h_intern(&lf[106],17,"current-directory");
lf[107]=C_h_intern(&lf[107],10,"directory\077");
lf[108]=C_h_intern(&lf[108],27,"\003sysplatform-fixup-pathname");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[110]=C_h_intern(&lf[110],5,"null\077");
lf[111]=C_h_intern(&lf[111],6,"char=\077");
lf[112]=C_h_intern(&lf[112],8,"string=\077");
lf[113]=C_h_intern(&lf[113],16,"char-alphabetic\077");
lf[114]=C_h_intern(&lf[114],10,"string-ref");
lf[115]=C_h_intern(&lf[115],17,"current-user-name");
lf[116]=C_h_intern(&lf[116],9,"condition");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\003c:\134");
lf[118]=C_h_intern(&lf[118],22,"with-exception-handler");
lf[119]=C_h_intern(&lf[119],30,"call-with-current-continuation");
lf[120]=C_h_intern(&lf[120],14,"canonical-path");
lf[121]=C_h_intern(&lf[121],18,"string-intersperse");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[124]=C_h_intern(&lf[124],7,"reverse");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\027Documents and Settings\134");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[135]=C_h_intern(&lf[135],13,"\003sysmake-port");
lf[136]=C_h_intern(&lf[136],21,"\003sysstream-port-class");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[138]=C_h_intern(&lf[138],15,"open-input-pipe");
lf[139]=C_h_intern(&lf[139],5,"\000text");
lf[140]=C_h_intern(&lf[140],7,"\000binary");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[142]=C_h_intern(&lf[142],16,"open-output-pipe");
lf[143]=C_h_intern(&lf[143],16,"close-input-pipe");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[145]=C_h_intern(&lf[145],14,"\003syscheck-port");
lf[146]=C_h_intern(&lf[146],17,"close-output-pipe");
lf[147]=C_h_intern(&lf[147],20,"call-with-input-pipe");
lf[148]=C_h_intern(&lf[148],21,"call-with-output-pipe");
lf[149]=C_h_intern(&lf[149],20,"with-input-from-pipe");
lf[150]=C_h_intern(&lf[150],18,"\003sysstandard-input");
lf[151]=C_h_intern(&lf[151],19,"with-output-to-pipe");
lf[152]=C_h_intern(&lf[152],19,"\003sysstandard-output");
lf[153]=C_h_intern(&lf[153],11,"create-pipe");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[155]=C_h_intern(&lf[155],11,"signal/term");
lf[156]=C_h_intern(&lf[156],10,"signal/int");
lf[157]=C_h_intern(&lf[157],10,"signal/fpe");
lf[158]=C_h_intern(&lf[158],10,"signal/ill");
lf[159]=C_h_intern(&lf[159],11,"signal/segv");
lf[160]=C_h_intern(&lf[160],11,"signal/abrt");
lf[161]=C_h_intern(&lf[161],12,"signal/break");
lf[162]=C_h_intern(&lf[162],11,"signal/alrm");
lf[163]=C_h_intern(&lf[163],11,"signal/chld");
lf[164]=C_h_intern(&lf[164],11,"signal/cont");
lf[165]=C_h_intern(&lf[165],10,"signal/hup");
lf[166]=C_h_intern(&lf[166],9,"signal/io");
lf[167]=C_h_intern(&lf[167],11,"signal/kill");
lf[168]=C_h_intern(&lf[168],11,"signal/pipe");
lf[169]=C_h_intern(&lf[169],11,"signal/prof");
lf[170]=C_h_intern(&lf[170],11,"signal/quit");
lf[171]=C_h_intern(&lf[171],11,"signal/stop");
lf[172]=C_h_intern(&lf[172],11,"signal/trap");
lf[173]=C_h_intern(&lf[173],11,"signal/tstp");
lf[174]=C_h_intern(&lf[174],10,"signal/urg");
lf[175]=C_h_intern(&lf[175],11,"signal/usr1");
lf[176]=C_h_intern(&lf[176],11,"signal/usr2");
lf[177]=C_h_intern(&lf[177],13,"signal/vtalrm");
lf[178]=C_h_intern(&lf[178],12,"signal/winch");
lf[179]=C_h_intern(&lf[179],11,"signal/xcpu");
lf[180]=C_h_intern(&lf[180],11,"signal/xfsz");
lf[181]=C_h_intern(&lf[181],12,"signals-list");
lf[182]=C_h_intern(&lf[182],18,"\003sysinterrupt-hook");
lf[183]=C_h_intern(&lf[183],14,"signal-handler");
lf[184]=C_h_intern(&lf[184],19,"set-signal-handler!");
lf[185]=C_h_intern(&lf[185],10,"errno/perm");
lf[186]=C_h_intern(&lf[186],11,"errno/noent");
lf[187]=C_h_intern(&lf[187],10,"errno/srch");
lf[188]=C_h_intern(&lf[188],10,"errno/intr");
lf[189]=C_h_intern(&lf[189],8,"errno/io");
lf[190]=C_h_intern(&lf[190],12,"errno/noexec");
lf[191]=C_h_intern(&lf[191],10,"errno/badf");
lf[192]=C_h_intern(&lf[192],11,"errno/child");
lf[193]=C_h_intern(&lf[193],11,"errno/nomem");
lf[194]=C_h_intern(&lf[194],11,"errno/acces");
lf[195]=C_h_intern(&lf[195],11,"errno/fault");
lf[196]=C_h_intern(&lf[196],10,"errno/busy");
lf[197]=C_h_intern(&lf[197],11,"errno/exist");
lf[198]=C_h_intern(&lf[198],12,"errno/notdir");
lf[199]=C_h_intern(&lf[199],11,"errno/isdir");
lf[200]=C_h_intern(&lf[200],11,"errno/inval");
lf[201]=C_h_intern(&lf[201],11,"errno/mfile");
lf[202]=C_h_intern(&lf[202],11,"errno/nospc");
lf[203]=C_h_intern(&lf[203],11,"errno/spipe");
lf[204]=C_h_intern(&lf[204],10,"errno/pipe");
lf[205]=C_h_intern(&lf[205],11,"errno/again");
lf[206]=C_h_intern(&lf[206],10,"errno/rofs");
lf[207]=C_h_intern(&lf[207],10,"errno/nxio");
lf[208]=C_h_intern(&lf[208],10,"errno/2big");
lf[209]=C_h_intern(&lf[209],10,"errno/xdev");
lf[210]=C_h_intern(&lf[210],11,"errno/nodev");
lf[211]=C_h_intern(&lf[211],11,"errno/nfile");
lf[212]=C_h_intern(&lf[212],11,"errno/notty");
lf[213]=C_h_intern(&lf[213],10,"errno/fbig");
lf[214]=C_h_intern(&lf[214],11,"errno/mlink");
lf[215]=C_h_intern(&lf[215],9,"errno/dom");
lf[216]=C_h_intern(&lf[216],11,"errno/range");
lf[217]=C_h_intern(&lf[217],12,"errno/deadlk");
lf[218]=C_h_intern(&lf[218],17,"errno/nametoolong");
lf[219]=C_h_intern(&lf[219],11,"errno/nolck");
lf[220]=C_h_intern(&lf[220],11,"errno/nosys");
lf[221]=C_h_intern(&lf[221],14,"errno/notempty");
lf[222]=C_h_intern(&lf[222],11,"errno/ilseq");
lf[223]=C_h_intern(&lf[223],16,"change-file-mode");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[225]=C_h_intern(&lf[225],17,"file-read-access\077");
lf[226]=C_h_intern(&lf[226],18,"file-write-access\077");
lf[227]=C_h_intern(&lf[227],20,"file-execute-access\077");
lf[228]=C_h_intern(&lf[228],12,"fileno/stdin");
lf[229]=C_h_intern(&lf[229],13,"fileno/stdout");
lf[230]=C_h_intern(&lf[230],13,"fileno/stderr");
lf[231]=C_h_intern(&lf[231],7,"\000append");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[239]=C_h_intern(&lf[239],16,"open-input-file*");
lf[240]=C_h_intern(&lf[240],17,"open-output-file*");
lf[241]=C_h_intern(&lf[241],12,"port->fileno");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[244]=C_h_intern(&lf[244],25,"\003syspeek-unsigned-integer");
lf[245]=C_h_intern(&lf[245],16,"duplicate-fileno");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file descriptor");
lf[247]=C_h_intern(&lf[247],6,"setenv");
lf[248]=C_h_intern(&lf[248],8,"unsetenv");
lf[249]=C_h_intern(&lf[249],9,"substring");
lf[250]=C_h_intern(&lf[250],25,"get-environment-variables");
lf[251]=C_h_intern(&lf[251],19,"current-environment");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[254]=C_h_intern(&lf[254],19,"seconds->local-time");
lf[255]=C_h_intern(&lf[255],18,"\003sysdecode-seconds");
lf[256]=C_h_intern(&lf[256],15,"current-seconds");
lf[257]=C_h_intern(&lf[257],17,"seconds->utc-time");
lf[258]=C_h_intern(&lf[258],15,"seconds->string");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[260]=C_h_intern(&lf[260],12,"time->string");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[263]=C_h_intern(&lf[263],19,"local-time->seconds");
lf[264]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[266]=C_h_intern(&lf[266],27,"local-timezone-abbreviation");
lf[267]=C_h_intern(&lf[267],5,"_exit");
lf[268]=C_h_intern(&lf[268],14,"terminal-port\077");
lf[269]=C_h_intern(&lf[269],19,"set-buffering-mode!");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[271]=C_h_intern(&lf[271],5,"\000full");
lf[272]=C_h_intern(&lf[272],5,"\000line");
lf[273]=C_h_intern(&lf[273],5,"\000none");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[275]=C_h_intern(&lf[275],6,"regexp");
lf[276]=C_h_intern(&lf[276],12,"string-match");
lf[277]=C_h_intern(&lf[277],12,"glob->regexp");
lf[278]=C_h_intern(&lf[278],13,"make-pathname");
lf[279]=C_h_intern(&lf[279],18,"decompose-pathname");
lf[280]=C_h_intern(&lf[280],4,"glob");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[283]=C_h_intern(&lf[283],13,"spawn/overlay");
lf[284]=C_h_intern(&lf[284],10,"spawn/wait");
lf[285]=C_h_intern(&lf[285],12,"spawn/nowait");
lf[286]=C_h_intern(&lf[286],13,"spawn/nowaito");
lf[287]=C_h_intern(&lf[287],12,"spawn/detach");
lf[288]=C_h_intern(&lf[288],16,"char-whitespace\077");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[292]=C_h_intern(&lf[292],24,"pathname-strip-directory");
lf[295]=C_h_intern(&lf[295],15,"process-execute");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[297]=C_h_intern(&lf[297],13,"process-spawn");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot spawn process");
lf[299]=C_h_intern(&lf[299],18,"current-process-id");
lf[300]=C_h_intern(&lf[300],17,"\003sysshell-command");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve system directory");
lf[302]=C_h_intern(&lf[302],24,"get-environment-variable");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\007COMSPEC");
lf[304]=C_h_intern(&lf[304],27,"\003sysshell-command-arguments");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\002/c");
lf[306]=C_h_intern(&lf[306],11,"process-run");
lf[307]=C_h_intern(&lf[307],11,"\003sysprocess");
lf[308]=C_h_intern(&lf[308],14,"\000process-error");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[310]=C_h_intern(&lf[310],17,"\003sysmake-locative");
lf[311]=C_h_intern(&lf[311],8,"location");
lf[312]=C_h_intern(&lf[312],16,"\003syscheck-string");
lf[313]=C_h_intern(&lf[313],12,"\003sysfor-each");
lf[314]=C_h_intern(&lf[314],7,"process");
lf[315]=C_h_intern(&lf[315],8,"process*");
lf[316]=C_h_intern(&lf[316],16,"\003sysprocess-wait");
lf[317]=C_h_intern(&lf[317],12,"process-wait");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[319]=C_h_intern(&lf[319],5,"sleep");
lf[320]=C_h_intern(&lf[320],13,"get-host-name");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[322]=C_h_intern(&lf[322],18,"system-information");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\007windows");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system-information");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current user-name");
lf[326]=C_h_intern(&lf[326],13,"pathname-file");
lf[327]=C_h_intern(&lf[327],10,"find-files");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[331]=C_h_intern(&lf[331],16,"\003sysdynamic-wind");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[333]=C_h_intern(&lf[333],17,"change-file-owner");
lf[334]=C_h_intern(&lf[334],5,"error");
lf[335]=C_h_intern(&lf[335],11,"create-fifo");
lf[336]=C_h_intern(&lf[336],14,"create-session");
lf[337]=C_h_intern(&lf[337],20,"create-symbolic-link");
lf[338]=C_h_intern(&lf[338],26,"current-effective-group-id");
lf[339]=C_h_intern(&lf[339],25,"current-effective-user-id");
lf[340]=C_h_intern(&lf[340],27,"current-effective-user-name");
lf[341]=C_h_intern(&lf[341],16,"current-group-id");
lf[342]=C_h_intern(&lf[342],15,"current-user-id");
lf[343]=C_h_intern(&lf[343],18,"map-file-to-memory");
lf[344]=C_h_intern(&lf[344],9,"file-link");
lf[345]=C_h_intern(&lf[345],9,"file-lock");
lf[346]=C_h_intern(&lf[346],18,"file-lock/blocking");
lf[347]=C_h_intern(&lf[347],11,"file-select");
lf[348]=C_h_intern(&lf[348],14,"file-test-lock");
lf[349]=C_h_intern(&lf[349],13,"file-truncate");
lf[350]=C_h_intern(&lf[350],11,"file-unlock");
lf[351]=C_h_intern(&lf[351],10,"get-groups");
lf[352]=C_h_intern(&lf[352],17,"group-information");
lf[353]=C_h_intern(&lf[353],17,"initialize-groups");
lf[354]=C_h_intern(&lf[354],26,"memory-mapped-file-pointer");
lf[355]=C_h_intern(&lf[355],17,"parent-process-id");
lf[356]=C_h_intern(&lf[356],12,"process-fork");
lf[357]=C_h_intern(&lf[357],16,"process-group-id");
lf[358]=C_h_intern(&lf[358],14,"process-signal");
lf[359]=C_h_intern(&lf[359],18,"read-symbolic-link");
lf[360]=C_h_intern(&lf[360],10,"set-alarm!");
lf[361]=C_h_intern(&lf[361],13,"set-group-id!");
lf[362]=C_h_intern(&lf[362],11,"set-groups!");
lf[363]=C_h_intern(&lf[363],21,"set-process-group-id!");
lf[364]=C_h_intern(&lf[364],19,"set-root-directory!");
lf[365]=C_h_intern(&lf[365],16,"set-signal-mask!");
lf[366]=C_h_intern(&lf[366],12,"set-user-id!");
lf[367]=C_h_intern(&lf[367],11,"signal-mask");
lf[368]=C_h_intern(&lf[368],12,"signal-mask!");
lf[369]=C_h_intern(&lf[369],14,"signal-masked\077");
lf[370]=C_h_intern(&lf[370],14,"signal-unmask!");
lf[371]=C_h_intern(&lf[371],13,"terminal-name");
lf[372]=C_h_intern(&lf[372],13,"terminal-size");
lf[373]=C_h_intern(&lf[373],22,"unmap-file-from-memory");
lf[374]=C_h_intern(&lf[374],16,"user-information");
lf[375]=C_h_intern(&lf[375],17,"utc-time->seconds");
lf[376]=C_h_intern(&lf[376],12,"string->time");
lf[377]=C_h_intern(&lf[377],16,"errno/wouldblock");
lf[378]=C_h_intern(&lf[378],19,"memory-mapped-file\077");
lf[379]=C_h_intern(&lf[379],13,"map/anonymous");
lf[380]=C_h_intern(&lf[380],8,"map/file");
lf[381]=C_h_intern(&lf[381],9,"map/fixed");
lf[382]=C_h_intern(&lf[382],11,"map/private");
lf[383]=C_h_intern(&lf[383],10,"map/shared");
lf[384]=C_h_intern(&lf[384],10,"open/fsync");
lf[385]=C_h_intern(&lf[385],11,"open/noctty");
lf[386]=C_h_intern(&lf[386],13,"open/nonblock");
lf[387]=C_h_intern(&lf[387],9,"open/sync");
lf[388]=C_h_intern(&lf[388],10,"perm/isgid");
lf[389]=C_h_intern(&lf[389],10,"perm/isuid");
lf[390]=C_h_intern(&lf[390],10,"perm/isvtx");
lf[391]=C_h_intern(&lf[391],9,"prot/exec");
lf[392]=C_h_intern(&lf[392],9,"prot/none");
lf[393]=C_h_intern(&lf[393],9,"prot/read");
lf[394]=C_h_intern(&lf[394],10,"prot/write");
lf[395]=C_h_intern(&lf[395],11,"make-vector");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[398]=C_h_intern(&lf[398],18,"getter-with-setter");
lf[399]=C_h_intern(&lf[399],17,"register-feature!");
lf[400]=C_h_intern(&lf[400],5,"posix");
C_register_lf2(lf,401,create_ptable());
t2=C_mutate(&lf[0] /* (set! c1348 ...) */,lf[1]);
t3=C_mutate(&lf[2] /* (set! c109 ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1853,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t4);}

/* k1851 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1856,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1854 in k1851 */
static void C_ccall f_1856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1859,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1857 in k1854 in k1851 */
static void C_ccall f_1859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1862,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1865,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1868,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 932  register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[399]+1)))(3,*((C_word*)lf[399]+1),t2,lf[400]);}

/* k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
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
C_word ab[95],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1871,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=C_mutate(&lf[5] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1883,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
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
t32=C_mutate((C_word*)lf[36]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1929,a[2]=t31,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t33=C_mutate((C_word*)lf[41]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1970,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t34=*((C_word*)lf[43]+1);
t35=C_mutate((C_word*)lf[44]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1988,a[2]=t34,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t36=C_mutate((C_word*)lf[48]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2033,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t37=*((C_word*)lf[51]+1);
t38=C_mutate((C_word*)lf[52]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2075,a[2]=t37,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t39=C_mutate((C_word*)lf[55]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t40=C_mutate((C_word*)lf[56]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t41=C_mutate((C_word*)lf[57]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t42=C_mutate(&lf[58] /* (set! stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2113,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[61]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2151,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[63]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2182,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[64]+1 /* (set! file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2188,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[65]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2194,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[66]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2200,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[67]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2206,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[68]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2212,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[69]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2218,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[71]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2241,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[72]+1 /* (set! stat-regular? ...) */,*((C_word*)lf[69]+1));
t53=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6571,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
t54=C_mutate((C_word*)lf[73]+1 /* (set! stat-directory? ...) */,t53);
t55=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6565,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t56=C_mutate((C_word*)lf[75]+1 /* (set! stat-device? ...) */,t55);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6559,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t58=C_mutate((C_word*)lf[76]+1 /* (set! character-device? ...) */,t57);
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6553,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp);
t60=C_mutate((C_word*)lf[77]+1 /* (set! block-device? ...) */,t59);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6547,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp);
t62=C_mutate((C_word*)lf[78]+1 /* (set! stat-block-device? ...) */,t61);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6541,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp);
t64=C_mutate((C_word*)lf[79]+1 /* (set! stat-fifo? ...) */,t63);
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6535,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp);
t66=C_mutate((C_word*)lf[80]+1 /* (set! fifo? ...) */,t65);
t67=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6529,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp);
t68=C_mutate((C_word*)lf[81]+1 /* (set! stat-symlink? ...) */,t67);
t69=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6523,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp);
t70=C_mutate((C_word*)lf[82]+1 /* (set! socket? ...) */,t69);
t71=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6517,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp);
t72=C_mutate((C_word*)lf[83]+1 /* (set! stat-socket? ...) */,t71);
t73=C_mutate((C_word*)lf[84]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2295,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t74=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t75=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5862,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1145 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[398]+1)))(4,*((C_word*)lf[398]+1),t74,t75,*((C_word*)lf[84]+1));}

/* a5861 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5862(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5862,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5866,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5878,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1147 port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[88]+1)))(3,*((C_word*)lf[88]+1),t4,t2);}

/* k5876 in a5861 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(t2,lf[86]);
if(C_truep(t3)){
t4=(C_word)C_ftell(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_5866(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_5866(2,t4,C_fix(-1));}}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t2=(C_word)C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[2];
f_5866(2,t3,t2);}
else{
/* posixwin.scm: 1154 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[46],lf[91],lf[397],((C_word*)t0)[3]);}}}

/* k5864 in a5861 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5869,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_lessp(t1,C_fix(0)))){
/* posixwin.scm: 1156 posix-error */
t3=lf[5];
f_1883(6,t3,t2,lf[37],lf[91],lf[396],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5867 in k5864 in a5861 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1 /* (set! file-position ...) */,t1);
t3=C_mutate((C_word*)lf[92]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2357,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[98]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2514,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[100]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2541,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[4]+1);
t7=*((C_word*)lf[43]+1);
t8=*((C_word*)lf[102]+1);
t9=C_mutate((C_word*)lf[103]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2568,a[2]=t7,a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[107]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2728,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[43]+1);
t12=C_mutate((C_word*)lf[106]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2755,a[2]=t11,a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp));
t13=*((C_word*)lf[110]+1);
t14=*((C_word*)lf[111]+1);
t15=*((C_word*)lf[112]+1);
t16=*((C_word*)lf[113]+1);
t17=*((C_word*)lf[114]+1);
t18=*((C_word*)lf[4]+1);
t19=*((C_word*)lf[115]+1);
t20=*((C_word*)lf[106]+1);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2822,a[2]=t20,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
t22=C_mutate((C_word*)lf[120]+1 /* (set! canonical-path ...) */,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2878,a[2]=t16,a[3]=t14,a[4]=t19,a[5]=t21,a[6]=t15,a[7]=t13,a[8]=t17,a[9]=t18,a[10]=((C_word)li48),tmp=(C_word)a,a+=11,tmp));
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
t24=C_mutate((C_word*)lf[138]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3271,a[2]=t23,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t25=C_mutate((C_word*)lf[142]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3307,a[2]=t23,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp));
t26=C_mutate((C_word*)lf[143]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3343,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[146]+1 /* (set! close-output-pipe ...) */,*((C_word*)lf[143]+1));
t28=*((C_word*)lf[138]+1);
t29=*((C_word*)lf[142]+1);
t30=*((C_word*)lf[143]+1);
t31=*((C_word*)lf[146]+1);
t32=C_mutate((C_word*)lf[147]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3362,a[2]=t28,a[3]=t30,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t33=C_mutate((C_word*)lf[148]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3386,a[2]=t29,a[3]=t31,a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp));
t34=C_mutate((C_word*)lf[149]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3410,a[2]=t28,a[3]=t30,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t35=C_mutate((C_word*)lf[151]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3430,a[2]=t29,a[3]=t31,a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[153]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3450,a[2]=((C_word)li63),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[155]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t38=C_mutate((C_word*)lf[156]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t39=C_mutate((C_word*)lf[157]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t40=C_mutate((C_word*)lf[158]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t41=C_mutate((C_word*)lf[159]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t42=C_mutate((C_word*)lf[160]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t43=C_mutate((C_word*)lf[161]+1 /* (set! signal/break ...) */,C_fix((C_word)SIGBREAK));
t44=C_set_block_item(lf[162] /* signal/alrm */,0,C_fix(0));
t45=C_set_block_item(lf[163] /* signal/chld */,0,C_fix(0));
t46=C_set_block_item(lf[164] /* signal/cont */,0,C_fix(0));
t47=C_set_block_item(lf[165] /* signal/hup */,0,C_fix(0));
t48=C_set_block_item(lf[166] /* signal/io */,0,C_fix(0));
t49=C_set_block_item(lf[167] /* signal/kill */,0,C_fix(0));
t50=C_set_block_item(lf[168] /* signal/pipe */,0,C_fix(0));
t51=C_set_block_item(lf[169] /* signal/prof */,0,C_fix(0));
t52=C_set_block_item(lf[170] /* signal/quit */,0,C_fix(0));
t53=C_set_block_item(lf[171] /* signal/stop */,0,C_fix(0));
t54=C_set_block_item(lf[172] /* signal/trap */,0,C_fix(0));
t55=C_set_block_item(lf[173] /* signal/tstp */,0,C_fix(0));
t56=C_set_block_item(lf[174] /* signal/urg */,0,C_fix(0));
t57=C_set_block_item(lf[175] /* signal/usr1 */,0,C_fix(0));
t58=C_set_block_item(lf[176] /* signal/usr2 */,0,C_fix(0));
t59=C_set_block_item(lf[177] /* signal/vtalrm */,0,C_fix(0));
t60=C_set_block_item(lf[178] /* signal/winch */,0,C_fix(0));
t61=C_set_block_item(lf[179] /* signal/xcpu */,0,C_fix(0));
t62=C_set_block_item(lf[180] /* signal/xfsz */,0,C_fix(0));
t63=(C_word)C_a_i_list(&a,7,*((C_word*)lf[155]+1),*((C_word*)lf[156]+1),*((C_word*)lf[157]+1),*((C_word*)lf[158]+1),*((C_word*)lf[159]+1),*((C_word*)lf[160]+1),*((C_word*)lf[161]+1));
t64=C_mutate((C_word*)lf[181]+1 /* (set! signals-list ...) */,t63);
t65=*((C_word*)lf[182]+1);
t66=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3524,a[2]=((C_word*)t0)[2],a[3]=t65,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1474 make-vector */
t67=*((C_word*)lf[395]+1);
((C_proc4)(void*)(*((C_word*)t67+1)))(4,t67,t66,C_fix(256),C_SCHEME_FALSE);}

/* k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1){
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
C_word t182;
C_word t183;
C_word t184;
C_word t185;
C_word ab[326],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3524,2,t0,t1);}
t2=C_mutate((C_word*)lf[183]+1 /* (set! signal-handler ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3526,a[2]=t1,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[184]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3535,a[2]=t1,a[3]=((C_word)li65),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[182]+1 /* (set! interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3548,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[185]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t6=C_mutate((C_word*)lf[186]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t7=C_mutate((C_word*)lf[187]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t8=C_mutate((C_word*)lf[188]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t9=C_mutate((C_word*)lf[189]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t10=C_mutate((C_word*)lf[190]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t11=C_mutate((C_word*)lf[191]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t12=C_mutate((C_word*)lf[192]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t13=C_mutate((C_word*)lf[193]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t14=C_mutate((C_word*)lf[194]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t15=C_mutate((C_word*)lf[195]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t16=C_mutate((C_word*)lf[196]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t17=C_mutate((C_word*)lf[197]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t18=C_mutate((C_word*)lf[198]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t19=C_mutate((C_word*)lf[199]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t20=C_mutate((C_word*)lf[200]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t21=C_mutate((C_word*)lf[201]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t22=C_mutate((C_word*)lf[202]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t23=C_mutate((C_word*)lf[203]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t24=C_mutate((C_word*)lf[204]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t25=C_mutate((C_word*)lf[205]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t26=C_mutate((C_word*)lf[206]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t27=C_mutate((C_word*)lf[207]+1 /* (set! errno/nxio ...) */,C_fix((C_word)ENXIO));
t28=C_mutate((C_word*)lf[208]+1 /* (set! errno/2big ...) */,C_fix((C_word)E2BIG));
t29=C_mutate((C_word*)lf[209]+1 /* (set! errno/xdev ...) */,C_fix((C_word)EXDEV));
t30=C_mutate((C_word*)lf[210]+1 /* (set! errno/nodev ...) */,C_fix((C_word)ENODEV));
t31=C_mutate((C_word*)lf[211]+1 /* (set! errno/nfile ...) */,C_fix((C_word)ENFILE));
t32=C_mutate((C_word*)lf[212]+1 /* (set! errno/notty ...) */,C_fix((C_word)ENOTTY));
t33=C_mutate((C_word*)lf[213]+1 /* (set! errno/fbig ...) */,C_fix((C_word)EFBIG));
t34=C_mutate((C_word*)lf[214]+1 /* (set! errno/mlink ...) */,C_fix((C_word)EMLINK));
t35=C_mutate((C_word*)lf[215]+1 /* (set! errno/dom ...) */,C_fix((C_word)EDOM));
t36=C_mutate((C_word*)lf[216]+1 /* (set! errno/range ...) */,C_fix((C_word)ERANGE));
t37=C_mutate((C_word*)lf[217]+1 /* (set! errno/deadlk ...) */,C_fix((C_word)EDEADLK));
t38=C_mutate((C_word*)lf[218]+1 /* (set! errno/nametoolong ...) */,C_fix((C_word)ENAMETOOLONG));
t39=C_mutate((C_word*)lf[219]+1 /* (set! errno/nolck ...) */,C_fix((C_word)ENOLCK));
t40=C_mutate((C_word*)lf[220]+1 /* (set! errno/nosys ...) */,C_fix((C_word)ENOSYS));
t41=C_mutate((C_word*)lf[221]+1 /* (set! errno/notempty ...) */,C_fix((C_word)ENOTEMPTY));
t42=C_mutate((C_word*)lf[222]+1 /* (set! errno/ilseq ...) */,C_fix((C_word)EILSEQ));
t43=C_mutate((C_word*)lf[223]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3604,a[2]=((C_word)li67),tmp=(C_word)a,a+=3,tmp));
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3634,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp);
t45=C_mutate((C_word*)lf[225]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3658,a[2]=t44,a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp));
t46=C_mutate((C_word*)lf[226]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3664,a[2]=t44,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp));
t47=C_mutate((C_word*)lf[227]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3670,a[2]=t44,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t48=C_mutate((C_word*)lf[228]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)0));
t49=C_mutate((C_word*)lf[229]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)1));
t50=C_mutate((C_word*)lf[230]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)2));
t51=C_SCHEME_UNDEFINED;
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_set_block_item(t52,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3679,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t56=C_set_block_item(t54,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3716,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[239]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3734,a[2]=t52,a[3]=t54,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp));
t58=C_mutate((C_word*)lf[240]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3748,a[2]=t52,a[3]=t54,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp));
t59=C_mutate((C_word*)lf[241]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3762,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[245]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3797,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[247]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3827,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[248]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3844,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t63=*((C_word*)lf[249]+1);
t64=C_mutate((C_word*)lf[250]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3864,a[2]=t63,a[3]=((C_word)li82),tmp=(C_word)a,a+=4,tmp));
t65=C_mutate((C_word*)lf[251]+1 /* (set! current-environment ...) */,*((C_word*)lf[250]+1));
t66=C_mutate(&lf[252] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3930,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[254]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3949,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[257]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3983,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[258]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[260]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4085,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[263]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4152,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[266]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4167,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[267]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4179,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[268]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4195,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[269]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4201,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t76=*((C_word*)lf[275]+1);
t77=*((C_word*)lf[276]+1);
t78=*((C_word*)lf[277]+1);
t79=*((C_word*)lf[103]+1);
t80=*((C_word*)lf[278]+1);
t81=*((C_word*)lf[279]+1);
t82=C_mutate((C_word*)lf[280]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4260,a[2]=t78,a[3]=t76,a[4]=t79,a[5]=t77,a[6]=t80,a[7]=t81,a[8]=((C_word)li98),tmp=(C_word)a,a+=9,tmp));
t83=C_mutate((C_word*)lf[283]+1 /* (set! spawn/overlay ...) */,C_fix((C_word)P_OVERLAY));
t84=C_mutate((C_word*)lf[284]+1 /* (set! spawn/wait ...) */,C_fix((C_word)P_WAIT));
t85=C_mutate((C_word*)lf[285]+1 /* (set! spawn/nowait ...) */,C_fix((C_word)P_NOWAIT));
t86=C_mutate((C_word*)lf[286]+1 /* (set! spawn/nowaito ...) */,C_fix((C_word)P_NOWAITO));
t87=C_mutate((C_word*)lf[287]+1 /* (set! spawn/detach ...) */,C_fix((C_word)P_DETACH));
t88=*((C_word*)lf[288]+1);
t89=*((C_word*)lf[51]+1);
t90=*((C_word*)lf[114]+1);
t91=*((C_word*)lf[4]+1);
t92=C_mutate(&lf[289] /* (set! $quote-args-list ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4377,a[2]=t91,a[3]=t89,a[4]=t90,a[5]=t88,a[6]=((C_word)li102),tmp=(C_word)a,a+=7,tmp));
t93=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4456,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp);
t94=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4473,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp);
t95=*((C_word*)lf[292]+1);
t96=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4490,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp);
t97=C_mutate(&lf[293] /* (set! $exec-setup ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4540,a[2]=t95,a[3]=t93,a[4]=t94,a[5]=t96,a[6]=((C_word)li107),tmp=(C_word)a,a+=7,tmp));
t98=C_mutate(&lf[294] /* (set! $exec-teardown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4576,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[295]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4591,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[297]+1 /* (set! process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=((C_word)li118),tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[299]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4765,a[2]=((C_word)li119),tmp=(C_word)a,a+=3,tmp));
t102=C_mutate((C_word*)lf[300]+1 /* (set! shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4768,a[2]=((C_word)li120),tmp=(C_word)a,a+=3,tmp));
t103=C_mutate((C_word*)lf[304]+1 /* (set! shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4789,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp));
t104=*((C_word*)lf[297]+1);
t105=*((C_word*)lf[302]+1);
t106=C_mutate((C_word*)lf[306]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4795,a[2]=t104,a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp));
t107=C_mutate((C_word*)lf[307]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4887,a[2]=((C_word)li123),tmp=(C_word)a,a+=3,tmp));
t108=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5006,a[2]=((C_word)li128),tmp=(C_word)a,a+=3,tmp);
t109=C_mutate((C_word*)lf[314]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5068,a[2]=t108,a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp));
t110=C_mutate((C_word*)lf[315]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5148,a[2]=t108,a[3]=((C_word)li138),tmp=(C_word)a,a+=4,tmp));
t111=C_mutate((C_word*)lf[316]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5228,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t112=C_mutate((C_word*)lf[317]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5240,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t113=C_mutate((C_word*)lf[319]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5300,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t114=C_mutate((C_word*)lf[320]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5303,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t115=C_mutate((C_word*)lf[322]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5315,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t116=C_mutate((C_word*)lf[115]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5346,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t117=*((C_word*)lf[280]+1);
t118=*((C_word*)lf[276]+1);
t119=*((C_word*)lf[278]+1);
t120=*((C_word*)lf[326]+1);
t121=*((C_word*)lf[107]+1);
t122=C_mutate((C_word*)lf[327]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5361,a[2]=t121,a[3]=t120,a[4]=t119,a[5]=t117,a[6]=t118,a[7]=((C_word)li159),tmp=(C_word)a,a+=8,tmp));
t123=C_mutate((C_word*)lf[333]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5581,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t124=C_mutate((C_word*)lf[335]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5587,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t125=C_mutate((C_word*)lf[336]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5593,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t126=C_mutate((C_word*)lf[337]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5599,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t127=C_mutate((C_word*)lf[338]+1 /* (set! current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5605,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t128=C_mutate((C_word*)lf[339]+1 /* (set! current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5611,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t129=C_mutate((C_word*)lf[340]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5617,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t130=C_mutate((C_word*)lf[341]+1 /* (set! current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5623,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t131=C_mutate((C_word*)lf[342]+1 /* (set! current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5629,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t132=C_mutate((C_word*)lf[343]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5635,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t133=C_mutate((C_word*)lf[344]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5641,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t134=C_mutate((C_word*)lf[345]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5647,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t135=C_mutate((C_word*)lf[346]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5653,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t136=C_mutate((C_word*)lf[347]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5659,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t137=C_mutate((C_word*)lf[348]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5665,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t138=C_mutate((C_word*)lf[349]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5671,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t139=C_mutate((C_word*)lf[350]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5677,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t140=C_mutate((C_word*)lf[351]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5683,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t141=C_mutate((C_word*)lf[352]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5689,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t142=C_mutate((C_word*)lf[353]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5695,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t143=C_mutate((C_word*)lf[354]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5701,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t144=C_mutate((C_word*)lf[355]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5707,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t145=C_mutate((C_word*)lf[356]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5713,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t146=C_mutate((C_word*)lf[357]+1 /* (set! process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5719,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t147=C_mutate((C_word*)lf[358]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5725,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t148=C_mutate((C_word*)lf[359]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5731,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t149=C_mutate((C_word*)lf[360]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5737,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t150=C_mutate((C_word*)lf[361]+1 /* (set! set-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5743,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t151=C_mutate((C_word*)lf[362]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5749,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t152=C_mutate((C_word*)lf[363]+1 /* (set! set-process-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5755,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t153=C_mutate((C_word*)lf[364]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5761,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp));
t154=C_mutate((C_word*)lf[365]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5767,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp));
t155=C_mutate((C_word*)lf[366]+1 /* (set! set-user-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5773,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp));
t156=C_mutate((C_word*)lf[367]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5779,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp));
t157=C_mutate((C_word*)lf[368]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5785,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t158=C_mutate((C_word*)lf[369]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5791,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t159=C_mutate((C_word*)lf[370]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5797,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t160=C_mutate((C_word*)lf[371]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5803,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t161=C_mutate((C_word*)lf[372]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5809,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t162=C_mutate((C_word*)lf[373]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5815,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t163=C_mutate((C_word*)lf[374]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5821,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp));
t164=C_mutate((C_word*)lf[375]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5827,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp));
t165=C_mutate((C_word*)lf[376]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5833,a[2]=((C_word)li202),tmp=(C_word)a,a+=3,tmp));
t166=C_set_block_item(lf[377] /* errno/wouldblock */,0,C_fix(0));
t167=C_mutate((C_word*)lf[80]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5840,a[2]=((C_word)li203),tmp=(C_word)a,a+=3,tmp));
t168=C_mutate((C_word*)lf[378]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5843,a[2]=((C_word)li204),tmp=(C_word)a,a+=3,tmp));
t169=C_set_block_item(lf[379] /* map/anonymous */,0,C_fix(0));
t170=C_set_block_item(lf[380] /* map/file */,0,C_fix(0));
t171=C_set_block_item(lf[381] /* map/fixed */,0,C_fix(0));
t172=C_set_block_item(lf[382] /* map/private */,0,C_fix(0));
t173=C_set_block_item(lf[383] /* map/shared */,0,C_fix(0));
t174=C_set_block_item(lf[384] /* open/fsync */,0,C_fix(0));
t175=C_set_block_item(lf[385] /* open/noctty */,0,C_fix(0));
t176=C_set_block_item(lf[386] /* open/nonblock */,0,C_fix(0));
t177=C_set_block_item(lf[387] /* open/sync */,0,C_fix(0));
t178=C_set_block_item(lf[388] /* perm/isgid */,0,C_fix(0));
t179=C_set_block_item(lf[389] /* perm/isuid */,0,C_fix(0));
t180=C_set_block_item(lf[390] /* perm/isvtx */,0,C_fix(0));
t181=C_set_block_item(lf[391] /* prot/exec */,0,C_fix(0));
t182=C_set_block_item(lf[392] /* prot/none */,0,C_fix(0));
t183=C_set_block_item(lf[393] /* prot/read */,0,C_fix(0));
t184=C_set_block_item(lf[394] /* prot/write */,0,C_fix(0));
t185=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t185+1)))(2,t185,C_SCHEME_UNDEFINED);}

/* memory-mapped-file? in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5843,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* fifo? in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5840(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5840,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* string->time in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5833(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5833,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[376],lf[0]);}

/* utc-time->seconds in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5827(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5827,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[375],lf[0]);}

/* user-information in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5821(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5821,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[374],lf[0]);}

/* unmap-file-from-memory in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5815(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5815,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[373],lf[0]);}

/* terminal-size in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5809(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5809,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[372],lf[0]);}

/* terminal-name in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5803(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5803,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[371],lf[0]);}

/* signal-unmask! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5797(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5797,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[370],lf[0]);}

/* signal-masked? in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5791(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5791,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[369],lf[0]);}

/* signal-mask! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5785(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5785,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[368],lf[0]);}

/* signal-mask in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5779(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5779,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[367],lf[0]);}

/* set-user-id! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5773(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5773,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[366],lf[0]);}

/* set-signal-mask! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5767,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[365],lf[0]);}

/* set-root-directory! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5761(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5761,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[364],lf[0]);}

/* set-process-group-id! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5755(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5755,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[363],lf[0]);}

/* set-groups! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5749(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5749,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[362],lf[0]);}

/* set-group-id! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5743(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5743,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[361],lf[0]);}

/* set-alarm! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5737(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5737,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[360],lf[0]);}

/* read-symbolic-link in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5731,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[359],lf[0]);}

/* process-signal in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5725(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5725,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[358],lf[0]);}

/* process-group-id in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5719(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5719,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[357],lf[0]);}

/* process-fork in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5713(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5713,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[356],lf[0]);}

/* parent-process-id in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5707,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[355],lf[0]);}

/* memory-mapped-file-pointer in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5701(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5701,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[354],lf[0]);}

/* initialize-groups in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5695,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[353],lf[0]);}

/* group-information in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5689(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5689,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[352],lf[0]);}

/* get-groups in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5683(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5683,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[351],lf[0]);}

/* file-unlock in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5677(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5677,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[350],lf[0]);}

/* file-truncate in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5671(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5671,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[349],lf[0]);}

/* file-test-lock in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5665(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5665,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[348],lf[0]);}

/* file-select in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5659(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5659,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[347],lf[0]);}

/* file-lock/blocking in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5653(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5653,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[346],lf[0]);}

/* file-lock in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5647(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5647,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[345],lf[0]);}

/* file-link in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5641(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5641,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[344],lf[0]);}

/* map-file-to-memory in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5635(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5635,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[343],lf[0]);}

/* current-user-id in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5629(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5629,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[342],lf[0]);}

/* current-group-id in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5623(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5623,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[341],lf[0]);}

/* current-effective-user-name in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5617(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5617,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[340],lf[0]);}

/* current-effective-user-id in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5611(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5611,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[339],lf[0]);}

/* current-effective-group-id in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5605(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5605,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[338],lf[0]);}

/* create-symbolic-link in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5599(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5599,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[337],lf[0]);}

/* create-session in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5593(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5593,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[336],lf[0]);}

/* create-fifo in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5587(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5587,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[335],lf[0]);}

/* change-file-owner in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5581(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5581,2,t0,t1);}
/* error */
t2=*((C_word*)lf[334]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[333],lf[0]);}

/* find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5361(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+22)){
C_save_and_reclaim((void*)tr4r,(void*)f_5361r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5361r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5361r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t2,a[9]=((C_word)li154),tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5502,a[2]=t5,a[3]=((C_word)li155),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5507,a[2]=t6,a[3]=((C_word)li156),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5512,a[2]=t7,a[3]=((C_word)li158),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-action12401300 */
t9=t8;
f_5512(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-id12411298 */
t11=t7;
f_5507(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-limit12421295 */
t13=t6;
f_5502(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body12381247 */
t15=t5;
f_5363(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[2],t14);}}}}}

/* def-action1240 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5512(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5512,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5518,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp);
/* def-id12411298 */
t3=((C_word*)t0)[2];
f_5507(t3,t1,t2);}

/* a5517 in def-action1240 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5518(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5518,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* def-id1241 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5507(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5507,NULL,3,t0,t1,t2);}
/* def-limit12421295 */
t3=((C_word*)t0)[2];
f_5502(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit1242 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5502(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5502,NULL,4,t0,t1,t2,t3);}
/* body12381247 */
t4=((C_word*)t0)[2];
f_5363(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5363(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_5363,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(((C_word*)t0)[8],lf[327]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=t7,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
t9=t4;
if(C_truep(t9)){
if(C_truep((C_word)C_fixnump(t4))){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5497,a[2]=t4,a[3]=t7,a[4]=((C_word)li152),tmp=(C_word)a,a+=5,tmp);
t11=t8;
f_5370(t11,t10);}
else{
t10=t4;
t11=t8;
f_5370(t11,t10);}}
else{
t10=t8;
f_5370(t10,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5489,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));}}

/* f_5489 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5489(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5489,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_5497 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5497(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5497,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5370(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5370,NULL,2,t0,t1);}
t2=(C_word)C_i_stringp(((C_word*)t0)[12]);
t3=(C_truep(t2)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5481,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[11],a[4]=((C_word)li147),tmp=(C_word)a,a+=5,tmp):((C_word*)t0)[12]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5380,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5477,a[2]=t4,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 2058 make-pathname */
t6=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[2],lf[332]);}

/* k5475 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2058 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5380,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5382,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t3,a[11]=((C_word)li151),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_5382(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5382(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5382,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5401,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=t5,a[12]=t1,a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* posixwin.scm: 2064 directory? */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}}

/* k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5401,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5457,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 2065 pathname-file */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5463,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 2071 pproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}}

/* k5461 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5463,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5470,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 2071 action */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm: 2072 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_5382(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k5468 in k5461 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2071 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5382(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5455 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5457,2,t0,t1);}
if(C_truep((C_truep((C_word)C_i_equalp(t1,lf[328]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t1,lf[329]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixwin.scm: 2065 loop */
t2=((C_word*)((C_word*)t0)[10])[1];
f_5382(t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5416,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* posixwin.scm: 2066 lproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}}

/* k5414 in k5455 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5416(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5416,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5426,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5428,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=t6,a[5]=((C_word)li148),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=((C_word)li149),tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5447,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t4,a[5]=((C_word)li150),tmp=(C_word)a,a+=6,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[331]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
/* posixwin.scm: 2070 loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_5382(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}}

/* a5446 in k5414 in k5455 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5447,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a5432 in k5414 in k5455 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5441,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5445,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 2069 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],lf[330]);}

/* k5443 in a5432 in k5414 in k5455 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2069 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5439 in a5432 in k5414 in k5455 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2069 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5382(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a5427 in k5414 in k5455 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5428,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5424 in k5414 in k5455 in k5399 in loop in k5378 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2067 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5382(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_5481 in k5368 in body1238 in find-files in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5481(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5481,3,t0,t1,t2);}
/* posixwin.scm: 2056 string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* current-user-name in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5346,2,t0,t1);}
if(C_truep((C_word)C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_username),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5356,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 2031 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5354 in current-user-name in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2032 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[115],lf[325]);}

/* system-information in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
if(C_truep((C_word)C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5326,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5341,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 2022 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5339 in system-information in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2023 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[322],lf[324]);}

/* k5324 in system-information in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5330,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osrel),C_fix(0));}

/* k5328 in k5324 in system-information in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5334,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osver),C_fix(0));}

/* k5332 in k5328 in k5324 in system-information in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5338,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_processor),C_fix(0));}

/* k5336 in k5332 in k5328 in k5324 in system-information in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5338,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,5,lf[323],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* get-host-name in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5303,2,t0,t1);}
if(C_truep((C_word)C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
/* posixwin.scm: 2012 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[320],lf[321]);}}

/* sleep in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5300(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5300,3,t0,t1,t2);}
t3=(C_word)C_sleep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}

/* process-wait in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5240(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_5240r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5240r(t0,t1,t2,t3);}}

static void C_ccall f_5240r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t8=(C_word)C_i_check_exact_2(t2,lf[317]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5261,a[2]=t5,a[3]=t2,a[4]=((C_word)li140),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5267,a[2]=t2,a[3]=((C_word)li141),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}
else{
/* ##sys#error */
t8=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[2],t7);}}

/* a5266 in process-wait in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5267,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5277,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1994 ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* posixwin.scm: 1996 values */
C_values(5,0,t1,t2,t3,t4);}}

/* k5275 in a5266 in process-wait in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1995 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[308],lf[317],lf[318],((C_word*)t0)[2]);}

/* a5260 in process-wait in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5261,2,t0,t1);}
/* posixwin.scm: 1991 ##sys#process-wait */
((C_proc4)C_retrieve_proc(*((C_word*)lf[316]+1)))(4,*((C_word*)lf[316]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5228,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_process_wait(t2,t3))){
/* posixwin.scm: 1984 values */
C_values(5,0,t1,t2,C_SCHEME_TRUE,C_fix((C_word)C_exstatus));}
else{
/* posixwin.scm: 1985 values */
C_values(5,0,t1,C_fix(-1),C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* process* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5148(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_5148r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5148r(t0,t1,t2,t3);}}

static void C_ccall f_5148r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5150,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li134),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5155,a[2]=t4,a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5160,a[2]=t5,a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5165,a[2]=t6,a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args11741190 */
t8=t7;
f_5165(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-env11751188 */
t10=t6;
f_5160(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-exactf11761185 */
t12=t5;
f_5155(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body11721181 */
t14=t4;
f_5150(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-args1174 in process* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5165,NULL,2,t0,t1);}
/* def-env11751188 */
t2=((C_word*)t0)[2];
f_5160(t2,t1,C_SCHEME_FALSE);}

/* def-env1175 in process* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5160(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5160,NULL,3,t0,t1,t2);}
/* def-exactf11761185 */
t3=((C_word*)t0)[2];
f_5155(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf1176 in process* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5155(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5155,NULL,4,t0,t1,t2,t3);}
/* body11721181 */
t4=((C_word*)t0)[2];
f_5150(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1172 in process* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5150(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5150,NULL,5,t0,t1,t2,t3,t4);}
/* posixwin.scm: 1978 %process */
f_5006(t1,lf[315],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3,t4);}

/* process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5068(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_5068r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5068r(t0,t1,t2,t3);}}

static void C_ccall f_5068r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5070,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5075,a[2]=t4,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5080,a[2]=t5,a[3]=((C_word)li131),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5085,a[2]=t6,a[3]=((C_word)li132),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args11351151 */
t8=t7;
f_5085(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-env11361149 */
t10=t6;
f_5080(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-exactf11371146 */
t12=t5;
f_5075(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body11331142 */
t14=t4;
f_5070(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-args1135 in process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5085(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5085,NULL,2,t0,t1);}
/* def-env11361149 */
t2=((C_word*)t0)[2];
f_5080(t2,t1,C_SCHEME_FALSE);}

/* def-env1136 in process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5080(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5080,NULL,3,t0,t1,t2);}
/* def-exactf11371146 */
t3=((C_word*)t0)[2];
f_5075(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf1137 in process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5075(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5075,NULL,4,t0,t1,t2,t3);}
/* body11331142 */
t4=((C_word*)t0)[2];
f_5070(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1133 in process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5070(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5070,NULL,5,t0,t1,t2,t3,t4);}
/* posixwin.scm: 1975 %process */
f_5006(t1,lf[314],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3,t4);}

/* %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5006(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
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
C_save_and_reclaim((void*)trf_5006,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5008,a[2]=t2,a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp);
t12=(C_word)C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5027,a[2]=t11,a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t6,a[7]=t9,a[8]=t8,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm: 1963 chkstrlst */
t14=t11;
f_5008(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5062,a[2]=t13,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1966 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[304]+1)))(3,*((C_word*)lf[304]+1),t15,((C_word*)t8)[1]);}}

/* k5060 in %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5062,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5066,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1967 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[300]+1)))(2,*((C_word*)lf[300]+1),t3);}

/* k5064 in k5060 in %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5027(2,t3,t2);}

/* k5025 in %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posixwin.scm: 1968 chkstrlst */
t3=((C_word*)t0)[2];
f_5008(t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
f_5030(2,t3,C_SCHEME_UNDEFINED);}}

/* k5028 in k5025 in %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5035,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li126),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5041,a[2]=((C_word*)t0)[4],a[3]=((C_word)li127),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a5040 in k5028 in k5025 in %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5041,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm: 1971 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixwin.scm: 1972 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a5034 in k5028 in k5025 in %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5035,2,t0,t1);}
/* posixwin.scm: 1969 ##sys#process */
t2=*((C_word*)lf[307]+1);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,t1,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* chkstrlst in %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_5008(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5008,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5017,a[2]=((C_word*)t0)[2],a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[313]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a5016 in chkstrlst in %process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_5017(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5017,3,t0,t1,t2);}
t3=*((C_word*)lf[312]+1);
/* g11031104 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...){
C_word tmp;
C_word t9;
va_list v;
C_word *a,c2=c;
C_save_rest(t8,c2,9);
if(c<9) C_bad_min_argc_2(c,9,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr9r,(void*)f_4887r,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
else{
a=C_alloc((c-9)*3);
t9=C_restore_rest(a,C_rest_count(0));
f_4887r(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}}

static void C_ccall f_4887r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4891,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=t7,a[6]=t8,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(t9))){
t11=t10;
f_4891(2,t11,C_SCHEME_FALSE);}
else{
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
t12=t10;
f_4891(2,t12,(C_word)C_i_car(t9));}
else{
/* ##sys#error */
t12=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,lf[2],t9);}}}

/* k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4894,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4982,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[2]);
/* posixwin.scm: 1935 $quote-args-list */
t5=lf[289];
f_4377(t5,t3,t4,t1);}

/* k4980 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1935 string-intersperse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[121]+1)))(3,*((C_word*)lf[121]+1),((C_word*)t0)[2],t1);}

/* k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4894(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4894,2,t0,t1);}
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
t14=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4950,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=t11,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=t1,a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[310]+1)))(6,*((C_word*)lf[310]+1),t14,t2,C_fix(0),C_SCHEME_FALSE,lf[311]);}

/* k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[310]+1)))(6,*((C_word*)lf[310]+1),t2,((C_word*)t0)[5],C_fix(0),C_SCHEME_FALSE,lf[311]);}

/* k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[310]+1)))(6,*((C_word*)lf[310]+1),t2,((C_word*)t0)[3],C_fix(0),C_SCHEME_FALSE,lf[311]);}

/* k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4958,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[310]+1)))(6,*((C_word*)lf[310]+1),t2,((C_word*)t0)[7],C_fix(0),C_SCHEME_FALSE,lf[311]);}

/* k4960 in k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)t0)[6])?C_fix(0):C_fix(1));
t4=(C_truep(((C_word*)t0)[4])?C_fix(0):C_fix(2));
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm: 1942 + */
C_plus(5,0,t2,t3,t4,C_fix(0));}
else{
/* posixwin.scm: 1942 + */
C_plus(5,0,t2,t3,t4,C_fix(4));}}

/* k4964 in k4960 in k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4966(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4966,2,t0,t1);}
t2=((C_word*)t0)[16];
t3=((C_word*)t0)[15];
t4=((C_word*)t0)[14];
t5=((C_word*)t0)[13];
t6=((C_word*)t0)[12];
t7=((C_word*)t0)[11];
t8=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4829,a[2]=t3,a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=t1,a[14]=t7,a[15]=t6,a[16]=t5,a[17]=t4,tmp=(C_word)a,a+=18,tmp);
if(C_truep(t2)){
t9=(C_word)C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t9=t8;
f_4829(2,t9,C_SCHEME_FALSE);}}

/* k4827 in k4964 in k4960 in k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4833,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
t4=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t3=t2;
f_4833(2,t3,C_SCHEME_FALSE);}}

/* k4831 in k4827 in k4964 in k4960 in k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4833(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4833,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[17])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[17]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[16])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[16]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[15])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[15]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[14])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[14]):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[13]);
if(C_truep((C_word)stub992(C_SCHEME_UNDEFINED,((C_word*)t0)[12],t1,C_SCHEME_FALSE,t2,t3,t4,t5,t6))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4923,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm: 1945 open-input-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[239]+1)))(3,*((C_word*)lf[239]+1),t7,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))));}
else{
t8=t7;
f_4923(2,t8,C_SCHEME_FALSE);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4943,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1950 ##sys#update-errno */
t8=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k4941 in k4831 in k4827 in k4964 in k4960 in k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1951 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[308],((C_word*)t0)[3],lf[309],((C_word*)t0)[2]);}

/* k4921 in k4831 in k4827 in k4964 in k4960 in k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4927,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1946 open-output-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[240]+1)))(3,*((C_word*)lf[240]+1),t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
t3=t2;
f_4927(2,t3,C_SCHEME_FALSE);}}

/* k4925 in k4921 in k4831 in k4827 in k4964 in k4960 in k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4931,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1948 open-input-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[239]+1)))(3,*((C_word*)lf[239]+1),t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
/* posixwin.scm: 1944 values */
C_values(6,0,((C_word*)t0)[6],((C_word*)t0)[5],t1,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))),C_SCHEME_FALSE);}}

/* k4929 in k4925 in k4921 in k4831 in k4827 in k4964 in k4960 in k4956 in k4952 in k4948 in k4892 in k4889 in ##sys#process in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1944 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))),t1);}

/* process-run in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4795(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4795r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4795r(t0,t1,t2,t3);}}

static void C_ccall f_4795r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t5)){
/* posixwin.scm: 1906 process-spawn */
t6=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,*((C_word*)lf[285]+1),t2,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4812,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1907 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[300]+1)))(2,*((C_word*)lf[300]+1),t6);}}

/* k4810 in process-run in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4816,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1907 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[304]+1)))(3,*((C_word*)lf[304]+1),t2,((C_word*)t0)[2]);}

/* k4814 in k4810 in process-run in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1907 process-spawn */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[285]+1),((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4789,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[305],t2));}

/* ##sys#shell-command in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4772,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1890 get-environment-variable */
((C_proc3)C_retrieve_proc(*((C_word*)lf[302]+1)))(3,*((C_word*)lf[302]+1),t2,lf[303]);}

/* k4770 in ##sys#shell-command in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4772,2,t0,t1);}
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
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4784,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1894 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}}

/* k4782 in k4770 in ##sys#shell-command in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1895 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[300],lf[301]);}

/* current-process-id in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4765,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub967(C_SCHEME_UNDEFINED));}

/* process-spawn in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_4678r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4678r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4678r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4680,a[2]=t3,a[3]=t2,a[4]=((C_word)li114),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4692,a[2]=t5,a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4697,a[2]=t6,a[3]=((C_word)li116),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4702,a[2]=t7,a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-arglst943960 */
t9=t8;
f_4702(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-envlst944958 */
t11=t7;
f_4697(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-exactf945955 */
t13=t6;
f_4692(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body941950 */
t15=t5;
f_4680(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[2],t14);}}}}}

/* def-arglst943 in process-spawn in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4702(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4702,NULL,2,t0,t1);}
/* def-envlst944958 */
t2=((C_word*)t0)[2];
f_4697(t2,t1,C_SCHEME_FALSE);}

/* def-envlst944 in process-spawn in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4697(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4697,NULL,3,t0,t1,t2);}
/* def-exactf945955 */
t3=((C_word*)t0)[2];
f_4692(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf945 in process-spawn in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4692(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4692,NULL,4,t0,t1,t2,t3);}
/* body941950 */
t4=((C_word*)t0)[2];
f_4680(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body941 in process-spawn in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4680(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4680,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1881 $exec-setup */
t6=lf[293];
f_4540(t6,t5,lf[297],((C_word*)t0)[2],t2,t3,t4);}

/* k4682 in body941 in process-spawn in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[5])){
t2=(C_word)C_spawnvpe(((C_word*)t0)[4],t1);
/* posixwin.scm: 1882 $exec-teardown */
f_4576(((C_word*)t0)[3],lf[297],lf[298],((C_word*)t0)[2],t2);}
else{
t2=(C_word)C_spawnvp(((C_word*)t0)[4],t1);
/* posixwin.scm: 1882 $exec-teardown */
f_4576(((C_word*)t0)[3],lf[297],lf[298],((C_word*)t0)[2],t2);}}

/* process-execute in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4591(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr3r,(void*)f_4591r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4591r(t0,t1,t2,t3);}}

static void C_ccall f_4591r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4593,a[2]=t2,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4605,a[2]=t4,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4610,a[2]=t5,a[3]=((C_word)li111),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4615,a[2]=t6,a[3]=((C_word)li112),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-arglst901918 */
t8=t7;
f_4615(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-envlst902916 */
t10=t6;
f_4610(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-exactf903913 */
t12=t5;
f_4605(t12,t1,t8,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* body899908 */
t14=t4;
f_4593(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-arglst901 in process-execute in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4615,NULL,2,t0,t1);}
/* def-envlst902916 */
t2=((C_word*)t0)[2];
f_4610(t2,t1,C_SCHEME_FALSE);}

/* def-envlst902 in process-execute in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4610(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4610,NULL,3,t0,t1,t2);}
/* def-exactf903913 */
t3=((C_word*)t0)[2];
f_4605(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf903 in process-execute in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4605,NULL,4,t0,t1,t2,t3);}
/* body899908 */
t4=((C_word*)t0)[2];
f_4593(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body899 in process-execute in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4593(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4593,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4597,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1876 $exec-setup */
t6=lf[293];
f_4540(t6,t5,lf[295],((C_word*)t0)[2],t2,t3,t4);}

/* k4595 in body899 in process-execute in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_execve(t1);
/* posixwin.scm: 1877 $exec-teardown */
f_4576(((C_word*)t0)[3],lf[295],lf[296],((C_word*)t0)[2],t2);}
else{
t2=(C_word)C_execvp(t1);
/* posixwin.scm: 1877 $exec-teardown */
f_4576(((C_word*)t0)[3],lf[295],lf[296],((C_word*)t0)[2],t2);}}

/* $exec-teardown in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4576(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4576,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4580,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1868 ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k4578 in $exec-teardown in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4580(C_word c,C_word t0,C_word t1){
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
/* posixwin.scm: 1872 ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* $exec-setup in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4540(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4540,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(C_word)C_i_check_string_2(t3,t2);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4547,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 1860 pathname-strip-directory */
t9=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t3);}

/* k4545 in $exec-setup in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4550,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_block_size(t1);
/* posixwin.scm: 1861 setarg */
t4=((C_word*)t0)[4];
f_4456(5,t4,t2,C_fix(0),t1,t3);}

/* k4548 in k4545 in $exec-setup in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4553,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4567,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1862 $quote-args-list */
t4=lf[289];
f_4377(t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm: 1862 build-exec-argvec */
f_4490(t2,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],C_fix(1));}}

/* k4565 in k4548 in k4545 in $exec-setup in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1862 build-exec-argvec */
f_4490(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],C_fix(1));}

/* k4551 in k4548 in k4545 in $exec-setup in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4556,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1863 build-exec-argvec */
f_4490(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k4554 in k4551 in k4548 in k4545 in $exec-setup in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4556,2,t0,t1);}
t2=(C_word)C_flushall();
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4563,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1865 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[2]);}

/* k4561 in k4554 in k4551 in k4548 in k4545 in $exec-setup in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1865 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* build-exec-argvec in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4490(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4490,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(t3)){
t6=(C_word)C_i_check_list_2(t3,t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4502,a[2]=t8,a[3]=t2,a[4]=t4,a[5]=((C_word)li105),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_4502(t10,t1,t3,t5);}
else{
/* posixwin.scm: 1857 argvec-setter */
t6=t4;
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,t5,C_SCHEME_FALSE,C_fix(0));}}

/* doloop852 in build-exec-argvec in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4502(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4502,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1853 argvec-setter */
t4=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_check_string_2(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4521,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_block_size(t4);
/* posixwin.scm: 1856 argvec-setter */
t8=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,t3,t4,t7);}}

/* k4519 in doloop852 in build-exec-argvec in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4502(t4,((C_word*)t0)[2],t2,t3);}

/* setenv in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4473(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4473,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub841(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* setarg in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4456,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub831(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4377(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4377,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li100),tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4420,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li101),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4420(t8,t1,t2,C_SCHEME_END_OF_LIST);}}

/* loop in $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4420(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4420,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1834 reverse */
t4=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4448,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4451,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t4,a[7]=t6,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm: 1839 needs-quoting? */
t8=((C_word*)t0)[2];
f_4382(t8,t7,t4);}}

/* k4449 in loop in $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4451,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1839 string-append */
t2=((C_word*)t0)[8];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[7],lf[290],((C_word*)t0)[6],lf[291]);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* posixwin.scm: 1836 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4420(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k4446 in loop in $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4448,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* posixwin.scm: 1836 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4420(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* needs-quoting? in $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4382(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4382,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4386,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1826 string-length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4384 in needs-quoting? in $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4386,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4391,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t1,a[7]=((C_word)li99),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_4391(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k4384 in needs-quoting? in $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4391(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4391,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[6]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4404,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1830 string-ref */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[2],t2);}}

/* k4413 in loop in k4384 in needs-quoting? in $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1830 char-whitespace? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4402 in loop in k4384 in needs-quoting? in $quote-args-list in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1831 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4391(t3,((C_word*)t0)[4],t2);}}

/* glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4260(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_4260r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4260r(t0,t1,t2);}}

static void C_ccall f_4260r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(12);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=((C_word)li97),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_4266(t6,t1,t2);}

/* conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4266(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4266,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4281,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word)li93),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li96),tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4287(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4287,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4291,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4366,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=t3;
/* posixwin.scm: 1788 make-pathname */
t8=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posixwin.scm: 1788 make-pathname */
t7=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,C_SCHEME_FALSE,lf[282],t4);}}

/* k4364 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1788 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4289 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4294,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm: 1789 regexp */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k4292 in k4289 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4294,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=((C_word*)t0)[5];
/* posixwin.scm: 1790 directory */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posixwin.scm: 1790 directory */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[281],C_SCHEME_TRUE);}}

/* k4299 in k4292 in k4289 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4301,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4303,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li95),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_4303(t5,((C_word*)t0)[2],t1);}

/* loop in k4299 in k4292 in k4289 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4303(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4303,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cdr(((C_word*)t0)[8]);
/* posixwin.scm: 1791 conc-loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4266(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4320,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(t2);
/* posixwin.scm: 1792 string-match */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k4318 in loop in k4299 in k4292 in k4289 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4320,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li94),tmp=(C_word)a,a+=7,tmp);
/* g791792 */
t3=t2;
f_4324(t3,((C_word*)t0)[2],t1);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* posixwin.scm: 1794 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4303(t3,((C_word*)t0)[2],t2);}}

/* g791 in k4318 in loop in k4299 in k4292 in k4289 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4324(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4324,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4332,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* posixwin.scm: 1793 make-pathname */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}

/* k4330 in g791 in k4318 in loop in k4299 in k4292 in k4289 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4336,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* posixwin.scm: 1793 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4303(t4,t2,t3);}

/* k4334 in k4330 in g791 in k4318 in loop in k4299 in k4292 in k4289 in a4286 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4336,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a4280 in conc-loop in glob in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4281,2,t0,t1);}
/* posixwin.scm: 1787 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* set-buffering-mode! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4201r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4201r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4201r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4205,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1759 ##sys#check-port */
t6=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[269]);}

/* k4203 in set-buffering-mode! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4205(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4205,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[271]);
if(C_truep(t6)){
t7=t5;
f_4211(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=(C_word)C_eqp(t4,lf[272]);
if(C_truep(t7)){
t8=C_fix((C_word)_IOLBF);
t9=t5;
f_4211(2,t9,t8);}
else{
t8=(C_word)C_eqp(t4,lf[273]);
if(C_truep(t8)){
t9=t5;
f_4211(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixwin.scm: 1765 ##sys#error */
t9=*((C_word*)lf[62]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[269],lf[274],((C_word*)t0)[4],((C_word*)t0)[2]);}}}}

/* k4209 in k4203 in set-buffering-mode! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4211,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[269]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4220,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(7));
t5=(C_word)C_eqp(lf[86],t4);
if(C_truep(t5)){
t6=(C_word)C_setvbuf(((C_word*)t0)[2],t1,((C_word*)t0)[4]);
t7=t3;
f_4220(t7,(C_word)C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_4220(t6,C_SCHEME_TRUE);}}

/* k4218 in k4209 in k4203 in set-buffering-mode! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_4220(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm: 1771 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],lf[269],lf[270],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* terminal-port? in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4195(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4195,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4199,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1749 ##sys#check-port */
t4=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[268]);}

/* k4197 in terminal-port? in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* _exit in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4179(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_4179r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_4179r(t0,t1,t2);}}

static void C_ccall f_4179r(C_word t0,C_word t1,C_word t2){
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
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub728(C_SCHEME_UNDEFINED,t5));}
else{
t3=t1;
t4=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub728(C_SCHEME_UNDEFINED,t4));}}

/* local-timezone-abbreviation in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4167,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,(C_word)stub723(t2),C_fix(0));}

/* local-time->seconds in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4152,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4156,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1730 check-time-vector */
f_3930(t3,lf[263],t2);}

/* k4154 in local-time->seconds in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4156,2,t0,t1);}
t2=(C_word)C_mktime(&a,1,((C_word*)t0)[3]);
if(C_truep((C_word)C_flonum_equalp(t2,lf[264]))){
/* posixwin.scm: 1733 ##sys#error */
t3=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[263],lf[265],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* time->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4085(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4085r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4085r(t0,t1,t2,t3);}}

static void C_ccall f_4085r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4089,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_4089(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_4089(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k4087 in time->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1718 check-time-vector */
f_3930(t2,lf[260],((C_word*)t0)[2]);}

/* k4090 in k4087 in time->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4092,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_i_check_string_2(((C_word*)t0)[4],lf[260]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4111,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1722 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub687(t4,t3),C_fix(0));}}

/* k4112 in k4090 in k4087 in time->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(t1);
t3=(C_word)C_fixnum_difference(t2,C_fix(1));
/* posixwin.scm: 1726 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixwin.scm: 1727 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[260],lf[262],((C_word*)t0)[2]);}}

/* k4109 in k4090 in k4087 in time->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4111,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],(C_word)stub693(t3,t2,t1),C_fix(0));}

/* k4099 in k4090 in k4087 in time->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posixwin.scm: 1723 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[260],lf[261],((C_word*)t0)[2]);}}

/* seconds->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4027r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4027r(t0,t1,t2);}}

static void C_ccall f_4027r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1708 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[256]+1)))(2,*((C_word*)lf[256]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_4031(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k4029 in seconds->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4034,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=t1;
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_integer_argumentp(t3);
t6=(C_word)stub667(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k4032 in k4029 in seconds->string in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_4034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(t1);
t3=(C_word)C_fixnum_difference(t2,C_fix(1));
/* posixwin.scm: 1711 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixwin.scm: 1712 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[258],lf[259],((C_word*)t0)[2]);}}

/* seconds->utc-time in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3983r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3983r(t0,t1,t2);}}

static void C_ccall f_3983r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3987,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1702 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[256]+1)))(2,*((C_word*)lf[256]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_check_number_2(t5,lf[257]);
/* posixwin.scm: 1704 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[255]+1)))(4,*((C_word*)lf[255]+1),t1,t5,C_SCHEME_TRUE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3985 in seconds->utc-time in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_number_2(t1,lf[257]);
/* posixwin.scm: 1704 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[255]+1)))(4,*((C_word*)lf[255]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* seconds->local-time in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3949r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3949r(t0,t1,t2);}}

static void C_ccall f_3949r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3953,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixwin.scm: 1698 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[256]+1)))(2,*((C_word*)lf[256]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_check_number_2(t5,lf[254]);
/* posixwin.scm: 1700 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[255]+1)))(4,*((C_word*)lf[255]+1),t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3951 in seconds->local-time in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_number_2(t1,lf[254]);
/* posixwin.scm: 1700 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[255]+1)))(4,*((C_word*)lf[255]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* check-time-vector in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3930(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3930,NULL,3,t1,t2,t3);}
t4=(C_word)C_i_check_vector_2(t3,t2);
t5=(C_word)C_block_size(t3);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixwin.scm: 1696 ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[253],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* get-environment-variables in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3864,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3870,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li81),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3870(t5,t1,C_fix(0));}

/* loop in get-environment-variables in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3870(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3870,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3874,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)stub620(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k3872 in loop in get-environment-variables in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3874,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3882,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word)li80),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3882(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k3872 in loop in get-environment-variables in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3882(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3882,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(C_make_character(61),(C_word)C_subchar(((C_word*)t0)[6],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3908,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 1685 substring */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[6],C_fix(0),t2);}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* posixwin.scm: 1686 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k3906 in scan in k3872 in loop in get-environment-variables in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3912,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_block_size(((C_word*)t0)[3]);
/* posixwin.scm: 1685 substring */
t5=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,((C_word*)t0)[3],t3,t4);}

/* k3910 in k3906 in scan in k3872 in loop in get-environment-variables in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3912,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3900,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1685 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3870(t5,t3,t4);}

/* k3898 in k3910 in k3906 in scan in k3872 in loop in get-environment-variables in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3900,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3844(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3844,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[248]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3852,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1673 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3850 in unsetenv in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3827(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3827,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[247]);
t5=(C_word)C_i_check_string_2(t3,lf[247]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3838,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1668 ##sys#make-c-string */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k3836 in setenv in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1668 ##sys#make-c-string */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3840 in k3836 in setenv in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* duplicate-fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3797(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_3797r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_3797r(t0,t1,t2,t3);}}

static void C_ccall f_3797r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_exact_2(t2,*((C_word*)lf[245]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3804,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_vemptyp(t3))){
t6=t5;
f_3804(t6,(C_word)C_dup(t2));}
else{
t6=(C_word)C_i_vector_ref(t3,C_fix(0));
t7=(C_word)C_i_check_exact_2(t6,lf[245]);
t8=t5;
f_3804(t8,(C_word)C_dup2(t2,t6));}}

/* k3802 in duplicate-fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3804(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3804,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3807,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3813,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1657 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k3811 in k3802 in duplicate-fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1658 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[245],lf[246],((C_word*)t0)[2]);}

/* k3805 in k3802 in duplicate-fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3762(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3762,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3766,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1639 ##sys#check-port */
t4=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[241]);}

/* k3764 in port->fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3766,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1640 ##sys#peek-unsigned-integer */
t3=*((C_word*)lf[244]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3793 in k3764 in port->fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3795,2,t0,t1);}
if(C_truep((C_word)C_i_zerop(t1))){
/* posixwin.scm: 1646 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[46],lf[241],lf[242],((C_word*)t0)[2]);}
else{
t2=(C_word)C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3775,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3781,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1643 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k3779 in k3793 in k3764 in port->fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1644 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[241],lf[243],((C_word*)t0)[2]);}

/* k3773 in k3793 in k3764 in port->fileno in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3748(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3748r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3748r(t0,t1,t2,t3);}}

static void C_ccall f_3748r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[240]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3760,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1635 mode */
f_3679(t5,C_SCHEME_FALSE,t3);}

/* k3758 in open-output-file* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3760,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1635 check */
f_3716(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3734(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3734r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3734r(t0,t1,t2,t3);}}

static void C_ccall f_3734r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[239]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3746,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1631 mode */
f_3679(t5,C_SCHEME_TRUE,t3);}

/* k3744 in open-input-file* in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3746,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1631 check */
f_3716(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3716(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3716,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3720,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1622 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3718 in check in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3720,2,t0,t1);}
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1624 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[37],lf[237],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3732,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1625 ##sys#make-port */
t3=*((C_word*)lf[135]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[136]+1),lf[238],lf[86]);}}

/* k3730 in k3718 in check in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* mode in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3679(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3679,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3687,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_i_car(t3);
t6=(C_word)C_eqp(t5,lf[231]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixwin.scm: 1617 ##sys#error */
t8=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[232],t5);}
else{
/* posixwin.scm: 1613 ##sys#make-c-string */
t8=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,lf[233]);}}
else{
/* posixwin.scm: 1618 ##sys#error */
t7=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[234],t5);}}
else{
if(C_truep(t2)){
/* posixwin.scm: 1613 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[235]);}
else{
/* posixwin.scm: 1613 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[236]);}}}

/* k3685 in mode in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1613 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-execute-access? in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3670(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3670,3,t0,t1,t2);}
/* posixwin.scm: 1597 check */
f_3634(t1,t2,C_fix((C_word)2),lf[227]);}

/* file-write-access? in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3664,3,t0,t1,t2);}
/* posixwin.scm: 1596 check */
f_3634(t1,t2,C_fix((C_word)4),lf[226]);}

/* file-read-access? in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3658(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3658,3,t0,t1,t2);}
/* posixwin.scm: 1595 check */
f_3634(t1,t2,C_fix((C_word)2),lf[225]);}

/* check in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3634(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3634,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3652,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3656,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1592 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t7,t2);}

/* k3654 in check in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1592 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3650 in check in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3652,2,t0,t1);}
t2=(C_word)C_access(t1,((C_word*)t0)[3]);
t3=(C_word)C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3644,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixwin.scm: 1593 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3642 in k3650 in check in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-file-mode in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3604(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3604,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[223]);
t5=(C_word)C_i_check_exact_2(t3,lf[223]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3628,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3632,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1581 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t7,t2);}

/* k3630 in change-file-mode in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1581 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3626 in change-file-mode in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3628,2,t0,t1);}
t2=(C_word)C_chmod(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1582 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3618 in k3626 in change-file-mode in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1583 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[223],lf[224],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#interrupt-hook in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3548,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3558,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1489 h */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixwin.scm: 1491 oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k3556 in ##sys#interrupt-hook in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1490 ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3535,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t2,lf[184]);
if(C_truep(t3)){
t5=t2;
t6=(C_word)C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_vector_set(((C_word*)t0)[2],t2,t3));}
else{
t5=(C_word)C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_vector_set(((C_word*)t0)[2],t2,t3));}}

/* signal-handler in k3522 in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3526,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[183]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3450r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3450r(t0,t1,t2);}}

static void C_ccall f_3450r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3454,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_3454(2,t4,(C_word)C_fixnum_or(*((C_word*)lf[21]+1),*((C_word*)lf[23]+1)));}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_3454(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3452 in create-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_pipe(C_SCHEME_FALSE,t1),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3466,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1426 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixwin.scm: 1428 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k3464 in k3452 in create-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1427 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[37],lf[153],lf[154]);}

/* k3455 in k3452 in create-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1428 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3430r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3430r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3430r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[152]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3434,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k3432 in with-output-to-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3434,2,t0,t1);}
t2=C_mutate((C_word*)lf[152]+1 /* (set! standard-output ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3440,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1411 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a3439 in k3432 in with-output-to-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_3440r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3440r(t0,t1,t2);}}

static void C_ccall f_3440r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3444,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1413 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3442 in a3439 in k3432 in with-output-to-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[152]+1 /* (set! standard-output ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3410r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3410r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3410r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[150]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3414,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k3412 in with-input-from-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3414,2,t0,t1);}
t2=C_mutate((C_word*)lf[150]+1 /* (set! standard-input ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3420,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1401 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a3419 in k3412 in with-input-from-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_3420r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3420r(t0,t1,t2);}}

static void C_ccall f_3420r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3424,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1403 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3422 in a3419 in k3412 in with-input-from-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[150]+1 /* (set! standard-input ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3386r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3386r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3386r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3390,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k3388 in call-with-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3395,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li56),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3401,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1391 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3400 in k3388 in call-with-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3401r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3401r(t0,t1,t2);}}

static void C_ccall f_3401r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3405,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1394 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3403 in a3400 in k3388 in call-with-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3394 in k3388 in call-with-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3395,2,t0,t1);}
/* posixwin.scm: 1392 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3362r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3362r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3362r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3366,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k3364 in call-with-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3371,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3377,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li54),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1383 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3376 in k3364 in call-with-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3377(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3377r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3377r(t0,t1,t2);}}

static void C_ccall f_3377r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3381,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1386 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3379 in a3376 in k3364 in call-with-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3370 in k3364 in call-with-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3371,2,t0,t1);}
/* posixwin.scm: 1384 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3343,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3347,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1370 ##sys#check-port */
t4=*((C_word*)lf[145]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[143]);}

/* k3345 in close-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3347,2,t0,t1);}
t2=(C_word)close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3350,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1372 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3348 in k3345 in close-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t2)){
/* posixwin.scm: 1373 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[37],lf[143],lf[144],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* open-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3307(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3307r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3307r(t0,t1,t2,t3);}}

static void C_ccall f_3307r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_string_2(t2,lf[142]);
t5=(C_word)C_i_pairp(t3);
t6=(C_truep(t5)?(C_word)C_slot(t3,C_fix(0)):lf[139]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3321,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_eqp(t6,lf[139]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3328,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1365 ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=(C_word)C_eqp(t6,lf[140]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3338,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1366 ##sys#make-c-string */
t11=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixwin.scm: 1340 ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[141],t6);}}}

/* k3336 in open-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3338,2,t0,t1);}
t2=(C_word)open_binary_output_pipe(&a,1,t1);
/* posixwin.scm: 1362 check */
f_3253(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k3326 in open-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3328,2,t0,t1);}
t2=(C_word)open_text_output_pipe(&a,1,t1);
/* posixwin.scm: 1362 check */
f_3253(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k3319 in open-output-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1362 check */
f_3253(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3271r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3271r(t0,t1,t2,t3);}}

static void C_ccall f_3271r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_string_2(t2,lf[138]);
t5=(C_word)C_i_pairp(t3);
t6=(C_truep(t5)?(C_word)C_slot(t3,C_fix(0)):lf[139]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3285,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_eqp(t6,lf[139]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3292,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1355 ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=(C_word)C_eqp(t6,lf[140]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3302,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1356 ##sys#make-c-string */
t11=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixwin.scm: 1340 ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[141],t6);}}}

/* k3300 in open-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3302,2,t0,t1);}
t2=(C_word)open_binary_input_pipe(&a,1,t1);
/* posixwin.scm: 1352 check */
f_3253(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3290 in open-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3292,2,t0,t1);}
t2=(C_word)open_text_input_pipe(&a,1,t1);
/* posixwin.scm: 1352 check */
f_3253(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3283 in open-input-pipe in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1352 check */
f_3253(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3253(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3253,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3257,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1342 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3255 in check in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3257,2,t0,t1);}
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1344 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[37],lf[134],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3269,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1345 ##sys#make-port */
t3=*((C_word*)lf[135]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[136]+1),lf[137],lf[86]);}}

/* k3267 in k3255 in check in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_2878,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[120]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2885,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_block_size(t2);
t6=(C_word)C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3018,a[2]=t4,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1279 cwd */
t8=((C_word*)t0)[5];
f_2822(t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=t4,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1281 sref */
t10=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,t2,C_fix(0));}
else{
t9=t7;
f_3024(t9,C_SCHEME_FALSE);}}}

/* k3223 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3024(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3024(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3024,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1283 cwd */
t4=((C_word*)t0)[6];
f_2822(t4,t3);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[7]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3048,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1286 cwd */
t5=((C_word*)t0)[6];
f_2822(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3200,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3211,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1287 sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[7],C_fix(0));}}}

/* k3209 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1287 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(126),t1);}

/* k3198 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3200,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1288 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(1));}
else{
t2=((C_word*)t0)[4];
f_3054(t2,C_SCHEME_FALSE);}}

/* k3205 in k3198 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3054(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3054(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3054,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3077,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1290 cwd */
t4=((C_word*)t0)[5];
f_2822(t4,t3);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[7]);
t3=(C_word)C_eqp(C_fix(2),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3090,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1296 cwd */
t5=((C_word*)t0)[5];
f_2822(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3096,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3193,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1297 sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[7],C_fix(0));}}}

/* k3191 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1297 alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3170 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3178,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3189,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1298 sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_3096(t2,C_SCHEME_FALSE);}}

/* k3187 in k3170 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1298 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k3176 in k3170 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3178,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1299 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_3096(t2,C_SCHEME_FALSE);}}

/* k3183 in k3176 in k3170 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3096(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_3096(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3096,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
f_2885(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3169,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1301 sref */
t5=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[8],C_fix(0));}}

/* k3167 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1301 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(47),t1);}

/* k3146 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3148,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3154,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3165,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1302 sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_3102(2,t2,C_SCHEME_FALSE);}}

/* k3163 in k3146 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1302 alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3152 in k3146 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3154,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3161,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1303 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_3102(2,t2,C_SCHEME_FALSE);}}

/* k3159 in k3152 in k3146 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1303 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k3100 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3109,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1305 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[4],C_fix(1),C_fix(3));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3145,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1309 sref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[4],C_fix(0));}}

/* k3143 in k3100 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3145,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3130,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3134,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1311 cwd */
t6=((C_word*)t0)[2];
f_2822(t6,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3141,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1314 cwd */
t5=((C_word*)t0)[2];
f_2822(t5,t4);}}

/* k3139 in k3143 in k3100 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1314 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[133],((C_word*)t0)[2]);}

/* k3132 in k3143 in k3100 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1311 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(2));}

/* k3128 in k3143 in k3100 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1310 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3107 in k3100 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3113,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
/* posixwin.scm: 1307 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(3),t3);}

/* k3111 in k3107 in k3100 in k3094 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1304 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[132],t1);}

/* k3088 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1296 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[131],((C_word*)t0)[2]);}

/* k3075 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1290 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(3));}

/* k3059 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3065,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1292 user */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k3063 in k3059 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3069,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
/* posixwin.scm: 1293 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(1),t3);}

/* k3067 in k3063 in k3059 in k3052 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1289 sappend */
t2=((C_word*)t0)[5];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],lf[130],((C_word*)t0)[2],t1);}

/* k3046 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1286 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[129],((C_word*)t0)[2]);}

/* k3033 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1283 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(2));}

/* k3029 in k3022 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1282 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3016 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1279 sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[128]);}

/* k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3004,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_block_size(t1);
/* posixwin.scm: 1315 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t3,t1,C_fix(3),t4);}

/* k3002 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_3004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[96]+1);
/* g360361 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[127]);}

/* k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2892,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2894,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li47),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_2894(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2894(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2894,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 1317 null? */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1318 null? */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
/* posixwin.scm: 1329 string=? */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,lf[126],t4);}}

/* k2974 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* posixwin.scm: 1327 loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2894(t3,((C_word*)t0)[5],((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* posixwin.scm: 1331 string=? */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[125],t3);}}

/* k2983 in k2974 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2985,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
/* posixwin.scm: 1327 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2894(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[6]);
/* posixwin.scm: 1327 loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2894(t4,((C_word*)t0)[4],((C_word*)t0)[3],t3);}}

/* k2905 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2907,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1319 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[6],((C_word*)t0)[5],C_fix(0),C_fix(3));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[5]);
t4=(C_word)C_a_i_minus(&a,2,t3,C_fix(1));
/* posixwin.scm: 1320 sref */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[5],t4);}}

/* k2952 in k2905 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2923,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1322 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[2],C_fix(0),C_fix(3));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2942,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1325 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[2],C_fix(0),C_fix(3));}}

/* k2940 in k2952 in k2905 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2946,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2950,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1326 reverse */
t4=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2948 in k2940 in k2952 in k2905 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[121]+1);
/* g369370 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[122]);}

/* k2944 in k2940 in k2952 in k2905 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1324 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2921 in k2952 in k2905 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2927,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2931,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_cons(&a,2,lf[123],((C_word*)t0)[2]);
/* posixwin.scm: 1323 reverse */
t5=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k2929 in k2921 in k2952 in k2905 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[121]+1);
/* g369370 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[122]);}

/* k2925 in k2921 in k2952 in k2905 in k2899 in loop in k2890 in k2883 in canonical-path in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1321 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2822(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2822,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2826,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[2],a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a2830 in cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2831,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2837,a[2]=t2,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2855,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[118]+1)))(4,*((C_word*)lf[118]+1),t1,t3,t4);}

/* a2854 in a2830 in cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[3],a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a2866 in a2854 in a2830 in cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2867r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2867r(t0,t1,t2);}}

static void C_ccall f_2867r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2873,a[2]=t2,a[3]=((C_word)li42),tmp=(C_word)a,a+=4,tmp);
/* k385390 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2872 in a2866 in a2854 in a2830 in cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2873,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a2860 in a2854 in a2830 in cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2861,2,t0,t1);}
/* posixwin.scm: 1274 cw */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a2836 in a2830 in cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2837,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2843,a[2]=t2,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
/* k385390 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2842 in a2836 in a2830 in cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2843,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[2],lf[116]))){
t2=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[117]);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[117]);}}

/* k2824 in cwd in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g388389 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* current-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2755r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2755r(t0,t1,t2);}}

static void C_ccall f_2755r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2759,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_2759(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_2759(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k2757 in current-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2759,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1252 change-directory */
((C_proc3)C_retrieve_proc(*((C_word*)lf[98]+1)))(3,*((C_word*)lf[98]+1),((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2768,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1253 make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(256));}}

/* k2766 in k2757 in current-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2768,2,t0,t1);}
t2=(C_word)C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2771,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1255 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2769 in k2766 in k2757 in current-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* posixwin.scm: 1257 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4]);}
else{
/* posixwin.scm: 1258 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],lf[106],lf[109]);}}

/* directory? in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2728(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2728,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[107]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2735,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2749,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2753,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1245 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t6,t2);}

/* k2751 in directory? in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1245 ##sys#platform-fixup-pathname */
((C_proc3)C_retrieve_proc(*((C_word*)lf[108]+1)))(3,*((C_word*)lf[108]+1),((C_word*)t0)[2],t1);}

/* k2747 in directory? in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1244 ##sys#file-info */
t2=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2733 in directory? in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2735(C_word c,C_word t0,C_word t1){
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

/* directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2568(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_2568r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2568r(t0,t1,t2);}}

static void C_ccall f_2568r(C_word t0,C_word t1,C_word t2){
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
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2570,a[2]=((C_word*)t0)[2],a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2671,a[2]=t3,a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2676,a[2]=t4,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-spec272314 */
t6=t5;
f_2676(t6,t1);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-show-dotfiles?273312 */
t8=t4;
f_2671(t8,t1,t6);}
else{
t8=(C_word)C_i_car(t7);
t9=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t9))){
/* body270278 */
t10=t3;
f_2570(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[2],t9);}}}}

/* def-spec272 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2676(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2676,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2684,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1215 current-directory */
((C_proc2)C_retrieve_proc(*((C_word*)lf[106]+1)))(2,*((C_word*)lf[106]+1),t2);}

/* k2682 in def-spec272 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?273312 */
t2=((C_word*)t0)[3];
f_2671(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?273 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2671,NULL,3,t0,t1,t2);}
/* body270278 */
t3=((C_word*)t0)[2];
f_2570(t3,t1,t2,C_SCHEME_FALSE);}

/* body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2570(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2570,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[103]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2577,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1217 make-string */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_fix(256));}

/* k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1218 ##sys#make-pointer */
((C_proc2)C_retrieve_proc(*((C_word*)lf[105]+1)))(2,*((C_word*)lf[105]+1),t2);}

/* k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1219 ##sys#make-pointer */
((C_proc2)C_retrieve_proc(*((C_word*)lf[105]+1)))(2,*((C_word*)lf[105]+1),t2);}

/* k2581 in k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2670,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1220 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[4]);}

/* k2668 in k2581 in k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1220 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2585 in k2581 in k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2587,2,t0,t1);}
t2=(C_word)C_opendir(t1,((C_word*)t0)[7]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[7]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1223 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2604,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word)li32),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2604(t6,((C_word*)t0)[6]);}}

/* loop in k2585 in k2581 in k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2604(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2604,NULL,2,t0,t1);}
t2=(C_word)C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
t3=(C_word)C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2614,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1232 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k2612 in loop in k2585 in k2581 in k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2614,2,t0,t1);}
t2=(C_word)C_i_string_ref(t1,C_fix(0));
t3=(C_word)C_i_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?(C_word)C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2626,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t2,C_make_character(46));
if(C_truep(t6)){
t7=(C_word)C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_2626(t8,t7);}
else{
t8=(C_word)C_eqp(t4,C_make_character(46));
if(C_truep(t8)){
t9=(C_word)C_eqp(((C_word*)t0)[5],C_fix(2));
t10=t5;
f_2626(t10,(C_truep(t9)?t9:(C_word)C_i_not(((C_word*)t0)[2])));}
else{
t9=t5;
f_2626(t9,(C_word)C_i_not(((C_word*)t0)[2]));}}}
else{
t7=t5;
f_2626(t7,C_SCHEME_FALSE);}}

/* k2624 in k2612 in loop in k2585 in k2581 in k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2626(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2626,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1239 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2604(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1240 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2604(t3,t2);}}

/* k2634 in k2624 in k2612 in loop in k2585 in k2581 in k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2636,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2594 in k2585 in k2581 in k2578 in k2575 in body270 in directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1224 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[103],lf[104],((C_word*)t0)[2]);}

/* delete-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2541(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2541,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[100]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2562,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2566,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1207 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2564 in delete-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1207 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2560 in delete-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2562,2,t0,t1);}
t2=(C_word)C_rmdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2554,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1208 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2552 in k2560 in delete-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1209 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[100],lf[101],((C_word*)t0)[2]);}

/* change-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2514,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[98]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2535,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2539,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1200 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2537 in change-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1200 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2533 in change-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2535,2,t0,t1);}
t2=(C_word)C_chdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1201 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2525 in k2533 in change-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1202 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[98],lf[99],((C_word*)t0)[2]);}

/* create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2357r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2357r(t0,t1,t2,t3);}}

static void C_ccall f_2357r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2361,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2361(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2361(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
t2=(C_word)C_i_check_string_2(((C_word*)t0)[3],lf[92]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1192 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[3]);}

/* k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2367,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2375,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1181 string-split */
((C_proc4)C_retrieve_proc(*((C_word*)lf[96]+1)))(4,*((C_word*)lf[96]+1),t4,t3,lf[97]);}
else{
t2=((C_word*)t0)[2];
t3=t1;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2490,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1164 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* k2488 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2490,2,t0,t1);}
t2=(C_word)C_mkdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1165 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2480 in k2488 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1166 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[92],lf[93],((C_word*)t0)[2]);}

/* k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=(C_word)C_i_car(t1);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_cdr(t1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2387,a[2]=t7,a[3]=t4,a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2387(t9,((C_word*)t0)[2],t5);}

/* loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2387(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2387,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2395,a[2]=((C_word*)t0)[3],a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2457,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g215216 */
t6=t3;
f_2395(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2455 in loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2387(t3,((C_word*)t0)[2],t2);}

/* g215 in loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2395(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2395,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2400,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1185 string-append */
t4=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)((C_word*)t0)[2])[1],lf[95],t2);}

/* k2398 in g215 in loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2400,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
t4=((C_word*)((C_word*)t0)[3])[1];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2429,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2413,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1170 file-exists? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[94]+1)))(3,*((C_word*)lf[94]+1),t6,t4);}

/* k2411 in k2398 in g215 in loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2413,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1171 ##sys#file-info */
t3=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2429(t2,C_SCHEME_FALSE);}}

/* k2414 in k2411 in k2398 in g215 in loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
f_2429(t3,(C_word)C_eqp(C_fix(1),t2));}
else{
t2=((C_word*)t0)[2];
f_2429(t2,C_SCHEME_FALSE);}}

/* k2427 in k2398 in g215 in loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2429(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2429,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1164 ##sys#make-c-string */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k2446 in k2427 in k2398 in g215 in loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2448,2,t0,t1);}
t2=(C_word)C_mkdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1165 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2438 in k2446 in k2427 in k2398 in g215 in loop208 in k2373 in k2365 in k2359 in create-directory in k2353 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1166 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[92],lf[93],((C_word*)t0)[2]);}

/* set-file-position! in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2295r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2295r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2295r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=(C_word)C_i_check_exact_2(t3,lf[84]);
t8=(C_word)C_i_check_exact_2(t6,lf[84]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2308,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_negativep(t3))){
/* posixwin.scm: 1134 ##sys#signal-hook */
t10=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t9,lf[89],lf[84],lf[90],t3,t2);}
else{
t10=t9;
f_2308(2,t10,C_SCHEME_UNDEFINED);}}

/* k2306 in set-file-position! in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2314,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2320,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1135 port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[88]+1)))(3,*((C_word*)lf[88]+1),t3,((C_word*)t0)[4]);}

/* k2318 in k2306 in set-file-position! in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t3=(C_word)C_eqp(t2,lf[86]);
if(C_truep(t3)){
t4=(C_word)C_fseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_2314(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_2314(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[5]))){
t2=(C_word)C_lseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2314(2,t3,t2);}
else{
/* posixwin.scm: 1141 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[46],lf[84],lf[87],((C_word*)t0)[5]);}}}

/* k2312 in k2306 in set-file-position! in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixwin.scm: 1142 posix-error */
t2=lf[5];
f_1883(7,t2,((C_word*)t0)[4],lf[37],lf[84],lf[85],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* f6517 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6517(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6517,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[83]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6523 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6523(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6523,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[82]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6529 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6529(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6529,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[81]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6535 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6535,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[80]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6541 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6541(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6541,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[79]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6547 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6547(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6547,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[78]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6553 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6553(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6553,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[77]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6559 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6559(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6559,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[76]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6565 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6565(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6565,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6571 in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f6571(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6571,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[73]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* symbolic-link? in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2241,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[71]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* regular-file? in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2218(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2218,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[69]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2225,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2239,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1104 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2237 in regular-file? in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1104 ##sys#file-info */
t2=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2223 in regular-file? in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
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

/* file-permissions in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2212(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2212,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2216,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1100 ##sys#stat */
f_2113(t3,t2);}

/* k2214 in file-permissions in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2206,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2210,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1099 ##sys#stat */
f_2113(t3,t2);}

/* k2208 in file-owner in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2200,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2204,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1098 ##sys#stat */
f_2113(t3,t2);}

/* k2202 in file-change-time in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2204,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2194,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2198,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1097 ##sys#stat */
f_2113(t3,t2);}

/* k2196 in file-access-time in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2198,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-modification-time in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2188,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2192,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1096 ##sys#stat */
f_2113(t3,t2);}

/* k2190 in file-modification-time in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2192,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* file-size in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2182,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2186,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1095 ##sys#stat */
f_2113(t3,t2);}

/* k2184 in file-size in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size));}

/* file-stat in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2151(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2151r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2151r(t0,t1,t2,t3);}}

static void C_ccall f_2151r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2155,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_2155(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_2155(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k2153 in file-stat in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1089 ##sys#stat */
f_2113(t2,((C_word*)t0)[2]);}

/* k2156 in k2153 in file-stat in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2158,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(0),C_fix(0),C_fix(0),C_fix(0)));}

/* ##sys#stat in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_fcall f_2113(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2113,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2117,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_2117(2,t4,(C_word)C_fstat(t2));}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2142,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1082 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}
else{
/* posixwin.scm: 1083 ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[46],lf[60],t2);}}}

/* k2144 in ##sys#stat in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1082 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2140 in ##sys#stat in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_stat(t1);
t3=((C_word*)t0)[2];
f_2117(2,t3,t2);}

/* k2115 in ##sys#stat in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2117,2,t0,t1);}
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1085 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2124 in k2115 in ##sys#stat in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1086 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],lf[59],((C_word*)t0)[2]);}

/* file-mkstemp in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2075(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2075,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[52]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1051 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2080 in file-mkstemp in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2082,2,t0,t1);}
t2=(C_word)C_mkstemp(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1053 string-length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}

/* k2083 in k2080 in file-mkstemp in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2085,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2088,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2105,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1055 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_2088(2,t4,C_SCHEME_UNDEFINED);}}

/* k2103 in k2083 in k2080 in file-mkstemp in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1056 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[52],lf[54],((C_word*)t0)[2]);}

/* k2086 in k2083 in k2080 in file-mkstemp in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1057 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k2093 in k2086 in k2083 in k2080 in file-mkstemp in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1057 values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2033r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2033r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2033r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=(C_word)C_i_check_exact_2(t2,lf[48]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2040,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(t3))){
if(C_truep((C_word)C_byteblockp(t3))){
t7=t6;
f_2040(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1038 ##sys#signal-hook */
t7=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[46],lf[48],lf[50],t3);}}
else{
/* posixwin.scm: 1038 ##sys#signal-hook */
t7=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[46],lf[48],lf[50],t3);}}

/* k2038 in file-write in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2040,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):(C_word)C_block_size(((C_word*)t0)[4]));
t4=(C_word)C_i_check_exact_2(t3,lf[48]);
t5=(C_word)C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2049,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2055,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1043 ##sys#update-errno */
t9=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* k2053 in k2038 in file-write in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1044 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[48],lf[49],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2047 in k2038 in file-write in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1988r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1988r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1988r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_i_check_exact_2(t2,lf[44]);
t6=(C_word)C_i_check_exact_2(t3,lf[44]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1998,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(t4))){
t8=t7;
f_1998(2,t8,(C_word)C_i_vector_ref(t4,C_fix(0)));}
else{
/* posixwin.scm: 1025 make-string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k1996 in file-read in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(t1))){
if(C_truep((C_word)C_byteblockp(t1))){
t3=t2;
f_2001(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1027 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[46],lf[44],lf[47],t1);}}
else{
/* posixwin.scm: 1027 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[46],lf[44],lf[47],t1);}}

/* k1999 in k1996 in file-read in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2001,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2004,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1030 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t2));}}

/* k2011 in k1999 in k1996 in file-read in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1031 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[44],lf[45],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2002 in k1999 in k1996 in file-read in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2004,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1970(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1970,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[41]);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1983,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1017 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1981 in file-close in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1018 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[41],lf[42],((C_word*)t0)[2]);}

/* file-open in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1929(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1929r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1929r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1929r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1946,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1962,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1007 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t11,t2);}

/* k1960 in file-open in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1007 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1944 in file-open in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1946,2,t0,t1);}
t2=(C_word)C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1949,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1955,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1009 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k1953 in k1944 in file-open in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1010 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[5],lf[37],lf[36],lf[38],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1947 in k1944 in file-open in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* posix-error in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_1883r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1883r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1883r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1887,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 938  ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k1885 in posix-error in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1898,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t1);
t6=(C_word)stub12(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k1896 in k1885 in posix-error in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 939  string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[7],t1);}

/* k1892 in k1885 in posix-error in k1869 in k1866 in k1863 in k1860 in k1857 in k1854 in k1851 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[6]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[462] = {
{"toplevel:posixwin_scm",(void*)C_posix_toplevel},
{"f_1853:posixwin_scm",(void*)f_1853},
{"f_1856:posixwin_scm",(void*)f_1856},
{"f_1859:posixwin_scm",(void*)f_1859},
{"f_1862:posixwin_scm",(void*)f_1862},
{"f_1865:posixwin_scm",(void*)f_1865},
{"f_1868:posixwin_scm",(void*)f_1868},
{"f_1871:posixwin_scm",(void*)f_1871},
{"f_5862:posixwin_scm",(void*)f_5862},
{"f_5878:posixwin_scm",(void*)f_5878},
{"f_5866:posixwin_scm",(void*)f_5866},
{"f_5869:posixwin_scm",(void*)f_5869},
{"f_2355:posixwin_scm",(void*)f_2355},
{"f_3524:posixwin_scm",(void*)f_3524},
{"f_5843:posixwin_scm",(void*)f_5843},
{"f_5840:posixwin_scm",(void*)f_5840},
{"f_5833:posixwin_scm",(void*)f_5833},
{"f_5827:posixwin_scm",(void*)f_5827},
{"f_5821:posixwin_scm",(void*)f_5821},
{"f_5815:posixwin_scm",(void*)f_5815},
{"f_5809:posixwin_scm",(void*)f_5809},
{"f_5803:posixwin_scm",(void*)f_5803},
{"f_5797:posixwin_scm",(void*)f_5797},
{"f_5791:posixwin_scm",(void*)f_5791},
{"f_5785:posixwin_scm",(void*)f_5785},
{"f_5779:posixwin_scm",(void*)f_5779},
{"f_5773:posixwin_scm",(void*)f_5773},
{"f_5767:posixwin_scm",(void*)f_5767},
{"f_5761:posixwin_scm",(void*)f_5761},
{"f_5755:posixwin_scm",(void*)f_5755},
{"f_5749:posixwin_scm",(void*)f_5749},
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
{"f_5361:posixwin_scm",(void*)f_5361},
{"f_5512:posixwin_scm",(void*)f_5512},
{"f_5518:posixwin_scm",(void*)f_5518},
{"f_5507:posixwin_scm",(void*)f_5507},
{"f_5502:posixwin_scm",(void*)f_5502},
{"f_5363:posixwin_scm",(void*)f_5363},
{"f_5489:posixwin_scm",(void*)f_5489},
{"f_5497:posixwin_scm",(void*)f_5497},
{"f_5370:posixwin_scm",(void*)f_5370},
{"f_5477:posixwin_scm",(void*)f_5477},
{"f_5380:posixwin_scm",(void*)f_5380},
{"f_5382:posixwin_scm",(void*)f_5382},
{"f_5401:posixwin_scm",(void*)f_5401},
{"f_5463:posixwin_scm",(void*)f_5463},
{"f_5470:posixwin_scm",(void*)f_5470},
{"f_5457:posixwin_scm",(void*)f_5457},
{"f_5416:posixwin_scm",(void*)f_5416},
{"f_5447:posixwin_scm",(void*)f_5447},
{"f_5433:posixwin_scm",(void*)f_5433},
{"f_5445:posixwin_scm",(void*)f_5445},
{"f_5441:posixwin_scm",(void*)f_5441},
{"f_5428:posixwin_scm",(void*)f_5428},
{"f_5426:posixwin_scm",(void*)f_5426},
{"f_5481:posixwin_scm",(void*)f_5481},
{"f_5346:posixwin_scm",(void*)f_5346},
{"f_5356:posixwin_scm",(void*)f_5356},
{"f_5315:posixwin_scm",(void*)f_5315},
{"f_5341:posixwin_scm",(void*)f_5341},
{"f_5326:posixwin_scm",(void*)f_5326},
{"f_5330:posixwin_scm",(void*)f_5330},
{"f_5334:posixwin_scm",(void*)f_5334},
{"f_5338:posixwin_scm",(void*)f_5338},
{"f_5303:posixwin_scm",(void*)f_5303},
{"f_5300:posixwin_scm",(void*)f_5300},
{"f_5240:posixwin_scm",(void*)f_5240},
{"f_5267:posixwin_scm",(void*)f_5267},
{"f_5277:posixwin_scm",(void*)f_5277},
{"f_5261:posixwin_scm",(void*)f_5261},
{"f_5228:posixwin_scm",(void*)f_5228},
{"f_5148:posixwin_scm",(void*)f_5148},
{"f_5165:posixwin_scm",(void*)f_5165},
{"f_5160:posixwin_scm",(void*)f_5160},
{"f_5155:posixwin_scm",(void*)f_5155},
{"f_5150:posixwin_scm",(void*)f_5150},
{"f_5068:posixwin_scm",(void*)f_5068},
{"f_5085:posixwin_scm",(void*)f_5085},
{"f_5080:posixwin_scm",(void*)f_5080},
{"f_5075:posixwin_scm",(void*)f_5075},
{"f_5070:posixwin_scm",(void*)f_5070},
{"f_5006:posixwin_scm",(void*)f_5006},
{"f_5062:posixwin_scm",(void*)f_5062},
{"f_5066:posixwin_scm",(void*)f_5066},
{"f_5027:posixwin_scm",(void*)f_5027},
{"f_5030:posixwin_scm",(void*)f_5030},
{"f_5041:posixwin_scm",(void*)f_5041},
{"f_5035:posixwin_scm",(void*)f_5035},
{"f_5008:posixwin_scm",(void*)f_5008},
{"f_5017:posixwin_scm",(void*)f_5017},
{"f_4887:posixwin_scm",(void*)f_4887},
{"f_4891:posixwin_scm",(void*)f_4891},
{"f_4982:posixwin_scm",(void*)f_4982},
{"f_4894:posixwin_scm",(void*)f_4894},
{"f_4950:posixwin_scm",(void*)f_4950},
{"f_4954:posixwin_scm",(void*)f_4954},
{"f_4958:posixwin_scm",(void*)f_4958},
{"f_4962:posixwin_scm",(void*)f_4962},
{"f_4966:posixwin_scm",(void*)f_4966},
{"f_4829:posixwin_scm",(void*)f_4829},
{"f_4833:posixwin_scm",(void*)f_4833},
{"f_4943:posixwin_scm",(void*)f_4943},
{"f_4923:posixwin_scm",(void*)f_4923},
{"f_4927:posixwin_scm",(void*)f_4927},
{"f_4931:posixwin_scm",(void*)f_4931},
{"f_4795:posixwin_scm",(void*)f_4795},
{"f_4812:posixwin_scm",(void*)f_4812},
{"f_4816:posixwin_scm",(void*)f_4816},
{"f_4789:posixwin_scm",(void*)f_4789},
{"f_4768:posixwin_scm",(void*)f_4768},
{"f_4772:posixwin_scm",(void*)f_4772},
{"f_4784:posixwin_scm",(void*)f_4784},
{"f_4765:posixwin_scm",(void*)f_4765},
{"f_4678:posixwin_scm",(void*)f_4678},
{"f_4702:posixwin_scm",(void*)f_4702},
{"f_4697:posixwin_scm",(void*)f_4697},
{"f_4692:posixwin_scm",(void*)f_4692},
{"f_4680:posixwin_scm",(void*)f_4680},
{"f_4684:posixwin_scm",(void*)f_4684},
{"f_4591:posixwin_scm",(void*)f_4591},
{"f_4615:posixwin_scm",(void*)f_4615},
{"f_4610:posixwin_scm",(void*)f_4610},
{"f_4605:posixwin_scm",(void*)f_4605},
{"f_4593:posixwin_scm",(void*)f_4593},
{"f_4597:posixwin_scm",(void*)f_4597},
{"f_4576:posixwin_scm",(void*)f_4576},
{"f_4580:posixwin_scm",(void*)f_4580},
{"f_4540:posixwin_scm",(void*)f_4540},
{"f_4547:posixwin_scm",(void*)f_4547},
{"f_4550:posixwin_scm",(void*)f_4550},
{"f_4567:posixwin_scm",(void*)f_4567},
{"f_4553:posixwin_scm",(void*)f_4553},
{"f_4556:posixwin_scm",(void*)f_4556},
{"f_4563:posixwin_scm",(void*)f_4563},
{"f_4490:posixwin_scm",(void*)f_4490},
{"f_4502:posixwin_scm",(void*)f_4502},
{"f_4521:posixwin_scm",(void*)f_4521},
{"f_4473:posixwin_scm",(void*)f_4473},
{"f_4456:posixwin_scm",(void*)f_4456},
{"f_4377:posixwin_scm",(void*)f_4377},
{"f_4420:posixwin_scm",(void*)f_4420},
{"f_4451:posixwin_scm",(void*)f_4451},
{"f_4448:posixwin_scm",(void*)f_4448},
{"f_4382:posixwin_scm",(void*)f_4382},
{"f_4386:posixwin_scm",(void*)f_4386},
{"f_4391:posixwin_scm",(void*)f_4391},
{"f_4415:posixwin_scm",(void*)f_4415},
{"f_4404:posixwin_scm",(void*)f_4404},
{"f_4260:posixwin_scm",(void*)f_4260},
{"f_4266:posixwin_scm",(void*)f_4266},
{"f_4287:posixwin_scm",(void*)f_4287},
{"f_4366:posixwin_scm",(void*)f_4366},
{"f_4291:posixwin_scm",(void*)f_4291},
{"f_4294:posixwin_scm",(void*)f_4294},
{"f_4301:posixwin_scm",(void*)f_4301},
{"f_4303:posixwin_scm",(void*)f_4303},
{"f_4320:posixwin_scm",(void*)f_4320},
{"f_4324:posixwin_scm",(void*)f_4324},
{"f_4332:posixwin_scm",(void*)f_4332},
{"f_4336:posixwin_scm",(void*)f_4336},
{"f_4281:posixwin_scm",(void*)f_4281},
{"f_4201:posixwin_scm",(void*)f_4201},
{"f_4205:posixwin_scm",(void*)f_4205},
{"f_4211:posixwin_scm",(void*)f_4211},
{"f_4220:posixwin_scm",(void*)f_4220},
{"f_4195:posixwin_scm",(void*)f_4195},
{"f_4199:posixwin_scm",(void*)f_4199},
{"f_4179:posixwin_scm",(void*)f_4179},
{"f_4167:posixwin_scm",(void*)f_4167},
{"f_4152:posixwin_scm",(void*)f_4152},
{"f_4156:posixwin_scm",(void*)f_4156},
{"f_4085:posixwin_scm",(void*)f_4085},
{"f_4089:posixwin_scm",(void*)f_4089},
{"f_4092:posixwin_scm",(void*)f_4092},
{"f_4114:posixwin_scm",(void*)f_4114},
{"f_4111:posixwin_scm",(void*)f_4111},
{"f_4101:posixwin_scm",(void*)f_4101},
{"f_4027:posixwin_scm",(void*)f_4027},
{"f_4031:posixwin_scm",(void*)f_4031},
{"f_4034:posixwin_scm",(void*)f_4034},
{"f_3983:posixwin_scm",(void*)f_3983},
{"f_3987:posixwin_scm",(void*)f_3987},
{"f_3949:posixwin_scm",(void*)f_3949},
{"f_3953:posixwin_scm",(void*)f_3953},
{"f_3930:posixwin_scm",(void*)f_3930},
{"f_3864:posixwin_scm",(void*)f_3864},
{"f_3870:posixwin_scm",(void*)f_3870},
{"f_3874:posixwin_scm",(void*)f_3874},
{"f_3882:posixwin_scm",(void*)f_3882},
{"f_3908:posixwin_scm",(void*)f_3908},
{"f_3912:posixwin_scm",(void*)f_3912},
{"f_3900:posixwin_scm",(void*)f_3900},
{"f_3844:posixwin_scm",(void*)f_3844},
{"f_3852:posixwin_scm",(void*)f_3852},
{"f_3827:posixwin_scm",(void*)f_3827},
{"f_3838:posixwin_scm",(void*)f_3838},
{"f_3842:posixwin_scm",(void*)f_3842},
{"f_3797:posixwin_scm",(void*)f_3797},
{"f_3804:posixwin_scm",(void*)f_3804},
{"f_3813:posixwin_scm",(void*)f_3813},
{"f_3807:posixwin_scm",(void*)f_3807},
{"f_3762:posixwin_scm",(void*)f_3762},
{"f_3766:posixwin_scm",(void*)f_3766},
{"f_3795:posixwin_scm",(void*)f_3795},
{"f_3781:posixwin_scm",(void*)f_3781},
{"f_3775:posixwin_scm",(void*)f_3775},
{"f_3748:posixwin_scm",(void*)f_3748},
{"f_3760:posixwin_scm",(void*)f_3760},
{"f_3734:posixwin_scm",(void*)f_3734},
{"f_3746:posixwin_scm",(void*)f_3746},
{"f_3716:posixwin_scm",(void*)f_3716},
{"f_3720:posixwin_scm",(void*)f_3720},
{"f_3732:posixwin_scm",(void*)f_3732},
{"f_3679:posixwin_scm",(void*)f_3679},
{"f_3687:posixwin_scm",(void*)f_3687},
{"f_3670:posixwin_scm",(void*)f_3670},
{"f_3664:posixwin_scm",(void*)f_3664},
{"f_3658:posixwin_scm",(void*)f_3658},
{"f_3634:posixwin_scm",(void*)f_3634},
{"f_3656:posixwin_scm",(void*)f_3656},
{"f_3652:posixwin_scm",(void*)f_3652},
{"f_3644:posixwin_scm",(void*)f_3644},
{"f_3604:posixwin_scm",(void*)f_3604},
{"f_3632:posixwin_scm",(void*)f_3632},
{"f_3628:posixwin_scm",(void*)f_3628},
{"f_3620:posixwin_scm",(void*)f_3620},
{"f_3548:posixwin_scm",(void*)f_3548},
{"f_3558:posixwin_scm",(void*)f_3558},
{"f_3535:posixwin_scm",(void*)f_3535},
{"f_3526:posixwin_scm",(void*)f_3526},
{"f_3450:posixwin_scm",(void*)f_3450},
{"f_3454:posixwin_scm",(void*)f_3454},
{"f_3466:posixwin_scm",(void*)f_3466},
{"f_3457:posixwin_scm",(void*)f_3457},
{"f_3430:posixwin_scm",(void*)f_3430},
{"f_3434:posixwin_scm",(void*)f_3434},
{"f_3440:posixwin_scm",(void*)f_3440},
{"f_3444:posixwin_scm",(void*)f_3444},
{"f_3410:posixwin_scm",(void*)f_3410},
{"f_3414:posixwin_scm",(void*)f_3414},
{"f_3420:posixwin_scm",(void*)f_3420},
{"f_3424:posixwin_scm",(void*)f_3424},
{"f_3386:posixwin_scm",(void*)f_3386},
{"f_3390:posixwin_scm",(void*)f_3390},
{"f_3401:posixwin_scm",(void*)f_3401},
{"f_3405:posixwin_scm",(void*)f_3405},
{"f_3395:posixwin_scm",(void*)f_3395},
{"f_3362:posixwin_scm",(void*)f_3362},
{"f_3366:posixwin_scm",(void*)f_3366},
{"f_3377:posixwin_scm",(void*)f_3377},
{"f_3381:posixwin_scm",(void*)f_3381},
{"f_3371:posixwin_scm",(void*)f_3371},
{"f_3343:posixwin_scm",(void*)f_3343},
{"f_3347:posixwin_scm",(void*)f_3347},
{"f_3350:posixwin_scm",(void*)f_3350},
{"f_3307:posixwin_scm",(void*)f_3307},
{"f_3338:posixwin_scm",(void*)f_3338},
{"f_3328:posixwin_scm",(void*)f_3328},
{"f_3321:posixwin_scm",(void*)f_3321},
{"f_3271:posixwin_scm",(void*)f_3271},
{"f_3302:posixwin_scm",(void*)f_3302},
{"f_3292:posixwin_scm",(void*)f_3292},
{"f_3285:posixwin_scm",(void*)f_3285},
{"f_3253:posixwin_scm",(void*)f_3253},
{"f_3257:posixwin_scm",(void*)f_3257},
{"f_3269:posixwin_scm",(void*)f_3269},
{"f_2878:posixwin_scm",(void*)f_2878},
{"f_3225:posixwin_scm",(void*)f_3225},
{"f_3024:posixwin_scm",(void*)f_3024},
{"f_3211:posixwin_scm",(void*)f_3211},
{"f_3200:posixwin_scm",(void*)f_3200},
{"f_3207:posixwin_scm",(void*)f_3207},
{"f_3054:posixwin_scm",(void*)f_3054},
{"f_3193:posixwin_scm",(void*)f_3193},
{"f_3172:posixwin_scm",(void*)f_3172},
{"f_3189:posixwin_scm",(void*)f_3189},
{"f_3178:posixwin_scm",(void*)f_3178},
{"f_3185:posixwin_scm",(void*)f_3185},
{"f_3096:posixwin_scm",(void*)f_3096},
{"f_3169:posixwin_scm",(void*)f_3169},
{"f_3148:posixwin_scm",(void*)f_3148},
{"f_3165:posixwin_scm",(void*)f_3165},
{"f_3154:posixwin_scm",(void*)f_3154},
{"f_3161:posixwin_scm",(void*)f_3161},
{"f_3102:posixwin_scm",(void*)f_3102},
{"f_3145:posixwin_scm",(void*)f_3145},
{"f_3141:posixwin_scm",(void*)f_3141},
{"f_3134:posixwin_scm",(void*)f_3134},
{"f_3130:posixwin_scm",(void*)f_3130},
{"f_3109:posixwin_scm",(void*)f_3109},
{"f_3113:posixwin_scm",(void*)f_3113},
{"f_3090:posixwin_scm",(void*)f_3090},
{"f_3077:posixwin_scm",(void*)f_3077},
{"f_3061:posixwin_scm",(void*)f_3061},
{"f_3065:posixwin_scm",(void*)f_3065},
{"f_3069:posixwin_scm",(void*)f_3069},
{"f_3048:posixwin_scm",(void*)f_3048},
{"f_3035:posixwin_scm",(void*)f_3035},
{"f_3031:posixwin_scm",(void*)f_3031},
{"f_3018:posixwin_scm",(void*)f_3018},
{"f_2885:posixwin_scm",(void*)f_2885},
{"f_3004:posixwin_scm",(void*)f_3004},
{"f_2892:posixwin_scm",(void*)f_2892},
{"f_2894:posixwin_scm",(void*)f_2894},
{"f_2901:posixwin_scm",(void*)f_2901},
{"f_2976:posixwin_scm",(void*)f_2976},
{"f_2985:posixwin_scm",(void*)f_2985},
{"f_2907:posixwin_scm",(void*)f_2907},
{"f_2954:posixwin_scm",(void*)f_2954},
{"f_2942:posixwin_scm",(void*)f_2942},
{"f_2950:posixwin_scm",(void*)f_2950},
{"f_2946:posixwin_scm",(void*)f_2946},
{"f_2923:posixwin_scm",(void*)f_2923},
{"f_2931:posixwin_scm",(void*)f_2931},
{"f_2927:posixwin_scm",(void*)f_2927},
{"f_2822:posixwin_scm",(void*)f_2822},
{"f_2831:posixwin_scm",(void*)f_2831},
{"f_2855:posixwin_scm",(void*)f_2855},
{"f_2867:posixwin_scm",(void*)f_2867},
{"f_2873:posixwin_scm",(void*)f_2873},
{"f_2861:posixwin_scm",(void*)f_2861},
{"f_2837:posixwin_scm",(void*)f_2837},
{"f_2843:posixwin_scm",(void*)f_2843},
{"f_2826:posixwin_scm",(void*)f_2826},
{"f_2755:posixwin_scm",(void*)f_2755},
{"f_2759:posixwin_scm",(void*)f_2759},
{"f_2768:posixwin_scm",(void*)f_2768},
{"f_2771:posixwin_scm",(void*)f_2771},
{"f_2728:posixwin_scm",(void*)f_2728},
{"f_2753:posixwin_scm",(void*)f_2753},
{"f_2749:posixwin_scm",(void*)f_2749},
{"f_2735:posixwin_scm",(void*)f_2735},
{"f_2568:posixwin_scm",(void*)f_2568},
{"f_2676:posixwin_scm",(void*)f_2676},
{"f_2684:posixwin_scm",(void*)f_2684},
{"f_2671:posixwin_scm",(void*)f_2671},
{"f_2570:posixwin_scm",(void*)f_2570},
{"f_2577:posixwin_scm",(void*)f_2577},
{"f_2580:posixwin_scm",(void*)f_2580},
{"f_2583:posixwin_scm",(void*)f_2583},
{"f_2670:posixwin_scm",(void*)f_2670},
{"f_2587:posixwin_scm",(void*)f_2587},
{"f_2604:posixwin_scm",(void*)f_2604},
{"f_2614:posixwin_scm",(void*)f_2614},
{"f_2626:posixwin_scm",(void*)f_2626},
{"f_2636:posixwin_scm",(void*)f_2636},
{"f_2596:posixwin_scm",(void*)f_2596},
{"f_2541:posixwin_scm",(void*)f_2541},
{"f_2566:posixwin_scm",(void*)f_2566},
{"f_2562:posixwin_scm",(void*)f_2562},
{"f_2554:posixwin_scm",(void*)f_2554},
{"f_2514:posixwin_scm",(void*)f_2514},
{"f_2539:posixwin_scm",(void*)f_2539},
{"f_2535:posixwin_scm",(void*)f_2535},
{"f_2527:posixwin_scm",(void*)f_2527},
{"f_2357:posixwin_scm",(void*)f_2357},
{"f_2361:posixwin_scm",(void*)f_2361},
{"f_2367:posixwin_scm",(void*)f_2367},
{"f_2490:posixwin_scm",(void*)f_2490},
{"f_2482:posixwin_scm",(void*)f_2482},
{"f_2375:posixwin_scm",(void*)f_2375},
{"f_2387:posixwin_scm",(void*)f_2387},
{"f_2457:posixwin_scm",(void*)f_2457},
{"f_2395:posixwin_scm",(void*)f_2395},
{"f_2400:posixwin_scm",(void*)f_2400},
{"f_2413:posixwin_scm",(void*)f_2413},
{"f_2416:posixwin_scm",(void*)f_2416},
{"f_2429:posixwin_scm",(void*)f_2429},
{"f_2448:posixwin_scm",(void*)f_2448},
{"f_2440:posixwin_scm",(void*)f_2440},
{"f_2295:posixwin_scm",(void*)f_2295},
{"f_2308:posixwin_scm",(void*)f_2308},
{"f_2320:posixwin_scm",(void*)f_2320},
{"f_2314:posixwin_scm",(void*)f_2314},
{"f6517:posixwin_scm",(void*)f6517},
{"f6523:posixwin_scm",(void*)f6523},
{"f6529:posixwin_scm",(void*)f6529},
{"f6535:posixwin_scm",(void*)f6535},
{"f6541:posixwin_scm",(void*)f6541},
{"f6547:posixwin_scm",(void*)f6547},
{"f6553:posixwin_scm",(void*)f6553},
{"f6559:posixwin_scm",(void*)f6559},
{"f6565:posixwin_scm",(void*)f6565},
{"f6571:posixwin_scm",(void*)f6571},
{"f_2241:posixwin_scm",(void*)f_2241},
{"f_2218:posixwin_scm",(void*)f_2218},
{"f_2239:posixwin_scm",(void*)f_2239},
{"f_2225:posixwin_scm",(void*)f_2225},
{"f_2212:posixwin_scm",(void*)f_2212},
{"f_2216:posixwin_scm",(void*)f_2216},
{"f_2206:posixwin_scm",(void*)f_2206},
{"f_2210:posixwin_scm",(void*)f_2210},
{"f_2200:posixwin_scm",(void*)f_2200},
{"f_2204:posixwin_scm",(void*)f_2204},
{"f_2194:posixwin_scm",(void*)f_2194},
{"f_2198:posixwin_scm",(void*)f_2198},
{"f_2188:posixwin_scm",(void*)f_2188},
{"f_2192:posixwin_scm",(void*)f_2192},
{"f_2182:posixwin_scm",(void*)f_2182},
{"f_2186:posixwin_scm",(void*)f_2186},
{"f_2151:posixwin_scm",(void*)f_2151},
{"f_2155:posixwin_scm",(void*)f_2155},
{"f_2158:posixwin_scm",(void*)f_2158},
{"f_2113:posixwin_scm",(void*)f_2113},
{"f_2146:posixwin_scm",(void*)f_2146},
{"f_2142:posixwin_scm",(void*)f_2142},
{"f_2117:posixwin_scm",(void*)f_2117},
{"f_2126:posixwin_scm",(void*)f_2126},
{"f_2075:posixwin_scm",(void*)f_2075},
{"f_2082:posixwin_scm",(void*)f_2082},
{"f_2085:posixwin_scm",(void*)f_2085},
{"f_2105:posixwin_scm",(void*)f_2105},
{"f_2088:posixwin_scm",(void*)f_2088},
{"f_2095:posixwin_scm",(void*)f_2095},
{"f_2033:posixwin_scm",(void*)f_2033},
{"f_2040:posixwin_scm",(void*)f_2040},
{"f_2055:posixwin_scm",(void*)f_2055},
{"f_2049:posixwin_scm",(void*)f_2049},
{"f_1988:posixwin_scm",(void*)f_1988},
{"f_1998:posixwin_scm",(void*)f_1998},
{"f_2001:posixwin_scm",(void*)f_2001},
{"f_2013:posixwin_scm",(void*)f_2013},
{"f_2004:posixwin_scm",(void*)f_2004},
{"f_1970:posixwin_scm",(void*)f_1970},
{"f_1983:posixwin_scm",(void*)f_1983},
{"f_1929:posixwin_scm",(void*)f_1929},
{"f_1962:posixwin_scm",(void*)f_1962},
{"f_1946:posixwin_scm",(void*)f_1946},
{"f_1955:posixwin_scm",(void*)f_1955},
{"f_1949:posixwin_scm",(void*)f_1949},
{"f_1883:posixwin_scm",(void*)f_1883},
{"f_1887:posixwin_scm",(void*)f_1887},
{"f_1898:posixwin_scm",(void*)f_1898},
{"f_1894:posixwin_scm",(void*)f_1894},
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
