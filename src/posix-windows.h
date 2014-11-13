#ifndef _POSIX_WINDOWS_H
#define _POSIX_WINDOWS_H

#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

#include <direct.h>
#include <errno.h>
#include <fcntl.h>
#include <io.h>
#include <process.h>
#include <signal.h>
#ifdef HAVE_UTIME_H
# include <utime.h>
#else
# include <sys/utime.h>
#endif
#include <winsock2.h>

#define ARG_MAX         256
#define PIPE_BUF        512
#ifndef ENV_MAX
# define ENV_MAX        1024
#endif

static char *C_exec_args[ ARG_MAX ];
static char *C_exec_env[ ENV_MAX ];
static struct group *C_group;
static int C_pipefds[ 2 ];
static time_t C_secs;

/* pipe handles */
static HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static HANDLE C_save0, C_save1; /* saved I/O handles */
static char C_rdbuf; /* one-char buffer for read */
static int C_exstatus;

/* platform information; initialized for cached testing */
static char C_hostname[256] = "";
static char C_osver[16] = "";
static char C_osrel[16] = "";
static char C_processor[16] = "";
static char C_shlcmd[256] = "";

/* Windows NT or better */
static int C_isNT = 0;

/* Current user name */
static TCHAR C_username[255 + 1] = "";

/* Directory Operations */

#define C_mkdir(str)        C_fix(mkdir(C_c_string(str)))
#define C_chdir(str)        C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

/* DIRENT stuff */
struct dirent
{
    char *              d_name;
};

typedef struct
{
    struct _finddata_t fdata;
    int handle;
    struct dirent current;
} DIR;

static DIR * C_fcall
opendir(const char *name)
{
    int name_len = strlen(name);
    int what_len = name_len + 3;
    DIR *dir = (DIR *)malloc(sizeof(DIR));
    char *what;
    if (!dir)
    {
        errno = ENOMEM;
        return NULL;
    }
    what = (char *)malloc(what_len);
    if (!what)
    {
        free(dir);
        errno = ENOMEM;
        return NULL;
    }
    C_strlcpy(what, name, what_len);
    if (strchr("\\/", name[name_len - 1]))
        C_strlcat(what, "*", what_len);
    else
        C_strlcat(what, "\\*", what_len);

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

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(_pclose(C_port_file(p)))

#define C_chmod(fn, m)      C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)        C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_pipe(d, m)        C_fix(_pipe(C_pipefds, PIPE_BUF, C_unfix(m)))
#define C_close(fd)         C_fix(close(C_unfix(fd)))

#define C_getenventry(i)   environ[ i ]

#define C_lstat(fn)         C_stat(fn)

static void C_fcall
C_set_arg_string(char **where, int i, char *dat, int len)
{
    char *ptr;
    if (dat)
    {
        ptr = (char *)malloc(len + 1);
        memcpy(ptr, dat, len);
        ptr[ len ] = '\0';
        /* Can't barf() here, so the NUL byte check happens in Scheme */
    }
    else
        ptr = NULL;
    where[ i ] = ptr;
}

static void C_fcall
C_free_arg_string(char **where) {
    while (*where) free(*(where++));
}

#define C_set_exec_arg(i, a, len)       C_set_arg_string(C_exec_args, i, a, len)
#define C_set_exec_env(i, a, len)       C_set_arg_string(C_exec_env, i, a, len)

#define C_free_exec_args()              (C_free_arg_string(C_exec_args), C_SCHEME_TRUE)
#define C_free_exec_env()               (C_free_arg_string(C_exec_env), C_SCHEME_TRUE)

#define C_execvp(f)         C_fix(execvp(C_data_pointer(f), (const char *const *)C_exec_args))
#define C_execve(f)         C_fix(execve(C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

/* MS replacement for the fork-exec pair */
#define C_spawnvp(m, f)     C_fix(spawnvp(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args))
#define C_spawnvpe(m, f)    C_fix(spawnvpe(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args, (const char *const *)C_exec_env))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))

#define C_flushall()        C_fix(_flushall())

#define C_umask(m)          C_fix(_umask(C_unfix(m)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

/*
   mapping from Win32 error codes to errno
 */

typedef struct
{
    DWORD win32;
    int libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,      EINVAL},
    {ERROR_FILE_NOT_FOUND,        ENOENT},
    {ERROR_PATH_NOT_FOUND,        ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,   EMFILE},
    {ERROR_ACCESS_DENIED,         EACCES},
    {ERROR_INVALID_HANDLE,        EBADF},
    {ERROR_ARENA_TRASHED,         ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,     ENOMEM},
    {ERROR_INVALID_BLOCK,         ENOMEM},
    {ERROR_BAD_ENVIRONMENT,       E2BIG},
    {ERROR_BAD_FORMAT,            ENOEXEC},
    {ERROR_INVALID_ACCESS,        EINVAL},
    {ERROR_INVALID_DATA,          EINVAL},
    {ERROR_INVALID_DRIVE,         ENOENT},
    {ERROR_CURRENT_DIRECTORY,     EACCES},
    {ERROR_NOT_SAME_DEVICE,       EXDEV},
    {ERROR_NO_MORE_FILES,         ENOENT},
    {ERROR_LOCK_VIOLATION,        EACCES},
    {ERROR_BAD_NETPATH,           ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,          ENOENT},
    {ERROR_FILE_EXISTS,           EEXIST},
    {ERROR_CANNOT_MAKE,           EACCES},
    {ERROR_FAIL_I24,              EACCES},
    {ERROR_INVALID_PARAMETER,     EINVAL},
    {ERROR_NO_PROC_SLOTS,         EAGAIN},
    {ERROR_DRIVE_LOCKED,          EACCES},
    {ERROR_BROKEN_PIPE,           EPIPE},
    {ERROR_DISK_FULL,             ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,        EINVAL},
    {ERROR_WAIT_NO_CHILDREN,      ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,    ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,         EINVAL},
    {ERROR_SEEK_ON_DEVICE,        EACCES},
    {ERROR_DIR_NOT_EMPTY,         ENOTEMPTY},
    {ERROR_NOT_LOCKED,            EACCES},
    {ERROR_BAD_PATHNAME,          ENOENT},
    {ERROR_MAX_THRDS_REACHED,     EAGAIN},
    {ERROR_LOCK_FAILED,           EACCES},
    {ERROR_ALREADY_EXISTS,        EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,   EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,      ENOMEM},
    {0, 0}
};

static void C_fcall
set_errno(DWORD w32err)
{
    errmap_t *map;
    for (map = errmap; map->win32; ++map)
    {
        if (map->win32 == w32err)
        {
            errno = map->libc;
            return;
        }
    }
    errno = ENOSYS; /* For lack of anything better */
}

static int C_fcall
set_last_errno()
{
    set_errno(GetLastError());
    return 0;
}

static int C_fcall
process_wait(C_word h, C_word t)
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
#define C_sleep(t) (Sleep(C_unfix(t) * 1000), C_fix(0))

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
#           ifdef PROCESSOR_ARCHITECTURE_IA64
            case PROCESSOR_ARCHITECTURE_IA64:
                strncpy(C_processor, "IA64", sizeof(C_processor) - 1);
                break;
#           endif
#           ifdef PROCESSOR_ARCHITECTURE_AMD64
            case PROCESSOR_ARCHITECTURE_AMD64:
                strncpy(C_processor, "x64", sizeof(C_processor) - 1);
                break;
#           endif
#           ifdef PROCESSOR_ARCHITECTURE_IA32_ON_WIN64
            case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64:
                strncpy(C_processor, "WOW64", sizeof(C_processor) - 1);
                break;
#           endif
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
        if (sysinfo()) /* for C_isNT */
        {
            char *cmdnam = C_isNT ? "\\cmd.exe" : "\\command.com";
            UINT len = GetSystemDirectory(C_shlcmd, sizeof(C_shlcmd) - strlen(cmdnam));
            if (len)
                C_strlcpy(C_shlcmd + len, cmdnam, sizeof(C_shlcmd));
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
          C_word * phandle,
          int * pstdin_fd, int * pstdout_fd, int * pstderr_fd,
          int params)
{
    int i;
    int success = TRUE;
    const int f_share_io[3] = { params &1, params & 2, params & 4};
    int io_fds[3] = { -1, -1, -1 };
    HANDLE
        child_io_handles[3] = { NULL, NULL, NULL },
        standard_io_handles[3] = {
        GetStdHandle(STD_INPUT_HANDLE),
        GetStdHandle(STD_OUTPUT_HANDLE),
        GetStdHandle(STD_ERROR_HANDLE)
    };
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
                else               { parent_end=a; child_io_handles[i]=b; }
                success = (io_fds[i] = _open_osfhandle((C_word)parent_end,0)) >= 0;
                /* Make new handle inheritable */
                if (success)
                    success = SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);
            }
        }
    }

#if 0 /* Requires a sorted list by key! */
      /****** create environment block if necessary ****/

    if (env && success)
    {
        char** p;
        int len = 0;

        for (p = env; *p; ++p) len += strlen(*p) + 1;

        if (envblk = malloc(len + 1))
        {
            char* pb = (char*)envblk;
            for (p = env; *p; ++p)
            {
                C_strlcpy(pb, *p, len+1);
                pb += strlen(*p) + 1;
            }
            *pb = '\0';
            /* This _should_ already have been checked for embedded NUL bytes */
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
    for (i=0; i<3; ++i) {
        if (child_io_handles[i] != NULL)
            CloseHandle(child_io_handles[i]);
    }

    if (success)
    {
        *phandle = (C_word)child_process;
        *pstdin_fd = io_fds[0];
        *pstdout_fd = io_fds[1];
        *pstderr_fd = io_fds[2];
    }
    else
    {
        for (i=0; i<3; ++i) {
            if (io_fds[i] != -1)
                _close(io_fds[i]);
        }
    }

    return success;
}

static int set_file_mtime(char *filename, C_word tm)
{
    struct _utimbuf tb;

    tb.actime = tb.modtime = C_num_to_int(tm);
    return _utime(filename, &tb);
}

#endif
