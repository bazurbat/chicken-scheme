/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 11:31
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
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
#include <utime.h>

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
#define C_test_access(fn, m)	    C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
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

static int set_file_mtime(char *filename, C_word tm)
{
  struct _utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return _utime(filename, &tb);
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

static C_TLS C_word lf[397];
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
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,49,51,52,41,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,49,51,55,41,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,111,119,110,101,114,32,102,49,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,32,102,49,52,51,41,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,24),40,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,110,97,109,101,49,52,54,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,25),40,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,110,97,109,101,49,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,20),40,102,54,54,49,54,32,102,110,97,109,101,49,53,54,54,54,49,53,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,20),40,102,54,54,49,48,32,102,110,97,109,101,49,53,54,54,54,48,57,41,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,20),40,102,54,54,48,52,32,102,110,97,109,101,49,53,54,54,54,48,51,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,20),40,102,54,53,57,56,32,102,110,97,109,101,49,53,54,54,53,57,55,41,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,49,54,49,32,112,111,115,49,54,50,32,46,32,119,104,101,110,99,101,49,54,51,41,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,11),40,103,50,50,52,32,120,50,50,54,41,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,49,55,32,103,50,50,49,50,50,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,48,49,32,46,32,116,109,112,50,48,48,50,48,50,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,53,53,41,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,26),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,50,54,50,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,35),40,98,111,100,121,50,56,52,32,115,112,101,99,50,57,51,32,115,104,111,119,45,100,111,116,102,105,108,101,115,63,50,57,52,41,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,35),40,100,101,102,45,115,104,111,119,45,100,111,116,102,105,108,101,115,63,50,56,55,32,37,115,112,101,99,50,56,50,51,50,55,41,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,115,112,101,99,50,56,54,41,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,50,55,55,50,55,56,41,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,21),40,100,105,114,101,99,116,111,114,121,63,32,102,110,97,109,101,51,51,52,41,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,51,52,53,51,52,54,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,7),40,97,50,56,51,50,41,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,19),40,97,50,56,50,54,32,101,120,118,97,114,51,57,50,52,48,53,41,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,7),40,97,50,56,53,48,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,7),40,97,50,56,54,50,41,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,20),40,97,50,56,53,54,32,46,32,97,114,103,115,52,48,48,52,49,54,41,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,7),40,97,50,56,52,52,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,15),40,97,50,56,50,48,32,107,51,57,57,52,48,52,41,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,5),40,99,119,100,41,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,52,51,56,32,114,52,51,57,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,45,112,97,116,104,32,112,97,116,104,52,49,55,41};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,26),40,99,104,101,99,107,32,99,109,100,52,52,55,32,105,110,112,52,52,56,32,114,52,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,52,53,51,32,46,32,109,52,53,52,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,52,54,50,32,46,32,109,52,54,51,41};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,52,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,51,51,54,48,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,20),40,97,51,51,54,54,32,46,32,114,101,115,117,108,116,115,52,57,49,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,52,56,55,32,112,114,111,99,52,56,56,32,46,32,109,111,100,101,52,56,57,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,7),40,97,51,51,56,52,41,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,20),40,97,51,51,57,48,32,46,32,114,101,115,117,108,116,115,52,57,55,41,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,52,57,51,32,112,114,111,99,52,57,52,32,46,32,109,111,100,101,52,57,53,41};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,20),40,97,51,52,48,57,32,46,32,114,101,115,117,108,116,115,53,48,52,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,52,57,57,32,116,104,117,110,107,53,48,48,32,46,32,109,111,100,101,53,48,49,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,20),40,97,51,52,50,57,32,46,32,114,101,115,117,108,116,115,53,49,51,41,0,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,47),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,53,48,56,32,116,104,117,110,107,53,48,57,32,46,32,109,111,100,101,53,49,48,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,112,105,112,101,32,46,32,116,109,112,53,50,53,53,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,104,97,110,100,108,101,114,32,115,105,103,53,51,56,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,53,52,48,32,112,114,111,99,53,52,49,41,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,53,52,54,32,115,116,97,116,101,53,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,32),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,53,53,50,32,109,53,53,51,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,53,54,48,32,97,99,99,53,54,49,32,108,111,99,53,54,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,54,56,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,54,57,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,34),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,53,55,48,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,18),40,109,111,100,101,32,105,110,112,53,55,54,32,109,53,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,25),40,99,104,101,99,107,32,102,100,53,57,48,32,105,110,112,53,57,49,32,114,53,57,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,53,57,54,32,46,32,109,53,57,55,41,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,53,57,57,32,46,32,109,54,48,48,41};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,22),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,54,48,53,41,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,34),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,54,49,50,32,46,32,110,101,119,54,49,51,41,0,0,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,22),40,115,101,116,101,110,118,32,118,97,114,54,50,50,32,118,97,108,54,50,51,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,17),40,117,110,115,101,116,101,110,118,32,118,97,114,54,50,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,11),40,115,99,97,110,32,106,54,52,50,41,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,54,51,57,41,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,32),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,54,52,54,32,116,109,54,52,55,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,54,53,55,54,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,54,55,49,54,55,50,41,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,29),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,54,57,48,54,57,49,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,32),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,55,49,56,32,46,32,116,109,112,55,49,55,55,49,57,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,27),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,55,51,52,41,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,17),40,95,101,120,105,116,32,46,32,99,111,100,101,55,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,55,52,55,41};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,55,52,57,32,109,111,100,101,55,53,48,32,46,32,115,105,122,101,55,53,49,41,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,7),40,97,52,50,55,48,41,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,11),40,103,56,48,53,32,109,56,48,55,41,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,102,110,115,55,57,54,41,0,0,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,46),40,97,52,50,55,54,32,100,105,114,55,55,53,55,55,54,55,56,49,32,102,105,108,55,55,55,55,55,56,55,56,50,32,101,120,116,55,55,57,55,56,48,55,56,51,41,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,20),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,55,55,49,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,17),40,103,108,111,98,32,46,32,112,97,116,104,115,55,54,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,50,53,41,0,0,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,21),40,110,101,101,100,115,45,113,117,111,116,105,110,103,63,32,115,56,50,50,41,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,105,108,115,116,56,51,52,32,111,108,115,116,56,51,53,41,0,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,35),40,36,113,117,111,116,101,45,97,114,103,115,45,108,105,115,116,32,108,115,116,56,49,57,32,101,120,97,99,116,102,56,50,48,41,0,0,0,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,32),40,115,101,116,97,114,103,32,97,56,52,52,56,52,56,32,97,56,52,51,56,52,57,32,97,56,52,50,56,53,48,41};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,32),40,115,101,116,101,110,118,32,97,56,53,52,56,53,56,32,97,56,53,51,56,53,57,32,97,56,53,50,56,54,48,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,21),40,100,111,108,111,111,112,56,54,54,32,108,56,55,48,32,105,56,55,49,41,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,57),40,98,117,105,108,100,45,101,120,101,99,45,97,114,103,118,101,99,32,108,111,99,56,54,50,32,108,115,116,56,54,51,32,97,114,103,118,101,99,45,115,101,116,116,101,114,56,54,52,32,105,100,120,56,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,62),40,36,101,120,101,99,45,115,101,116,117,112,32,108,111,99,56,55,55,32,102,105,108,101,110,97,109,101,56,55,56,32,97,114,103,108,115,116,56,55,57,32,101,110,118,108,115,116,56,56,48,32,101,120,97,99,116,102,56,56,49,41,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,49),40,36,101,120,101,99,45,116,101,97,114,100,111,119,110,32,108,111,99,56,57,49,32,109,115,103,56,57,50,32,102,105,108,101,110,97,109,101,56,57,51,32,114,101,115,56,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,39),40,98,111,100,121,57,49,51,32,97,114,103,108,115,116,57,50,51,32,101,110,118,108,115,116,57,50,52,32,101,120,97,99,116,102,57,50,53,41,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,57,49,55,32,37,97,114,103,108,115,116,57,49,48,57,50,56,32,37,101,110,118,108,115,116,57,49,49,57,50,57,41,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,101,110,118,108,115,116,57,49,54,32,37,97,114,103,108,115,116,57,49,48,57,51,49,41,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,97,114,103,108,115,116,57,49,53,41,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,41),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,57,48,53,32,46,32,116,109,112,57,48,52,57,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,39),40,98,111,100,121,57,53,53,32,97,114,103,108,115,116,57,54,53,32,101,110,118,108,115,116,57,54,54,32,101,120,97,99,116,102,57,54,55,41,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,57,53,57,32,37,97,114,103,108,115,116,57,53,50,57,55,48,32,37,101,110,118,108,115,116,57,53,51,57,55,49,41,0,0,0,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,29),40,100,101,102,45,101,110,118,108,115,116,57,53,56,32,37,97,114,103,108,115,116,57,53,50,57,55,51,41,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,15),40,100,101,102,45,97,114,103,108,115,116,57,53,55,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,47),40,112,114,111,99,101,115,115,45,115,112,97,119,110,32,109,111,100,101,57,52,54,32,102,105,108,101,110,97,109,101,57,52,55,32,46,32,116,109,112,57,52,53,57,52,56,41,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,57,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,114,117,110,32,102,57,57,52,32,46,32,97,114,103,115,57,57,53,41,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,97),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,49,48,51,54,32,99,109,100,49,48,51,55,32,97,114,103,115,49,48,51,56,32,101,110,118,49,48,51,57,32,115,116,100,111,117,116,102,49,48,52,48,32,115,116,100,105,110,102,49,48,52,49,32,115,116,100,101,114,114,102,49,48,52,50,32,46,32,116,109,112,49,48,51,53,49,48,52,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,21),40,97,53,48,48,54,32,103,49,49,49,52,49,49,49,53,49,49,49,54,41,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,49,49,48,51,41,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,7),40,97,53,48,50,52,41,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,38),40,97,53,48,51,48,32,105,110,49,49,50,54,32,111,117,116,49,49,50,55,32,112,105,100,49,49,50,56,32,101,114,114,49,49,50,57,41,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,63),40,37,112,114,111,99,101,115,115,32,108,111,99,49,48,57,54,32,101,114,114,63,49,48,57,55,32,99,109,100,49,48,57,56,32,97,114,103,115,49,48,57,57,32,101,110,118,49,49,48,48,32,101,120,97,99,116,102,49,49,48,49,41,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,49,52,55,32,97,114,103,115,49,49,53,55,32,101,110,118,49,49,53,56,32,101,120,97,99,116,102,49,49,53,57,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,49,49,53,49,32,37,97,114,103,115,49,49,52,52,49,49,54,49,32,37,101,110,118,49,49,52,53,49,49,54,50,41,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,49,49,53,48,32,37,97,114,103,115,49,49,52,52,49,49,54,52,41,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,49,49,52,57,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,49,49,51,57,32,46,32,116,109,112,49,49,51,56,49,49,52,48,41,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,49,56,54,32,97,114,103,115,49,49,57,54,32,101,110,118,49,49,57,55,32,101,120,97,99,116,102,49,49,57,56,41,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,101,120,97,99,116,102,49,49,57,48,32,37,97,114,103,115,49,49,56,51,49,50,48,48,32,37,101,110,118,49,49,56,52,49,50,48,49,41,0,0,0,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,49,49,56,57,32,37,97,114,103,115,49,49,56,51,49,50,48,51,41,0,0,0,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,49,49,56,56,41,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,49,49,55,56,32,46,32,116,109,112,49,49,55,55,49,49,55,57,41};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,50,49,51,32,110,111,104,97,110,103,49,50,49,52,41,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,7),40,97,53,50,53,48,41,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,36),40,97,53,50,53,54,32,101,112,105,100,49,50,50,56,32,101,110,111,114,109,49,50,50,57,32,101,99,111,100,101,49,50,51,48,41,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,33),40,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,50,49,53,32,46,32,97,114,103,115,49,50,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,13),40,115,108,101,101,112,32,116,49,50,51,51,41,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,14),40,102,95,53,52,57,52,32,120,49,50,56,50,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,7),40,97,53,52,49,55,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,7),40,97,53,52,50,50,41,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,7),40,97,53,52,52,54,41,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,102,115,49,50,56,52,32,114,49,50,56,53,41,0,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,16),40,102,95,53,53,49,51,32,46,32,95,49,50,55,53,41};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,16),40,102,95,53,53,48,53,32,46,32,95,49,50,55,52,41};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,49,50,53,50,32,97,99,116,105,111,110,49,50,54,50,32,105,100,49,50,54,51,32,108,105,109,105,116,49,50,54,52,41,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,108,105,109,105,116,49,50,53,54,32,37,97,99,116,105,111,110,49,50,52,57,49,51,49,53,32,37,105,100,49,50,53,48,49,51,49,54,41,0,0,0,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,28),40,100,101,102,45,105,100,49,50,53,53,32,37,97,99,116,105,111,110,49,50,52,57,49,51,49,56,41,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,19),40,97,53,53,51,51,32,120,49,51,50,48,32,121,49,51,50,49,41,0,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,97,99,116,105,111,110,49,50,53,52,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,51),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,49,50,52,51,32,112,114,101,100,49,50,52,52,32,46,32,97,99,116,105,111,110,45,105,100,45,108,105,109,105,116,49,50,52,53,41,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,31),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,46,32,95,49,51,54,50,49,51,54,54,41,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,25),40,99,114,101,97,116,101,45,102,105,102,111,32,46,32,95,49,51,54,57,49,51,55,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,28),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,32,46,32,95,49,51,55,53,49,51,55,57,41,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,51,56,49,49,51,56,53,41,0,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,40),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,103,114,111,117,112,45,105,100,32,46,32,95,49,51,56,55,49,51,57,49,41};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,39),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,105,100,32,46,32,95,49,51,57,51,49,51,57,55,41,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,41),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,32,46,32,95,49,51,57,57,49,52,48,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,30),40,99,117,114,114,101,110,116,45,103,114,111,117,112,45,105,100,32,46,32,95,49,52,48,53,49,52,48,57,41,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,117,115,101,114,45,105,100,32,46,32,95,49,52,49,49,49,52,49,53,41,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,32),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,46,32,95,49,52,49,55,49,52,50,49,41};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,105,110,107,32,46,32,95,49,52,50,51,49,52,50,55,41,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,108,111,99,107,32,46,32,95,49,52,50,57,49,52,51,51,41,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,46,32,95,49,52,51,53,49,52,51,57,41};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,115,101,108,101,99,116,32,46,32,95,49,52,52,49,49,52,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,28),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,46,32,95,49,52,52,55,49,52,53,49,41,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,46,32,95,49,52,53,51,49,52,53,55,41,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,25),40,102,105,108,101,45,117,110,108,111,99,107,32,46,32,95,49,52,53,57,49,52,54,51,41,0,0,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,24),40,103,101,116,45,103,114,111,117,112,115,32,46,32,95,49,52,54,53,49,52,54,57,41};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,31),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,52,55,49,49,52,55,53,41,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,31),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,46,32,95,49,52,55,55,49,52,56,49,41,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,40),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,46,32,95,49,52,56,51,49,52,56,55,41};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,31),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,32,46,32,95,49,52,56,57,49,52,57,51,41,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,95,49,52,57,53,49,52,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,32,46,32,95,49,53,48,49,49,53,48,53,41,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,28),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,46,32,95,49,53,48,55,49,53,49,49,41,0,0,0,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,32),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,46,32,95,49,53,49,51,49,53,49,55,41};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,24),40,115,101,116,45,97,108,97,114,109,33,32,46,32,95,49,53,49,57,49,53,50,51,41};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,27),40,115,101,116,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,53,50,53,49,53,50,57,41,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,25),40,115,101,116,45,103,114,111,117,112,115,33,32,46,32,95,49,53,51,49,49,53,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,35),40,115,101,116,45,112,114,111,99,101,115,115,45,103,114,111,117,112,45,105,100,33,32,46,32,95,49,53,51,55,49,53,52,49,41,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,33),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,46,32,95,49,53,52,51,49,53,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,30),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,53,52,57,49,53,53,51,41,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,117,115,101,114,45,105,100,33,32,46,32,95,49,53,53,53,49,53,53,57,41,0,0,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,25),40,115,105,103,110,97,108,45,109,97,115,107,32,46,32,95,49,53,54,49,49,53,54,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,26),40,115,105,103,110,97,108,45,109,97,115,107,33,32,46,32,95,49,53,54,55,49,53,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,46,32,95,49,53,55,51,49,53,55,55,41,0,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,28),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,46,32,95,49,53,55,57,49,53,56,51,41,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,46,32,95,49,53,56,53,49,53,56,57,41,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,27),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,46,32,95,49,53,57,49,49,53,57,53,41,0,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,36),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,46,32,95,49,53,57,55,49,54,48,49,41,0,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,30),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,46,32,95,49,54,48,51,49,54,48,55,41,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,31),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,46,32,95,49,54,48,57,49,54,49,51,41,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,26),40,115,116,114,105,110,103,45,62,116,105,109,101,32,46,32,95,49,54,49,53,49,54,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,13),40,102,105,102,111,63,32,95,49,54,50,49,41,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,95,49,54,50,51,41,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,15),40,97,53,56,55,55,32,112,111,114,116,49,56,48,41,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,12),40,97,53,57,49,52,32,102,49,49,52,41,0,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,17),40,97,53,57,50,48,32,102,49,49,54,32,116,49,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k4845 */
static C_word C_fcall stub1006(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7) C_regparm;
C_regparm static C_word C_fcall stub1006(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6,C_word C_a7){
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

/* from current-process-id in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static C_word C_fcall stub981(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub981(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from k4474 */
static C_word C_fcall stub855(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub855(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from k4457 */
static C_word C_fcall stub845(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub845(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k4166 */
static C_word C_fcall stub742(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub742(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub737(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub737(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char *z = (_daylight ? _tzname[1] : _tzname[0]);
return(z);
C_ret:
#undef return

return C_r;}

/* from strftime */
static C_word C_fcall stub707(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub707(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from asctime */
static C_word C_fcall stub701(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub701(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k4014 */
static C_word C_fcall stub681(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub681(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k3851 */
static C_word C_fcall stub634(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub634(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k5932 in k5955 in a5920 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static C_word C_fcall stub123(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub123(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k1901 */
static C_word C_fcall stub12(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub12(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1892)
static void C_ccall f_1892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5921)
static void C_ccall f_5921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5957)
static void C_ccall f_5957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5934)
static void C_ccall f_5934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5944)
static void C_fcall f_5944(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5915)
static void C_ccall f_5915(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5919)
static void C_ccall f_5919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2211)
static void C_ccall f_2211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5849)
static void C_ccall f_5849(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5819)
static void C_ccall f_5819(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5813)
static void C_ccall f_5813(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5807)
static void C_ccall f_5807(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5801)
static void C_ccall f_5801(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5795)
static void C_ccall f_5795(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5777)
static void C_ccall f_5777(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5765)
static void C_ccall f_5765(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5759)
static void C_ccall f_5759(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5747)
static void C_ccall f_5747(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5735)
static void C_ccall f_5735(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5729)
static void C_ccall f_5729(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5723)
static void C_ccall f_5723(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5717)
static void C_ccall f_5717(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5705)
static void C_ccall f_5705(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5699)
static void C_ccall f_5699(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5687)
static void C_ccall f_5687(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5681)
static void C_ccall f_5681(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5663)
static void C_ccall f_5663(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5633)
static void C_ccall f_5633(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5627)
static void C_ccall f_5627(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5615)
static void C_ccall f_5615(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5609)
static void C_ccall f_5609(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5603)
static void C_ccall f_5603(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5351)
static void C_ccall f_5351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5351)
static void C_ccall f_5351r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5528)
static void C_fcall f_5528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5534)
static void C_ccall f_5534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5523)
static void C_fcall f_5523(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5518)
static void C_fcall f_5518(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5353)
static void C_fcall f_5353(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5505)
static void C_ccall f_5505(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5513)
static void C_ccall f_5513(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5360)
static void C_fcall f_5360(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5493)
static void C_ccall f_5493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5487)
static void C_ccall f_5487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5372)
static void C_fcall f_5372(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5480)
static void C_ccall f_5480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5457)
static void C_ccall f_5457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5447)
static void C_ccall f_5447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5423)
static void C_ccall f_5423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5431)
static void C_ccall f_5431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5438)
static void C_ccall f_5438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5435)
static void C_ccall f_5435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_ccall f_5418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5336)
static void C_ccall f_5336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5346)
static void C_ccall f_5346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5305)
static void C_ccall f_5305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5331)
static void C_ccall f_5331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5316)
static void C_ccall f_5316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_ccall f_5320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_ccall f_5324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5328)
static void C_ccall f_5328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5290)
static void C_ccall f_5290(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5155)
static void C_fcall f_5155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5150)
static void C_fcall f_5150(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5145)
static void C_fcall f_5145(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5140)
static void C_fcall f_5140(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
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
C_noret_decl(f_4996)
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5056)
static void C_ccall f_5056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5017)
static void C_ccall f_5017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5020)
static void C_ccall f_5020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5031)
static void C_ccall f_5031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5025)
static void C_ccall f_5025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4998)
static void C_fcall f_4998(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5007)
static void C_ccall f_5007(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...) C_noret;
C_noret_decl(f_4877)
static void C_ccall f_4877r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t10) C_noret;
C_noret_decl(f_4881)
static void C_ccall f_4881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4884)
static void C_ccall f_4884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4952)
static void C_ccall f_4952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4917)
static void C_ccall f_4917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4802)
static void C_ccall f_4802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4774)
static void C_ccall f_4774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4755)
static void C_ccall f_4755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4692)
static void C_fcall f_4692(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4687)
static void C_fcall f_4687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4682)
static void C_fcall f_4682(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4670)
static void C_fcall f_4670(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4674)
static void C_ccall f_4674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4600)
static void C_fcall f_4600(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4595)
static void C_fcall f_4595(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4583)
static void C_fcall f_4583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4566)
static void C_fcall f_4566(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4530)
static void C_fcall f_4530(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_4537)
static void C_ccall f_4537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4543)
static void C_ccall f_4543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_fcall f_4480(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4492)
static void C_fcall f_4492(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4511)
static void C_ccall f_4511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4367)
static void C_fcall f_4367(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4410)
static void C_fcall f_4410(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4441)
static void C_ccall f_4441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_fcall f_4372(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_fcall f_4381(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4394)
static void C_ccall f_4394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4250)
static void C_ccall f_4250r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4256)
static void C_fcall f_4256(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4281)
static void C_ccall f_4281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4284)
static void C_ccall f_4284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4293)
static void C_fcall f_4293(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4314)
static void C_fcall f_4314(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4271)
static void C_ccall f_4271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4195)
static void C_ccall f_4195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4210)
static void C_fcall f_4210(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4185)
static void C_ccall f_4185(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4189)
static void C_ccall f_4189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4075)
static void C_ccall f_4075r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4079)
static void C_ccall f_4079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4101)
static void C_ccall f_4101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_ccall f_4091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4021)
static void C_ccall f_4021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3977)
static void C_ccall f_3977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3920)
static void C_fcall f_3920(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3854)
static void C_ccall f_3854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3860)
static void C_fcall f_3860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3872)
static void C_fcall f_3872(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3902)
static void C_ccall f_3902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3890)
static void C_ccall f_3890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3817)
static void C_ccall f_3817(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3832)
static void C_ccall f_3832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3787)
static void C_ccall f_3787r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3794)
static void C_fcall f_3794(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3803)
static void C_ccall f_3803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3756)
static void C_ccall f_3756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3738)
static void C_ccall f_3738(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3738)
static void C_ccall f_3738r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3750)
static void C_ccall f_3750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_fcall f_3706(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3722)
static void C_ccall f_3722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3669)
static void C_fcall f_3669(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3660)
static void C_ccall f_3660(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3624)
static void C_fcall f_3624(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3634)
static void C_ccall f_3634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3594)
static void C_ccall f_3594(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3430)
static void C_ccall f_3430r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3391)
static void C_ccall f_3391r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3395)
static void C_ccall f_3395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3356)
static void C_ccall f_3356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3367)
static void C_ccall f_3367r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3371)
static void C_ccall f_3371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3361)
static void C_ccall f_3361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3282)
static void C_ccall f_3282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3243)
static void C_fcall f_3243(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3259)
static void C_ccall f_3259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3215)
static void C_ccall f_3215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_fcall f_3014(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3044)
static void C_fcall f_3044(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3086)
static void C_fcall f_3086(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3155)
static void C_ccall f_3155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3151)
static void C_ccall f_3151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3135)
static void C_ccall f_3135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3131)
static void C_ccall f_3131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3103)
static void C_ccall f_3103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3021)
static void C_ccall f_3021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3008)
static void C_ccall f_3008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2884)
static void C_fcall f_2884(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2891)
static void C_ccall f_2891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2812)
static void C_fcall f_2812(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2845)
static void C_ccall f_2845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2863)
static void C_ccall f_2863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2833)
static void C_ccall f_2833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_ccall f_2739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2558)
static void C_ccall f_2558r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2666)
static void C_fcall f_2666(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2661)
static void C_fcall f_2661(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2560)
static void C_fcall f_2560(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2660)
static void C_ccall f_2660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2594)
static void C_fcall f_2594(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_fcall f_2616(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2540)
static void C_ccall f_2540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2508)
static void C_ccall f_2508(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2531)
static void C_ccall f_2531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_fcall f_2381(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2389)
static void C_fcall f_2389(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2394)
static void C_ccall f_2394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2407)
static void C_ccall f_2407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_fcall f_2423(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2314)
static void C_ccall f_2314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f6598)
static void C_ccall f6598(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6604)
static void C_ccall f6604(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6610)
static void C_ccall f6610(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f6616)
static void C_ccall f6616(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2260)
static void C_ccall f_2260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2258)
static void C_ccall f_2258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_ccall f_2219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2134)
static void C_fcall f_2134(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2138)
static void C_ccall f_2138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2096)
static void C_ccall f_2096(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2103)
static void C_ccall f_2103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2054)
static void C_ccall f_2054r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2061)
static void C_ccall f_2061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2025)
static void C_ccall f_2025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_5944)
static void C_fcall trf_5944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5944(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5944(t0,t1);}

C_noret_decl(trf_5528)
static void C_fcall trf_5528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5528(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5528(t0,t1);}

C_noret_decl(trf_5523)
static void C_fcall trf_5523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5523(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5523(t0,t1,t2);}

C_noret_decl(trf_5518)
static void C_fcall trf_5518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5518(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5518(t0,t1,t2,t3);}

C_noret_decl(trf_5353)
static void C_fcall trf_5353(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5353(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5353(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5360)
static void C_fcall trf_5360(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5360(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5360(t0,t1);}

C_noret_decl(trf_5372)
static void C_fcall trf_5372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5372(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5372(t0,t1,t2,t3);}

C_noret_decl(trf_5155)
static void C_fcall trf_5155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5155(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5155(t0,t1);}

C_noret_decl(trf_5150)
static void C_fcall trf_5150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5150(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5150(t0,t1,t2);}

C_noret_decl(trf_5145)
static void C_fcall trf_5145(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5145(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5145(t0,t1,t2,t3);}

C_noret_decl(trf_5140)
static void C_fcall trf_5140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5140(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5140(t0,t1,t2,t3,t4);}

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

C_noret_decl(trf_4996)
static void C_fcall trf_4996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4996(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4996(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4998)
static void C_fcall trf_4998(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4998(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4998(t0,t1,t2);}

C_noret_decl(trf_4692)
static void C_fcall trf_4692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4692(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4692(t0,t1);}

C_noret_decl(trf_4687)
static void C_fcall trf_4687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4687(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4687(t0,t1,t2);}

C_noret_decl(trf_4682)
static void C_fcall trf_4682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4682(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4682(t0,t1,t2,t3);}

C_noret_decl(trf_4670)
static void C_fcall trf_4670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4670(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4670(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4605)
static void C_fcall trf_4605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4605(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4605(t0,t1);}

C_noret_decl(trf_4600)
static void C_fcall trf_4600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4600(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4600(t0,t1,t2);}

C_noret_decl(trf_4595)
static void C_fcall trf_4595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4595(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4595(t0,t1,t2,t3);}

C_noret_decl(trf_4583)
static void C_fcall trf_4583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4583(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4583(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4566)
static void C_fcall trf_4566(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4566(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4566(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4530)
static void C_fcall trf_4530(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4530(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_4530(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4480)
static void C_fcall trf_4480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4480(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4480(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4492)
static void C_fcall trf_4492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4492(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4492(t0,t1,t2,t3);}

C_noret_decl(trf_4367)
static void C_fcall trf_4367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4367(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4367(t0,t1,t2,t3);}

C_noret_decl(trf_4410)
static void C_fcall trf_4410(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4410(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4410(t0,t1,t2,t3);}

C_noret_decl(trf_4372)
static void C_fcall trf_4372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4372(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4372(t0,t1,t2);}

C_noret_decl(trf_4381)
static void C_fcall trf_4381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4381(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4381(t0,t1,t2);}

C_noret_decl(trf_4256)
static void C_fcall trf_4256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4256(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4256(t0,t1,t2);}

C_noret_decl(trf_4293)
static void C_fcall trf_4293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4293(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4293(t0,t1,t2);}

C_noret_decl(trf_4314)
static void C_fcall trf_4314(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4314(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4314(t0,t1,t2);}

C_noret_decl(trf_4210)
static void C_fcall trf_4210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4210(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4210(t0,t1);}

C_noret_decl(trf_3920)
static void C_fcall trf_3920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3920(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3920(t0,t1,t2);}

C_noret_decl(trf_3860)
static void C_fcall trf_3860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3860(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3860(t0,t1,t2);}

C_noret_decl(trf_3872)
static void C_fcall trf_3872(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3872(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3872(t0,t1,t2);}

C_noret_decl(trf_3794)
static void C_fcall trf_3794(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3794(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3794(t0,t1);}

C_noret_decl(trf_3706)
static void C_fcall trf_3706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3706(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3706(t0,t1,t2,t3);}

C_noret_decl(trf_3669)
static void C_fcall trf_3669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3669(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3669(t0,t1,t2);}

C_noret_decl(trf_3624)
static void C_fcall trf_3624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3624(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3624(t0,t1,t2,t3);}

C_noret_decl(trf_3243)
static void C_fcall trf_3243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3243(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3243(t0,t1,t2,t3);}

C_noret_decl(trf_3014)
static void C_fcall trf_3014(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3014(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3014(t0,t1);}

C_noret_decl(trf_3044)
static void C_fcall trf_3044(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3044(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3044(t0,t1);}

C_noret_decl(trf_3086)
static void C_fcall trf_3086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3086(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3086(t0,t1);}

C_noret_decl(trf_2884)
static void C_fcall trf_2884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2884(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2884(t0,t1,t2,t3);}

C_noret_decl(trf_2812)
static void C_fcall trf_2812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2812(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2812(t0,t1);}

C_noret_decl(trf_2666)
static void C_fcall trf_2666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2666(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2666(t0,t1);}

C_noret_decl(trf_2661)
static void C_fcall trf_2661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2661(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2661(t0,t1,t2);}

C_noret_decl(trf_2560)
static void C_fcall trf_2560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2560(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2560(t0,t1,t2,t3);}

C_noret_decl(trf_2594)
static void C_fcall trf_2594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2594(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2594(t0,t1);}

C_noret_decl(trf_2616)
static void C_fcall trf_2616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2616(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2616(t0,t1);}

C_noret_decl(trf_2381)
static void C_fcall trf_2381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2381(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2381(t0,t1,t2);}

C_noret_decl(trf_2389)
static void C_fcall trf_2389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2389(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2389(t0,t1,t2);}

C_noret_decl(trf_2423)
static void C_fcall trf_2423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2423(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2423(t0,t1);}

C_noret_decl(trf_2134)
static void C_fcall trf_2134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2134(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2134(t0,t1);}

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

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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
if(!C_demand_2(3094)){
C_save(t1);
C_rereclaim2(3094*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,397);
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
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
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
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[257]=C_h_intern(&lf[257],3,"fp=");
lf[258]=C_decode_literal(C_heaptop,"\376U-1.\000");
lf[259]=C_h_intern(&lf[259],27,"local-timezone-abbreviation");
lf[260]=C_h_intern(&lf[260],5,"_exit");
lf[261]=C_h_intern(&lf[261],14,"terminal-port\077");
lf[262]=C_h_intern(&lf[262],19,"set-buffering-mode!");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[264]=C_h_intern(&lf[264],5,"\000full");
lf[265]=C_h_intern(&lf[265],5,"\000line");
lf[266]=C_h_intern(&lf[266],5,"\000none");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[268]=C_h_intern(&lf[268],6,"regexp");
lf[269]=C_h_intern(&lf[269],12,"string-match");
lf[270]=C_h_intern(&lf[270],12,"glob->regexp");
lf[271]=C_h_intern(&lf[271],13,"make-pathname");
lf[272]=C_h_intern(&lf[272],18,"decompose-pathname");
lf[273]=C_h_intern(&lf[273],4,"glob");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[276]=C_h_intern(&lf[276],13,"spawn/overlay");
lf[277]=C_h_intern(&lf[277],10,"spawn/wait");
lf[278]=C_h_intern(&lf[278],12,"spawn/nowait");
lf[279]=C_h_intern(&lf[279],13,"spawn/nowaito");
lf[280]=C_h_intern(&lf[280],12,"spawn/detach");
lf[281]=C_h_intern(&lf[281],16,"char-whitespace\077");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[285]=C_h_intern(&lf[285],24,"pathname-strip-directory");
lf[288]=C_h_intern(&lf[288],15,"process-execute");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[290]=C_h_intern(&lf[290],13,"process-spawn");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot spawn process");
lf[292]=C_h_intern(&lf[292],18,"current-process-id");
lf[293]=C_h_intern(&lf[293],17,"\003sysshell-command");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve system directory");
lf[295]=C_h_intern(&lf[295],24,"get-environment-variable");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\007COMSPEC");
lf[297]=C_h_intern(&lf[297],27,"\003sysshell-command-arguments");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\002/c");
lf[299]=C_h_intern(&lf[299],11,"process-run");
lf[300]=C_h_intern(&lf[300],11,"\003sysprocess");
lf[301]=C_h_intern(&lf[301],14,"\000process-error");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[303]=C_h_intern(&lf[303],17,"\003sysmake-locative");
lf[304]=C_h_intern(&lf[304],8,"location");
lf[305]=C_h_intern(&lf[305],16,"\003syscheck-string");
lf[306]=C_h_intern(&lf[306],12,"\003sysfor-each");
lf[307]=C_h_intern(&lf[307],7,"process");
lf[308]=C_h_intern(&lf[308],8,"process*");
lf[309]=C_h_intern(&lf[309],16,"\003sysprocess-wait");
lf[310]=C_h_intern(&lf[310],12,"process-wait");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[312]=C_h_intern(&lf[312],5,"sleep");
lf[313]=C_h_intern(&lf[313],13,"get-host-name");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[315]=C_h_intern(&lf[315],18,"system-information");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\007windows");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system-information");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current user-name");
lf[319]=C_h_intern(&lf[319],13,"pathname-file");
lf[320]=C_h_intern(&lf[320],10,"find-files");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[324]=C_h_intern(&lf[324],16,"\003sysdynamic-wind");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[326]=C_h_intern(&lf[326],7,"regexp\077");
lf[327]=C_h_intern(&lf[327],17,"change-file-owner");
lf[328]=C_h_intern(&lf[328],5,"error");
lf[329]=C_h_intern(&lf[329],11,"create-fifo");
lf[330]=C_h_intern(&lf[330],14,"create-session");
lf[331]=C_h_intern(&lf[331],20,"create-symbolic-link");
lf[332]=C_h_intern(&lf[332],26,"current-effective-group-id");
lf[333]=C_h_intern(&lf[333],25,"current-effective-user-id");
lf[334]=C_h_intern(&lf[334],27,"current-effective-user-name");
lf[335]=C_h_intern(&lf[335],16,"current-group-id");
lf[336]=C_h_intern(&lf[336],15,"current-user-id");
lf[337]=C_h_intern(&lf[337],18,"map-file-to-memory");
lf[338]=C_h_intern(&lf[338],9,"file-link");
lf[339]=C_h_intern(&lf[339],9,"file-lock");
lf[340]=C_h_intern(&lf[340],18,"file-lock/blocking");
lf[341]=C_h_intern(&lf[341],11,"file-select");
lf[342]=C_h_intern(&lf[342],14,"file-test-lock");
lf[343]=C_h_intern(&lf[343],13,"file-truncate");
lf[344]=C_h_intern(&lf[344],11,"file-unlock");
lf[345]=C_h_intern(&lf[345],10,"get-groups");
lf[346]=C_h_intern(&lf[346],17,"group-information");
lf[347]=C_h_intern(&lf[347],17,"initialize-groups");
lf[348]=C_h_intern(&lf[348],26,"memory-mapped-file-pointer");
lf[349]=C_h_intern(&lf[349],17,"parent-process-id");
lf[350]=C_h_intern(&lf[350],12,"process-fork");
lf[351]=C_h_intern(&lf[351],16,"process-group-id");
lf[352]=C_h_intern(&lf[352],14,"process-signal");
lf[353]=C_h_intern(&lf[353],18,"read-symbolic-link");
lf[354]=C_h_intern(&lf[354],10,"set-alarm!");
lf[355]=C_h_intern(&lf[355],13,"set-group-id!");
lf[356]=C_h_intern(&lf[356],11,"set-groups!");
lf[357]=C_h_intern(&lf[357],21,"set-process-group-id!");
lf[358]=C_h_intern(&lf[358],19,"set-root-directory!");
lf[359]=C_h_intern(&lf[359],16,"set-signal-mask!");
lf[360]=C_h_intern(&lf[360],12,"set-user-id!");
lf[361]=C_h_intern(&lf[361],11,"signal-mask");
lf[362]=C_h_intern(&lf[362],12,"signal-mask!");
lf[363]=C_h_intern(&lf[363],14,"signal-masked\077");
lf[364]=C_h_intern(&lf[364],14,"signal-unmask!");
lf[365]=C_h_intern(&lf[365],13,"terminal-name");
lf[366]=C_h_intern(&lf[366],13,"terminal-size");
lf[367]=C_h_intern(&lf[367],22,"unmap-file-from-memory");
lf[368]=C_h_intern(&lf[368],16,"user-information");
lf[369]=C_h_intern(&lf[369],17,"utc-time->seconds");
lf[370]=C_h_intern(&lf[370],12,"string->time");
lf[371]=C_h_intern(&lf[371],16,"errno/wouldblock");
lf[372]=C_h_intern(&lf[372],19,"memory-mapped-file\077");
lf[373]=C_h_intern(&lf[373],13,"map/anonymous");
lf[374]=C_h_intern(&lf[374],8,"map/file");
lf[375]=C_h_intern(&lf[375],9,"map/fixed");
lf[376]=C_h_intern(&lf[376],11,"map/private");
lf[377]=C_h_intern(&lf[377],10,"map/shared");
lf[378]=C_h_intern(&lf[378],10,"open/fsync");
lf[379]=C_h_intern(&lf[379],11,"open/noctty");
lf[380]=C_h_intern(&lf[380],13,"open/nonblock");
lf[381]=C_h_intern(&lf[381],9,"open/sync");
lf[382]=C_h_intern(&lf[382],10,"perm/isgid");
lf[383]=C_h_intern(&lf[383],10,"perm/isuid");
lf[384]=C_h_intern(&lf[384],10,"perm/isvtx");
lf[385]=C_h_intern(&lf[385],9,"prot/exec");
lf[386]=C_h_intern(&lf[386],9,"prot/none");
lf[387]=C_h_intern(&lf[387],9,"prot/read");
lf[388]=C_h_intern(&lf[388],10,"prot/write");
lf[389]=C_h_intern(&lf[389],11,"make-vector");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[392]=C_h_intern(&lf[392],18,"getter-with-setter");
lf[393]=C_h_intern(&lf[393],26,"set-file-modification-time");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[395]=C_h_intern(&lf[395],17,"register-feature!");
lf[396]=C_h_intern(&lf[396],5,"posix");
C_register_lf2(lf,397,create_ptable());
t2=C_mutate(&lf[0] /* (set! c1367 ...) */,lf[1]);
t3=C_mutate(&lf[2] /* (set! c109 ...) */,lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1874,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t4);}

/* k1872 */
static void C_ccall f_1874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1877,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1875 in k1872 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1880,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1878 in k1875 in k1872 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1883,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1889,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 939  register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[395]+1)))(3,*((C_word*)lf[395]+1),t2,lf[396]);}

/* k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1892(C_word c,C_word t0,C_word t1){
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
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1892,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=C_mutate(&lf[5] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1904,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
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
t30=C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t31=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t30);
t32=C_mutate((C_word*)lf[36]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1950,a[2]=t31,a[3]=((C_word)li1),tmp=(C_word)a,a+=4,tmp));
t33=C_mutate((C_word*)lf[41]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1991,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t34=*((C_word*)lf[43]+1);
t35=C_mutate((C_word*)lf[44]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2009,a[2]=t34,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp));
t36=C_mutate((C_word*)lf[48]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2054,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t37=*((C_word*)lf[51]+1);
t38=C_mutate((C_word*)lf[52]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2096,a[2]=t37,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t39=C_mutate((C_word*)lf[55]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t40=C_mutate((C_word*)lf[56]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t41=C_mutate((C_word*)lf[57]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t42=C_mutate(&lf[58] /* (set! stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2134,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[61]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2172,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[63]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2203,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t45=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2211,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t46=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5915,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp);
t47=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5921,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1105 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[392]+1)))(4,*((C_word*)lf[392]+1),t45,t46,t47);}

/* a5920 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5921,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[393]);
t5=C_i_check_number_2(t3,lf[393]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5944,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5957,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1112 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t7,t2);}

/* k5955 in a5920 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5957,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5934,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t4=C_i_foreign_string_argumentp(t1);
/* ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t4=((C_word*)t0)[2];
f_5944(t4,stub123(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t2));}}

/* k5932 in k5955 in a5920 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_5944(t2,stub123(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[2]));}

/* k5942 in a5920 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5944(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixwin.scm: 1115 posix-error */
t2=lf[5];
f_1904(7,t2,((C_word*)t0)[4],lf[37],lf[393],lf[394],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a5914 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5915(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5915,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5919,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1107 ##sys#stat */
f_2134(t3,t2);}

/* k5917 in a5914 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5919,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2211(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2211,2,t0,t1);}
t2=C_mutate((C_word*)lf[64]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate((C_word*)lf[65]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2213,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[66]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2219,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[67]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2225,a[2]=((C_word)li11),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[68]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2231,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[69]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=((C_word)li13),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[71]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2260,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6616,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp);
t10=C_mutate((C_word*)lf[72]+1 /* (set! character-device? ...) */,t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6610,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp);
t12=C_mutate((C_word*)lf[73]+1 /* (set! block-device? ...) */,t11);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6604,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp);
t14=C_mutate((C_word*)lf[74]+1 /* (set! fifo? ...) */,t13);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f6598,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp);
t16=C_mutate((C_word*)lf[75]+1 /* (set! socket? ...) */,t15);
t17=C_mutate((C_word*)lf[76]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2289,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5878,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1160 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[392]+1)))(4,*((C_word*)lf[392]+1),t18,t19,*((C_word*)lf[76]+1));}

/* a5877 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5878,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5882,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5894,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1162 port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[80]+1)))(3,*((C_word*)lf[80]+1),t4,t2);}

/* k5892 in a5877 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[3],C_fix(7));
t3=C_eqp(t2,lf[78]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_5882(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_5882(2,t4,C_fix(-1));}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[2];
f_5882(2,t3,t2);}
else{
/* posixwin.scm: 1169 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[46],lf[83],lf[391],((C_word*)t0)[3]);}}}

/* k5880 in a5877 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5885,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posixwin.scm: 1171 posix-error */
t3=lf[5];
f_1904(6,t3,t2,lf[37],lf[83],lf[390],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5883 in k5880 in a5877 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2349,2,t0,t1);}
t2=C_mutate((C_word*)lf[83]+1 /* (set! file-position ...) */,t1);
t3=C_mutate((C_word*)lf[84]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2351,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[90]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2508,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[92]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2533,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[4]+1);
t7=*((C_word*)lf[43]+1);
t8=*((C_word*)lf[94]+1);
t9=C_mutate((C_word*)lf[95]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2558,a[2]=t7,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[99]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2718,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[43]+1);
t12=C_mutate((C_word*)lf[98]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2745,a[2]=t11,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t13=*((C_word*)lf[102]+1);
t14=*((C_word*)lf[103]+1);
t15=*((C_word*)lf[104]+1);
t16=*((C_word*)lf[105]+1);
t17=*((C_word*)lf[106]+1);
t18=*((C_word*)lf[4]+1);
t19=*((C_word*)lf[107]+1);
t20=*((C_word*)lf[98]+1);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2812,a[2]=t20,a[3]=((C_word)li39),tmp=(C_word)a,a+=4,tmp);
t22=C_mutate((C_word*)lf[112]+1 /* (set! canonical-path ...) */,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2868,a[2]=t16,a[3]=t14,a[4]=t19,a[5]=t21,a[6]=t15,a[7]=t13,a[8]=t17,a[9]=t18,a[10]=((C_word)li41),tmp=(C_word)a,a+=11,tmp));
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3243,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp);
t24=C_mutate((C_word*)lf[130]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3261,a[2]=t23,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp));
t25=C_mutate((C_word*)lf[134]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3297,a[2]=t23,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t26=C_mutate((C_word*)lf[135]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3333,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[138]+1 /* (set! close-output-pipe ...) */,*((C_word*)lf[135]+1));
t28=*((C_word*)lf[130]+1);
t29=*((C_word*)lf[134]+1);
t30=*((C_word*)lf[135]+1);
t31=*((C_word*)lf[138]+1);
t32=C_mutate((C_word*)lf[139]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3352,a[2]=t28,a[3]=t30,a[4]=((C_word)li48),tmp=(C_word)a,a+=5,tmp));
t33=C_mutate((C_word*)lf[140]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3376,a[2]=t29,a[3]=t31,a[4]=((C_word)li51),tmp=(C_word)a,a+=5,tmp));
t34=C_mutate((C_word*)lf[141]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3400,a[2]=t28,a[3]=t30,a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp));
t35=C_mutate((C_word*)lf[143]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3420,a[2]=t29,a[3]=t31,a[4]=((C_word)li55),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[145]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3440,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
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
t63=C_a_i_list(&a,7,*((C_word*)lf[147]+1),*((C_word*)lf[148]+1),*((C_word*)lf[149]+1),*((C_word*)lf[150]+1),*((C_word*)lf[151]+1),*((C_word*)lf[152]+1),*((C_word*)lf[153]+1));
t64=C_mutate((C_word*)lf[173]+1 /* (set! signals-list ...) */,t63);
t65=*((C_word*)lf[174]+1);
t66=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3514,a[2]=((C_word*)t0)[2],a[3]=t65,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1495 make-vector */
t67=*((C_word*)lf[389]+1);
((C_proc4)(void*)(*((C_word*)t67+1)))(4,t67,t66,C_fix(256),C_SCHEME_FALSE);}

/* k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3514,2,t0,t1);}
t2=C_mutate((C_word*)lf[175]+1 /* (set! signal-handler ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3516,a[2]=t1,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[176]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3525,a[2]=t1,a[3]=((C_word)li58),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[174]+1 /* (set! interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3538,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
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
t43=C_mutate((C_word*)lf[215]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3594,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3624,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp);
t45=C_mutate((C_word*)lf[217]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3648,a[2]=t44,a[3]=((C_word)li62),tmp=(C_word)a,a+=4,tmp));
t46=C_mutate((C_word*)lf[218]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3654,a[2]=t44,a[3]=((C_word)li63),tmp=(C_word)a,a+=4,tmp));
t47=C_mutate((C_word*)lf[219]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3660,a[2]=t44,a[3]=((C_word)li64),tmp=(C_word)a,a+=4,tmp));
t48=C_mutate((C_word*)lf[220]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)0));
t49=C_mutate((C_word*)lf[221]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)1));
t50=C_mutate((C_word*)lf[222]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)2));
t51=C_SCHEME_UNDEFINED;
t52=(*a=C_VECTOR_TYPE|1,a[1]=t51,tmp=(C_word)a,a+=2,tmp);
t53=C_SCHEME_UNDEFINED;
t54=(*a=C_VECTOR_TYPE|1,a[1]=t53,tmp=(C_word)a,a+=2,tmp);
t55=C_set_block_item(t52,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3669,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t56=C_set_block_item(t54,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3706,a[2]=((C_word)li66),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[231]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3724,a[2]=t52,a[3]=t54,a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp));
t58=C_mutate((C_word*)lf[232]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3738,a[2]=t52,a[3]=t54,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t59=C_mutate((C_word*)lf[233]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3752,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[237]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3787,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[239]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3817,a[2]=((C_word)li71),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[240]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3834,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t63=*((C_word*)lf[241]+1);
t64=C_mutate((C_word*)lf[242]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3854,a[2]=t63,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp));
t65=C_mutate((C_word*)lf[243]+1 /* (set! current-environment ...) */,*((C_word*)lf[242]+1));
t66=C_mutate(&lf[244] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3920,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[246]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3939,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[249]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3973,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[250]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4017,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[252]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4075,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[255]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[259]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4157,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[260]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4169,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[261]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4185,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[262]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4191,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t76=*((C_word*)lf[268]+1);
t77=*((C_word*)lf[269]+1);
t78=*((C_word*)lf[270]+1);
t79=*((C_word*)lf[95]+1);
t80=*((C_word*)lf[271]+1);
t81=*((C_word*)lf[272]+1);
t82=C_mutate((C_word*)lf[273]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4250,a[2]=t78,a[3]=t76,a[4]=t79,a[5]=t77,a[6]=t80,a[7]=t81,a[8]=((C_word)li91),tmp=(C_word)a,a+=9,tmp));
t83=C_mutate((C_word*)lf[276]+1 /* (set! spawn/overlay ...) */,C_fix((C_word)P_OVERLAY));
t84=C_mutate((C_word*)lf[277]+1 /* (set! spawn/wait ...) */,C_fix((C_word)P_WAIT));
t85=C_mutate((C_word*)lf[278]+1 /* (set! spawn/nowait ...) */,C_fix((C_word)P_NOWAIT));
t86=C_mutate((C_word*)lf[279]+1 /* (set! spawn/nowaito ...) */,C_fix((C_word)P_NOWAITO));
t87=C_mutate((C_word*)lf[280]+1 /* (set! spawn/detach ...) */,C_fix((C_word)P_DETACH));
t88=*((C_word*)lf[281]+1);
t89=*((C_word*)lf[51]+1);
t90=*((C_word*)lf[106]+1);
t91=*((C_word*)lf[4]+1);
t92=C_mutate(&lf[282] /* (set! $quote-args-list ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4367,a[2]=t91,a[3]=t89,a[4]=t90,a[5]=t88,a[6]=((C_word)li95),tmp=(C_word)a,a+=7,tmp));
t93=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4446,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
t94=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4463,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp);
t95=*((C_word*)lf[285]+1);
t96=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4480,a[2]=((C_word)li99),tmp=(C_word)a,a+=3,tmp);
t97=C_mutate(&lf[286] /* (set! $exec-setup ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4530,a[2]=t95,a[3]=t93,a[4]=t94,a[5]=t96,a[6]=((C_word)li100),tmp=(C_word)a,a+=7,tmp));
t98=C_mutate(&lf[287] /* (set! $exec-teardown ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4566,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[288]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4581,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t100=C_mutate((C_word*)lf[290]+1 /* (set! process-spawn ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4668,a[2]=((C_word)li111),tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[292]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4755,a[2]=((C_word)li112),tmp=(C_word)a,a+=3,tmp));
t102=C_mutate((C_word*)lf[293]+1 /* (set! shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4758,a[2]=((C_word)li113),tmp=(C_word)a,a+=3,tmp));
t103=C_mutate((C_word*)lf[297]+1 /* (set! shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4779,a[2]=((C_word)li114),tmp=(C_word)a,a+=3,tmp));
t104=*((C_word*)lf[290]+1);
t105=*((C_word*)lf[295]+1);
t106=C_mutate((C_word*)lf[299]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4785,a[2]=t104,a[3]=((C_word)li115),tmp=(C_word)a,a+=4,tmp));
t107=C_mutate((C_word*)lf[300]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4877,a[2]=((C_word)li116),tmp=(C_word)a,a+=3,tmp));
t108=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4996,a[2]=((C_word)li121),tmp=(C_word)a,a+=3,tmp);
t109=C_mutate((C_word*)lf[307]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5058,a[2]=t108,a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp));
t110=C_mutate((C_word*)lf[308]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5138,a[2]=t108,a[3]=((C_word)li131),tmp=(C_word)a,a+=4,tmp));
t111=C_mutate((C_word*)lf[309]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5218,a[2]=((C_word)li132),tmp=(C_word)a,a+=3,tmp));
t112=C_mutate((C_word*)lf[310]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5230,a[2]=((C_word)li135),tmp=(C_word)a,a+=3,tmp));
t113=C_mutate((C_word*)lf[312]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5290,a[2]=((C_word)li136),tmp=(C_word)a,a+=3,tmp));
t114=C_mutate((C_word*)lf[313]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5293,a[2]=((C_word)li137),tmp=(C_word)a,a+=3,tmp));
t115=C_mutate((C_word*)lf[315]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5305,a[2]=((C_word)li138),tmp=(C_word)a,a+=3,tmp));
t116=C_mutate((C_word*)lf[107]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5336,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t117=*((C_word*)lf[273]+1);
t118=*((C_word*)lf[269]+1);
t119=*((C_word*)lf[271]+1);
t120=*((C_word*)lf[319]+1);
t121=*((C_word*)lf[99]+1);
t122=C_mutate((C_word*)lf[320]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5351,a[2]=t121,a[3]=t120,a[4]=t119,a[5]=t117,a[6]=t118,a[7]=((C_word)li152),tmp=(C_word)a,a+=8,tmp));
t123=C_mutate((C_word*)lf[327]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5597,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t124=C_mutate((C_word*)lf[329]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5603,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t125=C_mutate((C_word*)lf[330]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5609,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t126=C_mutate((C_word*)lf[331]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5615,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t127=C_mutate((C_word*)lf[332]+1 /* (set! current-effective-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5621,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t128=C_mutate((C_word*)lf[333]+1 /* (set! current-effective-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5627,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t129=C_mutate((C_word*)lf[334]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5633,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t130=C_mutate((C_word*)lf[335]+1 /* (set! current-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5639,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t131=C_mutate((C_word*)lf[336]+1 /* (set! current-user-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5645,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t132=C_mutate((C_word*)lf[337]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5651,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t133=C_mutate((C_word*)lf[338]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5657,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t134=C_mutate((C_word*)lf[339]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5663,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t135=C_mutate((C_word*)lf[340]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5669,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t136=C_mutate((C_word*)lf[341]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5675,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t137=C_mutate((C_word*)lf[342]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5681,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t138=C_mutate((C_word*)lf[343]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5687,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t139=C_mutate((C_word*)lf[344]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5693,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t140=C_mutate((C_word*)lf[345]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5699,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t141=C_mutate((C_word*)lf[346]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5705,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t142=C_mutate((C_word*)lf[347]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5711,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t143=C_mutate((C_word*)lf[348]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5717,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t144=C_mutate((C_word*)lf[349]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5723,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t145=C_mutate((C_word*)lf[350]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5729,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t146=C_mutate((C_word*)lf[351]+1 /* (set! process-group-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5735,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t147=C_mutate((C_word*)lf[352]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5741,a[2]=((C_word)li177),tmp=(C_word)a,a+=3,tmp));
t148=C_mutate((C_word*)lf[353]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5747,a[2]=((C_word)li178),tmp=(C_word)a,a+=3,tmp));
t149=C_mutate((C_word*)lf[354]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5753,a[2]=((C_word)li179),tmp=(C_word)a,a+=3,tmp));
t150=C_mutate((C_word*)lf[355]+1 /* (set! set-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5759,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t151=C_mutate((C_word*)lf[356]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5765,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp));
t152=C_mutate((C_word*)lf[357]+1 /* (set! set-process-group-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5771,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp));
t153=C_mutate((C_word*)lf[358]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5777,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t154=C_mutate((C_word*)lf[359]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5783,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp));
t155=C_mutate((C_word*)lf[360]+1 /* (set! set-user-id! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5789,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp));
t156=C_mutate((C_word*)lf[361]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5795,a[2]=((C_word)li186),tmp=(C_word)a,a+=3,tmp));
t157=C_mutate((C_word*)lf[362]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5801,a[2]=((C_word)li187),tmp=(C_word)a,a+=3,tmp));
t158=C_mutate((C_word*)lf[363]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5807,a[2]=((C_word)li188),tmp=(C_word)a,a+=3,tmp));
t159=C_mutate((C_word*)lf[364]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5813,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t160=C_mutate((C_word*)lf[365]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5819,a[2]=((C_word)li190),tmp=(C_word)a,a+=3,tmp));
t161=C_mutate((C_word*)lf[366]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5825,a[2]=((C_word)li191),tmp=(C_word)a,a+=3,tmp));
t162=C_mutate((C_word*)lf[367]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5831,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp));
t163=C_mutate((C_word*)lf[368]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5837,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp));
t164=C_mutate((C_word*)lf[369]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5843,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t165=C_mutate((C_word*)lf[370]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5849,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t166=C_set_block_item(lf[371] /* errno/wouldblock */,0,C_fix(0));
t167=C_mutate((C_word*)lf[74]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5856,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t168=C_mutate((C_word*)lf[372]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5859,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t169=C_set_block_item(lf[373] /* map/anonymous */,0,C_fix(0));
t170=C_set_block_item(lf[374] /* map/file */,0,C_fix(0));
t171=C_set_block_item(lf[375] /* map/fixed */,0,C_fix(0));
t172=C_set_block_item(lf[376] /* map/private */,0,C_fix(0));
t173=C_set_block_item(lf[377] /* map/shared */,0,C_fix(0));
t174=C_set_block_item(lf[378] /* open/fsync */,0,C_fix(0));
t175=C_set_block_item(lf[379] /* open/noctty */,0,C_fix(0));
t176=C_set_block_item(lf[380] /* open/nonblock */,0,C_fix(0));
t177=C_set_block_item(lf[381] /* open/sync */,0,C_fix(0));
t178=C_set_block_item(lf[382] /* perm/isgid */,0,C_fix(0));
t179=C_set_block_item(lf[383] /* perm/isuid */,0,C_fix(0));
t180=C_set_block_item(lf[384] /* perm/isvtx */,0,C_fix(0));
t181=C_set_block_item(lf[385] /* prot/exec */,0,C_fix(0));
t182=C_set_block_item(lf[386] /* prot/none */,0,C_fix(0));
t183=C_set_block_item(lf[387] /* prot/read */,0,C_fix(0));
t184=C_set_block_item(lf[388] /* prot/write */,0,C_fix(0));
t185=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t185+1)))(2,t185,C_SCHEME_UNDEFINED);}

/* memory-mapped-file? in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5859(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5859,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* fifo? in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5856(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5856,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* string->time in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5849(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5849,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[370],lf[0]);}

/* utc-time->seconds in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5843(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5843,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[369],lf[0]);}

/* user-information in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5837(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5837,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[368],lf[0]);}

/* unmap-file-from-memory in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5831,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[367],lf[0]);}

/* terminal-size in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5825(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5825,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[366],lf[0]);}

/* terminal-name in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5819(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5819,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[365],lf[0]);}

/* signal-unmask! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5813(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5813,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[364],lf[0]);}

/* signal-masked? in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5807(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5807,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[363],lf[0]);}

/* signal-mask! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5801(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5801,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[362],lf[0]);}

/* signal-mask in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5795(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5795,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[361],lf[0]);}

/* set-user-id! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5789(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5789,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[360],lf[0]);}

/* set-signal-mask! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5783,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[359],lf[0]);}

/* set-root-directory! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5777(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5777,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[358],lf[0]);}

/* set-process-group-id! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5771,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[357],lf[0]);}

/* set-groups! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5765(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5765,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[356],lf[0]);}

/* set-group-id! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5759(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5759,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[355],lf[0]);}

/* set-alarm! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5753(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5753,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[354],lf[0]);}

/* read-symbolic-link in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5747(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5747,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[353],lf[0]);}

/* process-signal in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5741,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[352],lf[0]);}

/* process-group-id in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5735(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5735,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[351],lf[0]);}

/* process-fork in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5729(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5729,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[350],lf[0]);}

/* parent-process-id in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5723(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5723,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[349],lf[0]);}

/* memory-mapped-file-pointer in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5717(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5717,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[348],lf[0]);}

/* initialize-groups in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5711(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5711,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[347],lf[0]);}

/* group-information in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5705(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5705,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[346],lf[0]);}

/* get-groups in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5699(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5699,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[345],lf[0]);}

/* file-unlock in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5693(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5693,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[344],lf[0]);}

/* file-truncate in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5687(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5687,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[343],lf[0]);}

/* file-test-lock in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5681(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5681,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[342],lf[0]);}

/* file-select in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5675(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5675,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[341],lf[0]);}

/* file-lock/blocking in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5669(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5669,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[340],lf[0]);}

/* file-lock in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5663(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5663,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[339],lf[0]);}

/* file-link in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5657(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5657,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[338],lf[0]);}

/* map-file-to-memory in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5651(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5651,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[337],lf[0]);}

/* current-user-id in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5645(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5645,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[336],lf[0]);}

/* current-group-id in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5639(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5639,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[335],lf[0]);}

/* current-effective-user-name in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5633(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5633,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[334],lf[0]);}

/* current-effective-user-id in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5627(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5627,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[333],lf[0]);}

/* current-effective-group-id in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5621,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[332],lf[0]);}

/* create-symbolic-link in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5615(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5615,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[331],lf[0]);}

/* create-session in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5609(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5609,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[330],lf[0]);}

/* create-fifo in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5603(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5603,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[329],lf[0]);}

/* change-file-owner in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5597(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5597,2,t0,t1);}
/* error */
t2=*((C_word*)lf[328]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[327],lf[0]);}

/* find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+22)){
C_save_and_reclaim((void*)tr4r,(void*)f_5351r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5351r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5351r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t2,a[9]=((C_word)li147),tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5518,a[2]=t5,a[3]=((C_word)li148),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5523,a[2]=t6,a[3]=((C_word)li149),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5528,a[2]=t7,a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-action12541319 */
t9=t8;
f_5528(t9,t1);}
else{
t9=C_i_car(t4);
t10=C_i_cdr(t4);
if(C_truep(C_i_nullp(t10))){
/* def-id12551317 */
t11=t7;
f_5523(t11,t1,t9);}
else{
t11=C_i_car(t10);
t12=C_i_cdr(t10);
if(C_truep(C_i_nullp(t12))){
/* def-limit12561314 */
t13=t6;
f_5518(t13,t1,t9,t11);}
else{
t13=C_i_car(t12);
t14=C_i_cdr(t12);
if(C_truep(C_i_nullp(t14))){
/* body12521261 */
t15=t5;
f_5353(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[2],t14);}}}}}

/* def-action1254 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5528(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5528,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5534,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp);
/* def-id12551317 */
t3=((C_word*)t0)[2];
f_5523(t3,t1,t2);}

/* a5533 in def-action1254 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5534,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* def-id1255 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5523(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5523,NULL,3,t0,t1,t2);}
/* def-limit12561314 */
t3=((C_word*)t0)[2];
f_5518(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit1256 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5518(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5518,NULL,4,t0,t1,t2,t3);}
/* body12521261 */
t4=((C_word*)t0)[2];
f_5353(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5353(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_5353,NULL,5,t0,t1,t2,t3,t4);}
t5=C_i_check_string_2(((C_word*)t0)[8],lf[320]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5360,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=t7,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
t9=t4;
if(C_truep(t9)){
if(C_truep(C_fixnump(t4))){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5513,a[2]=t4,a[3]=t7,a[4]=((C_word)li145),tmp=(C_word)a,a+=5,tmp);
t11=t8;
f_5360(t11,t10);}
else{
t10=t4;
t11=t8;
f_5360(t11,t10);}}
else{
t10=t8;
f_5360(t10,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5505,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));}}

/* f_5505 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5505(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5505,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_5513 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5513(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5513,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5360(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5360,NULL,2,t0,t1);}
t2=C_i_stringp(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t2)){
t4=t3;
f_5493(2,t4,t2);}
else{
/* posixwin.scm: 2077 regexp? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[326]+1)))(3,*((C_word*)lf[326]+1),t3,((C_word*)t0)[12]);}}

/* k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5493,2,t0,t1);}
t2=(C_truep(t1)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5494,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word)li140),tmp=(C_word)a,a+=5,tmp):((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5487,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 2080 make-pathname */
t5=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],lf[325]);}

/* k5485 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2080 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5370,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5372,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t3,a[11]=((C_word)li144),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_5372(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5372(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5372,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5391,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=t5,a[12]=t1,a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* posixwin.scm: 2086 directory? */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}}

/* k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5391,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5467,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* posixwin.scm: 2087 pathname-file */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5473,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 2094 pproc */
t3=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}}

/* k5471 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5473,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5480,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 2094 action */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm: 2095 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_5372(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k5478 in k5471 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2094 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5372(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5467,2,t0,t1);}
if(C_truep((C_truep(C_i_equalp(t1,lf[321]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t1,lf[322]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixwin.scm: 2087 loop */
t2=((C_word*)((C_word*)t0)[12])[1];
f_5372(t2,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5406,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* posixwin.scm: 2088 lproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}}

/* k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5406,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[11])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5416,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5418,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=t6,a[5]=((C_word)li141),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word)li142),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5447,a[2]=t6,a[3]=((C_word*)t0)[11],a[4]=t4,a[5]=((C_word)li143),tmp=(C_word)a,a+=6,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[324]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5457,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm: 2093 pproc */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}}

/* k5458 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm: 2093 action */
t2=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posixwin.scm: 2093 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5372(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k5455 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2093 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5372(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a5446 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
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

/* a5422 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5431,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5445,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 2091 make-pathname */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[6],lf[323]);}

/* k5443 in a5422 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2091 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5429 in a5422 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5435,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5438,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm: 2092 pproc */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k5436 in k5429 in a5422 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm: 2092 action */
t2=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posixwin.scm: 2091 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5372(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k5433 in k5429 in a5422 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2091 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5372(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a5417 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5418,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k5414 in k5404 in k5465 in k5389 in loop in k5368 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2089 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5372(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_5494 in k5491 in k5358 in body1252 in find-files in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5494(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5494,3,t0,t1,t2);}
/* posixwin.scm: 2078 string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* current-user-name in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5336,2,t0,t1);}
if(C_truep(C_get_user_name())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_username),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5346,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 2052 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5344 in current-user-name in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2053 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[107],lf[318]);}

/* system-information in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5305,2,t0,t1);}
if(C_truep(C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5316,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5331,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 2043 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5329 in system-information in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2044 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[315],lf[317]);}

/* k5314 in system-information in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5320,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osrel),C_fix(0));}

/* k5318 in k5314 in system-information in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5324,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osver),C_fix(0));}

/* k5322 in k5318 in k5314 in system-information in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5328,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_processor),C_fix(0));}

/* k5326 in k5322 in k5318 in k5314 in system-information in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5328,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,5,lf[316],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* get-host-name in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5293,2,t0,t1);}
if(C_truep(C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
/* posixwin.scm: 2033 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[313],lf[314]);}}

/* sleep in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5290(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5290,3,t0,t1,t2);}
t3=C_sleep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}

/* process-wait in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_5230r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5230r(t0,t1,t2,t3);}}

static void C_ccall f_5230r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_i_car(t3));
t6=C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
if(C_truep(C_i_nullp(t7))){
t8=C_i_check_exact_2(t2,lf[310]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5251,a[2]=t5,a[3]=t2,a[4]=((C_word)li133),tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5257,a[2]=t2,a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}
else{
/* ##sys#error */
t8=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[2],t7);}}

/* a5256 in process-wait in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5257(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5257,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5267,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 2015 ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* posixwin.scm: 2017 values */
C_values(5,0,t1,t2,t3,t4);}}

/* k5265 in a5256 in process-wait in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 2016 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[301],lf[310],lf[311],((C_word*)t0)[2]);}

/* a5250 in process-wait in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5251,2,t0,t1);}
/* posixwin.scm: 2012 ##sys#process-wait */
((C_proc4)C_retrieve_proc(*((C_word*)lf[309]+1)))(4,*((C_word*)lf[309]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5218(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5218,4,t0,t1,t2,t3);}
if(C_truep(C_process_wait(t2,t3))){
/* posixwin.scm: 2005 values */
C_values(5,0,t1,t2,C_SCHEME_TRUE,C_fix((C_word)C_exstatus));}
else{
/* posixwin.scm: 2006 values */
C_values(5,0,t1,C_fix(-1),C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* process* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5138(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_5138r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5138r(t0,t1,t2,t3);}}

static void C_ccall f_5138r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5140,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li127),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5145,a[2]=t4,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5150,a[2]=t5,a[3]=((C_word)li129),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5155,a[2]=t6,a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-args11881204 */
t8=t7;
f_5155(t8,t1);}
else{
t8=C_i_car(t3);
t9=C_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* def-env11891202 */
t10=t6;
f_5150(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* def-exactf11901199 */
t12=t5;
f_5145(t12,t1,t8,t10);}
else{
t12=C_i_car(t11);
t13=C_i_cdr(t11);
if(C_truep(C_i_nullp(t13))){
/* body11861195 */
t14=t4;
f_5140(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-args1188 in process* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5155(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5155,NULL,2,t0,t1);}
/* def-env11891202 */
t2=((C_word*)t0)[2];
f_5150(t2,t1,C_SCHEME_FALSE);}

/* def-env1189 in process* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5150(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5150,NULL,3,t0,t1,t2);}
/* def-exactf11901199 */
t3=((C_word*)t0)[2];
f_5145(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf1190 in process* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5145(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5145,NULL,4,t0,t1,t2,t3);}
/* body11861195 */
t4=((C_word*)t0)[2];
f_5140(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1186 in process* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5140(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5140,NULL,5,t0,t1,t2,t3,t4);}
/* posixwin.scm: 1999 %process */
f_4996(t1,lf[308],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3,t4);}

/* process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5060,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li122),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5065,a[2]=t4,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5070,a[2]=t5,a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5075,a[2]=t6,a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-args11491165 */
t8=t7;
f_5075(t8,t1);}
else{
t8=C_i_car(t3);
t9=C_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* def-env11501163 */
t10=t6;
f_5070(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* def-exactf11511160 */
t12=t5;
f_5065(t12,t1,t8,t10);}
else{
t12=C_i_car(t11);
t13=C_i_cdr(t11);
if(C_truep(C_i_nullp(t13))){
/* body11471156 */
t14=t4;
f_5060(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-args1149 in process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5075(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5075,NULL,2,t0,t1);}
/* def-env11501163 */
t2=((C_word*)t0)[2];
f_5070(t2,t1,C_SCHEME_FALSE);}

/* def-env1150 in process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5070(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5070,NULL,3,t0,t1,t2);}
/* def-exactf11511160 */
t3=((C_word*)t0)[2];
f_5065(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf1151 in process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5065(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5065,NULL,4,t0,t1,t2,t3);}
/* body11471156 */
t4=((C_word*)t0)[2];
f_5060(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1147 in process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_5060(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5060,NULL,5,t0,t1,t2,t3,t4);}
/* posixwin.scm: 1996 %process */
f_4996(t1,lf[307],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3,t4);}

/* %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4996(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
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
C_save_and_reclaim((void*)trf_4996,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4998,a[2]=t2,a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
t12=C_i_check_string_2(((C_word*)t8)[1],t2);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5017,a[2]=t11,a[3]=t1,a[4]=t10,a[5]=t3,a[6]=t6,a[7]=t9,a[8]=t8,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t9)[1])){
/* posixwin.scm: 1984 chkstrlst */
t14=t11;
f_4998(t14,t13,((C_word*)t9)[1]);}
else{
t14=C_set_block_item(t10,0,C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5052,a[2]=t13,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1987 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[297]+1)))(3,*((C_word*)lf[297]+1),t15,((C_word*)t8)[1]);}}

/* k5050 in %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5052,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1988 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[293]+1)))(2,*((C_word*)lf[293]+1),t3);}

/* k5054 in k5050 in %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5017(2,t3,t2);}

/* k5015 in %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5020,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[6])){
/* posixwin.scm: 1989 chkstrlst */
t3=((C_word*)t0)[2];
f_4998(t3,t2,((C_word*)t0)[6]);}
else{
t3=t2;
f_5020(2,t3,C_SCHEME_UNDEFINED);}}

/* k5018 in k5015 in %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5025,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li119),tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5031,a[2]=((C_word*)t0)[4],a[3]=((C_word)li120),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a5030 in k5018 in k5015 in %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5031(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5031,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm: 1992 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixwin.scm: 1993 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a5024 in k5018 in k5015 in %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5025,2,t0,t1);}
/* posixwin.scm: 1990 ##sys#process */
t2=*((C_word*)lf[300]+1);
((C_proc10)(void*)(*((C_word*)t2+1)))(10,t2,t1,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* chkstrlst in %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4998(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4998,NULL,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5007,a[2]=((C_word*)t0)[2],a[3]=((C_word)li117),tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[306]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a5006 in chkstrlst in %process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_5007(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5007,3,t0,t1,t2);}
t3=*((C_word*)lf[305]+1);
/* g11171118 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,...){
C_word tmp;
C_word t9;
va_list v;
C_word *a,c2=c;
C_save_rest(t8,c2,9);
if(c<9) C_bad_min_argc_2(c,9,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr9r,(void*)f_4877r,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
else{
a=C_alloc((c-9)*3);
t9=C_restore_rest(a,C_rest_count(0));
f_4877r(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}}

static void C_ccall f_4877r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4881,a[2]=t4,a[3]=t2,a[4]=t6,a[5]=t7,a[6]=t8,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_i_nullp(t9))){
t11=t10;
f_4881(2,t11,C_SCHEME_FALSE);}
else{
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
t12=t10;
f_4881(2,t12,C_i_car(t9));}
else{
/* ##sys#error */
t12=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,lf[2],t9);}}}

/* k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4884,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4972,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[2]);
/* posixwin.scm: 1956 $quote-args-list */
t5=lf[282];
f_4367(t5,t3,t4,t1);}

/* k4970 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1956 string-intersperse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[113]+1)))(3,*((C_word*)lf[113]+1),((C_word*)t0)[2],t1);}

/* k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4884(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4884,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_i_foreign_fixnum_argumentp(C_fix(-1));
t4=((*(int *)C_data_pointer(t2))=C_unfix(t3),C_SCHEME_UNDEFINED);
t5=C_a_i_bytevector(&a,1,C_fix(1));
t6=C_i_foreign_fixnum_argumentp(C_fix(-1));
t7=((*(int *)C_data_pointer(t5))=C_unfix(t6),C_SCHEME_UNDEFINED);
t8=C_a_i_bytevector(&a,1,C_fix(1));
t9=C_i_foreign_fixnum_argumentp(C_fix(-1));
t10=((*(int *)C_data_pointer(t8))=C_unfix(t9),C_SCHEME_UNDEFINED);
t11=C_a_i_bytevector(&a,1,C_fix(1));
t12=C_i_foreign_fixnum_argumentp(C_fix(-1));
t13=((*(int *)C_data_pointer(t11))=C_unfix(t12),C_SCHEME_UNDEFINED);
t14=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4940,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=t11,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=t1,a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[303]+1)))(6,*((C_word*)lf[303]+1),t14,t2,C_fix(0),C_SCHEME_FALSE,lf[304]);}

/* k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[303]+1)))(6,*((C_word*)lf[303]+1),t2,((C_word*)t0)[5],C_fix(0),C_SCHEME_FALSE,lf[304]);}

/* k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[303]+1)))(6,*((C_word*)lf[303]+1),t2,((C_word*)t0)[3],C_fix(0),C_SCHEME_FALSE,lf[304]);}

/* k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[303]+1)))(6,*((C_word*)lf[303]+1),t2,((C_word*)t0)[7],C_fix(0),C_SCHEME_FALSE,lf[304]);}

/* k4950 in k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4952,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_4956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)t0)[6])?C_fix(0):C_fix(1));
t4=(C_truep(((C_word*)t0)[4])?C_fix(0):C_fix(2));
if(C_truep(((C_word*)t0)[8])){
/* posixwin.scm: 1963 + */
C_plus(5,0,t2,t3,t4,C_fix(0));}
else{
/* posixwin.scm: 1963 + */
C_plus(5,0,t2,t3,t4,C_fix(4));}}

/* k4954 in k4950 in k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4956,2,t0,t1);}
t2=((C_word*)t0)[16];
t3=((C_word*)t0)[15];
t4=((C_word*)t0)[14];
t5=((C_word*)t0)[13];
t6=((C_word*)t0)[12];
t7=((C_word*)t0)[11];
t8=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4819,a[2]=t3,a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=t1,a[14]=t7,a[15]=t6,a[16]=t5,a[17]=t4,tmp=(C_word)a,a+=18,tmp);
if(C_truep(t2)){
t9=C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t9=t8;
f_4819(2,t9,C_SCHEME_FALSE);}}

/* k4817 in k4954 in k4950 in k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4823,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
t4=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t3=t2;
f_4823(2,t3,C_SCHEME_FALSE);}}

/* k4821 in k4817 in k4954 in k4950 in k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4823(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4823,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[17])?C_i_foreign_pointer_argumentp(((C_word*)t0)[17]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[16])?C_i_foreign_pointer_argumentp(((C_word*)t0)[16]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[15])?C_i_foreign_pointer_argumentp(((C_word*)t0)[15]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[14])?C_i_foreign_pointer_argumentp(((C_word*)t0)[14]):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(((C_word*)t0)[13]);
if(C_truep(stub1006(C_SCHEME_UNDEFINED,((C_word*)t0)[12],t1,C_SCHEME_FALSE,t2,t3,t4,t5,t6))){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4913,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm: 1966 open-input-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[231]+1)))(3,*((C_word*)lf[231]+1),t7,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))));}
else{
t8=t7;
f_4913(2,t8,C_SCHEME_FALSE);}}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1971 ##sys#update-errno */
t8=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k4931 in k4821 in k4817 in k4954 in k4950 in k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1972 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[301],((C_word*)t0)[3],lf[302],((C_word*)t0)[2]);}

/* k4911 in k4821 in k4817 in k4954 in k4950 in k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4917,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1967 open-output-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[232]+1)))(3,*((C_word*)lf[232]+1),t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
t3=t2;
f_4917(2,t3,C_SCHEME_FALSE);}}

/* k4915 in k4911 in k4821 in k4817 in k4954 in k4950 in k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4921,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1969 open-input-file* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[231]+1)))(3,*((C_word*)lf[231]+1),t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
/* posixwin.scm: 1965 values */
C_values(6,0,((C_word*)t0)[6],((C_word*)t0)[5],t1,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))),C_SCHEME_FALSE);}}

/* k4919 in k4915 in k4911 in k4821 in k4817 in k4954 in k4950 in k4946 in k4942 in k4938 in k4882 in k4879 in ##sys#process in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1965 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))),t1);}

/* process-run in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4785(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4785r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4785r(t0,t1,t2,t3);}}

static void C_ccall f_4785r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
/* posixwin.scm: 1927 process-spawn */
t6=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,*((C_word*)lf[278]+1),t2,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4802,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1928 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[293]+1)))(2,*((C_word*)lf[293]+1),t6);}}

/* k4800 in process-run in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4806,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1928 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[297]+1)))(3,*((C_word*)lf[297]+1),t2,((C_word*)t0)[2]);}

/* k4804 in k4800 in process-run in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1928 process-spawn */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[278]+1),((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4779(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4779,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[298],t2));}

/* ##sys#shell-command in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4762,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1911 get-environment-variable */
((C_proc3)C_retrieve_proc(*((C_word*)lf[295]+1)))(3,*((C_word*)lf[295]+1),t2,lf[296]);}

/* k4760 in ##sys#shell-command in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4762,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_get_shlcmd())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_mpointer(&a,(void*)C_shlcmd),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4774,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1915 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}}

/* k4772 in k4760 in ##sys#shell-command in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1916 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[293],lf[294]);}

/* current-process-id in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4755,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub981(C_SCHEME_UNDEFINED));}

/* process-spawn in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4668(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_4668r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4668r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4668r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4670,a[2]=t3,a[3]=t2,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4682,a[2]=t5,a[3]=((C_word)li108),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4687,a[2]=t6,a[3]=((C_word)li109),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4692,a[2]=t7,a[3]=((C_word)li110),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-arglst957974 */
t9=t8;
f_4692(t9,t1);}
else{
t9=C_i_car(t4);
t10=C_i_cdr(t4);
if(C_truep(C_i_nullp(t10))){
/* def-envlst958972 */
t11=t7;
f_4687(t11,t1,t9);}
else{
t11=C_i_car(t10);
t12=C_i_cdr(t10);
if(C_truep(C_i_nullp(t12))){
/* def-exactf959969 */
t13=t6;
f_4682(t13,t1,t9,t11);}
else{
t13=C_i_car(t12);
t14=C_i_cdr(t12);
if(C_truep(C_i_nullp(t14))){
/* body955964 */
t15=t5;
f_4670(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[2],t14);}}}}}

/* def-arglst957 in process-spawn in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4692(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4692,NULL,2,t0,t1);}
/* def-envlst958972 */
t2=((C_word*)t0)[2];
f_4687(t2,t1,C_SCHEME_FALSE);}

/* def-envlst958 in process-spawn in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4687,NULL,3,t0,t1,t2);}
/* def-exactf959969 */
t3=((C_word*)t0)[2];
f_4682(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf959 in process-spawn in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4682(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4682,NULL,4,t0,t1,t2,t3);}
/* body955964 */
t4=((C_word*)t0)[2];
f_4670(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body955 in process-spawn in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4670(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4670,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4674,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1902 $exec-setup */
t6=lf[286];
f_4530(t6,t5,lf[290],((C_word*)t0)[2],t2,t3,t4);}

/* k4672 in body955 in process-spawn in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[5])){
t2=C_spawnvpe(((C_word*)t0)[4],t1);
/* posixwin.scm: 1903 $exec-teardown */
f_4566(((C_word*)t0)[3],lf[290],lf[291],((C_word*)t0)[2],t2);}
else{
t2=C_spawnvp(((C_word*)t0)[4],t1);
/* posixwin.scm: 1903 $exec-teardown */
f_4566(((C_word*)t0)[3],lf[290],lf[291],((C_word*)t0)[2],t2);}}

/* process-execute in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr3r,(void*)f_4581r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4581r(t0,t1,t2,t3);}}

static void C_ccall f_4581r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4583,a[2]=t2,a[3]=((C_word)li102),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4595,a[2]=t4,a[3]=((C_word)li103),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4600,a[2]=t5,a[3]=((C_word)li104),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4605,a[2]=t6,a[3]=((C_word)li105),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-arglst915932 */
t8=t7;
f_4605(t8,t1);}
else{
t8=C_i_car(t3);
t9=C_i_cdr(t3);
if(C_truep(C_i_nullp(t9))){
/* def-envlst916930 */
t10=t6;
f_4600(t10,t1,t8);}
else{
t10=C_i_car(t9);
t11=C_i_cdr(t9);
if(C_truep(C_i_nullp(t11))){
/* def-exactf917927 */
t12=t5;
f_4595(t12,t1,t8,t10);}
else{
t12=C_i_car(t11);
t13=C_i_cdr(t11);
if(C_truep(C_i_nullp(t13))){
/* body913922 */
t14=t4;
f_4583(t14,t1,t8,t10,t12);}
else{
/* ##sys#error */
t14=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t1,lf[2],t13);}}}}}

/* def-arglst915 in process-execute in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4605(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4605,NULL,2,t0,t1);}
/* def-envlst916930 */
t2=((C_word*)t0)[2];
f_4600(t2,t1,C_SCHEME_FALSE);}

/* def-envlst916 in process-execute in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4600(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4600,NULL,3,t0,t1,t2);}
/* def-exactf917927 */
t3=((C_word*)t0)[2];
f_4595(t3,t1,t2,C_SCHEME_FALSE);}

/* def-exactf917 in process-execute in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4595(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4595,NULL,4,t0,t1,t2,t3);}
/* body913922 */
t4=((C_word*)t0)[2];
f_4583(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body913 in process-execute in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4583,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4587,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1897 $exec-setup */
t6=lf[286];
f_4530(t6,t5,lf[288],((C_word*)t0)[2],t2,t3,t4);}

/* k4585 in body913 in process-execute in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=C_execve(t1);
/* posixwin.scm: 1898 $exec-teardown */
f_4566(((C_word*)t0)[3],lf[288],lf[289],((C_word*)t0)[2],t2);}
else{
t2=C_execvp(t1);
/* posixwin.scm: 1898 $exec-teardown */
f_4566(((C_word*)t0)[3],lf[288],lf[289],((C_word*)t0)[2],t2);}}

/* $exec-teardown in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4566(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4566,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4570,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1889 ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k4568 in $exec-teardown in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_free_exec_args();
t3=C_free_exec_env();
t4=C_eqp(((C_word*)t0)[6],C_fix(-1));
if(C_truep(t4)){
/* posixwin.scm: 1893 ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* $exec-setup in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4530(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4530,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_i_check_string_2(t3,t2);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4537,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t5,a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=t3,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 1881 pathname-strip-directory */
t9=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t3);}

/* k4535 in $exec-setup in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_block_size(t1);
/* posixwin.scm: 1882 setarg */
t4=((C_word*)t0)[4];
f_4446(5,t4,t2,C_fix(0),t1,t3);}

/* k4538 in k4535 in $exec-setup in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4543,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1883 $quote-args-list */
t4=lf[282];
f_4367(t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm: 1883 build-exec-argvec */
f_4480(t2,((C_word*)t0)[7],C_SCHEME_FALSE,((C_word*)t0)[4],C_fix(1));}}

/* k4555 in k4538 in k4535 in $exec-setup in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1883 build-exec-argvec */
f_4480(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2],C_fix(1));}

/* k4541 in k4538 in k4535 in $exec-setup in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4546,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1884 build-exec-argvec */
f_4480(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k4544 in k4541 in k4538 in k4535 in $exec-setup in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4546,2,t0,t1);}
t2=C_flushall();
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4553,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1886 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[2]);}

/* k4551 in k4544 in k4541 in k4538 in k4535 in $exec-setup in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1886 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* build-exec-argvec in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4480(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4480,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(t3)){
t6=C_i_check_list_2(t3,t2);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4492,a[2]=t8,a[3]=t2,a[4]=t4,a[5]=((C_word)li98),tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_4492(t10,t1,t3,t5);}
else{
/* posixwin.scm: 1878 argvec-setter */
t6=t4;
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,t5,C_SCHEME_FALSE,C_fix(0));}}

/* doloop866 in build-exec-argvec in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4492(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4492,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm: 1874 argvec-setter */
t4=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,t3,C_SCHEME_FALSE,C_fix(0));}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4511,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_block_size(t4);
/* posixwin.scm: 1877 argvec-setter */
t8=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,t3,t4,t7);}}

/* k4509 in doloop866 in build-exec-argvec in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[5]);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4492(t4,((C_word*)t0)[2],t2,t3);}

/* setenv in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4463,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub855(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* setarg in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4446,5,t0,t1,t2,t3,t4);}
t5=C_i_foreign_fixnum_argumentp(t2);
t6=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=C_i_foreign_fixnum_argumentp(t4);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,stub845(C_SCHEME_UNDEFINED,t5,t6,t7));}

/* $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4367(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4367,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li93),tmp=(C_word)a,a+=6,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4410,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word)li94),tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4410(t8,t1,t2,C_SCHEME_END_OF_LIST);}}

/* loop in $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4410(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4410,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm: 1855 reverse */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=C_i_car(t2);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4438,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4441,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t4,a[7]=t6,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm: 1860 needs-quoting? */
t8=((C_word*)t0)[2];
f_4372(t8,t7,t4);}}

/* k4439 in loop in $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4441,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1860 string-append */
t2=((C_word*)t0)[8];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[7],lf[283],((C_word*)t0)[6],lf[284]);}
else{
t2=C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
/* posixwin.scm: 1857 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4410(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k4436 in loop in $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4438,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* posixwin.scm: 1857 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4410(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* needs-quoting? in $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4372(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4372,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4376,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1847 string-length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k4374 in needs-quoting? in $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4376,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t1,a[7]=((C_word)li92),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_4381(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k4374 in needs-quoting? in $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4381(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4381,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,((C_word*)t0)[6]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4394,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4405,a[2]=t4,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1851 string-ref */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[2],t2);}}

/* k4403 in loop in k4374 in needs-quoting? in $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1851 char-whitespace? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4392 in loop in k4374 in needs-quoting? in $quote-args-list in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}
else{
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1852 loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4381(t3,((C_word*)t0)[4],t2);}}

/* glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4250(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_4250r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4250r(t0,t1,t2);}}

static void C_ccall f_4250r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(12);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=((C_word)li90),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_4256(t6,t1,t2);}

/* conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4256(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4256,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4271,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li89),tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4277,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4281,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4356,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=t3;
/* posixwin.scm: 1809 make-pathname */
t8=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posixwin.scm: 1809 make-pathname */
t7=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,C_SCHEME_FALSE,lf[275],t4);}}

/* k4354 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1809 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4279 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* posixwin.scm: 1810 regexp */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k4282 in k4279 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4291,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=((C_word*)t0)[5];
/* posixwin.scm: 1811 directory */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posixwin.scm: 1811 directory */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[274],C_SCHEME_TRUE);}}

/* k4289 in k4282 in k4279 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4291,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4293,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li88),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_4293(t5,((C_word*)t0)[2],t1);}

/* loop in k4289 in k4282 in k4279 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4293(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4293,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[8]);
/* posixwin.scm: 1812 conc-loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_4256(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4310,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(t2);
/* posixwin.scm: 1813 string-match */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k4308 in loop in k4289 in k4282 in k4279 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4310,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li87),tmp=(C_word)a,a+=7,tmp);
/* g805806 */
t3=t2;
f_4314(t3,((C_word*)t0)[2],t1);}
else{
t2=C_i_cdr(((C_word*)t0)[6]);
/* posixwin.scm: 1815 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4293(t3,((C_word*)t0)[2],t2);}}

/* g805 in k4308 in loop in k4289 in k4282 in k4279 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4314(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4314,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4322,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* posixwin.scm: 1814 make-pathname */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}

/* k4320 in g805 in k4308 in loop in k4289 in k4282 in k4279 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4326,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* posixwin.scm: 1814 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4293(t4,t2,t3);}

/* k4324 in k4320 in g805 in k4308 in loop in k4289 in k4282 in k4279 in a4276 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4326,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a4270 in conc-loop in glob in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4271,2,t0,t1);}
/* posixwin.scm: 1808 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* set-buffering-mode! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4191(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4191r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4191r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4191r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4195,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1780 ##sys#check-port */
t6=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[262]);}

/* k4193 in set-buffering-mode! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4195(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4195,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[5]):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(t4,lf[264]);
if(C_truep(t6)){
t7=t5;
f_4201(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=C_eqp(t4,lf[265]);
if(C_truep(t7)){
t8=C_fix((C_word)_IOLBF);
t9=t5;
f_4201(2,t9,t8);}
else{
t8=C_eqp(t4,lf[266]);
if(C_truep(t8)){
t9=t5;
f_4201(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixwin.scm: 1786 ##sys#error */
t9=*((C_word*)lf[62]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[262],lf[267],((C_word*)t0)[4],((C_word*)t0)[2]);}}}}

/* k4199 in k4193 in set-buffering-mode! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4201,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[262]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(7));
t5=C_eqp(lf[78],t4);
if(C_truep(t5)){
t6=C_setvbuf(((C_word*)t0)[2],t1,((C_word*)t0)[4]);
t7=t3;
f_4210(t7,C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_4210(t6,C_SCHEME_TRUE);}}

/* k4208 in k4199 in k4193 in set-buffering-mode! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_4210(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm: 1792 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],lf[262],lf[263],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* terminal-port? in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4185(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4185,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4189,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1770 ##sys#check-port */
t4=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[261]);}

/* k4187 in terminal-port? in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* _exit in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4169(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_4169r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4169r(t0,t1,t2);}}

static void C_ccall f_4169r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
if(C_truep(C_i_pairp(t2))){
t3=C_i_car(t2);
t4=t1;
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub742(C_SCHEME_UNDEFINED,t5));}
else{
t3=t1;
t4=C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub742(C_SCHEME_UNDEFINED,t4));}}

/* local-timezone-abbreviation in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4157,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,stub737(t2),C_fix(0));}

/* local-time->seconds in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4142,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4146,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1751 check-time-vector */
f_3920(t3,lf[255],t2);}

/* k4144 in local-time->seconds in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4146,2,t0,t1);}
t2=C_a_mktime(&a,1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4152,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1753 fp= */
t4=*((C_word*)lf[257]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[258]);}

/* k4150 in k4144 in local-time->seconds in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixwin.scm: 1754 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[255],lf[256],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* time->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4075(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4075r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4075r(t0,t1,t2,t3);}}

static void C_ccall f_4075r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4079,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_4079(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_4079(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k4077 in time->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1739 check-time-vector */
f_3920(t2,lf[252],((C_word*)t0)[2]);}

/* k4080 in k4077 in time->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4082(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4082,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=C_i_check_string_2(((C_word*)t0)[4],lf[252]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4101,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1743 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,stub701(t4,t3),C_fix(0));}}

/* k4102 in k4080 in k4077 in time->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posixwin.scm: 1747 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixwin.scm: 1748 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[252],lf[254],((C_word*)t0)[2]);}}

/* k4099 in k4080 in k4077 in time->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4101,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],stub707(t3,t2,t1),C_fix(0));}

/* k4089 in k4080 in k4077 in time->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posixwin.scm: 1744 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[252],lf[253],((C_word*)t0)[2]);}}

/* seconds->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4017(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4017r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4017r(t0,t1,t2);}}

static void C_ccall f_4017r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4021,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm: 1729 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[248]+1)))(2,*((C_word*)lf[248]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_4021(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k4019 in seconds->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4024,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=t1;
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_integer_argumentp(t3);
t6=stub681(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k4022 in k4019 in seconds->string in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posixwin.scm: 1732 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixwin.scm: 1733 ##sys#error */
t2=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[250],lf[251],((C_word*)t0)[2]);}}

/* seconds->utc-time in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3973r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3973r(t0,t1,t2);}}

static void C_ccall f_3973r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3977,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm: 1723 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[248]+1)))(2,*((C_word*)lf[248]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=C_i_check_number_2(t5,lf[249]);
/* posixwin.scm: 1725 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[247]+1)))(4,*((C_word*)lf[247]+1),t1,t5,C_SCHEME_TRUE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3975 in seconds->utc-time in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[249]);
/* posixwin.scm: 1725 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[247]+1)))(4,*((C_word*)lf[247]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* seconds->local-time in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3939(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3939r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3939r(t0,t1,t2);}}

static void C_ccall f_3939r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3943,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posixwin.scm: 1719 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[248]+1)))(2,*((C_word*)lf[248]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=C_i_check_number_2(t5,lf[246]);
/* posixwin.scm: 1721 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[247]+1)))(4,*((C_word*)lf[247]+1),t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3941 in seconds->local-time in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[246]);
/* posixwin.scm: 1721 ##sys#decode-seconds */
((C_proc4)C_retrieve_proc(*((C_word*)lf[247]+1)))(4,*((C_word*)lf[247]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* check-time-vector in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3920(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3920,NULL,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posixwin.scm: 1717 ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[245],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* get-environment-variables in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3854,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3860,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3860(t5,t1,C_fix(0));}

/* loop in get-environment-variables in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3860,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3864,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub634(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k3862 in loop in get-environment-variables in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3864,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3872,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word)li73),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_3872(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k3862 in loop in get-environment-variables in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3872(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3872,NULL,3,t0,t1,t2);}
t3=C_eqp(C_make_character(61),C_subchar(((C_word*)t0)[6],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 1706 substring */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[6],C_fix(0),t2);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* posixwin.scm: 1707 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k3896 in scan in k3862 in loop in get-environment-variables in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3902,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=C_block_size(((C_word*)t0)[3]);
/* posixwin.scm: 1706 substring */
t5=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,((C_word*)t0)[3],t3,t4);}

/* k3900 in k3896 in scan in k3862 in loop in get-environment-variables in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3902,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3890,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1706 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3860(t5,t3,t4);}

/* k3888 in k3900 in k3896 in scan in k3862 in loop in get-environment-variables in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3890,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3834(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3834,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[240]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3842,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1694 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3840 in unsetenv in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3817(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3817,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[239]);
t5=C_i_check_string_2(t3,lf[239]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3828,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1689 ##sys#make-c-string */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k3826 in setenv in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3828,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3832,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1689 ##sys#make-c-string */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k3830 in k3826 in setenv in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* duplicate-fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3787(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3787r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3787r(t0,t1,t2,t3);}}

static void C_ccall f_3787r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[237]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3794,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_3794(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[237]);
t8=t5;
f_3794(t8,C_dup2(t2,t6));}}

/* k3792 in duplicate-fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3794(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3794,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3797,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3803,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1678 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k3801 in k3792 in duplicate-fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1679 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[237],lf[238],((C_word*)t0)[2]);}

/* k3795 in k3792 in duplicate-fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3752(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3752,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3756,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1660 ##sys#check-port */
t4=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[233]);}

/* k3754 in port->fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3785,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1661 ##sys#peek-unsigned-integer */
t3=*((C_word*)lf[236]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3783 in k3754 in port->fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3785,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posixwin.scm: 1667 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[46],lf[233],lf[234],((C_word*)t0)[2]);}
else{
t2=C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3765,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3771,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1664 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k3769 in k3783 in k3754 in port->fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1665 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[233],lf[235],((C_word*)t0)[2]);}

/* k3763 in k3783 in k3754 in port->fileno in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3738(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3738r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3738r(t0,t1,t2,t3);}}

static void C_ccall f_3738r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[232]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3750,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1656 mode */
f_3669(t5,C_SCHEME_FALSE,t3);}

/* k3748 in open-output-file* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3750,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1656 check */
f_3706(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3724r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3724r(t0,t1,t2,t3);}}

static void C_ccall f_3724r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[231]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3736,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1652 mode */
f_3669(t5,C_SCHEME_TRUE,t3);}

/* k3734 in open-input-file* in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3736,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1652 check */
f_3706(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3706(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3706,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3710,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1643 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3708 in check in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3710,2,t0,t1);}
if(C_truep(C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1645 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[37],lf[229],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3722,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1646 ##sys#make-port */
t3=*((C_word*)lf[127]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[128]+1),lf[230],lf[78]);}}

/* k3720 in k3708 in check in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* mode in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3669(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3669,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3677,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t3))){
t5=C_i_car(t3);
t6=C_eqp(t5,lf[223]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixwin.scm: 1638 ##sys#error */
t8=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[224],t5);}
else{
/* posixwin.scm: 1634 ##sys#make-c-string */
t8=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,lf[225]);}}
else{
/* posixwin.scm: 1639 ##sys#error */
t7=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[226],t5);}}
else{
if(C_truep(t2)){
/* posixwin.scm: 1634 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[227]);}
else{
/* posixwin.scm: 1634 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[228]);}}}

/* k3675 in mode in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1634 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-execute-access? in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3660(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3660,3,t0,t1,t2);}
/* posixwin.scm: 1618 check */
f_3624(t1,t2,C_fix((C_word)2),lf[219]);}

/* file-write-access? in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3654(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3654,3,t0,t1,t2);}
/* posixwin.scm: 1617 check */
f_3624(t1,t2,C_fix((C_word)4),lf[218]);}

/* file-read-access? in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3648,3,t0,t1,t2);}
/* posixwin.scm: 1616 check */
f_3624(t1,t2,C_fix((C_word)2),lf[217]);}

/* check in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3624(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3624,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3642,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3646,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1613 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t7,t2);}

/* k3644 in check in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1613 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3640 in check in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3642,2,t0,t1);}
t2=C_test_access(t1,((C_word*)t0)[3]);
t3=C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3634,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixwin.scm: 1614 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3632 in k3640 in check in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-file-mode in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3594(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3594,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[215]);
t5=C_i_check_exact_2(t3,lf[215]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3618,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3622,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1602 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t7,t2);}

/* k3620 in change-file-mode in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1602 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3616 in change-file-mode in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3618,2,t0,t1);}
t2=C_chmod(t1,((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3610,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1603 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3608 in k3616 in change-file-mode in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1604 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[215],lf[216],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#interrupt-hook in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3538,4,t0,t1,t2,t3);}
t4=C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3548,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1510 h */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixwin.scm: 1512 oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k3546 in ##sys#interrupt-hook in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1511 ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3525,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[176]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_vector_set(((C_word*)t0)[2],t2,t3));}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_set(((C_word*)t0)[2],t2,t3));}}

/* signal-handler in k3512 in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3516(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3516,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[175]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_3440r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3440r(t0,t1,t2);}}

static void C_ccall f_3440r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3444,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_3444(2,t4,C_fixnum_or(*((C_word*)lf[21]+1),*((C_word*)lf[23]+1)));}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_3444(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k3442 in create-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3447,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_pipe(C_SCHEME_FALSE,t1),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3456,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1447 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixwin.scm: 1449 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k3454 in k3442 in create-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1448 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[37],lf[145],lf[146]);}

/* k3445 in k3442 in create-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1449 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3420r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3420r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3420r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[144]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3424,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k3422 in with-output-to-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3424,2,t0,t1);}
t2=C_mutate((C_word*)lf[144]+1 /* (set! standard-output ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3430,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li54),tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1432 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a3429 in k3422 in with-output-to-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3430(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_3430r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3430r(t0,t1,t2);}}

static void C_ccall f_3430r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3434,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1434 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3432 in a3429 in k3422 in with-output-to-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[144]+1 /* (set! standard-output ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3400r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3400r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3400r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[142]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3404,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k3402 in with-input-from-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3404,2,t0,t1);}
t2=C_mutate((C_word*)lf[142]+1 /* (set! standard-input ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3410,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1422 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a3409 in k3402 in with-input-from-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_3410r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3410r(t0,t1,t2);}}

static void C_ccall f_3410r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3414,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1424 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3412 in a3409 in k3402 in with-input-from-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[142]+1 /* (set! standard-input ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3376r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3376r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3376r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3380,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k3378 in call-with-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3385,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li49),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3391,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1412 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3390 in k3378 in call-with-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3391(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3391r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3391r(t0,t1,t2);}}

static void C_ccall f_3391r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3395,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1415 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3393 in a3390 in k3378 in call-with-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3384 in k3378 in call-with-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3385,2,t0,t1);}
/* posixwin.scm: 1413 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_3352r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3352r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3352r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3356,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k3354 in call-with-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3361,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3367,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li47),tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1404 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3366 in k3354 in call-with-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3367(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3367r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3367r(t0,t1,t2);}}

static void C_ccall f_3367r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3371,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1407 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k3369 in a3366 in k3354 in call-with-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3360 in k3354 in call-with-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3361,2,t0,t1);}
/* posixwin.scm: 1405 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3333,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3337,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1391 ##sys#check-port */
t4=*((C_word*)lf[137]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[135]);}

/* k3335 in close-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3337,2,t0,t1);}
t2=close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3340,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1393 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3338 in k3335 in close-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t2)){
/* posixwin.scm: 1394 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[37],lf[135],lf[136],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* open-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3297r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3297r(t0,t1,t2,t3);}}

static void C_ccall f_3297r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[134]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[131]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3311,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[131]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3318,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1386 ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=C_eqp(t6,lf[132]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3328,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1387 ##sys#make-c-string */
t11=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixwin.scm: 1361 ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[133],t6);}}}

/* k3326 in open-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3328,2,t0,t1);}
t2=open_binary_output_pipe(&a,1,t1);
/* posixwin.scm: 1383 check */
f_3243(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k3316 in open-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3318,2,t0,t1);}
t2=open_text_output_pipe(&a,1,t1);
/* posixwin.scm: 1383 check */
f_3243(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k3309 in open-output-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1383 check */
f_3243(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3261r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3261r(t0,t1,t2,t3);}}

static void C_ccall f_3261r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[130]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[131]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3275,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[131]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3282,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1376 ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=C_eqp(t6,lf[132]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3292,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1377 ##sys#make-c-string */
t11=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixwin.scm: 1361 ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[133],t6);}}}

/* k3290 in open-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3292,2,t0,t1);}
t2=open_binary_input_pipe(&a,1,t1);
/* posixwin.scm: 1373 check */
f_3243(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3280 in open-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3282,2,t0,t1);}
t2=open_text_input_pipe(&a,1,t1);
/* posixwin.scm: 1373 check */
f_3243(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k3273 in open-input-pipe in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1373 check */
f_3243(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3243(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3243,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3247,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1363 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k3245 in check in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3247,2,t0,t1);}
if(C_truep(C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1365 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[37],lf[126],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3259,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1366 ##sys#make-port */
t3=*((C_word*)lf[127]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[128]+1),lf[129],lf[78]);}}

/* k3257 in k3245 in check in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_2868,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[112]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2875,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=C_block_size(t2);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3008,a[2]=t4,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1300 cwd */
t8=((C_word*)t0)[5];
f_2812(t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=t4,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t8=C_block_size(t2);
if(C_truep(C_fixnum_lessp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3215,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1302 sref */
t10=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,t2,C_fix(0));}
else{
t9=t7;
f_3014(t9,C_SCHEME_FALSE);}}}

/* k3213 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3014(t3,(C_truep(t2)?t2:C_eqp(C_make_character(92),t1)));}

/* k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3014(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3014,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3021,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3025,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1304 cwd */
t4=((C_word*)t0)[6];
f_2812(t4,t3);}
else{
t2=C_block_size(((C_word*)t0)[7]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1307 cwd */
t5=((C_word*)t0)[6];
f_2812(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3044,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3190,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3201,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1308 sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[7],C_fix(0));}}}

/* k3199 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1308 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(126),t1);}

/* k3188 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3190,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3197,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1309 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(1));}
else{
t2=((C_word*)t0)[4];
f_3044(t2,C_SCHEME_FALSE);}}

/* k3195 in k3188 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3044(t3,(C_truep(t2)?t2:C_eqp(C_make_character(92),t1)));}

/* k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3044(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3044,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3051,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1311 cwd */
t4=((C_word*)t0)[5];
f_2812(t4,t3);}
else{
t2=C_block_size(((C_word*)t0)[7]);
t3=C_eqp(C_fix(2),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3080,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1317 cwd */
t5=((C_word*)t0)[5];
f_2812(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3086,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3162,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3183,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1318 sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[7],C_fix(0));}}}

/* k3181 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1318 alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3160 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3162,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3168,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3179,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1319 sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_3086(t2,C_SCHEME_FALSE);}}

/* k3177 in k3160 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1319 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k3166 in k3160 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3168,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1320 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_3086(t2,C_SCHEME_FALSE);}}

/* k3173 in k3166 in k3160 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3086(t3,(C_truep(t2)?t2:C_eqp(C_make_character(92),t1)));}

/* k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_3086(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3086,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
f_2875(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3159,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1322 sref */
t5=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[8],C_fix(0));}}

/* k3157 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1322 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(47),t1);}

/* k3136 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3138,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3155,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1323 sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_3092(2,t2,C_SCHEME_FALSE);}}

/* k3153 in k3136 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1323 alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3142 in k3136 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3144,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3151,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1324 sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_3092(2,t2,C_SCHEME_FALSE);}}

/* k3149 in k3142 in k3136 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1324 char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k3090 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3092,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1326 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[4],C_fix(1),C_fix(3));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3135,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1330 sref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[4],C_fix(0));}}

/* k3133 in k3090 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3135,2,t0,t1);}
t2=C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1332 cwd */
t6=((C_word*)t0)[2];
f_2812(t6,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3131,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1335 cwd */
t5=((C_word*)t0)[2];
f_2812(t5,t4);}}

/* k3129 in k3133 in k3090 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1335 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[125],((C_word*)t0)[2]);}

/* k3122 in k3133 in k3090 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1332 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(2));}

/* k3118 in k3133 in k3090 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1331 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3097 in k3090 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3103,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[2]);
/* posixwin.scm: 1328 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(3),t3);}

/* k3101 in k3097 in k3090 in k3084 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1325 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[124],t1);}

/* k3078 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1317 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[123],((C_word*)t0)[2]);}

/* k3065 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1311 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(3));}

/* k3049 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1313 user */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k3053 in k3049 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3055,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3059,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[2]);
/* posixwin.scm: 1314 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(1),t3);}

/* k3057 in k3053 in k3049 in k3042 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1310 sappend */
t2=((C_word*)t0)[5];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],lf[122],((C_word*)t0)[2],t1);}

/* k3036 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1307 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[121],((C_word*)t0)[2]);}

/* k3023 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1304 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[2],t1,C_fix(0),C_fix(2));}

/* k3019 in k3012 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1303 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3006 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_3008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1300 sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[120]);}

/* k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2994,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_block_size(t1);
/* posixwin.scm: 1336 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t3,t1,C_fix(3),t4);}

/* k2992 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[88]+1);
/* g374375 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[119]);}

/* k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2882,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li40),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_2884(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2884(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2884,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2891,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 1338 null? */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2891,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1339 null? */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* posixwin.scm: 1350 string=? */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,lf[118],t4);}}

/* k2964 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2966,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[7]);
/* posixwin.scm: 1348 loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2884(t3,((C_word*)t0)[5],((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* posixwin.scm: 1352 string=? */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[117],t3);}}

/* k2973 in k2964 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2975,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
/* posixwin.scm: 1348 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2884(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[6]);
/* posixwin.scm: 1348 loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2884(t4,((C_word*)t0)[4],((C_word*)t0)[3],t3);}}

/* k2895 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2897,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1340 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[6],((C_word*)t0)[5],C_fix(0),C_fix(3));}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2944,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[5]);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
/* posixwin.scm: 1341 sref */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[5],t4);}}

/* k2942 in k2895 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2944,2,t0,t1);}
t2=C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1343 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[2],C_fix(0),C_fix(3));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2932,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1346 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[2],C_fix(0),C_fix(3));}}

/* k2930 in k2942 in k2895 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2936,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2940,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1347 reverse */
t4=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2938 in k2930 in k2942 in k2895 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[113]+1);
/* g383384 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[114]);}

/* k2934 in k2930 in k2942 in k2895 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1345 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2911 in k2942 in k2895 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2917,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2921,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_cons(&a,2,lf[115],((C_word*)t0)[2]);
/* posixwin.scm: 1344 reverse */
t5=*((C_word*)lf[116]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* k2919 in k2911 in k2942 in k2895 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[113]+1);
/* g383384 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[114]);}

/* k2915 in k2911 in k2942 in k2895 in k2889 in loop in k2880 in k2873 in canonical-path in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1342 sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2812(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2812,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[2],a[3]=((C_word)li38),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[111]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a2820 in cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2821,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2827,a[2]=t2,a[3]=((C_word)li33),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2845,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li37),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[110]+1)))(4,*((C_word*)lf[110]+1),t1,t3,t4);}

/* a2844 in a2820 in cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2851,a[2]=((C_word*)t0)[3],a[3]=((C_word)li34),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[2],a[3]=((C_word)li36),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a2856 in a2844 in a2820 in cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2857r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2857r(t0,t1,t2);}}

static void C_ccall f_2857r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2863,a[2]=t2,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp);
/* k399404 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2862 in a2856 in a2844 in a2820 in cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2863,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a2850 in a2844 in a2820 in cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2851,2,t0,t1);}
/* posixwin.scm: 1295 cw */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a2826 in a2820 in cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2827,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2833,a[2]=t2,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
/* k399404 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2832 in a2826 in a2820 in cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2833,2,t0,t1);}
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[108]))){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[109]);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[109]);}}

/* k2814 in cwd in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g402403 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* current-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2745r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2745r(t0,t1,t2);}}

static void C_ccall f_2745r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_2749(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_2749(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k2747 in current-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2749,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1273 change-directory */
((C_proc3)C_retrieve_proc(*((C_word*)lf[90]+1)))(3,*((C_word*)lf[90]+1),((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2758,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1274 make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(256));}}

/* k2756 in k2747 in current-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2758,2,t0,t1);}
t2=C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2761,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1276 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2759 in k2756 in k2747 in current-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* posixwin.scm: 1278 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4]);}
else{
/* posixwin.scm: 1279 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],lf[98],lf[101]);}}

/* directory? in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2718(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2718,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[99]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2725,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2739,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2743,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1266 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t6,t2);}

/* k2741 in directory? in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1266 ##sys#platform-fixup-pathname */
((C_proc3)C_retrieve_proc(*((C_word*)lf[100]+1)))(3,*((C_word*)lf[100]+1),((C_word*)t0)[2],t1);}

/* k2737 in directory? in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1265 ##sys#file-info */
t2=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2723 in directory? in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(1),t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2558(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_2558r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2558r(t0,t1,t2);}}

static void C_ccall f_2558r(C_word t0,C_word t1,C_word t2){
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
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2560,a[2]=((C_word*)t0)[2],a[3]=((C_word)li26),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2661,a[2]=t3,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2666,a[2]=t4,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* def-spec286328 */
t6=t5;
f_2666(t6,t1);}
else{
t6=C_i_car(t2);
t7=C_i_cdr(t2);
if(C_truep(C_i_nullp(t7))){
/* def-show-dotfiles?287326 */
t8=t4;
f_2661(t8,t1,t6);}
else{
t8=C_i_car(t7);
t9=C_i_cdr(t7);
if(C_truep(C_i_nullp(t9))){
/* body284292 */
t10=t3;
f_2560(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[2],t9);}}}}

/* def-spec286 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2666(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2666,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2674,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1236 current-directory */
((C_proc2)C_retrieve_proc(*((C_word*)lf[98]+1)))(2,*((C_word*)lf[98]+1),t2);}

/* k2672 in def-spec286 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?287326 */
t2=((C_word*)t0)[3];
f_2661(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?287 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2661(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2661,NULL,3,t0,t1,t2);}
/* body284292 */
t3=((C_word*)t0)[2];
f_2560(t3,t1,t2,C_SCHEME_FALSE);}

/* body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2560(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2560,NULL,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[95]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2567,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1238 make-string */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_fix(256));}

/* k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2570,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1239 ##sys#make-pointer */
((C_proc2)C_retrieve_proc(*((C_word*)lf[97]+1)))(2,*((C_word*)lf[97]+1),t2);}

/* k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1240 ##sys#make-pointer */
((C_proc2)C_retrieve_proc(*((C_word*)lf[97]+1)))(2,*((C_word*)lf[97]+1),t2);}

/* k2571 in k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2577,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2660,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1241 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[4]);}

/* k2658 in k2571 in k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1241 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2575 in k2571 in k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2577,2,t0,t1);}
t2=C_opendir(t1,((C_word*)t0)[7]);
if(C_truep(C_null_pointerp(((C_word*)t0)[7]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2586,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1244 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2594,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word)li25),tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2594(t6,((C_word*)t0)[6]);}}

/* loop in k2575 in k2571 in k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2594(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2594,NULL,2,t0,t1);}
t2=C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep(C_null_pointerp(((C_word*)t0)[5]))){
t3=C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2604,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1253 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k2602 in loop in k2575 in k2571 in k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2604,2,t0,t1);}
t2=C_i_string_ref(t1,C_fix(0));
t3=C_i_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2616,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(t2,C_make_character(46));
if(C_truep(t6)){
t7=C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_2616(t8,t7);}
else{
t8=C_eqp(t4,C_make_character(46));
if(C_truep(t8)){
t9=C_eqp(((C_word*)t0)[5],C_fix(2));
t10=t5;
f_2616(t10,(C_truep(t9)?t9:C_i_not(((C_word*)t0)[2])));}
else{
t9=t5;
f_2616(t9,C_i_not(((C_word*)t0)[2]));}}}
else{
t7=t5;
f_2616(t7,C_SCHEME_FALSE);}}

/* k2614 in k2602 in loop in k2575 in k2571 in k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2616(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2616,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1260 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2594(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1261 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2594(t3,t2);}}

/* k2624 in k2614 in k2602 in loop in k2575 in k2571 in k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2626,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2584 in k2575 in k2571 in k2568 in k2565 in body284 in directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1245 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[95],lf[96],((C_word*)t0)[2]);}

/* delete-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2533,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[92]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2540,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2556,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1226 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2554 in delete-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1226 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2538 in delete-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2543,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(0),C_rmdir(t1));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2549,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1228 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2547 in k2538 in delete-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1229 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[92],lf[93],((C_word*)t0)[2]);}

/* k2541 in k2538 in delete-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2508(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2508,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[90]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2515,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2531,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1216 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2529 in change-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1216 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2513 in change-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2518,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(0),C_chdir(t1));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2524,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1218 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2522 in k2513 in change-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1219 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[90],lf[91],((C_word*)t0)[2]);}

/* k2516 in k2513 in change-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2351(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2351r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2351r(t0,t1,t2,t3);}}

static void C_ccall f_2351r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2355,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2355(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2355(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[3],lf[84]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2361,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1207 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[3]);}

/* k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2364,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t1;
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2369,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1196 string-split */
((C_proc4)C_retrieve_proc(*((C_word*)lf[88]+1)))(4,*((C_word*)lf[88]+1),t4,t3,lf[89]);}
else{
t3=t1;
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2484,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1179 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}

/* k2482 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2484,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1180 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2474 in k2482 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1181 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[84],lf[85],((C_word*)t0)[2]);}

/* k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2369,2,t0,t1);}
t2=C_i_car(t1);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_cdr(t1);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2381,a[2]=t7,a[3]=t4,a[4]=((C_word)li21),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_2381(t9,((C_word*)t0)[2],t5);}

/* loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2381(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2381,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2389,a[2]=((C_word*)t0)[3],a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2451,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
/* g224225 */
t6=t3;
f_2389(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2449 in loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2381(t3,((C_word*)t0)[2],t2);}

/* g224 in loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2389(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2389,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2394,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1200 string-append */
t4=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)((C_word*)t0)[2])[1],lf[87],t2);}

/* k2392 in g224 in loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2394,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
t4=((C_word*)((C_word*)t0)[3])[1];
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2423,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2407,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1185 file-exists? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),t6,t4);}

/* k2405 in k2392 in g224 in loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2407,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1186 ##sys#file-info */
t3=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2423(t2,C_SCHEME_FALSE);}}

/* k2408 in k2405 in k2392 in g224 in loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
f_2423(t3,C_eqp(C_fix(1),t2));}
else{
t2=((C_word*)t0)[2];
f_2423(t2,C_SCHEME_FALSE);}}

/* k2421 in k2392 in g224 in loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2423(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2423,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1179 ##sys#make-c-string */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k2440 in k2421 in k2392 in g224 in loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2442,2,t0,t1);}
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1180 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2432 in k2440 in k2421 in k2392 in g224 in loop217 in k2367 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1181 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[84],lf[85],((C_word*)t0)[2]);}

/* k2362 in k2359 in k2353 in create-directory in k2347 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* set-file-position! in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2289r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2289r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2289r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_car(t4):C_fix((C_word)SEEK_SET));
t7=C_i_check_exact_2(t3,lf[76]);
t8=C_i_check_exact_2(t6,lf[76]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2302,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_negativep(t3))){
/* posixwin.scm: 1149 ##sys#signal-hook */
t10=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t9,lf[81],lf[76],lf[82],t3,t2);}
else{
t10=t9;
f_2302(2,t10,C_SCHEME_UNDEFINED);}}

/* k2300 in set-file-position! in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2314,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1150 port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[80]+1)))(3,*((C_word*)lf[80]+1),t3,((C_word*)t0)[4]);}

/* k2312 in k2300 in set-file-position! in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[5],C_fix(7));
t3=C_eqp(t2,lf[78]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_2308(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_2308(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t2=C_lseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_2308(2,t3,t2);}
else{
/* posixwin.scm: 1156 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[46],lf[76],lf[79],((C_word*)t0)[5]);}}}

/* k2306 in k2300 in set-file-position! in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixwin.scm: 1157 posix-error */
t2=lf[5];
f_1904(7,t2,((C_word*)t0)[4],lf[37],lf[76],lf[77],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* f6598 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f6598(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6598,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[75]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6604 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f6604(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6604,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[74]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6610 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f6610(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6610,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[73]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* f6616 in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f6616(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f6616,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[72]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* symbolic-link? in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2260,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[71]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* regular-file? in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2237,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[69]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2244,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2258,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1126 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}

/* k2256 in regular-file? in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1126 ##sys#file-info */
t2=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2242 in regular-file? in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(0),t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* file-permissions in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2231,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2235,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1122 ##sys#stat */
f_2134(t3,t2);}

/* k2233 in file-permissions in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2225,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2229,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1121 ##sys#stat */
f_2134(t3,t2);}

/* k2227 in file-owner in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2219,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2223,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1120 ##sys#stat */
f_2134(t3,t2);}

/* k2221 in file-change-time in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2223,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2213,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2217,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1119 ##sys#stat */
f_2134(t3,t2);}

/* k2215 in file-access-time in k2209 in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2217,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-size in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2203,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2207,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1102 ##sys#stat */
f_2134(t3,t2);}

/* k2205 in file-size in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size));}

/* file-stat in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2172r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2172r(t0,t1,t2,t3);}}

static void C_ccall f_2172r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2176,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2176(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2176(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[62]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k2174 in file-stat in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2179,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1096 ##sys#stat */
f_2134(t2,((C_word*)t0)[2]);}

/* k2177 in k2174 in file-stat in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2179,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(0),C_fix(0),C_fix(0),C_fix(0)));}

/* ##sys#stat in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_fcall f_2134(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2134,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2138,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(t2))){
t4=t3;
f_2138(2,t4,C_fstat(t2));}
else{
if(C_truep(C_i_stringp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2163,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2167,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1089 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t5,t2);}
else{
/* posixwin.scm: 1090 ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[46],lf[60],t2);}}}

/* k2165 in ##sys#stat in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1089 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2161 in ##sys#stat in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_stat(t1);
t3=((C_word*)t0)[2];
f_2138(2,t3,t2);}

/* k2136 in ##sys#stat in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2138,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2147,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1092 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2145 in k2136 in ##sys#stat in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1093 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],lf[59],((C_word*)t0)[2]);}

/* file-mkstemp in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2096(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2096,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[52]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2103,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1058 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2101 in file-mkstemp in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2103,2,t0,t1);}
t2=C_mkstemp(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2106,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1060 string-length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}

/* k2104 in k2101 in file-mkstemp in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2109,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1062 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_2109(2,t4,C_SCHEME_UNDEFINED);}}

/* k2124 in k2104 in k2101 in file-mkstemp in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1063 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[52],lf[54],((C_word*)t0)[2]);}

/* k2107 in k2104 in k2101 in file-mkstemp in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2109,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2116,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1064 ##sys#substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k2114 in k2107 in k2104 in k2101 in file-mkstemp in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1064 values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2054r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2054r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2054r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=C_i_check_exact_2(t2,lf[48]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2061,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;
f_2061(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1045 ##sys#signal-hook */
t7=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[46],lf[48],lf[50],t3);}}
else{
/* posixwin.scm: 1045 ##sys#signal-hook */
t7=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[46],lf[48],lf[50],t3);}}

/* k2059 in file-write in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2061(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2061,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[5]):C_block_size(((C_word*)t0)[4]));
t4=C_i_check_exact_2(t3,lf[48]);
t5=C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2070,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2076,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1050 ##sys#update-errno */
t9=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* k2074 in k2059 in file-write in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1051 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[48],lf[49],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2068 in k2059 in file-write in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2009r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2009r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2009r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=C_i_check_exact_2(t2,lf[44]);
t6=C_i_check_exact_2(t3,lf[44]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2019,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t7;
f_2019(2,t8,C_i_car(t4));}
else{
/* posixwin.scm: 1032 make-string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k2017 in file-read in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_byteblockp(t1))){
t3=t2;
f_2022(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1034 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[46],lf[44],lf[47],t1);}}
else{
/* posixwin.scm: 1034 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[46],lf[44],lf[47],t1);}}

/* k2020 in k2017 in file-read in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2022,2,t0,t1);}
t2=C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2025,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2034,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1037 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,((C_word*)t0)[4],t2));}}

/* k2032 in k2020 in k2017 in file-read in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1038 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[44],lf[45],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2023 in k2020 in k2017 in file-read in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2025,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1991,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[41]);
if(C_truep(C_fixnum_lessp(C_close(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2004,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1024 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2002 in file-close in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1025 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[41],lf[42],((C_word*)t0)[2]);}

/* file-open in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_1950r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1950r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1950r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=C_i_pairp(t4);
t6=(C_truep(t5)?C_i_car(t4):((C_word*)t0)[2]);
t7=C_i_check_string_2(t2,lf[36]);
t8=C_i_check_exact_2(t3,lf[36]);
t9=C_i_check_exact_2(t6,lf[36]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1967,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1983,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1014 ##sys#expand-home-path */
((C_proc3)C_retrieve_proc(*((C_word*)lf[40]+1)))(3,*((C_word*)lf[40]+1),t11,t2);}

/* k1981 in file-open in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1014 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1965 in file-open in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1967,2,t0,t1);}
t2=C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1970,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1976,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1016 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k1974 in k1965 in file-open in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1017 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[5],lf[37],lf[36],lf[38],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1968 in k1965 in file-open in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* posix-error in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_1904r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1904r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1904r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1908,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 945  ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k1906 in posix-error in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1908,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1915,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1919,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub12(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k1917 in k1906 in posix-error in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 946  string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[7],t1);}

/* k1913 in k1906 in posix-error in k1890 in k1887 in k1884 in k1881 in k1878 in k1875 in k1872 */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[6]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[470] = {
{"toplevel:posixwin_scm",(void*)C_posix_toplevel},
{"f_1874:posixwin_scm",(void*)f_1874},
{"f_1877:posixwin_scm",(void*)f_1877},
{"f_1880:posixwin_scm",(void*)f_1880},
{"f_1883:posixwin_scm",(void*)f_1883},
{"f_1886:posixwin_scm",(void*)f_1886},
{"f_1889:posixwin_scm",(void*)f_1889},
{"f_1892:posixwin_scm",(void*)f_1892},
{"f_5921:posixwin_scm",(void*)f_5921},
{"f_5957:posixwin_scm",(void*)f_5957},
{"f_5934:posixwin_scm",(void*)f_5934},
{"f_5944:posixwin_scm",(void*)f_5944},
{"f_5915:posixwin_scm",(void*)f_5915},
{"f_5919:posixwin_scm",(void*)f_5919},
{"f_2211:posixwin_scm",(void*)f_2211},
{"f_5878:posixwin_scm",(void*)f_5878},
{"f_5894:posixwin_scm",(void*)f_5894},
{"f_5882:posixwin_scm",(void*)f_5882},
{"f_5885:posixwin_scm",(void*)f_5885},
{"f_2349:posixwin_scm",(void*)f_2349},
{"f_3514:posixwin_scm",(void*)f_3514},
{"f_5859:posixwin_scm",(void*)f_5859},
{"f_5856:posixwin_scm",(void*)f_5856},
{"f_5849:posixwin_scm",(void*)f_5849},
{"f_5843:posixwin_scm",(void*)f_5843},
{"f_5837:posixwin_scm",(void*)f_5837},
{"f_5831:posixwin_scm",(void*)f_5831},
{"f_5825:posixwin_scm",(void*)f_5825},
{"f_5819:posixwin_scm",(void*)f_5819},
{"f_5813:posixwin_scm",(void*)f_5813},
{"f_5807:posixwin_scm",(void*)f_5807},
{"f_5801:posixwin_scm",(void*)f_5801},
{"f_5795:posixwin_scm",(void*)f_5795},
{"f_5789:posixwin_scm",(void*)f_5789},
{"f_5783:posixwin_scm",(void*)f_5783},
{"f_5777:posixwin_scm",(void*)f_5777},
{"f_5771:posixwin_scm",(void*)f_5771},
{"f_5765:posixwin_scm",(void*)f_5765},
{"f_5759:posixwin_scm",(void*)f_5759},
{"f_5753:posixwin_scm",(void*)f_5753},
{"f_5747:posixwin_scm",(void*)f_5747},
{"f_5741:posixwin_scm",(void*)f_5741},
{"f_5735:posixwin_scm",(void*)f_5735},
{"f_5729:posixwin_scm",(void*)f_5729},
{"f_5723:posixwin_scm",(void*)f_5723},
{"f_5717:posixwin_scm",(void*)f_5717},
{"f_5711:posixwin_scm",(void*)f_5711},
{"f_5705:posixwin_scm",(void*)f_5705},
{"f_5699:posixwin_scm",(void*)f_5699},
{"f_5693:posixwin_scm",(void*)f_5693},
{"f_5687:posixwin_scm",(void*)f_5687},
{"f_5681:posixwin_scm",(void*)f_5681},
{"f_5675:posixwin_scm",(void*)f_5675},
{"f_5669:posixwin_scm",(void*)f_5669},
{"f_5663:posixwin_scm",(void*)f_5663},
{"f_5657:posixwin_scm",(void*)f_5657},
{"f_5651:posixwin_scm",(void*)f_5651},
{"f_5645:posixwin_scm",(void*)f_5645},
{"f_5639:posixwin_scm",(void*)f_5639},
{"f_5633:posixwin_scm",(void*)f_5633},
{"f_5627:posixwin_scm",(void*)f_5627},
{"f_5621:posixwin_scm",(void*)f_5621},
{"f_5615:posixwin_scm",(void*)f_5615},
{"f_5609:posixwin_scm",(void*)f_5609},
{"f_5603:posixwin_scm",(void*)f_5603},
{"f_5597:posixwin_scm",(void*)f_5597},
{"f_5351:posixwin_scm",(void*)f_5351},
{"f_5528:posixwin_scm",(void*)f_5528},
{"f_5534:posixwin_scm",(void*)f_5534},
{"f_5523:posixwin_scm",(void*)f_5523},
{"f_5518:posixwin_scm",(void*)f_5518},
{"f_5353:posixwin_scm",(void*)f_5353},
{"f_5505:posixwin_scm",(void*)f_5505},
{"f_5513:posixwin_scm",(void*)f_5513},
{"f_5360:posixwin_scm",(void*)f_5360},
{"f_5493:posixwin_scm",(void*)f_5493},
{"f_5487:posixwin_scm",(void*)f_5487},
{"f_5370:posixwin_scm",(void*)f_5370},
{"f_5372:posixwin_scm",(void*)f_5372},
{"f_5391:posixwin_scm",(void*)f_5391},
{"f_5473:posixwin_scm",(void*)f_5473},
{"f_5480:posixwin_scm",(void*)f_5480},
{"f_5467:posixwin_scm",(void*)f_5467},
{"f_5406:posixwin_scm",(void*)f_5406},
{"f_5460:posixwin_scm",(void*)f_5460},
{"f_5457:posixwin_scm",(void*)f_5457},
{"f_5447:posixwin_scm",(void*)f_5447},
{"f_5423:posixwin_scm",(void*)f_5423},
{"f_5445:posixwin_scm",(void*)f_5445},
{"f_5431:posixwin_scm",(void*)f_5431},
{"f_5438:posixwin_scm",(void*)f_5438},
{"f_5435:posixwin_scm",(void*)f_5435},
{"f_5418:posixwin_scm",(void*)f_5418},
{"f_5416:posixwin_scm",(void*)f_5416},
{"f_5494:posixwin_scm",(void*)f_5494},
{"f_5336:posixwin_scm",(void*)f_5336},
{"f_5346:posixwin_scm",(void*)f_5346},
{"f_5305:posixwin_scm",(void*)f_5305},
{"f_5331:posixwin_scm",(void*)f_5331},
{"f_5316:posixwin_scm",(void*)f_5316},
{"f_5320:posixwin_scm",(void*)f_5320},
{"f_5324:posixwin_scm",(void*)f_5324},
{"f_5328:posixwin_scm",(void*)f_5328},
{"f_5293:posixwin_scm",(void*)f_5293},
{"f_5290:posixwin_scm",(void*)f_5290},
{"f_5230:posixwin_scm",(void*)f_5230},
{"f_5257:posixwin_scm",(void*)f_5257},
{"f_5267:posixwin_scm",(void*)f_5267},
{"f_5251:posixwin_scm",(void*)f_5251},
{"f_5218:posixwin_scm",(void*)f_5218},
{"f_5138:posixwin_scm",(void*)f_5138},
{"f_5155:posixwin_scm",(void*)f_5155},
{"f_5150:posixwin_scm",(void*)f_5150},
{"f_5145:posixwin_scm",(void*)f_5145},
{"f_5140:posixwin_scm",(void*)f_5140},
{"f_5058:posixwin_scm",(void*)f_5058},
{"f_5075:posixwin_scm",(void*)f_5075},
{"f_5070:posixwin_scm",(void*)f_5070},
{"f_5065:posixwin_scm",(void*)f_5065},
{"f_5060:posixwin_scm",(void*)f_5060},
{"f_4996:posixwin_scm",(void*)f_4996},
{"f_5052:posixwin_scm",(void*)f_5052},
{"f_5056:posixwin_scm",(void*)f_5056},
{"f_5017:posixwin_scm",(void*)f_5017},
{"f_5020:posixwin_scm",(void*)f_5020},
{"f_5031:posixwin_scm",(void*)f_5031},
{"f_5025:posixwin_scm",(void*)f_5025},
{"f_4998:posixwin_scm",(void*)f_4998},
{"f_5007:posixwin_scm",(void*)f_5007},
{"f_4877:posixwin_scm",(void*)f_4877},
{"f_4881:posixwin_scm",(void*)f_4881},
{"f_4972:posixwin_scm",(void*)f_4972},
{"f_4884:posixwin_scm",(void*)f_4884},
{"f_4940:posixwin_scm",(void*)f_4940},
{"f_4944:posixwin_scm",(void*)f_4944},
{"f_4948:posixwin_scm",(void*)f_4948},
{"f_4952:posixwin_scm",(void*)f_4952},
{"f_4956:posixwin_scm",(void*)f_4956},
{"f_4819:posixwin_scm",(void*)f_4819},
{"f_4823:posixwin_scm",(void*)f_4823},
{"f_4933:posixwin_scm",(void*)f_4933},
{"f_4913:posixwin_scm",(void*)f_4913},
{"f_4917:posixwin_scm",(void*)f_4917},
{"f_4921:posixwin_scm",(void*)f_4921},
{"f_4785:posixwin_scm",(void*)f_4785},
{"f_4802:posixwin_scm",(void*)f_4802},
{"f_4806:posixwin_scm",(void*)f_4806},
{"f_4779:posixwin_scm",(void*)f_4779},
{"f_4758:posixwin_scm",(void*)f_4758},
{"f_4762:posixwin_scm",(void*)f_4762},
{"f_4774:posixwin_scm",(void*)f_4774},
{"f_4755:posixwin_scm",(void*)f_4755},
{"f_4668:posixwin_scm",(void*)f_4668},
{"f_4692:posixwin_scm",(void*)f_4692},
{"f_4687:posixwin_scm",(void*)f_4687},
{"f_4682:posixwin_scm",(void*)f_4682},
{"f_4670:posixwin_scm",(void*)f_4670},
{"f_4674:posixwin_scm",(void*)f_4674},
{"f_4581:posixwin_scm",(void*)f_4581},
{"f_4605:posixwin_scm",(void*)f_4605},
{"f_4600:posixwin_scm",(void*)f_4600},
{"f_4595:posixwin_scm",(void*)f_4595},
{"f_4583:posixwin_scm",(void*)f_4583},
{"f_4587:posixwin_scm",(void*)f_4587},
{"f_4566:posixwin_scm",(void*)f_4566},
{"f_4570:posixwin_scm",(void*)f_4570},
{"f_4530:posixwin_scm",(void*)f_4530},
{"f_4537:posixwin_scm",(void*)f_4537},
{"f_4540:posixwin_scm",(void*)f_4540},
{"f_4557:posixwin_scm",(void*)f_4557},
{"f_4543:posixwin_scm",(void*)f_4543},
{"f_4546:posixwin_scm",(void*)f_4546},
{"f_4553:posixwin_scm",(void*)f_4553},
{"f_4480:posixwin_scm",(void*)f_4480},
{"f_4492:posixwin_scm",(void*)f_4492},
{"f_4511:posixwin_scm",(void*)f_4511},
{"f_4463:posixwin_scm",(void*)f_4463},
{"f_4446:posixwin_scm",(void*)f_4446},
{"f_4367:posixwin_scm",(void*)f_4367},
{"f_4410:posixwin_scm",(void*)f_4410},
{"f_4441:posixwin_scm",(void*)f_4441},
{"f_4438:posixwin_scm",(void*)f_4438},
{"f_4372:posixwin_scm",(void*)f_4372},
{"f_4376:posixwin_scm",(void*)f_4376},
{"f_4381:posixwin_scm",(void*)f_4381},
{"f_4405:posixwin_scm",(void*)f_4405},
{"f_4394:posixwin_scm",(void*)f_4394},
{"f_4250:posixwin_scm",(void*)f_4250},
{"f_4256:posixwin_scm",(void*)f_4256},
{"f_4277:posixwin_scm",(void*)f_4277},
{"f_4356:posixwin_scm",(void*)f_4356},
{"f_4281:posixwin_scm",(void*)f_4281},
{"f_4284:posixwin_scm",(void*)f_4284},
{"f_4291:posixwin_scm",(void*)f_4291},
{"f_4293:posixwin_scm",(void*)f_4293},
{"f_4310:posixwin_scm",(void*)f_4310},
{"f_4314:posixwin_scm",(void*)f_4314},
{"f_4322:posixwin_scm",(void*)f_4322},
{"f_4326:posixwin_scm",(void*)f_4326},
{"f_4271:posixwin_scm",(void*)f_4271},
{"f_4191:posixwin_scm",(void*)f_4191},
{"f_4195:posixwin_scm",(void*)f_4195},
{"f_4201:posixwin_scm",(void*)f_4201},
{"f_4210:posixwin_scm",(void*)f_4210},
{"f_4185:posixwin_scm",(void*)f_4185},
{"f_4189:posixwin_scm",(void*)f_4189},
{"f_4169:posixwin_scm",(void*)f_4169},
{"f_4157:posixwin_scm",(void*)f_4157},
{"f_4142:posixwin_scm",(void*)f_4142},
{"f_4146:posixwin_scm",(void*)f_4146},
{"f_4152:posixwin_scm",(void*)f_4152},
{"f_4075:posixwin_scm",(void*)f_4075},
{"f_4079:posixwin_scm",(void*)f_4079},
{"f_4082:posixwin_scm",(void*)f_4082},
{"f_4104:posixwin_scm",(void*)f_4104},
{"f_4101:posixwin_scm",(void*)f_4101},
{"f_4091:posixwin_scm",(void*)f_4091},
{"f_4017:posixwin_scm",(void*)f_4017},
{"f_4021:posixwin_scm",(void*)f_4021},
{"f_4024:posixwin_scm",(void*)f_4024},
{"f_3973:posixwin_scm",(void*)f_3973},
{"f_3977:posixwin_scm",(void*)f_3977},
{"f_3939:posixwin_scm",(void*)f_3939},
{"f_3943:posixwin_scm",(void*)f_3943},
{"f_3920:posixwin_scm",(void*)f_3920},
{"f_3854:posixwin_scm",(void*)f_3854},
{"f_3860:posixwin_scm",(void*)f_3860},
{"f_3864:posixwin_scm",(void*)f_3864},
{"f_3872:posixwin_scm",(void*)f_3872},
{"f_3898:posixwin_scm",(void*)f_3898},
{"f_3902:posixwin_scm",(void*)f_3902},
{"f_3890:posixwin_scm",(void*)f_3890},
{"f_3834:posixwin_scm",(void*)f_3834},
{"f_3842:posixwin_scm",(void*)f_3842},
{"f_3817:posixwin_scm",(void*)f_3817},
{"f_3828:posixwin_scm",(void*)f_3828},
{"f_3832:posixwin_scm",(void*)f_3832},
{"f_3787:posixwin_scm",(void*)f_3787},
{"f_3794:posixwin_scm",(void*)f_3794},
{"f_3803:posixwin_scm",(void*)f_3803},
{"f_3797:posixwin_scm",(void*)f_3797},
{"f_3752:posixwin_scm",(void*)f_3752},
{"f_3756:posixwin_scm",(void*)f_3756},
{"f_3785:posixwin_scm",(void*)f_3785},
{"f_3771:posixwin_scm",(void*)f_3771},
{"f_3765:posixwin_scm",(void*)f_3765},
{"f_3738:posixwin_scm",(void*)f_3738},
{"f_3750:posixwin_scm",(void*)f_3750},
{"f_3724:posixwin_scm",(void*)f_3724},
{"f_3736:posixwin_scm",(void*)f_3736},
{"f_3706:posixwin_scm",(void*)f_3706},
{"f_3710:posixwin_scm",(void*)f_3710},
{"f_3722:posixwin_scm",(void*)f_3722},
{"f_3669:posixwin_scm",(void*)f_3669},
{"f_3677:posixwin_scm",(void*)f_3677},
{"f_3660:posixwin_scm",(void*)f_3660},
{"f_3654:posixwin_scm",(void*)f_3654},
{"f_3648:posixwin_scm",(void*)f_3648},
{"f_3624:posixwin_scm",(void*)f_3624},
{"f_3646:posixwin_scm",(void*)f_3646},
{"f_3642:posixwin_scm",(void*)f_3642},
{"f_3634:posixwin_scm",(void*)f_3634},
{"f_3594:posixwin_scm",(void*)f_3594},
{"f_3622:posixwin_scm",(void*)f_3622},
{"f_3618:posixwin_scm",(void*)f_3618},
{"f_3610:posixwin_scm",(void*)f_3610},
{"f_3538:posixwin_scm",(void*)f_3538},
{"f_3548:posixwin_scm",(void*)f_3548},
{"f_3525:posixwin_scm",(void*)f_3525},
{"f_3516:posixwin_scm",(void*)f_3516},
{"f_3440:posixwin_scm",(void*)f_3440},
{"f_3444:posixwin_scm",(void*)f_3444},
{"f_3456:posixwin_scm",(void*)f_3456},
{"f_3447:posixwin_scm",(void*)f_3447},
{"f_3420:posixwin_scm",(void*)f_3420},
{"f_3424:posixwin_scm",(void*)f_3424},
{"f_3430:posixwin_scm",(void*)f_3430},
{"f_3434:posixwin_scm",(void*)f_3434},
{"f_3400:posixwin_scm",(void*)f_3400},
{"f_3404:posixwin_scm",(void*)f_3404},
{"f_3410:posixwin_scm",(void*)f_3410},
{"f_3414:posixwin_scm",(void*)f_3414},
{"f_3376:posixwin_scm",(void*)f_3376},
{"f_3380:posixwin_scm",(void*)f_3380},
{"f_3391:posixwin_scm",(void*)f_3391},
{"f_3395:posixwin_scm",(void*)f_3395},
{"f_3385:posixwin_scm",(void*)f_3385},
{"f_3352:posixwin_scm",(void*)f_3352},
{"f_3356:posixwin_scm",(void*)f_3356},
{"f_3367:posixwin_scm",(void*)f_3367},
{"f_3371:posixwin_scm",(void*)f_3371},
{"f_3361:posixwin_scm",(void*)f_3361},
{"f_3333:posixwin_scm",(void*)f_3333},
{"f_3337:posixwin_scm",(void*)f_3337},
{"f_3340:posixwin_scm",(void*)f_3340},
{"f_3297:posixwin_scm",(void*)f_3297},
{"f_3328:posixwin_scm",(void*)f_3328},
{"f_3318:posixwin_scm",(void*)f_3318},
{"f_3311:posixwin_scm",(void*)f_3311},
{"f_3261:posixwin_scm",(void*)f_3261},
{"f_3292:posixwin_scm",(void*)f_3292},
{"f_3282:posixwin_scm",(void*)f_3282},
{"f_3275:posixwin_scm",(void*)f_3275},
{"f_3243:posixwin_scm",(void*)f_3243},
{"f_3247:posixwin_scm",(void*)f_3247},
{"f_3259:posixwin_scm",(void*)f_3259},
{"f_2868:posixwin_scm",(void*)f_2868},
{"f_3215:posixwin_scm",(void*)f_3215},
{"f_3014:posixwin_scm",(void*)f_3014},
{"f_3201:posixwin_scm",(void*)f_3201},
{"f_3190:posixwin_scm",(void*)f_3190},
{"f_3197:posixwin_scm",(void*)f_3197},
{"f_3044:posixwin_scm",(void*)f_3044},
{"f_3183:posixwin_scm",(void*)f_3183},
{"f_3162:posixwin_scm",(void*)f_3162},
{"f_3179:posixwin_scm",(void*)f_3179},
{"f_3168:posixwin_scm",(void*)f_3168},
{"f_3175:posixwin_scm",(void*)f_3175},
{"f_3086:posixwin_scm",(void*)f_3086},
{"f_3159:posixwin_scm",(void*)f_3159},
{"f_3138:posixwin_scm",(void*)f_3138},
{"f_3155:posixwin_scm",(void*)f_3155},
{"f_3144:posixwin_scm",(void*)f_3144},
{"f_3151:posixwin_scm",(void*)f_3151},
{"f_3092:posixwin_scm",(void*)f_3092},
{"f_3135:posixwin_scm",(void*)f_3135},
{"f_3131:posixwin_scm",(void*)f_3131},
{"f_3124:posixwin_scm",(void*)f_3124},
{"f_3120:posixwin_scm",(void*)f_3120},
{"f_3099:posixwin_scm",(void*)f_3099},
{"f_3103:posixwin_scm",(void*)f_3103},
{"f_3080:posixwin_scm",(void*)f_3080},
{"f_3067:posixwin_scm",(void*)f_3067},
{"f_3051:posixwin_scm",(void*)f_3051},
{"f_3055:posixwin_scm",(void*)f_3055},
{"f_3059:posixwin_scm",(void*)f_3059},
{"f_3038:posixwin_scm",(void*)f_3038},
{"f_3025:posixwin_scm",(void*)f_3025},
{"f_3021:posixwin_scm",(void*)f_3021},
{"f_3008:posixwin_scm",(void*)f_3008},
{"f_2875:posixwin_scm",(void*)f_2875},
{"f_2994:posixwin_scm",(void*)f_2994},
{"f_2882:posixwin_scm",(void*)f_2882},
{"f_2884:posixwin_scm",(void*)f_2884},
{"f_2891:posixwin_scm",(void*)f_2891},
{"f_2966:posixwin_scm",(void*)f_2966},
{"f_2975:posixwin_scm",(void*)f_2975},
{"f_2897:posixwin_scm",(void*)f_2897},
{"f_2944:posixwin_scm",(void*)f_2944},
{"f_2932:posixwin_scm",(void*)f_2932},
{"f_2940:posixwin_scm",(void*)f_2940},
{"f_2936:posixwin_scm",(void*)f_2936},
{"f_2913:posixwin_scm",(void*)f_2913},
{"f_2921:posixwin_scm",(void*)f_2921},
{"f_2917:posixwin_scm",(void*)f_2917},
{"f_2812:posixwin_scm",(void*)f_2812},
{"f_2821:posixwin_scm",(void*)f_2821},
{"f_2845:posixwin_scm",(void*)f_2845},
{"f_2857:posixwin_scm",(void*)f_2857},
{"f_2863:posixwin_scm",(void*)f_2863},
{"f_2851:posixwin_scm",(void*)f_2851},
{"f_2827:posixwin_scm",(void*)f_2827},
{"f_2833:posixwin_scm",(void*)f_2833},
{"f_2816:posixwin_scm",(void*)f_2816},
{"f_2745:posixwin_scm",(void*)f_2745},
{"f_2749:posixwin_scm",(void*)f_2749},
{"f_2758:posixwin_scm",(void*)f_2758},
{"f_2761:posixwin_scm",(void*)f_2761},
{"f_2718:posixwin_scm",(void*)f_2718},
{"f_2743:posixwin_scm",(void*)f_2743},
{"f_2739:posixwin_scm",(void*)f_2739},
{"f_2725:posixwin_scm",(void*)f_2725},
{"f_2558:posixwin_scm",(void*)f_2558},
{"f_2666:posixwin_scm",(void*)f_2666},
{"f_2674:posixwin_scm",(void*)f_2674},
{"f_2661:posixwin_scm",(void*)f_2661},
{"f_2560:posixwin_scm",(void*)f_2560},
{"f_2567:posixwin_scm",(void*)f_2567},
{"f_2570:posixwin_scm",(void*)f_2570},
{"f_2573:posixwin_scm",(void*)f_2573},
{"f_2660:posixwin_scm",(void*)f_2660},
{"f_2577:posixwin_scm",(void*)f_2577},
{"f_2594:posixwin_scm",(void*)f_2594},
{"f_2604:posixwin_scm",(void*)f_2604},
{"f_2616:posixwin_scm",(void*)f_2616},
{"f_2626:posixwin_scm",(void*)f_2626},
{"f_2586:posixwin_scm",(void*)f_2586},
{"f_2533:posixwin_scm",(void*)f_2533},
{"f_2556:posixwin_scm",(void*)f_2556},
{"f_2540:posixwin_scm",(void*)f_2540},
{"f_2549:posixwin_scm",(void*)f_2549},
{"f_2543:posixwin_scm",(void*)f_2543},
{"f_2508:posixwin_scm",(void*)f_2508},
{"f_2531:posixwin_scm",(void*)f_2531},
{"f_2515:posixwin_scm",(void*)f_2515},
{"f_2524:posixwin_scm",(void*)f_2524},
{"f_2518:posixwin_scm",(void*)f_2518},
{"f_2351:posixwin_scm",(void*)f_2351},
{"f_2355:posixwin_scm",(void*)f_2355},
{"f_2361:posixwin_scm",(void*)f_2361},
{"f_2484:posixwin_scm",(void*)f_2484},
{"f_2476:posixwin_scm",(void*)f_2476},
{"f_2369:posixwin_scm",(void*)f_2369},
{"f_2381:posixwin_scm",(void*)f_2381},
{"f_2451:posixwin_scm",(void*)f_2451},
{"f_2389:posixwin_scm",(void*)f_2389},
{"f_2394:posixwin_scm",(void*)f_2394},
{"f_2407:posixwin_scm",(void*)f_2407},
{"f_2410:posixwin_scm",(void*)f_2410},
{"f_2423:posixwin_scm",(void*)f_2423},
{"f_2442:posixwin_scm",(void*)f_2442},
{"f_2434:posixwin_scm",(void*)f_2434},
{"f_2364:posixwin_scm",(void*)f_2364},
{"f_2289:posixwin_scm",(void*)f_2289},
{"f_2302:posixwin_scm",(void*)f_2302},
{"f_2314:posixwin_scm",(void*)f_2314},
{"f_2308:posixwin_scm",(void*)f_2308},
{"f6598:posixwin_scm",(void*)f6598},
{"f6604:posixwin_scm",(void*)f6604},
{"f6610:posixwin_scm",(void*)f6610},
{"f6616:posixwin_scm",(void*)f6616},
{"f_2260:posixwin_scm",(void*)f_2260},
{"f_2237:posixwin_scm",(void*)f_2237},
{"f_2258:posixwin_scm",(void*)f_2258},
{"f_2244:posixwin_scm",(void*)f_2244},
{"f_2231:posixwin_scm",(void*)f_2231},
{"f_2235:posixwin_scm",(void*)f_2235},
{"f_2225:posixwin_scm",(void*)f_2225},
{"f_2229:posixwin_scm",(void*)f_2229},
{"f_2219:posixwin_scm",(void*)f_2219},
{"f_2223:posixwin_scm",(void*)f_2223},
{"f_2213:posixwin_scm",(void*)f_2213},
{"f_2217:posixwin_scm",(void*)f_2217},
{"f_2203:posixwin_scm",(void*)f_2203},
{"f_2207:posixwin_scm",(void*)f_2207},
{"f_2172:posixwin_scm",(void*)f_2172},
{"f_2176:posixwin_scm",(void*)f_2176},
{"f_2179:posixwin_scm",(void*)f_2179},
{"f_2134:posixwin_scm",(void*)f_2134},
{"f_2167:posixwin_scm",(void*)f_2167},
{"f_2163:posixwin_scm",(void*)f_2163},
{"f_2138:posixwin_scm",(void*)f_2138},
{"f_2147:posixwin_scm",(void*)f_2147},
{"f_2096:posixwin_scm",(void*)f_2096},
{"f_2103:posixwin_scm",(void*)f_2103},
{"f_2106:posixwin_scm",(void*)f_2106},
{"f_2126:posixwin_scm",(void*)f_2126},
{"f_2109:posixwin_scm",(void*)f_2109},
{"f_2116:posixwin_scm",(void*)f_2116},
{"f_2054:posixwin_scm",(void*)f_2054},
{"f_2061:posixwin_scm",(void*)f_2061},
{"f_2076:posixwin_scm",(void*)f_2076},
{"f_2070:posixwin_scm",(void*)f_2070},
{"f_2009:posixwin_scm",(void*)f_2009},
{"f_2019:posixwin_scm",(void*)f_2019},
{"f_2022:posixwin_scm",(void*)f_2022},
{"f_2034:posixwin_scm",(void*)f_2034},
{"f_2025:posixwin_scm",(void*)f_2025},
{"f_1991:posixwin_scm",(void*)f_1991},
{"f_2004:posixwin_scm",(void*)f_2004},
{"f_1950:posixwin_scm",(void*)f_1950},
{"f_1983:posixwin_scm",(void*)f_1983},
{"f_1967:posixwin_scm",(void*)f_1967},
{"f_1976:posixwin_scm",(void*)f_1976},
{"f_1970:posixwin_scm",(void*)f_1970},
{"f_1904:posixwin_scm",(void*)f_1904},
{"f_1908:posixwin_scm",(void*)f_1908},
{"f_1919:posixwin_scm",(void*)f_1919},
{"f_1915:posixwin_scm",(void*)f_1915},
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
