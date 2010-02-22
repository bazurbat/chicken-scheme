/* Generated from posixunix.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 12:09
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
   command line: posixunix.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file posixunix.c
   unit: posix
*/

#include "chicken.h"

#include <signal.h>
#include <errno.h>
#include <math.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

static C_TLS int C_wait_status;

#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <utime.h>

#if defined(__sun__) && defined(__svr4__)
# include <sys/tty.h>
#endif

#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#include <sys/mman.h>
#include <time.h>

#ifndef O_FSYNC
# define O_FSYNC O_SYNC
#endif

#ifndef PIPE_BUF
# ifdef __CYGWIN__
#  define PIPE_BUF       _POSIX_PIPE_BUF
# else
#  define PIPE_BUF 1024
# endif
#endif

#ifndef O_BINARY
# define O_BINARY        0
#endif
#ifndef O_TEXT
# define O_TEXT          0
#endif

#ifndef ARG_MAX
# define ARG_MAX 256
#endif

#ifndef MAP_FILE
# define MAP_FILE    0
#endif

#ifndef MAP_ANON
# define MAP_ANON    0
#endif

#if defined(HAVE_CRT_EXTERNS_H)
# include <crt_externs.h>
# define C_getenventry(i)       ((*_NSGetEnviron())[ i ])
#elif defined(C_MACOSX)
# define C_getenventry(i)       NULL
#else
extern char **environ;
# define C_getenventry(i)       (environ[ i ])
#endif

#ifndef ENV_MAX
# define ENV_MAX        1024
#endif

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct utsname C_utsname;
static C_TLS struct flock C_flock;
static C_TLS DIR *temphandle;
static C_TLS struct passwd *C_user;
#ifdef HAVE_GRP_H
static C_TLS struct group *C_group;
#else
static C_TLS struct {
  char *gr_name, gr_passwd;
  int gr_gid;
  char *gr_mem[ 1 ];
} C_group = { "", "", 0, { "" } };
#endif
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct tm C_tm;
static C_TLS fd_set C_fd_sets[ 2 ];
static C_TLS struct timeval C_timeval;
static C_TLS char C_hostbuf[ 256 ];
static C_TLS struct stat C_statbuf;

#define C_mkdir(str)        C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#define C_chdir(str)        C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#define C_opendir(x,h)      C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)       (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)      C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b)    (strcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

#define C_curdir(buf)       (getcwd(C_c_string(buf), 256) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(pclose(C_port_file(p)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#define C_fork              fork
#define C_waitpid(id, o)    C_fix(waitpid(C_unfix(id), &C_wait_status, C_unfix(o)))
#define C_getppid           getppid
#define C_kill(id, s)       C_fix(kill(C_unfix(id), C_unfix(s)))
#define C_getuid            getuid
#define C_getgid            getgid
#define C_geteuid           geteuid
#define C_getegid           getegid
#define C_chown(fn, u, g)   C_fix(chown(C_data_pointer(fn), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_seteuid(id)       C_fix(seteuid(C_unfix(id)))
#define C_setegid(id)       C_fix(setegid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_data_pointer(o), C_data_pointer(n)))
#define C_do_readlink(f, b)    C_fix(readlink(C_data_pointer(f), C_data_pointer(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam((char *)C_data_pointer(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#ifdef HAVE_GRP_H
#define C_getgrnam(n)       C_mk_bool((C_group = getgrnam((char *)C_data_pointer(n))) != NULL)
#define C_getgrgid(u)       C_mk_bool((C_group = getgrgid(C_unfix(u))) != NULL)
#else
#define C_getgrnam(n)       C_SCHEME_FALSE
#define C_getgrgid(n)       C_SCHEME_FALSE
#endif
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate((char *)C_data_pointer(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#define C_uname             C_fix(uname(&C_utsname))
#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)       C_fix(fileno(C_port_file(p)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))
#define C_alarm             alarm
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_test_access(fn, m)     C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_sleep             sleep

#define C_stat(fn)          C_fix(stat((char *)C_data_pointer(fn), &C_statbuf))
#define C_lstat(fn)         C_fix(lstat((char *)C_data_pointer(fn), &C_statbuf))
#define C_fstat(f)          C_fix(fstat(C_unfix(f), &C_statbuf))

#define C_islink            ((C_statbuf.st_mode & S_IFMT) == S_IFLNK)
#define C_isreg             ((C_statbuf.st_mode & S_IFMT) == S_IFREG)
#define C_isdir             ((C_statbuf.st_mode & S_IFMT) == S_IFDIR)
#define C_ischr             ((C_statbuf.st_mode & S_IFMT) == S_IFCHR)
#define C_isblk             ((C_statbuf.st_mode & S_IFMT) == S_IFBLK)
#define C_isfifo            ((C_statbuf.st_mode & S_IFMT) == S_IFIFO)
#ifdef S_IFSOCK
#define C_issock            ((C_statbuf.st_mode & S_IFMT) == S_IFSOCK)
#else
#define C_issock            ((C_statbuf.st_mode & S_IFMT) == 0140000)
#endif

#ifdef C_GNU_ENV
# define C_unsetenv(s)      (unsetenv((char *)C_data_pointer(s)), C_SCHEME_TRUE)
# define C_setenv(x, y)     C_fix(setenv((char *)C_data_pointer(x), (char *)C_data_pointer(y), 1))
#else
# define C_unsetenv(s)      C_fix(putenv((char *)C_data_pointer(s)))
static C_word C_fcall C_setenv(C_word x, C_word y) {
  char *sx = C_data_pointer(x),
       *sy = C_data_pointer(y);
  int n1 = C_strlen(sx), n2 = C_strlen(sy);
  char *buf = (char *)C_malloc(n1 + n2 + 2);
  if(buf == NULL) return(C_fix(0));
  else {
    C_strcpy(buf, sx);
    buf[ n1 ] = '=';
    C_strcpy(buf + n1 + 1, sy);
    return(C_fix(putenv(buf)));
  }
}
#endif

static void C_fcall C_set_arg_string(char **where, int i, char *a, int len) {
  char *ptr;
  if(a != NULL) {
    ptr = (char *)C_malloc(len + 1);
    C_memcpy(ptr, a, len);
    ptr[ len ] = '\0';
  }
  else ptr = NULL;
  where[ i ] = ptr;
}

static void C_fcall C_free_arg_string(char **where) {
  while((*where) != NULL) C_free(*(where++));
}

static void C_set_timeval(C_word num, struct timeval *tm)
{
  if((num & C_FIXNUM_BIT) != 0) {
    tm->tv_sec = C_unfix(num);
    tm->tv_usec = 0;
  }
  else {
    double i;
    tm->tv_usec = (int)(modf(C_flonum_magnitude(num), &i) * 1000000);
    tm->tv_sec = (int)i;
  }
}

#define C_set_exec_arg(i, a, len)	C_set_arg_string(C_exec_args, i, a, len)
#define C_free_exec_args()		C_free_arg_string(C_exec_args)
#define C_set_exec_env(i, a, len)	C_set_arg_string(C_exec_env, i, a, len)
#define C_free_exec_env()		C_free_arg_string(C_exec_env)

#define C_execvp(f)         C_fix(execvp(C_data_pointer(f), C_exec_args))
#define C_execve(f)         C_fix(execve(C_data_pointer(f), C_exec_args, C_exec_env))

#if defined(__FreeBSD__) || defined(C_MACOSX) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__sgi__) || defined(sgi) || defined(__DragonFly__) || defined(__SUNPRO_C)
static C_TLS int C_uw;
# define C_WIFEXITED(n)      (C_uw = C_unfix(n), C_mk_bool(WIFEXITED(C_uw)))
# define C_WIFSIGNALED(n)    (C_uw = C_unfix(n), C_mk_bool(WIFSIGNALED(C_uw)))
# define C_WIFSTOPPED(n)     (C_uw = C_unfix(n), C_mk_bool(WIFSTOPPED(C_uw)))
# define C_WEXITSTATUS(n)    (C_uw = C_unfix(n), C_fix(WEXITSTATUS(C_uw)))
# define C_WTERMSIG(n)       (C_uw = C_unfix(n), C_fix(WTERMSIG(C_uw)))
# define C_WSTOPSIG(n)       (C_uw = C_unfix(n), C_fix(WSTOPSIG(C_uw)))
#else
# define C_WIFEXITED(n)      C_mk_bool(WIFEXITED(C_unfix(n)))
# define C_WIFSIGNALED(n)    C_mk_bool(WIFSIGNALED(C_unfix(n)))
# define C_WIFSTOPPED(n)     C_mk_bool(WIFSTOPPED(C_unfix(n)))
# define C_WEXITSTATUS(n)    C_fix(WEXITSTATUS(C_unfix(n)))
# define C_WTERMSIG(n)       C_fix(WTERMSIG(C_unfix(n)))
# define C_WSTOPSIG(n)       C_fix(WSTOPSIG(C_unfix(n)))
#endif

#ifdef __CYGWIN__
# define C_mkfifo(fn, m)    C_fix(-1);
#else
# define C_mkfifo(fn, m)    C_fix(mkfifo((char *)C_data_pointer(fn), C_unfix(m)))
#endif

#define C_flock_setup(t, s, n) (C_flock.l_type = C_unfix(t), C_flock.l_start = C_num_to_int(s), C_flock.l_whence = SEEK_SET, C_flock.l_len = C_num_to_int(n), C_SCHEME_UNDEFINED)
#define C_flock_test(p)     (fcntl(fileno(C_port_file(p)), F_GETLK, &C_flock) >= 0 ? (C_flock.l_type == F_UNLCK ? C_fix(0) : C_fix(C_flock.l_pid)) : C_SCHEME_FALSE)
#define C_flock_lock(p)     C_fix(fcntl(fileno(C_port_file(p)), F_SETLK, &C_flock))
#define C_flock_lockw(p)    C_fix(fcntl(fileno(C_port_file(p)), F_SETLKW, &C_flock))

static C_TLS sigset_t C_sigset;
#define C_sigemptyset(d)    (sigemptyset(&C_sigset), C_SCHEME_UNDEFINED)
#define C_sigaddset(s)      (sigaddset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigdelset(s)      (sigdelset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigismember(s)    C_mk_bool(sigismember(&C_sigset, C_unfix(s)))
#define C_sigprocmask_set(d)        C_fix(sigprocmask(SIG_SETMASK, &C_sigset, NULL))
#define C_sigprocmask_block(d)      C_fix(sigprocmask(SIG_BLOCK, &C_sigset, NULL))
#define C_sigprocmask_unblock(d)    C_fix(sigprocmask(SIG_UNBLOCK, &C_sigset, NULL))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mkstemp(C_c_string(t)))

/* It is assumed that 'int' is-a 'long' */
#define C_ftell(p)          C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)    C_mk_nbool(fseek(C_port_file(p), C_num_to_int(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#define C_zero_fd_set(i)      FD_ZERO(&C_fd_sets[ i ])
#define C_set_fd_set(i, fd)   FD_SET(fd, &C_fd_sets[ i ])
#define C_test_fd_set(i, fd)  FD_ISSET(fd, &C_fd_sets[ i ])
#define C_C_select(m)         C_fix(select(C_unfix(m), &C_fd_sets[ 0 ], &C_fd_sets[ 1 ], NULL, NULL))
#define C_C_select_t(m, t)    (C_set_timeval(t, &C_timeval), \
			       C_fix(select(C_unfix(m), &C_fd_sets[ 0 ], &C_fd_sets[ 1 ], NULL, &C_timeval)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#if defined(__SVR4)
/* Seen here: http://lists.samba.org/archive/samba-technical/2002-November/025571.html */

static time_t timegm(struct tm *t)
{
  time_t tl, tb;
  struct tm *tg;

  tl = mktime (t);
  if (tl == -1)
    {
      t->tm_hour--;
      tl = mktime (t);
      if (tl == -1)
        return -1; /* can't deal with output from strptime */
      tl += 3600;
    }
  tg = gmtime (&tl);
  tg->tm_isdst = 0;
  tb = mktime (tg);
  if (tb == -1)
    {
      tg->tm_hour--;
      tb = mktime (tg);
      if (tb == -1)
        return -1; /* can't deal with output from gmtime */
      tb += 3600;
    }
  return (tl - (tb - tl));
}
#endif

#define cpy_tmvec_to_tmstc08(ptm, v) \
    (memset((ptm), 0, sizeof(struct tm)), \
    (ptm)->tm_sec = C_unfix(C_block_item((v), 0)), \
    (ptm)->tm_min = C_unfix(C_block_item((v), 1)), \
    (ptm)->tm_hour = C_unfix(C_block_item((v), 2)), \
    (ptm)->tm_mday = C_unfix(C_block_item((v), 3)), \
    (ptm)->tm_mon = C_unfix(C_block_item((v), 4)), \
    (ptm)->tm_year = C_unfix(C_block_item((v), 5)), \
    (ptm)->tm_wday = C_unfix(C_block_item((v), 6)), \
    (ptm)->tm_yday = C_unfix(C_block_item((v), 7)), \
    (ptm)->tm_isdst = (C_block_item((v), 8) != C_SCHEME_FALSE))

#define cpy_tmvec_to_tmstc9(ptm, v) \
    (((struct tm *)ptm)->tm_gmtoff = C_unfix(C_block_item((v), 9)))

#define cpy_tmstc08_to_tmvec(v, ptm) \
    (C_set_block_item((v), 0, C_fix(((struct tm *)ptm)->tm_sec)), \
    C_set_block_item((v), 1, C_fix((ptm)->tm_min)), \
    C_set_block_item((v), 2, C_fix((ptm)->tm_hour)), \
    C_set_block_item((v), 3, C_fix((ptm)->tm_mday)), \
    C_set_block_item((v), 4, C_fix((ptm)->tm_mon)), \
    C_set_block_item((v), 5, C_fix((ptm)->tm_year)), \
    C_set_block_item((v), 6, C_fix((ptm)->tm_wday)), \
    C_set_block_item((v), 7, C_fix((ptm)->tm_yday)), \
    C_set_block_item((v), 8, ((ptm)->tm_isdst ? C_SCHEME_TRUE : C_SCHEME_FALSE)))

#define cpy_tmstc9_to_tmvec(v, ptm) \
    (C_set_block_item((v), 9, C_fix((ptm)->tm_gmtoff)))

#define C_tm_set_08(v)  cpy_tmvec_to_tmstc08( &C_tm, (v) )
#define C_tm_set_9(v)   cpy_tmvec_to_tmstc9( &C_tm, (v) )

#define C_tm_get_08(v)  cpy_tmstc08_to_tmvec( (v), &C_tm )
#define C_tm_get_9(v)   cpy_tmstc9_to_tmvec( (v), &C_tm )

#if !defined(C_GNU_ENV) || defined(__CYGWIN__) || defined(__uClinux__)

static struct tm *
C_tm_set( C_word v )
{
  C_tm_set_08( v );
  return &C_tm;
}

static C_word
C_tm_get( C_word v )
{
  C_tm_get_08( v );
  return v;
}

#else

static struct tm *
C_tm_set( C_word v )
{
  C_tm_set_08( v );
  C_tm_set_9( v );
  return &C_tm;
}

static C_word
C_tm_get( C_word v )
{
  C_tm_get_08( v );
  C_tm_get_9( v );
  return v;
}

#endif

#define C_asctime(v)    (asctime(C_tm_set(v)))
#define C_a_mktime(ptr, c, v)  C_flonum(ptr, mktime(C_tm_set(v)))
#define C_a_timegm(ptr, c, v)  C_flonum(ptr, timegm(C_tm_set(v)))

#define TIME_STRING_MAXLENGTH 255
static char C_time_string [TIME_STRING_MAXLENGTH + 1];
#undef TIME_STRING_MAXLENGTH

#ifdef __linux__
extern char *strptime(const char *s, const char *format, struct tm *tm);
extern pid_t getpgid(pid_t pid);
#endif

#define C_strftime(v, f) \
        (strftime(C_time_string, sizeof(C_time_string), C_c_string(f), C_tm_set(v)) ? C_time_string : NULL)

#define C_strptime(s, f, v) \
        (strptime(C_c_string(s), C_c_string(f), &C_tm) ? C_tm_get(v) : C_SCHEME_FALSE)

static gid_t *C_groups = NULL;

#define C_get_gid(n)      C_fix(C_groups[ C_unfix(n) ])
#define C_set_gid(n, id)  (C_groups[ C_unfix(n) ] = C_unfix(id), C_SCHEME_UNDEFINED)
#define C_set_groups(n)   C_fix(setgroups(C_unfix(n), C_groups))

#ifdef TIOCGWINSZ
static int get_tty_size(int p, int *rows, int *cols)
{
 struct winsize tty_size;
 int r;

 memset(&tty_size, 0, sizeof tty_size);

 r = ioctl(p, TIOCGWINSZ, &tty_size);
 if (r == 0) {
    *rows = tty_size.ws_row;
    *cols = tty_size.ws_col;
 }
 return r;
}
#else
static int get_tty_size(int p, int *rows, int *cols)
{
 *rows = *cols = 0;
 return -1;
}
#endif

static int set_file_mtime(char *filename, C_word tm)
{
  struct utimbuf tb;

  tb.actime = tb.modtime = C_num_to_int(tm);
  return utime(filename, &tb);
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

static C_TLS C_word lf[463];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,41),40,112,111,115,105,120,45,101,114,114,111,114,32,116,121,112,101,49,54,32,108,111,99,49,55,32,109,115,103,49,56,32,46,32,97,114,103,115,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,102,105,108,101,45,110,111,110,98,108,111,99,107,105,110,103,33,32,97,50,49,50,52,41,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,102,105,108,101,45,115,101,108,101,99,116,45,111,110,101,32,97,50,53,50,56,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,35),40,102,105,108,101,45,99,111,110,116,114,111,108,32,102,100,52,52,32,99,109,100,52,53,32,46,32,116,109,112,52,51,52,54,41,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,39),40,102,105,108,101,45,111,112,101,110,32,102,105,108,101,110,97,109,101,53,55,32,102,108,97,103,115,53,56,32,46,32,109,111,100,101,53,57,41,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,99,108,111,115,101,32,102,100,54,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,34),40,102,105,108,101,45,114,101,97,100,32,102,100,55,51,32,115,105,122,101,55,52,32,46,32,98,117,102,102,101,114,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,35),40,102,105,108,101,45,119,114,105,116,101,32,102,100,56,56,32,98,117,102,102,101,114,56,57,32,46,32,115,105,122,101,57,48,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,109,107,115,116,101,109,112,32,116,101,109,112,108,97,116,101,49,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,6),40,103,50,52,48,41,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,51,51,32,103,50,51,55,50,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,6),40,103,50,50,48,41,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,50,49,51,32,103,50,49,55,50,49,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,6),40,103,49,56,54,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,55,57,32,103,49,56,51,49,56,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,6),40,103,49,53,55,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,49,53,48,32,103,49,53,52,49,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,42),40,102,105,108,101,45,115,101,108,101,99,116,32,102,100,115,114,49,51,49,32,102,100,115,119,49,51,50,32,46,32,116,105,109,101,111,117,116,49,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,35),40,35,35,115,121,115,35,115,116,97,116,32,102,105,108,101,50,53,51,32,108,105,110,107,50,53,52,32,108,111,99,50,53,53,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,102,105,108,101,45,115,116,97,116,32,102,50,54,55,32,46,32,108,105,110,107,50,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,16),40,102,105,108,101,45,115,105,122,101,32,102,50,55,53,41};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,50,57,54,41,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,50,57,57,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,111,119,110,101,114,32,102,51,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,32,102,51,48,53,41,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,24),40,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,110,97,109,101,51,48,56,41};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,25),40,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,110,97,109,101,51,49,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,97,99,116,101,114,45,100,101,118,105,99,101,63,32,102,110,97,109,101,51,50,48,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,24),40,98,108,111,99,107,45,100,101,118,105,99,101,63,32,102,110,97,109,101,51,50,54,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,17),40,102,95,51,50,54,55,32,102,110,97,109,101,51,51,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,18),40,115,111,99,107,101,116,63,32,102,110,97,109,101,51,51,56,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,51,52,51,32,112,111,115,51,52,52,32,46,32,119,104,101,110,99,101,51,52,53,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,100,105,114,52,48,55,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,7),40,97,51,52,51,50,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,47),40,97,51,52,51,56,32,100,105,114,52,51,48,52,51,49,52,51,54,32,102,105,108,101,52,51,50,52,51,51,52,51,55,32,101,120,116,52,51,52,52,51,53,52,51,56,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,51,56,51,32,46,32,116,109,112,51,56,50,51,56,52,41,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,52,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,26),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,52,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,35),40,98,111,100,121,52,55,55,32,115,112,101,99,52,56,54,32,115,104,111,119,45,100,111,116,102,105,108,101,115,63,52,56,55,41,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,35),40,100,101,102,45,115,104,111,119,45,100,111,116,102,105,108,101,115,63,52,56,48,32,37,115,112,101,99,52,55,53,53,49,57,41,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,115,112,101,99,52,55,57,41,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,52,55,48,52,55,49,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,21),40,100,105,114,101,99,116,111,114,121,63,32,102,110,97,109,101,53,50,54,41,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,53,52,50,53,52,51,41,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,7),40,97,51,56,49,55,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,19),40,97,51,56,49,49,32,101,120,118,97,114,53,56,57,54,48,50,41,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,51,56,51,53,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,51,56,52,55,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,20),40,97,51,56,52,49,32,46,32,97,114,103,115,53,57,55,54,49,51,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,51,56,50,57,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,15),40,97,51,56,48,53,32,107,53,57,54,54,48,49,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,5),40,99,119,100,41,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,54,52,48,32,114,54,52,49,41};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,45,112,97,116,104,32,112,97,116,104,54,49,52,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,108,111,99,54,52,57,32,99,109,100,54,53,48,32,105,110,112,54,53,49,32,114,54,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,54,53,53,32,46,32,109,54,53,54,41,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,54,54,52,32,46,32,109,54,54,53,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,54,55,51,41,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,7),40,97,52,50,57,57,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,20),40,97,52,51,48,53,32,46,32,114,101,115,117,108,116,115,54,57,51,41,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,54,56,57,32,112,114,111,99,54,57,48,32,46,32,109,111,100,101,54,57,49,41,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,7),40,97,52,51,50,51,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,20),40,97,52,51,50,57,32,46,32,114,101,115,117,108,116,115,54,57,57,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,54,57,53,32,112,114,111,99,54,57,54,32,46,32,109,111,100,101,54,57,55,41};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,20),40,97,52,51,52,56,32,46,32,114,101,115,117,108,116,115,55,48,54,41,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,55,48,49,32,116,104,117,110,107,55,48,50,32,46,32,109,111,100,101,55,48,51,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,20),40,97,52,51,54,56,32,46,32,114,101,115,117,108,116,115,55,49,53,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,47),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,55,49,48,32,116,104,117,110,107,55,49,49,32,46,32,109,111,100,101,55,49,50,41,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,13),40,99,114,101,97,116,101,45,112,105,112,101,41,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,104,97,110,100,108,101,114,32,115,105,103,55,50,55,41,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,55,50,57,32,112,114,111,99,55,51,48,41,0,0,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,55,51,53,32,115,116,97,116,101,55,51,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,55,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,115,55,52,49,41,0,0,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,105,103,115,55,54,52,32,109,97,115,107,55,54,53,41,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,13),40,115,105,103,110,97,108,45,109,97,115,107,41,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,115,105,103,55,54,57,41,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,21),40,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,55,55,50,41,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,115,105,103,55,55,56,41,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,38),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,117,115,101,114,56,49,57,32,46,32,116,109,112,56,49,56,56,50,48,41,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,41,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,54,48,41,0,0,0,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,40),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,103,114,111,117,112,56,52,54,32,46,32,116,109,112,56,52,53,56,52,55,41};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,56,52,41,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,12),40,103,101,116,45,103,114,111,117,112,115,41,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,56,57,51,32,108,115,116,56,57,55,32,105,56,57,56,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,21),40,115,101,116,45,103,114,111,117,112,115,33,32,108,115,116,48,56,57,48,41,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,33),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,117,115,101,114,57,49,54,32,105,100,57,49,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,32),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,57,50,51,32,109,57,50,52,41};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,39),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,102,110,57,50,57,32,117,105,100,57,51,48,32,103,105,100,57,51,49,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,57,51,56,32,97,99,99,57,51,57,32,108,111,99,57,52,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,52,54,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,52,55,41};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,34),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,16),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,41};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,36),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,111,108,100,57,55,50,32,110,101,119,57,55,51,41,0,0,0,0};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,41),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,57,56,54,32,46,32,116,109,112,57,56,53,57,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,108,105,110,107,32,111,108,100,49,48,49,50,32,110,101,119,49,48,49,51,41,0,0,0,0,0};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,20),40,109,111,100,101,32,105,110,112,49,48,50,48,32,109,49,48,50,49,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,108,111,99,49,48,51,52,32,102,100,49,48,51,53,32,105,110,112,49,48,51,54,32,114,49,48,51,55,41,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,33),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,49,48,52,48,32,46,32,109,49,48,52,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,34),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,49,48,52,51,32,46,32,109,49,48,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,23),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,49,48,52,57,41,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,36),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,49,48,54,49,32,46,32,110,101,119,49,48,54,50,41,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,8),40,114,101,97,100,121,63,41};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,7),40,102,101,116,99,104,41,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,7),40,97,53,53,56,52,41,0};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,7),40,97,53,53,57,55,41,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,7),40,97,53,54,48,57,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,7),40,97,53,54,51,48,41,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,110,49,49,53,54,32,109,49,49,53,55,32,115,116,97,114,116,49,49,53,56,41,0,0,0,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,41),40,97,53,54,51,57,32,112,111,114,116,49,49,53,49,32,110,49,49,53,50,32,100,101,115,116,49,49,53,51,32,115,116,97,114,116,49,49,53,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,24),40,98,117,109,112,101,114,32,99,117,114,49,49,56,50,32,112,116,114,49,49,56,51,41};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,7),40,97,53,56,48,49,41,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,42),40,97,53,56,48,55,32,100,101,115,116,49,50,49,51,49,50,49,52,49,50,49,55,32,99,111,110,116,63,49,50,49,53,49,50,49,54,49,50,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,49,49,56,48,41,0,0};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,26),40,97,53,55,49,53,32,112,111,114,116,49,49,55,55,32,108,105,109,105,116,49,49,55,56,41,0,0,0,0,0,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,59),40,98,111,100,121,49,48,56,57,32,110,111,110,98,108,111,99,107,105,110,103,63,49,49,48,48,32,98,117,102,105,49,49,48,49,32,111,110,45,99,108,111,115,101,49,49,48,50,32,109,111,114,101,63,49,49,48,51,41,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,69),40,100,101,102,45,109,111,114,101,63,49,48,57,52,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,48,56,53,49,50,50,55,32,37,98,117,102,105,49,48,56,54,49,50,50,56,32,37,111,110,45,99,108,111,115,101,49,48,56,55,49,50,50,57,41,0,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,54),40,100,101,102,45,111,110,45,99,108,111,115,101,49,48,57,51,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,48,56,53,49,50,51,49,32,37,98,117,102,105,49,48,56,54,49,50,51,50,41,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,98,117,102,105,49,48,57,50,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,48,56,53,49,50,51,52,41,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,110,111,110,98,108,111,99,107,105,110,103,63,49,48,57,49,41,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,99,117,115,116,111,109,45,105,110,112,117,116,45,112,111,114,116,32,108,111,99,49,48,55,56,32,110,97,109,49,48,55,57,32,102,100,49,48,56,48,32,46,32,116,109,112,49,48,55,55,49,48,56,49,41,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,22),40,112,111,107,101,32,115,116,114,49,50,55,57,32,108,101,110,49,50,56,48,41,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,15),40,97,53,57,57,56,32,115,116,114,49,51,49,52,41,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,7),40,97,54,48,48,52,41,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,7),40,97,54,48,50,53,41,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,16),40,102,95,54,48,51,52,32,115,116,114,49,50,57,48,41};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,32,114,101,109,49,50,57,55,32,115,116,97,114,116,49,50,57,56,32,108,101,110,49,50,57,57,41};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,16),40,102,95,54,48,52,57,32,115,116,114,49,50,57,53,41};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,49),40,98,111,100,121,49,50,54,50,32,110,111,110,98,108,111,99,107,105,110,103,63,49,50,55,50,32,98,117,102,105,49,50,55,51,32,111,110,45,99,108,111,115,101,49,50,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,54),40,100,101,102,45,111,110,45,99,108,111,115,101,49,50,54,54,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,50,53,57,49,51,50,54,32,37,98,117,102,105,49,50,54,48,49,51,50,55,41,0,0};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,98,117,102,105,49,50,54,53,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,50,53,57,49,51,50,57,41,0,0,0,0};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,110,111,110,98,108,111,99,107,105,110,103,63,49,50,54,52,41,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,63),40,35,35,115,121,115,35,99,117,115,116,111,109,45,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,49,50,53,50,32,110,97,109,49,50,53,51,32,102,100,49,50,53,52,32,46,32,116,109,112,49,50,53,49,49,50,53,53,41,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,102,110,97,109,101,49,51,51,55,32,111,102,102,49,51,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,32,112,111,114,116,49,51,53,48,32,97,114,103,115,49,51,53,49,32,108,111,99,49,51,53,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,30),40,101,114,114,32,109,115,103,49,51,54,56,32,108,111,99,107,49,51,54,57,32,108,111,99,49,51,55,48,41,0,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,108,111,99,107,32,112,111,114,116,49,51,55,49,32,46,32,97,114,103,115,49,51,55,50,41,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,40),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,112,111,114,116,49,51,55,52,32,46,32,97,114,103,115,49,51,55,53,41};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,36),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,112,111,114,116,49,51,55,55,32,46,32,97,114,103,115,49,51,55,56,41,0,0,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,22),40,102,105,108,101,45,117,110,108,111,99,107,32,108,111,99,107,49,51,57,55,41,0,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,102,105,102,111,32,102,110,97,109,101,49,52,48,50,32,46,32,109,111,100,101,49,52,48,51,41,0,0,0,0,0,0};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,20),40,102,105,102,111,63,32,102,105,108,101,110,97,109,101,49,52,48,57,41,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,24),40,115,101,116,101,110,118,32,118,97,114,49,52,49,50,32,118,97,108,49,52,49,51,41};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,18),40,117,110,115,101,116,101,110,118,32,118,97,114,49,52,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,12),40,115,99,97,110,32,106,49,52,51,49,41,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,52,50,56,41,0,0,0,0};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,72),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,97,100,100,114,49,52,53,50,32,108,101,110,49,52,53,51,32,112,114,111,116,49,52,53,52,32,102,108,97,103,49,52,53,53,32,102,100,49,52,53,54,32,46,32,111,102,102,49,52,53,55,41};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,43),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,109,109,97,112,49,52,55,56,32,46,32,108,101,110,49,52,55,57,41,0,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,37),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,109,109,97,112,49,52,56,53,41,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,120,49,52,56,56,41,0,0,0,0,0};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,34),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,49,52,57,48,32,116,109,49,52,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,35),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,49,53,48,49,49,53,48,50,41,0,0,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,49,53,49,53,49,53,49,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,49,53,51,52,49,53,51,53,41,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,35),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,49,53,54,51,32,46,32,116,109,112,49,53,54,50,49,53,54,52,41,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,36),40,115,116,114,105,110,103,45,62,116,105,109,101,32,116,105,109,49,53,57,51,32,46,32,116,109,112,49,53,57,50,49,53,57,52,41,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,28),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,49,54,48,51,41,0,0,0,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,26),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,49,54,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,18),40,95,101,120,105,116,32,46,32,99,111,100,101,49,54,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,22),40,115,101,116,45,97,108,97,114,109,33,32,97,49,54,49,57,49,54,50,50,41,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,50),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,49,54,50,51,32,109,111,100,101,49,54,50,52,32,46,32,115,105,122,101,49,54,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,25),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,49,54,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,116,101,114,109,105,110,97,108,45,99,104,101,99,107,32,99,97,108,108,101,114,49,54,52,52,32,112,111,114,116,49,54,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,49,54,53,55,41};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,49,54,54,56,41};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,7),40,97,55,50,55,49,41,0};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,13),40,103,49,55,51,49,32,109,49,55,51,51,41,0,0,0};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,102,110,115,49,55,50,50,41,0,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,55),40,97,55,50,55,55,32,100,105,114,49,55,48,49,49,55,48,50,49,55,48,55,32,102,105,108,49,55,48,51,49,55,48,52,49,55,48,56,32,101,120,116,49,55,48,53,49,55,48,54,49,55,48,57,41,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,21),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,49,54,57,55,41,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,18),40,103,108,111,98,32,46,32,112,97,116,104,115,49,54,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,116,104,117,110,107,49,55,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,28),40,115,101,116,97,114,103,32,97,49,55,54,57,49,55,55,53,32,97,49,55,54,56,49,55,55,54,41,0,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,28),40,115,101,116,101,110,118,32,97,49,55,56,49,49,55,56,55,32,97,49,55,56,48,49,55,56,56,41,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,56,50,53,32,105,49,56,51,48,41,0,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,49,56,49,55,32,97,108,49,56,50,49,32,105,49,56,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,34),40,98,111,100,121,49,56,48,53,32,97,114,103,108,105,115,116,49,56,49,52,32,101,110,118,108,105,115,116,49,56,49,53,41,0,0,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,34),40,100,101,102,45,101,110,118,108,105,115,116,49,56,48,56,32,37,97,114,103,108,105,115,116,49,56,48,51,49,56,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,17),40,100,101,102,45,97,114,103,108,105,115,116,49,56,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,44),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,49,55,57,56,32,46,32,116,109,112,49,55,57,55,49,55,57,57,41,0,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,56,54,48,32,110,111,104,97,110,103,49,56,54,49,41,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,7),40,97,55,54,55,51,41,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,36),40,97,55,54,55,57,32,101,112,105,100,49,56,57,49,32,101,110,111,114,109,49,56,57,50,32,101,99,111,100,101,49,56,57,51,41,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,25),40,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,49,56,55,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,19),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,17),40,115,108,101,101,112,32,97,49,56,57,57,49,57,48,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,33),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,105,100,49,57,48,51,32,46,32,115,105,103,49,57,48,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,49,57,49,56,41,0,0,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,114,117,110,32,102,49,57,50,49,32,46,32,97,114,103,115,49,57,50,50,41,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,7),40,97,55,56,52,57,41,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,29),40,97,55,56,53,53,32,95,49,57,54,48,32,102,108,103,49,57,54,49,32,99,111,100,49,57,54,50,41,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,8),40,102,95,55,56,51,53,41};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,68),40,109,97,107,101,45,111,110,45,99,108,111,115,101,32,108,111,99,49,57,52,56,32,112,105,100,49,57,52,57,32,99,108,115,118,101,99,49,57,53,48,32,105,100,120,49,57,53,49,32,105,100,120,97,49,57,53,50,32,105,100,120,98,49,57,53,51,41,0,0,0,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,7),40,97,55,56,55,56,41,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,19),40,97,55,56,56,52,32,105,49,57,55,50,32,111,49,57,55,51,41,0,0,0,0,0};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,22),40,110,101,101,100,101,100,45,112,105,112,101,32,112,111,114,116,49,57,54,55,41,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,34),40,99,111,110,110,101,99,116,45,112,97,114,101,110,116,32,112,105,112,101,49,57,55,53,32,112,111,114,116,49,57,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,43),40,99,111,110,110,101,99,116,45,99,104,105,108,100,32,112,105,112,101,49,57,56,52,32,112,111,114,116,49,57,56,53,32,115,116,100,102,100,49,57,56,54,41,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,7),40,97,55,57,53,57,41,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,67),40,115,112,97,119,110,32,99,109,100,50,48,48,48,32,97,114,103,115,50,48,48,49,32,101,110,118,50,48,48,50,32,115,116,100,111,117,116,102,50,48,48,51,32,115,116,100,105,110,102,50,48,48,52,32,115,116,100,101,114,114,102,50,48,48,53,41,0,0,0,0,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,59),40,105,110,112,117,116,45,112,111,114,116,32,108,111,99,50,48,49,50,32,99,109,100,50,48,49,52,32,112,105,112,101,50,48,49,53,32,115,116,100,102,50,48,49,54,32,111,110,45,99,108,111,115,101,50,48,49,56,41,0,0,0,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,60),40,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,50,48,50,51,32,99,109,100,50,48,50,53,32,112,105,112,101,50,48,50,54,32,115,116,100,102,50,48,50,55,32,111,110,45,99,108,111,115,101,50,48,50,57,41,0,0,0,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,7),40,97,56,48,48,57,41,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,50),40,97,56,48,49,53,32,105,110,112,105,112,101,50,48,52,51,32,111,117,116,112,105,112,101,50,48,52,52,32,101,114,114,112,105,112,101,50,48,52,53,32,112,105,100,50,48,52,54,41,0,0,0,0,0,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,83),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,50,48,51,52,32,99,109,100,50,48,51,53,32,97,114,103,115,50,48,51,54,32,101,110,118,50,48,51,55,32,115,116,100,111,117,116,102,50,48,51,56,32,115,116,100,105,110,102,50,48,51,57,32,115,116,100,101,114,114,102,50,48,52,48,41,0,0,0,0,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,21),40,97,56,48,55,48,32,103,50,48,54,54,50,48,54,55,50,48,54,56,41,0,0,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,50,48,53,53,41,0,0,0,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,7),40,97,56,48,56,56,41,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,38),40,97,56,48,57,52,32,105,110,50,48,55,55,32,111,117,116,50,48,55,56,32,112,105,100,50,48,55,57,32,101,114,114,50,48,56,48,41,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,52),40,37,112,114,111,99,101,115,115,32,108,111,99,50,48,52,57,32,101,114,114,63,50,48,53,48,32,99,109,100,50,48,53,49,32,97,114,103,115,50,48,53,50,32,101,110,118,50,48,53,51,41,0,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,27),40,98,111,100,121,50,48,57,55,32,97,114,103,115,50,49,48,54,32,101,110,118,50,49,48,55,41,0,0,0,0,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,50,49,48,48,32,37,97,114,103,115,50,48,57,53,50,49,48,57,41,0,0,0,0,0};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,50,48,57,57,41,0,0};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,50,48,57,48,32,46,32,116,109,112,50,48,56,57,50,48,57,49,41,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,27),40,98,111,100,121,50,49,50,56,32,97,114,103,115,50,49,51,55,32,101,110,118,50,49,51,56,41,0,0,0,0,0};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,50,49,51,49,32,37,97,114,103,115,50,49,50,54,50,49,52,48,41,0,0,0,0,0};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,50,49,51,48,41,0,0};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,50,49,50,49,32,46,32,116,109,112,50,49,50,48,50,49,50,50,41};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,14),40,102,95,56,51,56,52,32,120,50,49,57,49,41,0,0};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,7),40,97,56,51,48,55,41,0};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,7),40,97,56,51,49,50,41,0};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,7),40,97,56,51,51,54,41,0};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,102,115,50,49,57,51,32,114,50,49,57,52,41,0,0,0,0,0};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,16),40,102,95,56,52,48,51,32,46,32,95,50,49,56,52,41};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,16),40,102,95,56,51,57,53,32,46,32,95,50,49,56,51,41};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,50,49,54,49,32,97,99,116,105,111,110,50,49,55,49,32,105,100,50,49,55,50,32,108,105,109,105,116,50,49,55,51,41,0,0};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,108,105,109,105,116,50,49,54,53,32,37,97,99,116,105,111,110,50,49,53,56,50,50,50,52,32,37,105,100,50,49,53,57,50,50,50,53,41,0,0,0,0,0};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,28),40,100,101,102,45,105,100,50,49,54,52,32,37,97,99,116,105,111,110,50,49,53,56,50,50,50,55,41,0,0,0,0};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,19),40,97,56,52,50,51,32,120,50,50,50,57,32,121,50,50,51,48,41,0,0,0,0,0};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,97,99,116,105,111,110,50,49,54,51,41};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,51),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,50,49,53,50,32,112,114,101,100,50,49,53,51,32,46,32,97,99,116,105,111,110,45,105,100,45,108,105,109,105,116,50,49,53,52,41,0,0,0,0,0};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,100,105,114,50,50,52,52,41,0,0,0};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,14),40,97,56,53,50,50,32,112,105,100,57,53,56,41,0,0};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,22),40,97,56,53,52,48,32,112,105,100,57,54,53,32,112,103,105,100,57,54,54,41,0,0};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,7),40,97,56,53,54,49,41,0};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,13),40,97,56,53,54,52,32,105,100,56,48,56,41,0,0,0};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,7),40,97,56,53,55,57,41,0};
static C_char C_TLS li248[] C_aligned={C_lihdr(0,0,13),40,97,56,53,56,50,32,105,100,56,48,50,41,0,0,0};
static C_char C_TLS li249[] C_aligned={C_lihdr(0,0,7),40,97,56,53,57,55,41,0};
static C_char C_TLS li250[] C_aligned={C_lihdr(0,0,13),40,97,56,54,48,48,32,105,100,55,57,54,41,0,0,0};
static C_char C_TLS li251[] C_aligned={C_lihdr(0,0,7),40,97,56,54,49,53,41,0};
static C_char C_TLS li252[] C_aligned={C_lihdr(0,0,13),40,97,56,54,49,56,32,105,100,55,57,48,41,0,0,0};
static C_char C_TLS li253[] C_aligned={C_lihdr(0,0,12),40,97,56,54,51,51,32,110,55,56,51,41,0,0,0,0};
static C_char C_TLS li254[] C_aligned={C_lihdr(0,0,15),40,97,56,54,51,57,32,112,111,114,116,51,54,50,41,0};
static C_char C_TLS li255[] C_aligned={C_lihdr(0,0,12),40,97,56,54,55,54,32,102,50,55,55,41,0,0,0,0};
static C_char C_TLS li256[] C_aligned={C_lihdr(0,0,17),40,97,56,54,56,50,32,102,50,55,57,32,116,50,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li257[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k8490 in set-root-directory! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub2239(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2239(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from k7731 */
static C_word C_fcall stub1900(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1900(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from parent-process-id in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub1897(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1897(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from current-process-id in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub1895(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1895(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from freeenv */
static C_word C_fcall stub1790(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1790(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_env();
return C_r;}

/* from k7437 */
static C_word C_fcall stub1783(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1783(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from freeargs */
static C_word C_fcall stub1778(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1778(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k7418 */
static C_word C_fcall stub1771(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1771(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k7394 */
static C_word C_fcall stub1759(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1759(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from fork */
static C_word C_fcall stub1742(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1742(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1682(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1682(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
if(gethostname(C_hostbuf, 256) == -1) return(NULL);else return(C_hostbuf);
C_ret:
#undef return

return C_r;}

/* from k7201 */
static C_word C_fcall stub1663(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1663(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k7178 */
static C_word C_fcall stub1653(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1653(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k7067 */
static C_word C_fcall stub1620(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1620(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

/* from k7045 */
static C_word C_fcall stub1615(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1615(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1610(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1610(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__)
time_t clock = time(NULL);struct tm *ltm = C_localtime(&clock);char *z = ltm ? (char *)ltm->tm_zone : 0;
#else
char *z = (daylight ? tzname[1] : tzname[0]);
#endif
return(z);
C_ret:
#undef return

return C_r;}

/* from strptime */
static C_word C_fcall stub1582(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1582(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=((C_word)C_strptime(t0,t1,t2));
return C_r;}

/* from strftime */
static C_word C_fcall stub1552(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1552(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from asctime */
static C_word C_fcall stub1546(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1546(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k6827 */
static C_word C_fcall stub1525(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1525(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k6677 */
static C_word C_fcall stub1472(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1472(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k6615 */
static C_word C_fcall stub1441(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub1441(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k6514 */
static C_word C_fcall stub1423(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1423(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k5260 in k5256 in file-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub1004(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1004(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from k4963 */
static C_word C_fcall stub910(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub910(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)initgroups(t0,t1));
return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub868(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub868(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
if(C_groups != NULL) C_free(C_groups);C_groups = (gid_t *)C_malloc(sizeof(gid_t) * n);if(C_groups == NULL) return(0);else return(1);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub864(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub864(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
return(getgroups(n, C_groups));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub835(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub835(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
return(C_group->gr_mem[ i ]);
C_ret:
#undef return

return C_r;}

/* from a8561 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub806(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub806(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from a8579 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub800(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub800(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a8597 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub794(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub794(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from a8615 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub788(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub788(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

/* from k8691 in k8714 in a8682 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall stub286(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub286(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_fix((C_word)set_file_mtime(t0,t1));
return C_r;}

/* from k2845 */
static C_word C_fcall stub127(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub127(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mk_bool(C_test_fd_set(t0,t1));
return C_r;}

/* from k2835 */
static C_word C_fcall stub121(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub121(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_set_fd_set(t0,t1);
return C_r;}

/* from k2825 */
static C_word C_fcall stub116(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub116(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_zero_fd_set(t0);
return C_r;}

/* from k2607 */
static C_word C_fcall stub33(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub33(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub26(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub26(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;struct timeval tm;FD_ZERO(&in);FD_SET(fd, &in);tm.tv_sec = tm.tv_usec = 0;if(select(fd + 1, &in, NULL, NULL, &tm) == -1) return(-1);else return(FD_ISSET(fd, &in) ? 1 : 0);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub22(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub22(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) return(0);return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

/* from k2525 */
static C_word C_fcall stub12(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub12(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static void C_ccall f_2504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8683)
static void C_ccall f_8683(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8716)
static void C_ccall f_8716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8693)
static void C_ccall f_8693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8703)
static void C_fcall f_8703(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8677)
static void C_ccall f_8677(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8681)
static void C_ccall f_8681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3205)
static void C_ccall f_3205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8640)
static void C_ccall f_8640(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8656)
static void C_ccall f_8656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8644)
static void C_ccall f_8644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8647)
static void C_ccall f_8647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8634)
static void C_ccall f_8634(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8619)
static void C_ccall f_8619(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8629)
static void C_ccall f_8629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8616)
static void C_ccall f_8616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4623)
static void C_ccall f_4623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8611)
static void C_ccall f_8611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8598)
static void C_ccall f_8598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4627)
static void C_ccall f_4627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8583)
static void C_ccall f_8583(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8593)
static void C_ccall f_8593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8580)
static void C_ccall f_8580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4631)
static void C_ccall f_4631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8565)
static void C_ccall f_8565(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8575)
static void C_ccall f_8575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8562)
static void C_ccall f_8562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8541)
static void C_ccall f_8541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8557)
static void C_ccall f_8557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8523)
static void C_ccall f_8523(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8536)
static void C_ccall f_8536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8530)
static void C_ccall f_8530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5153)
static void C_ccall f_5153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5192)
static void C_ccall f_5192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8500)
static void C_ccall f_8500(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8492)
static void C_ccall f_8492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8510)
static void C_fcall f_8510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8241)
static void C_ccall f_8241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_8241)
static void C_ccall f_8241r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8418)
static void C_fcall f_8418(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8424)
static void C_ccall f_8424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8413)
static void C_fcall f_8413(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8408)
static void C_fcall f_8408(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8243)
static void C_fcall f_8243(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8395)
static void C_ccall f_8395(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8403)
static void C_ccall f_8403(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8250)
static void C_fcall f_8250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8383)
static void C_ccall f_8383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8377)
static void C_ccall f_8377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8260)
static void C_ccall f_8260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8262)
static void C_fcall f_8262(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8281)
static void C_ccall f_8281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8363)
static void C_ccall f_8363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8370)
static void C_ccall f_8370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8357)
static void C_ccall f_8357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8296)
static void C_ccall f_8296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8350)
static void C_ccall f_8350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8347)
static void C_ccall f_8347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8337)
static void C_ccall f_8337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8313)
static void C_ccall f_8313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8335)
static void C_ccall f_8335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8321)
static void C_ccall f_8321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8328)
static void C_ccall f_8328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8325)
static void C_ccall f_8325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8308)
static void C_ccall f_8308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8306)
static void C_ccall f_8306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8384)
static void C_ccall f_8384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8181)
static void C_ccall f_8181(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8181)
static void C_ccall f_8181r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8193)
static void C_fcall f_8193(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8188)
static void C_fcall f_8188(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8183)
static void C_fcall f_8183(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8121)
static void C_ccall f_8121(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8121)
static void C_ccall f_8121r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8133)
static void C_fcall f_8133(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8128)
static void C_fcall f_8128(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8123)
static void C_fcall f_8123(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8060)
static void C_fcall f_8060(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8115)
static void C_ccall f_8115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8119)
static void C_ccall f_8119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8081)
static void C_ccall f_8081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8084)
static void C_ccall f_8084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8095)
static void C_ccall f_8095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8089)
static void C_ccall f_8089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8062)
static void C_fcall f_8062(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8071)
static void C_ccall f_8071(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_8016)
static void C_ccall f_8016(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8047)
static void C_ccall f_8047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8027)
static void C_ccall f_8027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8043)
static void C_ccall f_8043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8031)
static void C_ccall f_8031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8039)
static void C_ccall f_8039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8035)
static void C_ccall f_8035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8010)
static void C_ccall f_8010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7993)
static void C_fcall f_7993(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7997)
static void C_ccall f_7997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7982)
static void C_fcall f_7982(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_7986)
static void C_ccall f_7986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7937)
static void C_fcall f_7937(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7941)
static void C_ccall f_7941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7947)
static void C_ccall f_7947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7954)
static void C_fcall f_7954(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7960)
static void C_ccall f_7960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7964)
static void C_ccall f_7964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7967)
static void C_ccall f_7967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7970)
static void C_ccall f_7970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7958)
static void C_ccall f_7958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7904)
static void C_fcall f_7904(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7829)
static void C_ccall f_7829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7890)
static void C_fcall f_7890(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7903)
static void C_ccall f_7903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7870)
static void C_fcall f_7870(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7885)
static void C_ccall f_7885(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7879)
static void C_ccall f_7879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7833)
static void C_fcall f_7833(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7835)
static void C_ccall f_7835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7856)
static void C_ccall f_7856(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7850)
static void C_ccall f_7850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7784)
static void C_ccall f_7784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7803)
static void C_ccall f_7803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7807)
static void C_ccall f_7807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7771)
static void C_ccall f_7771(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7766)
static void C_ccall f_7766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7735)
static void C_ccall f_7735(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7735)
static void C_ccall f_7735r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7728)
static void C_ccall f_7728(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7725)
static void C_ccall f_7725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7722)
static void C_ccall f_7722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7644)
static void C_ccall f_7644(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7644)
static void C_ccall f_7644r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7680)
static void C_ccall f_7680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7674)
static void C_ccall f_7674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7627)
static void C_ccall f_7627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7445)
static void C_ccall f_7445(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7445)
static void C_ccall f_7445r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7579)
static void C_fcall f_7579(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7574)
static void C_fcall f_7574(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7447)
static void C_fcall f_7447(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7457)
static void C_ccall f_7457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7465)
static void C_fcall f_7465(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7511)
static C_word C_fcall f_7511(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7478)
static void C_fcall f_7478(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7503)
static void C_ccall f_7503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7481)
static void C_ccall f_7481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7426)
static C_word C_fcall f_7426(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7407)
static C_word C_fcall f_7407(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7365)
static void C_ccall f_7365(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7365)
static void C_ccall f_7365r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7390)
static void C_ccall f_7390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7251)
static void C_ccall f_7251(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7251)
static void C_ccall f_7251r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7257)
static void C_fcall f_7257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7278)
static void C_ccall f_7278(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7357)
static void C_ccall f_7357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7282)
static void C_ccall f_7282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7285)
static void C_ccall f_7285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7292)
static void C_ccall f_7292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7294)
static void C_fcall f_7294(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7311)
static void C_ccall f_7311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7315)
static void C_fcall f_7315(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7323)
static void C_ccall f_7323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7327)
static void C_ccall f_7327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7272)
static void C_ccall f_7272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7239)
static void C_ccall f_7239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7243)
static void C_ccall f_7243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7246)
static void C_ccall f_7246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7204)
static void C_ccall f_7204(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7208)
static void C_ccall f_7208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7228)
static void C_ccall f_7228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7181)
static void C_ccall f_7181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7149)
static void C_fcall f_7149(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7153)
static void C_ccall f_7153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7130)
static void C_ccall f_7130(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7134)
static void C_ccall f_7134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7137)
static void C_ccall f_7137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7071)
static void C_ccall f_7071(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_7071)
static void C_ccall f_7071r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7075)
static void C_ccall f_7075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7081)
static void C_ccall f_7081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7090)
static void C_fcall f_7090(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7064)
static void C_ccall f_7064(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7048)
static void C_ccall f_7048(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7048)
static void C_ccall f_7048r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7036)
static void C_ccall f_7036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7025)
static void C_ccall f_7025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7031)
static void C_ccall f_7031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7006)
static void C_ccall f_7006(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7010)
static void C_ccall f_7010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7016)
static void C_ccall f_7016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6960)
static void C_ccall f_6960(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6960)
static void C_ccall f_6960r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6964)
static void C_ccall f_6964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6981)
static void C_ccall f_6981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6895)
static void C_ccall f_6895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6898)
static void C_ccall f_6898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6920)
static void C_ccall f_6920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6917)
static void C_ccall f_6917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6907)
static void C_ccall f_6907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6830)
static void C_ccall f_6830(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6830)
static void C_ccall f_6830r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6834)
static void C_ccall f_6834(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6840)
static void C_ccall f_6840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6786)
static void C_ccall f_6786(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6786)
static void C_ccall f_6786r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6752)
static void C_ccall f_6752(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6752)
static void C_ccall f_6752r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6756)
static void C_ccall f_6756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6733)
static void C_fcall f_6733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6727)
static void C_ccall f_6727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6718)
static void C_ccall f_6718(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6621)
static void C_ccall f_6621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_6621)
static void C_ccall f_6621r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_6625)
static void C_ccall f_6625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6631)
static void C_ccall f_6631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6650)
static void C_ccall f_6650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6637)
static void C_ccall f_6637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6517)
static void C_ccall f_6517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6523)
static void C_fcall f_6523(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_fcall f_6535(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6561)
static void C_ccall f_6561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6565)
static void C_ccall f_6565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6553)
static void C_ccall f_6553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6497)
static void C_ccall f_6497(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6505)
static void C_ccall f_6505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6480)
static void C_ccall f_6480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6491)
static void C_ccall f_6491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6454)
static void C_ccall f_6454(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6411)
static void C_ccall f_6411r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6418)
static void C_fcall f_6418(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6439)
static void C_ccall f_6439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6435)
static void C_ccall f_6435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6383)
static void C_ccall f_6383(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6360)
static void C_ccall f_6360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6341)
static void C_ccall f_6341(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6341)
static void C_ccall f_6341r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6345)
static void C_ccall f_6345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6326)
static void C_ccall f_6326(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6326)
static void C_ccall f_6326r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6330)
static void C_ccall f_6330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6308)
static void C_fcall f_6308(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6234)
static void C_fcall f_6234(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6256)
static void C_ccall f_6256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6262)
static void C_fcall f_6262(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6223)
static void C_ccall f_6223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6219)
static void C_ccall f_6219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6212)
static void C_ccall f_6212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6205)
static void C_fcall f_6205(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5936)
static void C_ccall f_5936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5936)
static void C_ccall f_5936r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6132)
static void C_fcall f_6132(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6127)
static void C_fcall f_6127(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6122)
static void C_fcall f_6122(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5938)
static void C_fcall f_5938(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6048)
static void C_ccall f_6048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6049)
static void C_ccall f_6049(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6066)
static void C_fcall f_6066(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5990)
static void C_fcall f_5990(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6026)
static void C_ccall f_6026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6015)
static void C_ccall f_6015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5999)
static void C_ccall f_5999(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5994)
static void C_ccall f_5994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5997)
static void C_ccall f_5997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5944)
static void C_fcall f_5944(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5960)
static void C_ccall f_5960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5454)
static void C_ccall f_5454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5454)
static void C_ccall f_5454r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5858)
static void C_fcall f_5858(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5853)
static void C_fcall f_5853(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5848)
static void C_fcall f_5848(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5843)
static void C_fcall f_5843(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5456)
static void C_fcall f_5456(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5466)
static void C_ccall f_5466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5722)
static void C_fcall f_5722(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5802)
static void C_ccall f_5802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5741)
static void C_ccall f_5741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5640)
static void C_ccall f_5640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5648)
static void C_fcall f_5648(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5650)
static void C_fcall f_5650(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5698)
static void C_ccall f_5698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5631)
static void C_ccall f_5631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5635)
static void C_ccall f_5635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5598)
static void C_ccall f_5598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5585)
static void C_ccall f_5585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5583)
static void C_ccall f_5583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5498)
static void C_fcall f_5498(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5510)
static void C_fcall f_5510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5547)
static void C_ccall f_5547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5556)
static void C_ccall f_5556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5550)
static void C_ccall f_5550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5490)
static C_word C_fcall f_5490(C_word t0);
C_noret_decl(f_5467)
static void C_fcall f_5467(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5434)
static void C_fcall f_5434(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5386)
static void C_ccall f_5386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_ccall f_5421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5404)
static void C_ccall f_5404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5354)
static void C_ccall f_5354(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5354)
static void C_ccall f_5354r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5366)
static void C_ccall f_5366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5339)
static void C_fcall f_5339(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5352)
static void C_ccall f_5352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_fcall f_5302(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5310)
static void C_ccall f_5310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5258)
static void C_ccall f_5258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5290)
static void C_fcall f_5290(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5232)
static void C_ccall f_5232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5204)
static void C_ccall f_5204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5207)
static void C_ccall f_5207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5210)
static void C_ccall f_5210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5216)
static void C_ccall f_5216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5155)
static void C_ccall f_5155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5184)
static void C_ccall f_5184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5136)
static void C_ccall f_5136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5140)
static void C_ccall f_5140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5118)
static void C_ccall f_5118(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5094)
static void C_fcall f_5094(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5112)
static void C_ccall f_5112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5064)
static void C_ccall f_5064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5092)
static void C_ccall f_5092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5058)
static void C_ccall f_5058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4961)
static void C_ccall f_4961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4989)
static void C_ccall f_4989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4899)
static void C_ccall f_4899(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4908)
static void C_fcall f_4908(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4924)
static void C_ccall f_4924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4894)
static void C_ccall f_4894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4840)
static void C_ccall f_4840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4851)
static void C_fcall f_4851(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4743)
static void C_ccall f_4743r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4801)
static void C_ccall f_4801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4750)
static void C_fcall f_4750(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4763)
static void C_ccall f_4763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4773)
static void C_fcall f_4773(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4787)
static void C_ccall f_4787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4771)
static void C_ccall f_4771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4718)
static void C_ccall f_4718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4730)
static void C_ccall f_4730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4726)
static void C_ccall f_4726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4712)
static void C_ccall f_4712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4637)
static void C_ccall f_4637(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4637)
static void C_ccall f_4637r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4644)
static void C_fcall f_4644(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4657)
static void C_ccall f_4657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4661)
static void C_ccall f_4661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4669)
static void C_ccall f_4669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4673)
static void C_ccall f_4673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4602)
static void C_ccall f_4602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4606)
static void C_ccall f_4606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4550)
static void C_ccall f_4550(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4544)
static void C_ccall f_4544(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4518)
static void C_fcall f_4518(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4484)
static C_word C_fcall f_4484(C_word t0);
C_noret_decl(f_4448)
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4435)
static void C_ccall f_4435(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4363)
static void C_ccall f_4363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4343)
static void C_ccall f_4343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4349)
static void C_ccall f_4349r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4353)
static void C_ccall f_4353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4334)
static void C_ccall f_4334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4275)
static void C_ccall f_4275(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4253)
static void C_ccall f_4253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4203)
static void C_ccall f_4203r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4217)
static void C_ccall f_4217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4188)
static void C_fcall f_4188(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3853)
static void C_ccall f_3853(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3980)
static void C_fcall f_3980(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3999)
static void C_fcall f_3999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4128)
static void C_ccall f_4128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4107)
static void C_ccall f_4107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4113)
static void C_ccall f_4113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4043)
static void C_fcall f_4043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4089)
static void C_ccall f_4089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4076)
static void C_ccall f_4076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4037)
static void C_ccall f_4037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4006)
static void C_ccall f_4006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3974)
static void C_ccall f_3974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3867)
static void C_ccall f_3867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_fcall f_3869(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3940)
static void C_ccall f_3940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3914)
static void C_ccall f_3914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3797)
static void C_fcall f_3797(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3842)
static void C_ccall f_3842r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3848)
static void C_ccall f_3848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3836)
static void C_ccall f_3836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3801)
static void C_ccall f_3801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3733)
static void C_ccall f_3733r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3737)
static void C_ccall f_3737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3550)
static void C_ccall f_3550r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3655)
static void C_fcall f_3655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3650)
static void C_fcall f_3650(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3552)
static void C_fcall f_3552(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3559)
static void C_ccall f_3559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3562)
static void C_ccall f_3562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3583)
static void C_fcall f_3583(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3593)
static void C_ccall f_3593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3596)
static void C_ccall f_3596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_fcall f_3605(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3538)
static void C_ccall f_3538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3526)
static void C_ccall f_3526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3357)
static void C_ccall f_3357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3478)
static void C_ccall f_3478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3366)
static void C_fcall f_3366(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3439)
static void C_ccall f_3439(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3378)
static void C_fcall f_3378(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_fcall f_3385(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3411)
static void C_ccall f_3411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3404)
static void C_ccall f_3404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3360)
static void C_ccall f_3360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3310)
static void C_ccall f_3310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3304)
static void C_ccall f_3304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3274)
static void C_ccall f_3274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3265)
static void C_ccall f_3265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3249)
static void C_ccall f_3249(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3247)
static void C_ccall f_3247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3238)
static void C_ccall f_3238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3197)
static void C_ccall f_3197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3201)
static void C_ccall f_3201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3169)
static void C_ccall f_3169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3128)
static void C_fcall f_3128(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2848)
static void C_ccall f_2848r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3087)
static void C_fcall f_3087(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3095)
static C_word C_fcall f_3095(C_word t0,C_word t1);
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3039)
static void C_fcall f_3039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3047)
static C_word C_fcall f_3047(C_word t0,C_word t1);
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2873)
static void C_fcall f_2873(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_fcall f_2977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2985)
static C_word C_fcall f_2985(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2912)
static void C_fcall f_2912(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_fcall f_2930(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2938)
static C_word C_fcall f_2938(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2810)
static void C_ccall f_2810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2751)
static void C_ccall f_2751r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2719)
static void C_ccall f_2719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2694)
static void C_ccall f_2694(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2676)
static void C_ccall f_2676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2546)
static void C_ccall f_2546(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2528)
static void C_ccall f_2528r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_8703)
static void C_fcall trf_8703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8703(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8703(t0,t1);}

C_noret_decl(trf_8510)
static void C_fcall trf_8510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8510(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8510(t0,t1);}

C_noret_decl(trf_8418)
static void C_fcall trf_8418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8418(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8418(t0,t1);}

C_noret_decl(trf_8413)
static void C_fcall trf_8413(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8413(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8413(t0,t1,t2);}

C_noret_decl(trf_8408)
static void C_fcall trf_8408(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8408(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8408(t0,t1,t2,t3);}

C_noret_decl(trf_8243)
static void C_fcall trf_8243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8243(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8243(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8250)
static void C_fcall trf_8250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8250(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8250(t0,t1);}

C_noret_decl(trf_8262)
static void C_fcall trf_8262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8262(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8262(t0,t1,t2,t3);}

C_noret_decl(trf_8193)
static void C_fcall trf_8193(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8193(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8193(t0,t1);}

C_noret_decl(trf_8188)
static void C_fcall trf_8188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8188(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8188(t0,t1,t2);}

C_noret_decl(trf_8183)
static void C_fcall trf_8183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8183(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8183(t0,t1,t2,t3);}

C_noret_decl(trf_8133)
static void C_fcall trf_8133(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8133(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8133(t0,t1);}

C_noret_decl(trf_8128)
static void C_fcall trf_8128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8128(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8128(t0,t1,t2);}

C_noret_decl(trf_8123)
static void C_fcall trf_8123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8123(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8123(t0,t1,t2,t3);}

C_noret_decl(trf_8060)
static void C_fcall trf_8060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8060(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_8060(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8062)
static void C_fcall trf_8062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8062(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8062(t0,t1,t2);}

C_noret_decl(trf_7993)
static void C_fcall trf_7993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7993(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_7993(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7982)
static void C_fcall trf_7982(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7982(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_7982(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7937)
static void C_fcall trf_7937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7937(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_7937(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7954)
static void C_fcall trf_7954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7954(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7954(t0,t1);}

C_noret_decl(trf_7904)
static void C_fcall trf_7904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7904(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7904(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7890)
static void C_fcall trf_7890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7890(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7890(t0,t1,t2,t3);}

C_noret_decl(trf_7870)
static void C_fcall trf_7870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7870(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7870(t0,t1,t2);}

C_noret_decl(trf_7833)
static void C_fcall trf_7833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7833(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_7833(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7579)
static void C_fcall trf_7579(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7579(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7579(t0,t1);}

C_noret_decl(trf_7574)
static void C_fcall trf_7574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7574(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7574(t0,t1,t2);}

C_noret_decl(trf_7447)
static void C_fcall trf_7447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7447(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7447(t0,t1,t2,t3);}

C_noret_decl(trf_7465)
static void C_fcall trf_7465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7465(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7465(t0,t1,t2,t3);}

C_noret_decl(trf_7478)
static void C_fcall trf_7478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7478(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7478(t0,t1);}

C_noret_decl(trf_7257)
static void C_fcall trf_7257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7257(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7257(t0,t1,t2);}

C_noret_decl(trf_7294)
static void C_fcall trf_7294(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7294(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7294(t0,t1,t2);}

C_noret_decl(trf_7315)
static void C_fcall trf_7315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7315(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7315(t0,t1,t2);}

C_noret_decl(trf_7149)
static void C_fcall trf_7149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7149(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7149(t0,t1,t2);}

C_noret_decl(trf_7090)
static void C_fcall trf_7090(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7090(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7090(t0,t1);}

C_noret_decl(trf_6733)
static void C_fcall trf_6733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6733(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6733(t0,t1,t2);}

C_noret_decl(trf_6523)
static void C_fcall trf_6523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6523(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6523(t0,t1,t2);}

C_noret_decl(trf_6535)
static void C_fcall trf_6535(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6535(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6535(t0,t1,t2);}

C_noret_decl(trf_6418)
static void C_fcall trf_6418(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6418(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6418(t0,t1);}

C_noret_decl(trf_6308)
static void C_fcall trf_6308(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6308(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6308(t0,t1,t2,t3);}

C_noret_decl(trf_6234)
static void C_fcall trf_6234(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6234(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6234(t0,t1,t2,t3);}

C_noret_decl(trf_6262)
static void C_fcall trf_6262(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6262(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6262(t0,t1);}

C_noret_decl(trf_6205)
static void C_fcall trf_6205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6205(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6205(t0,t1);}

C_noret_decl(trf_6132)
static void C_fcall trf_6132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6132(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6132(t0,t1);}

C_noret_decl(trf_6127)
static void C_fcall trf_6127(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6127(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6127(t0,t1,t2);}

C_noret_decl(trf_6122)
static void C_fcall trf_6122(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6122(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6122(t0,t1,t2,t3);}

C_noret_decl(trf_5938)
static void C_fcall trf_5938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5938(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5938(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6066)
static void C_fcall trf_6066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6066(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6066(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5990)
static void C_fcall trf_5990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5990(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5990(t0,t1);}

C_noret_decl(trf_5944)
static void C_fcall trf_5944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5944(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5944(t0,t1,t2,t3);}

C_noret_decl(trf_5858)
static void C_fcall trf_5858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5858(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5858(t0,t1);}

C_noret_decl(trf_5853)
static void C_fcall trf_5853(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5853(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5853(t0,t1,t2);}

C_noret_decl(trf_5848)
static void C_fcall trf_5848(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5848(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5848(t0,t1,t2,t3);}

C_noret_decl(trf_5843)
static void C_fcall trf_5843(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5843(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5843(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5456)
static void C_fcall trf_5456(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5456(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5456(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5722)
static void C_fcall trf_5722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5722(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5722(t0,t1,t2);}

C_noret_decl(trf_5648)
static void C_fcall trf_5648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5648(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5648(t0,t1);}

C_noret_decl(trf_5650)
static void C_fcall trf_5650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5650(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5650(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5498)
static void C_fcall trf_5498(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5498(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5498(t0,t1);}

C_noret_decl(trf_5510)
static void C_fcall trf_5510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5510(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5510(t0,t1);}

C_noret_decl(trf_5467)
static void C_fcall trf_5467(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5467(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5467(t0,t1);}

C_noret_decl(trf_5434)
static void C_fcall trf_5434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5434(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5434(t0,t1);}

C_noret_decl(trf_5339)
static void C_fcall trf_5339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5339(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5339(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5302)
static void C_fcall trf_5302(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5302(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5302(t0,t1,t2);}

C_noret_decl(trf_5290)
static void C_fcall trf_5290(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5290(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5290(t0,t1);}

C_noret_decl(trf_5094)
static void C_fcall trf_5094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5094(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5094(t0,t1,t2,t3);}

C_noret_decl(trf_4908)
static void C_fcall trf_4908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4908(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4908(t0,t1,t2,t3);}

C_noret_decl(trf_4851)
static void C_fcall trf_4851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4851(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4851(t0,t1,t2);}

C_noret_decl(trf_4750)
static void C_fcall trf_4750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4750(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4750(t0,t1);}

C_noret_decl(trf_4773)
static void C_fcall trf_4773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4773(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4773(t0,t1,t2);}

C_noret_decl(trf_4644)
static void C_fcall trf_4644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4644(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4644(t0,t1);}

C_noret_decl(trf_4518)
static void C_fcall trf_4518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4518(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4518(t0,t1,t2,t3);}

C_noret_decl(trf_4188)
static void C_fcall trf_4188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4188(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4188(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3980)
static void C_fcall trf_3980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3980(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3980(t0,t1);}

C_noret_decl(trf_3999)
static void C_fcall trf_3999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3999(t0,t1);}

C_noret_decl(trf_4043)
static void C_fcall trf_4043(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4043(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4043(t0,t1);}

C_noret_decl(trf_3869)
static void C_fcall trf_3869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3869(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3869(t0,t1,t2,t3);}

C_noret_decl(trf_3797)
static void C_fcall trf_3797(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3797(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3797(t0,t1);}

C_noret_decl(trf_3655)
static void C_fcall trf_3655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3655(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3655(t0,t1);}

C_noret_decl(trf_3650)
static void C_fcall trf_3650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3650(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3650(t0,t1,t2);}

C_noret_decl(trf_3552)
static void C_fcall trf_3552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3552(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3552(t0,t1,t2,t3);}

C_noret_decl(trf_3583)
static void C_fcall trf_3583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3583(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3583(t0,t1);}

C_noret_decl(trf_3605)
static void C_fcall trf_3605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3605(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3605(t0,t1);}

C_noret_decl(trf_3366)
static void C_fcall trf_3366(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3366(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3366(t0,t1);}

C_noret_decl(trf_3378)
static void C_fcall trf_3378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3378(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3378(t0,t1,t2);}

C_noret_decl(trf_3385)
static void C_fcall trf_3385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3385(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3385(t0,t1);}

C_noret_decl(trf_3128)
static void C_fcall trf_3128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3128(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3128(t0,t1,t2,t3);}

C_noret_decl(trf_3087)
static void C_fcall trf_3087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3087(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3087(t0,t1,t2);}

C_noret_decl(trf_3039)
static void C_fcall trf_3039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3039(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3039(t0,t1,t2);}

C_noret_decl(trf_2873)
static void C_fcall trf_2873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2873(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2873(t0,t1);}

C_noret_decl(trf_2977)
static void C_fcall trf_2977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2977(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2977(t0,t1,t2);}

C_noret_decl(trf_2912)
static void C_fcall trf_2912(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2912(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2912(t0,t1);}

C_noret_decl(trf_2930)
static void C_fcall trf_2930(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2930(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2930(t0,t1,t2);}

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

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
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
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

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

C_noret_decl(tr7r)
static void C_fcall tr7r(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7r(C_proc7 k){
int n;
C_word *a,t7;
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
n=C_rest_count(0);
a=C_alloc(n*3);
t7=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7);}

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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3358)){
C_save(t1);
C_rereclaim2(3358*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,463);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],13,"string-append");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\003 - ");
lf[6]=C_h_intern(&lf[6],17,"\003syspeek-c-string");
lf[7]=C_h_intern(&lf[7],16,"\003sysupdate-errno");
lf[8]=C_h_intern(&lf[8],15,"\003sysposix-error");
lf[9]=C_h_intern(&lf[9],21,"\003sysfile-nonblocking!");
lf[10]=C_h_intern(&lf[10],19,"\003sysfile-select-one");
lf[11]=C_h_intern(&lf[11],8,"pipe/buf");
lf[12]=C_h_intern(&lf[12],11,"fcntl/dupfd");
lf[13]=C_h_intern(&lf[13],11,"fcntl/getfd");
lf[14]=C_h_intern(&lf[14],11,"fcntl/setfd");
lf[15]=C_h_intern(&lf[15],11,"fcntl/getfl");
lf[16]=C_h_intern(&lf[16],11,"fcntl/setfl");
lf[17]=C_h_intern(&lf[17],11,"open/rdonly");
lf[18]=C_h_intern(&lf[18],11,"open/wronly");
lf[19]=C_h_intern(&lf[19],9,"open/rdwr");
lf[20]=C_h_intern(&lf[20],9,"open/read");
lf[21]=C_h_intern(&lf[21],10,"open/write");
lf[22]=C_h_intern(&lf[22],10,"open/creat");
lf[23]=C_h_intern(&lf[23],11,"open/append");
lf[24]=C_h_intern(&lf[24],9,"open/excl");
lf[25]=C_h_intern(&lf[25],11,"open/noctty");
lf[26]=C_h_intern(&lf[26],13,"open/nonblock");
lf[27]=C_h_intern(&lf[27],10,"open/trunc");
lf[28]=C_h_intern(&lf[28],9,"open/sync");
lf[29]=C_h_intern(&lf[29],10,"open/fsync");
lf[30]=C_h_intern(&lf[30],11,"open/binary");
lf[31]=C_h_intern(&lf[31],9,"open/text");
lf[32]=C_h_intern(&lf[32],10,"perm/irusr");
lf[33]=C_h_intern(&lf[33],10,"perm/iwusr");
lf[34]=C_h_intern(&lf[34],10,"perm/ixusr");
lf[35]=C_h_intern(&lf[35],10,"perm/irgrp");
lf[36]=C_h_intern(&lf[36],10,"perm/iwgrp");
lf[37]=C_h_intern(&lf[37],10,"perm/ixgrp");
lf[38]=C_h_intern(&lf[38],10,"perm/iroth");
lf[39]=C_h_intern(&lf[39],10,"perm/iwoth");
lf[40]=C_h_intern(&lf[40],10,"perm/ixoth");
lf[41]=C_h_intern(&lf[41],10,"perm/irwxu");
lf[42]=C_h_intern(&lf[42],10,"perm/irwxg");
lf[43]=C_h_intern(&lf[43],10,"perm/irwxo");
lf[44]=C_h_intern(&lf[44],10,"perm/isvtx");
lf[45]=C_h_intern(&lf[45],10,"perm/isuid");
lf[46]=C_h_intern(&lf[46],10,"perm/isgid");
lf[47]=C_h_intern(&lf[47],12,"file-control");
lf[48]=C_h_intern(&lf[48],11,"\000file-error");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot control file");
lf[50]=C_h_intern(&lf[50],9,"\003syserror");
lf[51]=C_h_intern(&lf[51],9,"file-open");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[53]=C_h_intern(&lf[53],17,"\003sysmake-c-string");
lf[54]=C_h_intern(&lf[54],20,"\003sysexpand-home-path");
lf[55]=C_h_intern(&lf[55],10,"file-close");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\021cannot close file");
lf[57]=C_h_intern(&lf[57],11,"make-string");
lf[58]=C_h_intern(&lf[58],9,"file-read");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot read from file");
lf[60]=C_h_intern(&lf[60],11,"\000type-error");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[62]=C_h_intern(&lf[62],10,"file-write");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot write to file");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000(bad argument type - not a string or blob");
lf[65]=C_h_intern(&lf[65],12,"file-mkstemp");
lf[66]=C_h_intern(&lf[66],13,"\003syssubstring");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot create temporary file");
lf[68]=C_h_intern(&lf[68],11,"file-select");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\006failed");
lf[70]=C_h_intern(&lf[70],8,"seek/set");
lf[71]=C_h_intern(&lf[71],8,"seek/end");
lf[72]=C_h_intern(&lf[72],8,"seek/cur");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot access file");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000*bad argument type - not a fixnum or string");
lf[76]=C_h_intern(&lf[76],9,"file-stat");
lf[77]=C_h_intern(&lf[77],9,"file-size");
lf[78]=C_h_intern(&lf[78],22,"file-modification-time");
lf[79]=C_h_intern(&lf[79],16,"file-access-time");
lf[80]=C_h_intern(&lf[80],16,"file-change-time");
lf[81]=C_h_intern(&lf[81],10,"file-owner");
lf[82]=C_h_intern(&lf[82],16,"file-permissions");
lf[83]=C_h_intern(&lf[83],13,"regular-file\077");
lf[84]=C_h_intern(&lf[84],14,"symbolic-link\077");
lf[85]=C_h_intern(&lf[85],17,"character-device\077");
lf[86]=C_h_intern(&lf[86],13,"block-device\077");
lf[87]=C_h_intern(&lf[87],5,"fifo\077");
lf[88]=C_h_intern(&lf[88],10,"stat-fifo\077");
lf[89]=C_h_intern(&lf[89],7,"socket\077");
lf[90]=C_h_intern(&lf[90],18,"set-file-position!");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[92]=C_h_intern(&lf[92],6,"stream");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[94]=C_h_intern(&lf[94],5,"port\077");
lf[95]=C_h_intern(&lf[95],13,"\000bounds-error");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid negative port position");
lf[97]=C_h_intern(&lf[97],13,"file-position");
lf[98]=C_h_intern(&lf[98],18,"decompose-pathname");
lf[99]=C_h_intern(&lf[99],18,"pathname-directory");
lf[100]=C_h_intern(&lf[100],16,"create-directory");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[102]=C_h_intern(&lf[102],13,"make-pathname");
lf[103]=C_h_intern(&lf[103],16,"change-directory");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[105]=C_h_intern(&lf[105],16,"delete-directory");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[107]=C_h_intern(&lf[107],10,"string-ref");
lf[108]=C_h_intern(&lf[108],6,"string");
lf[109]=C_h_intern(&lf[109],9,"directory");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[111]=C_h_intern(&lf[111],16,"\003sysmake-pointer");
lf[112]=C_h_intern(&lf[112],17,"current-directory");
lf[113]=C_h_intern(&lf[113],10,"directory\077");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[115]=C_h_intern(&lf[115],5,"null\077");
lf[116]=C_h_intern(&lf[116],6,"char=\077");
lf[117]=C_h_intern(&lf[117],8,"string=\077");
lf[118]=C_h_intern(&lf[118],16,"char-alphabetic\077");
lf[119]=C_h_intern(&lf[119],24,"get-environment-variable");
lf[120]=C_h_intern(&lf[120],17,"current-user-name");
lf[121]=C_h_intern(&lf[121],9,"condition");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[123]=C_h_intern(&lf[123],22,"with-exception-handler");
lf[124]=C_h_intern(&lf[124],30,"call-with-current-continuation");
lf[125]=C_h_intern(&lf[125],14,"canonical-path");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[128]=C_h_intern(&lf[128],18,"string-intersperse");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[131]=C_h_intern(&lf[131],7,"reverse");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[135]=C_h_intern(&lf[135],12,"string-split");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\006/home/");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\004HOME");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[144]=C_h_intern(&lf[144],13,"\003sysmake-port");
lf[145]=C_h_intern(&lf[145],21,"\003sysstream-port-class");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[147]=C_h_intern(&lf[147],15,"open-input-pipe");
lf[148]=C_h_intern(&lf[148],5,"\000text");
lf[149]=C_h_intern(&lf[149],7,"\000binary");
lf[150]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[151]=C_h_intern(&lf[151],16,"open-output-pipe");
lf[152]=C_h_intern(&lf[152],16,"close-input-pipe");
lf[153]=C_h_intern(&lf[153],23,"close-input/output-pipe");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[155]=C_h_intern(&lf[155],14,"\003syscheck-port");
lf[156]=C_h_intern(&lf[156],17,"close-output-pipe");
lf[157]=C_h_intern(&lf[157],20,"call-with-input-pipe");
lf[158]=C_h_intern(&lf[158],21,"call-with-output-pipe");
lf[159]=C_h_intern(&lf[159],20,"with-input-from-pipe");
lf[160]=C_h_intern(&lf[160],18,"\003sysstandard-input");
lf[161]=C_h_intern(&lf[161],19,"with-output-to-pipe");
lf[162]=C_h_intern(&lf[162],19,"\003sysstandard-output");
lf[163]=C_h_intern(&lf[163],11,"create-pipe");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[165]=C_h_intern(&lf[165],11,"signal/term");
lf[166]=C_h_intern(&lf[166],11,"signal/kill");
lf[167]=C_h_intern(&lf[167],10,"signal/int");
lf[168]=C_h_intern(&lf[168],10,"signal/hup");
lf[169]=C_h_intern(&lf[169],10,"signal/fpe");
lf[170]=C_h_intern(&lf[170],10,"signal/ill");
lf[171]=C_h_intern(&lf[171],11,"signal/segv");
lf[172]=C_h_intern(&lf[172],11,"signal/abrt");
lf[173]=C_h_intern(&lf[173],11,"signal/trap");
lf[174]=C_h_intern(&lf[174],11,"signal/quit");
lf[175]=C_h_intern(&lf[175],11,"signal/alrm");
lf[176]=C_h_intern(&lf[176],13,"signal/vtalrm");
lf[177]=C_h_intern(&lf[177],11,"signal/prof");
lf[178]=C_h_intern(&lf[178],9,"signal/io");
lf[179]=C_h_intern(&lf[179],10,"signal/urg");
lf[180]=C_h_intern(&lf[180],11,"signal/chld");
lf[181]=C_h_intern(&lf[181],11,"signal/cont");
lf[182]=C_h_intern(&lf[182],11,"signal/stop");
lf[183]=C_h_intern(&lf[183],11,"signal/tstp");
lf[184]=C_h_intern(&lf[184],11,"signal/pipe");
lf[185]=C_h_intern(&lf[185],11,"signal/xcpu");
lf[186]=C_h_intern(&lf[186],11,"signal/xfsz");
lf[187]=C_h_intern(&lf[187],11,"signal/usr1");
lf[188]=C_h_intern(&lf[188],11,"signal/usr2");
lf[189]=C_h_intern(&lf[189],12,"signal/winch");
lf[190]=C_h_intern(&lf[190],12,"signals-list");
lf[191]=C_h_intern(&lf[191],18,"\003sysinterrupt-hook");
lf[192]=C_h_intern(&lf[192],14,"signal-handler");
lf[193]=C_h_intern(&lf[193],19,"set-signal-handler!");
lf[194]=C_h_intern(&lf[194],16,"set-signal-mask!");
lf[195]=C_h_intern(&lf[195],14,"\000process-error");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot set signal mask");
lf[197]=C_h_intern(&lf[197],11,"signal-mask");
lf[198]=C_h_intern(&lf[198],14,"signal-masked\077");
lf[199]=C_h_intern(&lf[199],12,"signal-mask!");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot block signal");
lf[201]=C_h_intern(&lf[201],14,"signal-unmask!");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot unblock signal");
lf[203]=C_h_intern(&lf[203],18,"system-information");
lf[204]=C_h_intern(&lf[204],25,"\003syspeek-nonnull-c-string");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system information");
lf[206]=C_h_intern(&lf[206],15,"current-user-id");
lf[207]=C_h_intern(&lf[207],25,"current-effective-user-id");
lf[208]=C_h_intern(&lf[208],16,"current-group-id");
lf[209]=C_h_intern(&lf[209],26,"current-effective-group-id");
lf[210]=C_h_intern(&lf[210],16,"user-information");
lf[211]=C_h_intern(&lf[211],6,"vector");
lf[212]=C_h_intern(&lf[212],4,"list");
lf[213]=C_h_intern(&lf[213],27,"current-effective-user-name");
lf[214]=C_h_intern(&lf[214],17,"group-information");
lf[215]=C_h_intern(&lf[215],10,"get-groups");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[219]=C_h_intern(&lf[219],11,"set-groups!");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot set supplementary group ids");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[222]=C_h_intern(&lf[222],17,"initialize-groups");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000)cannot initialize supplementary group ids");
lf[224]=C_h_intern(&lf[224],10,"errno/perm");
lf[225]=C_h_intern(&lf[225],11,"errno/noent");
lf[226]=C_h_intern(&lf[226],10,"errno/srch");
lf[227]=C_h_intern(&lf[227],10,"errno/intr");
lf[228]=C_h_intern(&lf[228],8,"errno/io");
lf[229]=C_h_intern(&lf[229],12,"errno/noexec");
lf[230]=C_h_intern(&lf[230],10,"errno/badf");
lf[231]=C_h_intern(&lf[231],11,"errno/child");
lf[232]=C_h_intern(&lf[232],11,"errno/nomem");
lf[233]=C_h_intern(&lf[233],11,"errno/acces");
lf[234]=C_h_intern(&lf[234],11,"errno/fault");
lf[235]=C_h_intern(&lf[235],10,"errno/busy");
lf[236]=C_h_intern(&lf[236],12,"errno/notdir");
lf[237]=C_h_intern(&lf[237],11,"errno/isdir");
lf[238]=C_h_intern(&lf[238],11,"errno/inval");
lf[239]=C_h_intern(&lf[239],11,"errno/mfile");
lf[240]=C_h_intern(&lf[240],11,"errno/nospc");
lf[241]=C_h_intern(&lf[241],11,"errno/spipe");
lf[242]=C_h_intern(&lf[242],10,"errno/pipe");
lf[243]=C_h_intern(&lf[243],11,"errno/again");
lf[244]=C_h_intern(&lf[244],10,"errno/rofs");
lf[245]=C_h_intern(&lf[245],11,"errno/exist");
lf[246]=C_h_intern(&lf[246],16,"errno/wouldblock");
lf[247]=C_h_intern(&lf[247],10,"errno/2big");
lf[248]=C_h_intern(&lf[248],12,"errno/deadlk");
lf[249]=C_h_intern(&lf[249],9,"errno/dom");
lf[250]=C_h_intern(&lf[250],10,"errno/fbig");
lf[251]=C_h_intern(&lf[251],11,"errno/ilseq");
lf[252]=C_h_intern(&lf[252],11,"errno/mlink");
lf[253]=C_h_intern(&lf[253],17,"errno/nametoolong");
lf[254]=C_h_intern(&lf[254],11,"errno/nfile");
lf[255]=C_h_intern(&lf[255],11,"errno/nodev");
lf[256]=C_h_intern(&lf[256],11,"errno/nolck");
lf[257]=C_h_intern(&lf[257],11,"errno/nosys");
lf[258]=C_h_intern(&lf[258],14,"errno/notempty");
lf[259]=C_h_intern(&lf[259],11,"errno/notty");
lf[260]=C_h_intern(&lf[260],10,"errno/nxio");
lf[261]=C_h_intern(&lf[261],11,"errno/range");
lf[262]=C_h_intern(&lf[262],10,"errno/xdev");
lf[263]=C_h_intern(&lf[263],16,"change-file-mode");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[265]=C_h_intern(&lf[265],17,"change-file-owner");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot change file owner");
lf[267]=C_h_intern(&lf[267],17,"file-read-access\077");
lf[268]=C_h_intern(&lf[268],18,"file-write-access\077");
lf[269]=C_h_intern(&lf[269],20,"file-execute-access\077");
lf[270]=C_h_intern(&lf[270],14,"create-session");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot create session");
lf[272]=C_h_intern(&lf[272],16,"process-group-id");
lf[273]=C_h_intern(&lf[273],20,"create-symbolic-link");
lf[274]=C_h_intern(&lf[274],18,"create-symbol-link");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create symbolic link");
lf[276]=C_h_intern(&lf[276],9,"substring");
lf[277]=C_h_intern(&lf[277],18,"read-symbolic-link");
lf[278]=C_h_intern(&lf[278],12,"canonicalize");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot read symbolic link");
lf[280]=C_h_intern(&lf[280],9,"file-link");
lf[281]=C_h_intern(&lf[281],9,"hard-link");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\032could not create hard link");
lf[283]=C_h_intern(&lf[283],12,"fileno/stdin");
lf[284]=C_h_intern(&lf[284],13,"fileno/stdout");
lf[285]=C_h_intern(&lf[285],13,"fileno/stderr");
lf[286]=C_h_intern(&lf[286],7,"\000append");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[289]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[294]=C_h_intern(&lf[294],16,"open-input-file*");
lf[295]=C_h_intern(&lf[295],17,"open-output-file*");
lf[296]=C_h_intern(&lf[296],12,"port->fileno");
lf[297]=C_h_intern(&lf[297],6,"socket");
lf[298]=C_h_intern(&lf[298],20,"\003systcp-port->fileno");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[301]=C_h_intern(&lf[301],25,"\003syspeek-unsigned-integer");
lf[302]=C_h_intern(&lf[302],16,"duplicate-fileno");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[304]=C_h_intern(&lf[304],15,"make-input-port");
lf[305]=C_h_intern(&lf[305],14,"set-port-name!");
lf[306]=C_h_intern(&lf[306],21,"\003syscustom-input-port");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\015cannot select");
lf[308]=C_h_intern(&lf[308],17,"\003systhread-yield!");
lf[309]=C_h_intern(&lf[309],25,"\003systhread-block-for-i/o!");
lf[310]=C_h_intern(&lf[310],18,"\003syscurrent-thread");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[315]=C_h_intern(&lf[315],17,"\003sysstring-append");
lf[316]=C_h_intern(&lf[316],15,"\003sysmake-string");
lf[317]=C_h_intern(&lf[317],20,"\003sysscan-buffer-line");
lf[318]=C_h_intern(&lf[318],4,"noop");
lf[319]=C_h_intern(&lf[319],16,"make-output-port");
lf[320]=C_h_intern(&lf[320],22,"\003syscustom-output-port");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot write");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[323]=C_h_intern(&lf[323],13,"file-truncate");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot truncate file");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[326]=C_h_intern(&lf[326],4,"lock");
lf[327]=C_h_intern(&lf[327],9,"file-lock");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[329]=C_h_intern(&lf[329],18,"file-lock/blocking");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[331]=C_h_intern(&lf[331],14,"file-test-lock");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[333]=C_h_intern(&lf[333],11,"file-unlock");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[335]=C_h_intern(&lf[335],11,"create-fifo");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create FIFO");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\023file does not exist");
lf[338]=C_h_intern(&lf[338],13,"\003sysfile-info");
lf[339]=C_h_intern(&lf[339],6,"setenv");
lf[340]=C_h_intern(&lf[340],8,"unsetenv");
lf[341]=C_h_intern(&lf[341],25,"get-environment-variables");
lf[342]=C_h_intern(&lf[342],19,"current-environment");
lf[343]=C_h_intern(&lf[343],9,"prot/read");
lf[344]=C_h_intern(&lf[344],10,"prot/write");
lf[345]=C_h_intern(&lf[345],9,"prot/exec");
lf[346]=C_h_intern(&lf[346],9,"prot/none");
lf[347]=C_h_intern(&lf[347],9,"map/fixed");
lf[348]=C_h_intern(&lf[348],10,"map/shared");
lf[349]=C_h_intern(&lf[349],11,"map/private");
lf[350]=C_h_intern(&lf[350],13,"map/anonymous");
lf[351]=C_h_intern(&lf[351],8,"map/file");
lf[352]=C_h_intern(&lf[352],18,"map-file-to-memory");
lf[353]=C_h_intern(&lf[353],4,"mmap");
lf[354]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot map file to memory");
lf[355]=C_h_intern(&lf[355],20,"\003syspointer->address");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000)bad argument type - not a foreign pointer");
lf[357]=C_h_intern(&lf[357],16,"\003sysnull-pointer");
lf[358]=C_h_intern(&lf[358],22,"unmap-file-from-memory");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot unmap file from memory");
lf[360]=C_h_intern(&lf[360],26,"memory-mapped-file-pointer");
lf[361]=C_h_intern(&lf[361],19,"memory-mapped-file\077");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[364]=C_h_intern(&lf[364],19,"seconds->local-time");
lf[365]=C_h_intern(&lf[365],18,"\003sysdecode-seconds");
lf[366]=C_h_intern(&lf[366],15,"current-seconds");
lf[367]=C_h_intern(&lf[367],17,"seconds->utc-time");
lf[368]=C_h_intern(&lf[368],15,"seconds->string");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[370]=C_h_intern(&lf[370],12,"time->string");
lf[371]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[372]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[373]=C_h_intern(&lf[373],12,"string->time");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\027%a %b %e %H:%M:%S %Z %Y");
lf[375]=C_h_intern(&lf[375],19,"local-time->seconds");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[377]=C_h_intern(&lf[377],3,"fp=");
lf[378]=C_decode_literal(C_heaptop,"\376U-1.\000");
lf[379]=C_h_intern(&lf[379],17,"utc-time->seconds");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[381]=C_decode_literal(C_heaptop,"\376U-1.\000");
lf[382]=C_h_intern(&lf[382],27,"local-timezone-abbreviation");
lf[383]=C_h_intern(&lf[383],5,"_exit");
lf[384]=C_h_intern(&lf[384],10,"set-alarm!");
lf[385]=C_h_intern(&lf[385],19,"set-buffering-mode!");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[387]=C_h_intern(&lf[387],5,"\000full");
lf[388]=C_h_intern(&lf[388],5,"\000line");
lf[389]=C_h_intern(&lf[389],5,"\000none");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[391]=C_h_intern(&lf[391],14,"terminal-port\077");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[394]=C_h_intern(&lf[394],13,"terminal-name");
lf[395]=C_h_intern(&lf[395],13,"terminal-size");
lf[396]=C_h_intern(&lf[396],6,"\000error");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\036Unable to get size of terminal");
lf[398]=C_h_intern(&lf[398],17,"\003sysmake-locative");
lf[399]=C_h_intern(&lf[399],8,"location");
lf[400]=C_h_intern(&lf[400],13,"get-host-name");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[402]=C_h_intern(&lf[402],6,"regexp");
lf[403]=C_h_intern(&lf[403],12,"string-match");
lf[404]=C_h_intern(&lf[404],12,"glob->regexp");
lf[405]=C_h_intern(&lf[405],4,"glob");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[408]=C_h_intern(&lf[408],12,"process-fork");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create child process");
lf[410]=C_h_intern(&lf[410],24,"pathname-strip-directory");
lf[411]=C_h_intern(&lf[411],15,"process-execute");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[413]=C_h_intern(&lf[413],16,"\003sysprocess-wait");
lf[414]=C_h_intern(&lf[414],12,"process-wait");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[416]=C_h_intern(&lf[416],18,"current-process-id");
lf[417]=C_h_intern(&lf[417],17,"parent-process-id");
lf[418]=C_h_intern(&lf[418],5,"sleep");
lf[419]=C_h_intern(&lf[419],14,"process-signal");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000 could not send signal to process");
lf[421]=C_h_intern(&lf[421],17,"\003sysshell-command");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\007/bin/sh");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\005SHELL");
lf[424]=C_h_intern(&lf[424],27,"\003sysshell-command-arguments");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[426]=C_h_intern(&lf[426],11,"process-run");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\025abnormal process exit");
lf[428]=C_h_intern(&lf[428],11,"\003sysprocess");
lf[429]=C_h_intern(&lf[429],16,"\003syscheck-string");
lf[430]=C_h_intern(&lf[430],12,"\003sysfor-each");
lf[431]=C_h_intern(&lf[431],7,"process");
lf[432]=C_h_intern(&lf[432],8,"process*");
lf[433]=C_h_intern(&lf[433],13,"pathname-file");
lf[434]=C_h_intern(&lf[434],10,"find-files");
lf[435]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[436]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[438]=C_h_intern(&lf[438],16,"\003sysdynamic-wind");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[440]=C_h_intern(&lf[440],7,"regexp\077");
lf[441]=C_h_intern(&lf[441],19,"set-root-directory!");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\037unable to change root directory");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve process group ID");
lf[444]=C_h_intern(&lf[444],21,"set-process-group-id!");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot set process group ID");
lf[446]=C_h_intern(&lf[446],18,"getter-with-setter");
lf[447]=C_h_intern(&lf[447],26,"effective-group-id!-setter");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot set effective group ID");
lf[449]=C_h_intern(&lf[449],12,"set-user-id!");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot set group ID");
lf[451]=C_h_intern(&lf[451],25,"effective-user-id!-setter");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot set effective user ID");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot set user ID");
lf[454]=C_h_intern(&lf[454],23,"\003sysuser-interrupt-hook");
lf[455]=C_h_intern(&lf[455],11,"make-vector");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[458]=C_h_intern(&lf[458],26,"set-file-modification-time");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000!cannot set file modification-time");
lf[460]=C_h_intern(&lf[460],4,"file");
lf[461]=C_h_intern(&lf[461],17,"register-feature!");
lf[462]=C_h_intern(&lf[462],5,"posix");
C_register_lf2(lf,463,create_ptable());
t2=C_mutate(&lf[0] /* (set! c52 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2498,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k2496 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2499 in k2496 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2502 in k2499 in k2496 */
static void C_ccall f_2504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 516  register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[461]+1)))(3,*((C_word*)lf[461]+1),t2,lf[462]);}

/* k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2516(C_word c,C_word t0,C_word t1){
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
C_word ab[59],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2516,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=C_mutate(&lf[3] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2528,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! posix-error ...) */,lf[3]);
t5=C_mutate((C_word*)lf[9]+1 /* (set! file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2546,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2553,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[11]+1 /* (set! pipe/buf ...) */,C_fix((C_word)PIPE_BUF));
t8=C_mutate((C_word*)lf[12]+1 /* (set! fcntl/dupfd ...) */,C_fix((C_word)F_DUPFD));
t9=C_mutate((C_word*)lf[13]+1 /* (set! fcntl/getfd ...) */,C_fix((C_word)F_GETFD));
t10=C_mutate((C_word*)lf[14]+1 /* (set! fcntl/setfd ...) */,C_fix((C_word)F_SETFD));
t11=C_mutate((C_word*)lf[15]+1 /* (set! fcntl/getfl ...) */,C_fix((C_word)F_GETFL));
t12=C_mutate((C_word*)lf[16]+1 /* (set! fcntl/setfl ...) */,C_fix((C_word)F_SETFL));
t13=C_mutate((C_word*)lf[17]+1 /* (set! open/rdonly ...) */,C_fix((C_word)O_RDONLY));
t14=C_mutate((C_word*)lf[18]+1 /* (set! open/wronly ...) */,C_fix((C_word)O_WRONLY));
t15=C_mutate((C_word*)lf[19]+1 /* (set! open/rdwr ...) */,C_fix((C_word)O_RDWR));
t16=C_mutate((C_word*)lf[20]+1 /* (set! open/read ...) */,C_fix((C_word)O_RDONLY));
t17=C_mutate((C_word*)lf[21]+1 /* (set! open/write ...) */,C_fix((C_word)O_WRONLY));
t18=C_mutate((C_word*)lf[22]+1 /* (set! open/creat ...) */,C_fix((C_word)O_CREAT));
t19=C_mutate((C_word*)lf[23]+1 /* (set! open/append ...) */,C_fix((C_word)O_APPEND));
t20=C_mutate((C_word*)lf[24]+1 /* (set! open/excl ...) */,C_fix((C_word)O_EXCL));
t21=C_mutate((C_word*)lf[25]+1 /* (set! open/noctty ...) */,C_fix((C_word)O_NOCTTY));
t22=C_mutate((C_word*)lf[26]+1 /* (set! open/nonblock ...) */,C_fix((C_word)O_NONBLOCK));
t23=C_mutate((C_word*)lf[27]+1 /* (set! open/trunc ...) */,C_fix((C_word)O_TRUNC));
t24=C_mutate((C_word*)lf[28]+1 /* (set! open/sync ...) */,C_fix((C_word)O_FSYNC));
t25=C_mutate((C_word*)lf[29]+1 /* (set! open/fsync ...) */,C_fix((C_word)O_FSYNC));
t26=C_mutate((C_word*)lf[30]+1 /* (set! open/binary ...) */,C_fix((C_word)O_BINARY));
t27=C_mutate((C_word*)lf[31]+1 /* (set! open/text ...) */,C_fix((C_word)O_TEXT));
t28=C_mutate((C_word*)lf[32]+1 /* (set! perm/irusr ...) */,C_fix((C_word)S_IRUSR));
t29=C_mutate((C_word*)lf[33]+1 /* (set! perm/iwusr ...) */,C_fix((C_word)S_IWUSR));
t30=C_mutate((C_word*)lf[34]+1 /* (set! perm/ixusr ...) */,C_fix((C_word)S_IXUSR));
t31=C_mutate((C_word*)lf[35]+1 /* (set! perm/irgrp ...) */,C_fix((C_word)S_IRGRP));
t32=C_mutate((C_word*)lf[36]+1 /* (set! perm/iwgrp ...) */,C_fix((C_word)S_IWGRP));
t33=C_mutate((C_word*)lf[37]+1 /* (set! perm/ixgrp ...) */,C_fix((C_word)S_IXGRP));
t34=C_mutate((C_word*)lf[38]+1 /* (set! perm/iroth ...) */,C_fix((C_word)S_IROTH));
t35=C_mutate((C_word*)lf[39]+1 /* (set! perm/iwoth ...) */,C_fix((C_word)S_IWOTH));
t36=C_mutate((C_word*)lf[40]+1 /* (set! perm/ixoth ...) */,C_fix((C_word)S_IXOTH));
t37=C_mutate((C_word*)lf[41]+1 /* (set! perm/irwxu ...) */,C_fix((C_word)S_IRWXU));
t38=C_mutate((C_word*)lf[42]+1 /* (set! perm/irwxg ...) */,C_fix((C_word)S_IRWXG));
t39=C_mutate((C_word*)lf[43]+1 /* (set! perm/irwxo ...) */,C_fix((C_word)S_IRWXO));
t40=C_mutate((C_word*)lf[44]+1 /* (set! perm/isvtx ...) */,C_fix((C_word)S_ISVTX));
t41=C_mutate((C_word*)lf[45]+1 /* (set! perm/isuid ...) */,C_fix((C_word)S_ISUID));
t42=C_mutate((C_word*)lf[46]+1 /* (set! perm/isgid ...) */,C_fix((C_word)S_ISGID));
t43=C_mutate((C_word*)lf[47]+1 /* (set! file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2610,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t44=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRGRP),C_fix((C_word)S_IROTH));
t45=C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRWXU),t44);
t46=C_mutate((C_word*)lf[51]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2656,a[2]=t45,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t47=C_mutate((C_word*)lf[55]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2694,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t48=*((C_word*)lf[57]+1);
t49=C_mutate((C_word*)lf[58]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2709,a[2]=t48,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t50=C_mutate((C_word*)lf[62]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2751,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[65]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2790,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[68]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2848,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[70]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t54=C_mutate((C_word*)lf[71]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t55=C_mutate((C_word*)lf[72]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t56=C_mutate(&lf[73] /* (set! stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3128,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[76]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3165,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[77]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3197,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t59=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3205,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8677,a[2]=((C_word)li255),tmp=(C_word)a,a+=3,tmp);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8683,a[2]=((C_word)li256),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 793  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[446]+1)))(4,*((C_word*)lf[446]+1),t59,t60,t61);}

/* a8682 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8683(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8683,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[458]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8703,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8716,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 799  ##sys#expand-home-path */
t7=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[460]+1));}

/* k8714 in a8682 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8716,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8693,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t4=C_i_foreign_string_argumentp(t1);
/* ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t4=((C_word*)t0)[2];
f_8703(t4,stub286(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t2));}}

/* k8691 in k8714 in a8682 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_8703(t2,stub286(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[2]));}

/* k8701 in a8682 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8703(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 801  posix-error */
t2=lf[3];
f_2528(7,t2,((C_word*)t0)[4],lf[48],lf[458],lf[459],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a8676 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8677(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8677,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8681,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 795  ##sys#stat */
f_3128(t3,t2,C_SCHEME_FALSE,lf[78]);}

/* k8679 in a8676 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8681,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3205(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3205,2,t0,t1);}
t2=C_mutate((C_word*)lf[78]+1 /* (set! file-modification-time ...) */,t1);
t3=C_mutate((C_word*)lf[79]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3207,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[80]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3213,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[81]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3219,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[82]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[83]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3231,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[84]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3240,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[85]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3249,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[86]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3258,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[87]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3267,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[89]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3276,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[90]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3285,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8640,a[2]=((C_word)li254),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 857  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[446]+1)))(4,*((C_word*)lf[446]+1),t14,t15,*((C_word*)lf[90]+1));}

/* a8639 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8640(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8640,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8644,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8656,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 859  port? */
t5=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k8654 in a8639 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[3],C_fix(7));
t3=C_eqp(t2,lf[92]);
if(C_truep(t3)){
t4=C_ftell(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_8644(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_8644(2,t4,C_fix(-1));}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[2];
f_8644(2,t3,t2);}
else{
/* posixunix.scm: 866  ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[60],lf[97],lf[457],((C_word*)t0)[3]);}}}

/* k8642 in a8639 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8647,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_lessp(t1,C_fix(0)))){
/* posixunix.scm: 868  posix-error */
t3=lf[3];
f_2528(6,t3,t2,lf[48],lf[97],lf[456],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k8645 in k8642 in a8639 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
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
C_word ab[155],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3345,2,t0,t1);}
t2=C_mutate((C_word*)lf[97]+1 /* (set! file-position ...) */,t1);
t3=*((C_word*)lf[98]+1);
t4=*((C_word*)lf[99]+1);
t5=C_mutate((C_word*)lf[100]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3347,a[2]=t3,a[3]=t4,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t6=C_mutate((C_word*)lf[103]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3506,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[105]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3528,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[107]+1);
t9=*((C_word*)lf[57]+1);
t10=*((C_word*)lf[108]+1);
t11=C_mutate((C_word*)lf[109]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3550,a[2]=t9,a[3]=t8,a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[113]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3707,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t13=*((C_word*)lf[57]+1);
t14=C_mutate((C_word*)lf[112]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3733,a[2]=t13,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp));
t15=*((C_word*)lf[115]+1);
t16=*((C_word*)lf[116]+1);
t17=*((C_word*)lf[117]+1);
t18=*((C_word*)lf[118]+1);
t19=*((C_word*)lf[107]+1);
t20=*((C_word*)lf[2]+1);
t21=*((C_word*)lf[119]+1);
t22=*((C_word*)lf[120]+1);
t23=*((C_word*)lf[112]+1);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3797,a[2]=t23,a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
t25=C_mutate((C_word*)lf[125]+1 /* (set! canonical-path ...) */,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3853,a[2]=t18,a[3]=t16,a[4]=t21,a[5]=t22,a[6]=t24,a[7]=t17,a[8]=t15,a[9]=t19,a[10]=t20,a[11]=((C_word)li54),tmp=(C_word)a,a+=12,tmp));
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4188,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp);
t27=C_mutate((C_word*)lf[147]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4203,a[2]=t26,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t28=C_mutate((C_word*)lf[151]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4239,a[2]=t26,a[3]=((C_word)li57),tmp=(C_word)a,a+=4,tmp));
t29=C_mutate((C_word*)lf[152]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4275,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[156]+1 /* (set! close-output-pipe ...) */,*((C_word*)lf[152]+1));
t31=*((C_word*)lf[147]+1);
t32=*((C_word*)lf[151]+1);
t33=*((C_word*)lf[152]+1);
t34=*((C_word*)lf[156]+1);
t35=C_mutate((C_word*)lf[157]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4291,a[2]=t31,a[3]=t33,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[158]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4315,a[2]=t32,a[3]=t34,a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp));
t37=C_mutate((C_word*)lf[159]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4339,a[2]=t31,a[3]=t33,a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp));
t38=C_mutate((C_word*)lf[161]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4359,a[2]=t32,a[3]=t34,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t39=C_mutate((C_word*)lf[163]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4379,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[165]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t41=C_mutate((C_word*)lf[166]+1 /* (set! signal/kill ...) */,C_fix((C_word)SIGKILL));
t42=C_mutate((C_word*)lf[167]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t43=C_mutate((C_word*)lf[168]+1 /* (set! signal/hup ...) */,C_fix((C_word)SIGHUP));
t44=C_mutate((C_word*)lf[169]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t45=C_mutate((C_word*)lf[170]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t46=C_mutate((C_word*)lf[171]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t47=C_mutate((C_word*)lf[172]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t48=C_mutate((C_word*)lf[173]+1 /* (set! signal/trap ...) */,C_fix((C_word)SIGTRAP));
t49=C_mutate((C_word*)lf[174]+1 /* (set! signal/quit ...) */,C_fix((C_word)SIGQUIT));
t50=C_mutate((C_word*)lf[175]+1 /* (set! signal/alrm ...) */,C_fix((C_word)SIGALRM));
t51=C_mutate((C_word*)lf[176]+1 /* (set! signal/vtalrm ...) */,C_fix((C_word)SIGVTALRM));
t52=C_mutate((C_word*)lf[177]+1 /* (set! signal/prof ...) */,C_fix((C_word)SIGPROF));
t53=C_mutate((C_word*)lf[178]+1 /* (set! signal/io ...) */,C_fix((C_word)SIGIO));
t54=C_mutate((C_word*)lf[179]+1 /* (set! signal/urg ...) */,C_fix((C_word)SIGURG));
t55=C_mutate((C_word*)lf[180]+1 /* (set! signal/chld ...) */,C_fix((C_word)SIGCHLD));
t56=C_mutate((C_word*)lf[181]+1 /* (set! signal/cont ...) */,C_fix((C_word)SIGCONT));
t57=C_mutate((C_word*)lf[182]+1 /* (set! signal/stop ...) */,C_fix((C_word)SIGSTOP));
t58=C_mutate((C_word*)lf[183]+1 /* (set! signal/tstp ...) */,C_fix((C_word)SIGTSTP));
t59=C_mutate((C_word*)lf[184]+1 /* (set! signal/pipe ...) */,C_fix((C_word)SIGPIPE));
t60=C_mutate((C_word*)lf[185]+1 /* (set! signal/xcpu ...) */,C_fix((C_word)SIGXCPU));
t61=C_mutate((C_word*)lf[186]+1 /* (set! signal/xfsz ...) */,C_fix((C_word)SIGXFSZ));
t62=C_mutate((C_word*)lf[187]+1 /* (set! signal/usr1 ...) */,C_fix((C_word)SIGUSR1));
t63=C_mutate((C_word*)lf[188]+1 /* (set! signal/usr2 ...) */,C_fix((C_word)SIGUSR2));
t64=C_mutate((C_word*)lf[189]+1 /* (set! signal/winch ...) */,C_fix((C_word)SIGWINCH));
t65=C_a_i_list(&a,25,*((C_word*)lf[165]+1),*((C_word*)lf[166]+1),*((C_word*)lf[167]+1),*((C_word*)lf[168]+1),*((C_word*)lf[169]+1),*((C_word*)lf[170]+1),*((C_word*)lf[171]+1),*((C_word*)lf[172]+1),*((C_word*)lf[173]+1),*((C_word*)lf[174]+1),*((C_word*)lf[175]+1),*((C_word*)lf[176]+1),*((C_word*)lf[177]+1),*((C_word*)lf[178]+1),*((C_word*)lf[179]+1),*((C_word*)lf[180]+1),*((C_word*)lf[181]+1),*((C_word*)lf[182]+1),*((C_word*)lf[183]+1),*((C_word*)lf[184]+1),*((C_word*)lf[185]+1),*((C_word*)lf[186]+1),*((C_word*)lf[187]+1),*((C_word*)lf[188]+1),*((C_word*)lf[189]+1));
t66=C_mutate((C_word*)lf[190]+1 /* (set! signals-list ...) */,t65);
t67=*((C_word*)lf[191]+1);
t68=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4424,a[2]=((C_word*)t0)[2],a[3]=t67,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1182 make-vector */
t69=*((C_word*)lf[455]+1);
((C_proc4)(void*)(*((C_word*)t69+1)))(4,t69,t68,C_fix(256),C_SCHEME_FALSE);}

/* k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4424(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4424,2,t0,t1);}
t2=C_mutate((C_word*)lf[192]+1 /* (set! signal-handler ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4426,a[2]=t1,a[3]=((C_word)li70),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[193]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4435,a[2]=t1,a[3]=((C_word)li71),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[191]+1 /* (set! interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4448,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[194]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4466,a[2]=((C_word)li74),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[197]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4512,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[198]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4544,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[199]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4550,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[201]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4565,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8634,a[2]=((C_word)li253),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1238 set-signal-handler! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[193]+1)))(4,*((C_word*)lf[193]+1),t10,*((C_word*)lf[167]+1),t11);}

/* a8633 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8634(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8634,3,t0,t1,t2);}
/* posixunix.scm: 1240 ##sys#user-interrupt-hook */
((C_proc2)C_retrieve_proc(*((C_word*)lf[454]+1)))(2,*((C_word*)lf[454]+1),t1);}

/* k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4581,2,t0,t1);}
t2=C_mutate((C_word*)lf[203]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4583,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4623,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8616,a[2]=((C_word)li251),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8619,a[2]=((C_word)li252),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1264 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[446]+1)))(4,*((C_word*)lf[446]+1),t3,t4,t5);}

/* a8618 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8619(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8619,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(C_setuid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8629,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1268 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8627 in a8618 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1269 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[449],lf[453],((C_word*)t0)[2]);}

/* a8615 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8616,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub788(C_SCHEME_UNDEFINED));}

/* k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4623,2,t0,t1);}
t2=C_mutate((C_word*)lf[206]+1 /* (set! current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4627,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8598,a[2]=((C_word)li249),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8601,a[2]=((C_word)li250),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1272 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[446]+1)))(4,*((C_word*)lf[446]+1),t3,t4,t5);}

/* a8600 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8601(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8601,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(C_seteuid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8611,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1276 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8609 in a8600 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1277 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[451],lf[452],((C_word*)t0)[2]);}

/* a8597 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8598,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub794(C_SCHEME_UNDEFINED));}

/* k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4627,2,t0,t1);}
t2=C_mutate((C_word*)lf[207]+1 /* (set! current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4631,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8580,a[2]=((C_word)li247),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8583,a[2]=((C_word)li248),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1281 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[446]+1)))(4,*((C_word*)lf[446]+1),t3,t4,t5);}

/* a8582 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8583(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8583,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(C_setgid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8593,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1285 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8591 in a8582 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1286 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[449],lf[450],((C_word*)t0)[2]);}

/* a8579 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8580,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub800(C_SCHEME_UNDEFINED));}

/* k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4631,2,t0,t1);}
t2=C_mutate((C_word*)lf[208]+1 /* (set! current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4635,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8562,a[2]=((C_word)li245),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8565,a[2]=((C_word)li246),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1289 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[446]+1)))(4,*((C_word*)lf[446]+1),t3,t4,t5);}

/* a8564 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8565(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8565,3,t0,t1,t2);}
if(C_truep(C_fixnum_lessp(C_setegid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8575,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1293 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8573 in a8564 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1294 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[447],lf[448],((C_word*)t0)[2]);}

/* a8561 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8562,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub806(C_SCHEME_UNDEFINED));}

/* k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4635(C_word c,C_word t0,C_word t1){
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
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4635,2,t0,t1);}
t2=C_mutate((C_word*)lf[209]+1 /* (set! current-effective-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[210]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4637,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[120]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4704,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[213]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4718,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[214]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4743,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[215]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4836,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[219]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4899,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[222]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4973,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[224]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t11=C_mutate((C_word*)lf[225]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t12=C_mutate((C_word*)lf[226]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t13=C_mutate((C_word*)lf[227]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t14=C_mutate((C_word*)lf[228]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t15=C_mutate((C_word*)lf[229]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t16=C_mutate((C_word*)lf[230]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t17=C_mutate((C_word*)lf[231]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t18=C_mutate((C_word*)lf[232]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t19=C_mutate((C_word*)lf[233]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t20=C_mutate((C_word*)lf[234]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t21=C_mutate((C_word*)lf[235]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t22=C_mutate((C_word*)lf[236]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t23=C_mutate((C_word*)lf[237]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t24=C_mutate((C_word*)lf[238]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t25=C_mutate((C_word*)lf[239]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t26=C_mutate((C_word*)lf[240]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t27=C_mutate((C_word*)lf[241]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t28=C_mutate((C_word*)lf[242]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t29=C_mutate((C_word*)lf[243]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t30=C_mutate((C_word*)lf[244]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t31=C_mutate((C_word*)lf[245]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t32=C_mutate((C_word*)lf[246]+1 /* (set! errno/wouldblock ...) */,C_fix((C_word)EWOULDBLOCK));
t33=C_set_block_item(lf[247] /* errno/2big */,0,C_fix(0));
t34=C_set_block_item(lf[248] /* errno/deadlk */,0,C_fix(0));
t35=C_set_block_item(lf[249] /* errno/dom */,0,C_fix(0));
t36=C_set_block_item(lf[250] /* errno/fbig */,0,C_fix(0));
t37=C_set_block_item(lf[251] /* errno/ilseq */,0,C_fix(0));
t38=C_set_block_item(lf[252] /* errno/mlink */,0,C_fix(0));
t39=C_set_block_item(lf[253] /* errno/nametoolong */,0,C_fix(0));
t40=C_set_block_item(lf[254] /* errno/nfile */,0,C_fix(0));
t41=C_set_block_item(lf[255] /* errno/nodev */,0,C_fix(0));
t42=C_set_block_item(lf[256] /* errno/nolck */,0,C_fix(0));
t43=C_set_block_item(lf[257] /* errno/nosys */,0,C_fix(0));
t44=C_set_block_item(lf[258] /* errno/notempty */,0,C_fix(0));
t45=C_set_block_item(lf[259] /* errno/notty */,0,C_fix(0));
t46=C_set_block_item(lf[260] /* errno/nxio */,0,C_fix(0));
t47=C_set_block_item(lf[261] /* errno/range */,0,C_fix(0));
t48=C_set_block_item(lf[262] /* errno/xdev */,0,C_fix(0));
t49=C_mutate((C_word*)lf[263]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5037,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[265]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5064,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5094,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
t52=C_mutate((C_word*)lf[267]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5118,a[2]=t51,a[3]=((C_word)li94),tmp=(C_word)a,a+=4,tmp));
t53=C_mutate((C_word*)lf[268]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5124,a[2]=t51,a[3]=((C_word)li95),tmp=(C_word)a,a+=4,tmp));
t54=C_mutate((C_word*)lf[269]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5130,a[2]=t51,a[3]=((C_word)li96),tmp=(C_word)a,a+=4,tmp));
t55=C_mutate((C_word*)lf[270]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5136,a[2]=((C_word)li97),tmp=(C_word)a,a+=3,tmp));
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5153,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8523,a[2]=((C_word)li243),tmp=(C_word)a,a+=3,tmp);
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8541,a[2]=((C_word)li244),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1509 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[446]+1)))(4,*((C_word*)lf[446]+1),t56,t57,t58);}

/* a8540 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8541(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8541,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[444]);
t5=C_i_check_exact_2(t3,lf[444]);
if(C_truep(C_fixnum_lessp(C_setpgid(t2,t3),C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8557,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1521 ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8555 in a8540 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1522 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[444],lf[445],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8522 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8523(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8523,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[272]);
t4=C_getpgid(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8530,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8536,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1514 ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}}

/* k8534 in a8522 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1515 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[272],lf[443],((C_word*)t0)[2]);}

/* k8528 in a8522 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5153,2,t0,t1);}
t2=C_mutate((C_word*)lf[272]+1 /* (set! process-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[273]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5155,a[2]=((C_word)li98),tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[276]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5192,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* posixunix.scm: 1542 make-string */
t7=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5192(C_word c,C_word t0,C_word t1){
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
C_word ab[266],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5192,2,t0,t1);}
t2=C_mutate((C_word*)lf[277]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li99),tmp=(C_word)a,a+=5,tmp));
t3=C_mutate((C_word*)lf[280]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5277,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[283]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t5=C_mutate((C_word*)lf[284]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t6=C_mutate((C_word*)lf[285]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5302,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5339,a[2]=((C_word)li102),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[294]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5354,a[2]=t8,a[3]=t10,a[4]=((C_word)li103),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[295]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5368,a[2]=t8,a[3]=t10,a[4]=((C_word)li104),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[296]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5382,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[302]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5427,a[2]=((C_word)li106),tmp=(C_word)a,a+=3,tmp));
t17=*((C_word*)lf[304]+1);
t18=*((C_word*)lf[305]+1);
t19=C_mutate((C_word*)lf[306]+1 /* (set! custom-input-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5454,a[2]=t17,a[3]=t18,a[4]=((C_word)li126),tmp=(C_word)a,a+=5,tmp));
t20=*((C_word*)lf[319]+1);
t21=*((C_word*)lf[305]+1);
t22=C_mutate((C_word*)lf[320]+1 /* (set! custom-output-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5936,a[2]=t20,a[3]=t21,a[4]=((C_word)li138),tmp=(C_word)a,a+=5,tmp));
t23=C_mutate((C_word*)lf[323]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6195,a[2]=((C_word)li139),tmp=(C_word)a,a+=3,tmp));
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6234,a[2]=((C_word)li140),tmp=(C_word)a,a+=3,tmp));
t29=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6308,a[2]=((C_word)li141),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[327]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6326,a[2]=t25,a[3]=t27,a[4]=((C_word)li142),tmp=(C_word)a,a+=5,tmp));
t31=C_mutate((C_word*)lf[329]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6341,a[2]=t25,a[3]=t27,a[4]=((C_word)li143),tmp=(C_word)a,a+=5,tmp));
t32=C_mutate((C_word*)lf[331]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6356,a[2]=t25,a[3]=t27,a[4]=((C_word)li144),tmp=(C_word)a,a+=5,tmp));
t33=C_mutate((C_word*)lf[333]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6383,a[2]=((C_word)li145),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[335]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6411,a[2]=((C_word)li146),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[87]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6454,a[2]=((C_word)li147),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[339]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6480,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[340]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6497,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[341]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6517,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[342]+1 /* (set! current-environment ...) */,*((C_word*)lf[341]+1));
t40=C_mutate((C_word*)lf[343]+1 /* (set! prot/read ...) */,C_fix((C_word)PROT_READ));
t41=C_mutate((C_word*)lf[344]+1 /* (set! prot/write ...) */,C_fix((C_word)PROT_WRITE));
t42=C_mutate((C_word*)lf[345]+1 /* (set! prot/exec ...) */,C_fix((C_word)PROT_EXEC));
t43=C_mutate((C_word*)lf[346]+1 /* (set! prot/none ...) */,C_fix((C_word)PROT_NONE));
t44=C_mutate((C_word*)lf[347]+1 /* (set! map/fixed ...) */,C_fix((C_word)MAP_FIXED));
t45=C_mutate((C_word*)lf[348]+1 /* (set! map/shared ...) */,C_fix((C_word)MAP_SHARED));
t46=C_mutate((C_word*)lf[349]+1 /* (set! map/private ...) */,C_fix((C_word)MAP_PRIVATE));
t47=C_mutate((C_word*)lf[350]+1 /* (set! map/anonymous ...) */,C_fix((C_word)MAP_ANON));
t48=C_mutate((C_word*)lf[351]+1 /* (set! map/file ...) */,C_fix((C_word)MAP_FILE));
t49=C_mutate((C_word*)lf[352]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6621,a[2]=((C_word)li153),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[358]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6683,a[2]=((C_word)li154),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[360]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6718,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[361]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6727,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate(&lf[362] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6733,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[364]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6752,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[367]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6786,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[368]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6830,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[370]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6891,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[373]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6960,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[375]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7006,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[379]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7021,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[382]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7036,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[383]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7048,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[384]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7064,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[385]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7071,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[391]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7130,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate(&lf[392] /* (set! terminal-check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7149,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[394]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7181,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[395]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7204,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[400]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7239,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t70=*((C_word*)lf[402]+1);
t71=*((C_word*)lf[403]+1);
t72=*((C_word*)lf[404]+1);
t73=*((C_word*)lf[109]+1);
t74=*((C_word*)lf[102]+1);
t75=*((C_word*)lf[98]+1);
t76=C_mutate((C_word*)lf[405]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7251,a[2]=t72,a[3]=t70,a[4]=t73,a[5]=t71,a[6]=t74,a[7]=t75,a[8]=((C_word)li179),tmp=(C_word)a,a+=9,tmp));
t77=C_mutate((C_word*)lf[408]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7365,a[2]=((C_word)li180),tmp=(C_word)a,a+=3,tmp));
t78=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7407,a[2]=((C_word)li181),tmp=(C_word)a,a+=3,tmp);
t79=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7426,a[2]=((C_word)li182),tmp=(C_word)a,a+=3,tmp);
t80=*((C_word*)lf[410]+1);
t81=C_mutate((C_word*)lf[411]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7445,a[2]=t80,a[3]=t79,a[4]=t78,a[5]=((C_word)li188),tmp=(C_word)a,a+=6,tmp));
t82=C_mutate((C_word*)lf[413]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7627,a[2]=((C_word)li189),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate((C_word*)lf[414]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7644,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[416]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7722,a[2]=((C_word)li193),tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[417]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7725,a[2]=((C_word)li194),tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[418]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7728,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t87=C_mutate((C_word*)lf[419]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7735,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t88=C_mutate((C_word*)lf[421]+1 /* (set! shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7762,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[424]+1 /* (set! shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7771,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t90=*((C_word*)lf[408]+1);
t91=*((C_word*)lf[411]+1);
t92=C_mutate((C_word*)lf[426]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7777,a[2]=t90,a[3]=t91,a[4]=((C_word)li199),tmp=(C_word)a,a+=5,tmp));
t93=*((C_word*)lf[163]+1);
t94=*((C_word*)lf[414]+1);
t95=*((C_word*)lf[408]+1);
t96=*((C_word*)lf[411]+1);
t97=*((C_word*)lf[302]+1);
t98=*((C_word*)lf[55]+1);
t99=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7833,a[2]=t94,a[3]=((C_word)li203),tmp=(C_word)a,a+=4,tmp);
t100=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7870,a[2]=t93,a[3]=((C_word)li206),tmp=(C_word)a,a+=4,tmp);
t101=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7890,a[2]=t98,a[3]=((C_word)li207),tmp=(C_word)a,a+=4,tmp);
t102=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7904,a[2]=t98,a[3]=((C_word)li208),tmp=(C_word)a,a+=4,tmp);
t103=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7937,a[2]=t100,a[3]=t95,a[4]=t102,a[5]=t96,a[6]=((C_word)li210),tmp=(C_word)a,a+=7,tmp);
t104=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7982,a[2]=t101,a[3]=((C_word)li211),tmp=(C_word)a,a+=4,tmp);
t105=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7993,a[2]=t101,a[3]=((C_word)li212),tmp=(C_word)a,a+=4,tmp);
t106=C_mutate((C_word*)lf[428]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8004,a[2]=t105,a[3]=t99,a[4]=t104,a[5]=t103,a[6]=((C_word)li215),tmp=(C_word)a,a+=7,tmp));
t107=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8060,a[2]=((C_word)li220),tmp=(C_word)a,a+=3,tmp);
t108=C_mutate((C_word*)lf[431]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8121,a[2]=t107,a[3]=((C_word)li224),tmp=(C_word)a,a+=4,tmp));
t109=C_mutate((C_word*)lf[432]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8181,a[2]=t107,a[3]=((C_word)li228),tmp=(C_word)a,a+=4,tmp));
t110=*((C_word*)lf[405]+1);
t111=*((C_word*)lf[403]+1);
t112=*((C_word*)lf[102]+1);
t113=*((C_word*)lf[433]+1);
t114=*((C_word*)lf[113]+1);
t115=C_mutate((C_word*)lf[434]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8241,a[2]=t114,a[3]=t113,a[4]=t112,a[5]=t110,a[6]=t111,a[7]=((C_word)li241),tmp=(C_word)a,a+=8,tmp));
t116=C_mutate((C_word*)lf[441]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8500,a[2]=((C_word)li242),tmp=(C_word)a,a+=3,tmp));
t117=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t117+1)))(2,t117,C_SCHEME_UNDEFINED);}

/* set-root-directory! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8500(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8500,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[441]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8510,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8492,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
t7=C_i_foreign_string_argumentp(t5);
/* ##sys#make-c-string */
t8=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}
else{
t7=stub2239(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
t8=t4;
f_8510(t8,C_fixnum_lessp(t7,C_fix(0)));}}

/* k8490 in set-root-directory! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=stub2239(C_SCHEME_UNDEFINED,t1);
t3=((C_word*)t0)[2];
f_8510(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* k8508 in set-root-directory! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8510(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2409 posix-error */
t2=lf[3];
f_2528(6,t2,((C_word*)t0)[3],lf[48],lf[441],lf[442],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8241(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+22)){
C_save_and_reclaim((void*)tr4r,(void*)f_8241r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_8241r(t0,t1,t2,t3,t4);}}

static void C_ccall f_8241r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t2,a[9]=((C_word)li236),tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8408,a[2]=t5,a[3]=((C_word)li237),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8413,a[2]=t6,a[3]=((C_word)li238),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8418,a[2]=t7,a[3]=((C_word)li240),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-action21632228 */
t9=t8;
f_8418(t9,t1);}
else{
t9=C_i_car(t4);
t10=C_i_cdr(t4);
if(C_truep(C_i_nullp(t10))){
/* def-id21642226 */
t11=t7;
f_8413(t11,t1,t9);}
else{
t11=C_i_car(t10);
t12=C_i_cdr(t10);
if(C_truep(C_i_nullp(t12))){
/* def-limit21652223 */
t13=t6;
f_8408(t13,t1,t9,t11);}
else{
t13=C_i_car(t12);
t14=C_i_cdr(t12);
if(C_truep(C_i_nullp(t14))){
/* body21612170 */
t15=t5;
f_8243(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-action2163 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8418,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8424,a[2]=((C_word)li239),tmp=(C_word)a,a+=3,tmp);
/* def-id21642226 */
t3=((C_word*)t0)[2];
f_8413(t3,t1,t2);}

/* a8423 in def-action2163 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8424(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8424,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* def-id2164 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8413(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8413,NULL,3,t0,t1,t2);}
/* def-limit21652223 */
t3=((C_word*)t0)[2];
f_8408(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit2165 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8408(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8408,NULL,4,t0,t1,t2,t3);}
/* body21612170 */
t4=((C_word*)t0)[2];
f_8243(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8243(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_8243,NULL,5,t0,t1,t2,t3,t4);}
t5=C_i_check_string_2(((C_word*)t0)[8],lf[434]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8250,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=t7,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
t9=t4;
if(C_truep(t9)){
if(C_truep(C_fixnump(t4))){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8403,a[2]=t4,a[3]=t7,a[4]=((C_word)li234),tmp=(C_word)a,a+=5,tmp);
t11=t8;
f_8250(t11,t10);}
else{
t10=t4;
t11=t8;
f_8250(t11,t10);}}
else{
t10=t8;
f_8250(t10,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8395,a[2]=((C_word)li235),tmp=(C_word)a,a+=3,tmp));}}

/* f_8395 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8395(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8395,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_8403 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8403(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8403,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8250(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8250,NULL,2,t0,t1);}
t2=C_i_stringp(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8383,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t2)){
t4=t3;
f_8383(2,t4,t2);}
else{
/* posixunix.scm: 2381 regexp? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[440]+1)))(3,*((C_word*)lf[440]+1),t3,((C_word*)t0)[12]);}}

/* k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8383,2,t0,t1);}
t2=(C_truep(t1)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8384,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word)li229),tmp=(C_word)a,a+=5,tmp):((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8260,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8377,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2384 make-pathname */
t5=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],lf[439]);}

/* k8375 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2384 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8260,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8262,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t3,a[11]=((C_word)li233),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_8262(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8262(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8262,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_slot(t2,C_fix(0));
t5=C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8281,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=t5,a[12]=t1,a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2390 directory? */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}}

/* k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8281,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8357,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 2391 pathname-file */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8363,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2398 pproc */
t3=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}}

/* k8361 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8363,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8370,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2398 action */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 2399 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_8262(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k8368 in k8361 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2398 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8262(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8357,2,t0,t1);}
if(C_truep((C_truep(C_i_equalp(t1,lf[435]))?C_SCHEME_TRUE:(C_truep(C_i_equalp(t1,lf[436]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixunix.scm: 2391 loop */
t2=((C_word*)((C_word*)t0)[12])[1];
f_8262(t2,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8296,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm: 2392 lproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}}

/* k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8296(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8296,2,t0,t1);}
if(C_truep(t1)){
t2=C_fixnum_plus(((C_word*)((C_word*)t0)[11])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8306,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8308,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=t6,a[5]=((C_word)li230),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8313,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word)li231),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8337,a[2]=t6,a[3]=((C_word*)t0)[11],a[4]=t4,a[5]=((C_word)li232),tmp=(C_word)a,a+=6,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[438]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8347,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8350,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 2397 pproc */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}}

/* k8348 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2397 action */
t2=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posixunix.scm: 2397 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8262(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k8345 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2397 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8262(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8336 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8337,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a8312 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8313,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8321,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8335,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2395 make-pathname */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[6],lf[437]);}

/* k8333 in a8312 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2395 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k8319 in a8312 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8325,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8328,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 2396 pproc */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k8326 in k8319 in a8312 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2396 action */
t2=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posixunix.scm: 2395 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8262(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k8323 in k8319 in a8312 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2395 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8262(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8307 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8308,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k8304 in k8294 in k8355 in k8279 in loop in k8258 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2393 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8262(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_8384 in k8381 in k8248 in body2161 in find-files in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8384,3,t0,t1,t2);}
/* posixunix.scm: 2382 string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* process* in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8181(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_8181r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8181r(t0,t1,t2,t3);}}

static void C_ccall f_8181r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8183,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li225),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8188,a[2]=t4,a[3]=((C_word)li226),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8193,a[2]=t5,a[3]=((C_word)li227),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-args21302141 */
t7=t6;
f_8193(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* def-env21312139 */
t9=t5;
f_8188(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_i_cdr(t8);
if(C_truep(C_i_nullp(t10))){
/* body21282136 */
t11=t4;
f_8183(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-args2130 in process* in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8193(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8193,NULL,2,t0,t1);}
/* def-env21312139 */
t2=((C_word*)t0)[2];
f_8188(t2,t1,C_SCHEME_FALSE);}

/* def-env2131 in process* in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8188(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8188,NULL,3,t0,t1,t2);}
/* body21282136 */
t3=((C_word*)t0)[2];
f_8183(t3,t1,t2,C_SCHEME_FALSE);}

/* body2128 in process* in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8183(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8183,NULL,4,t0,t1,t2,t3);}
/* posixunix.scm: 2358 %process */
f_8060(t1,lf[432],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3);}

/* process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8121(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_8121r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8121r(t0,t1,t2,t3);}}

static void C_ccall f_8121r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8123,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li221),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8128,a[2]=t4,a[3]=((C_word)li222),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8133,a[2]=t5,a[3]=((C_word)li223),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-args20992110 */
t7=t6;
f_8133(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* def-env21002108 */
t9=t5;
f_8128(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_i_cdr(t8);
if(C_truep(C_i_nullp(t10))){
/* body20972105 */
t11=t4;
f_8123(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-args2099 in process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8133(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8133,NULL,2,t0,t1);}
/* def-env21002108 */
t2=((C_word*)t0)[2];
f_8128(t2,t1,C_SCHEME_FALSE);}

/* def-env2100 in process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8128(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8128,NULL,3,t0,t1,t2);}
/* body20972105 */
t3=((C_word*)t0)[2];
f_8123(t3,t1,t2,C_SCHEME_FALSE);}

/* body2097 in process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8123(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8123,NULL,4,t0,t1,t2,t3);}
/* posixunix.scm: 2355 %process */
f_8060(t1,lf[431],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3);}

/* %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8060(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8060,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8062,a[2]=t2,a[3]=((C_word)li217),tmp=(C_word)a,a+=4,tmp);
t10=C_i_check_string_2(((C_word*)t7)[1],t2);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8081,a[2]=t9,a[3]=t1,a[4]=t3,a[5]=t6,a[6]=t8,a[7]=t7,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t8)[1])){
/* posixunix.scm: 2344 chkstrlst */
t12=t9;
f_8062(t12,t11,((C_word*)t8)[1]);}
else{
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8115,a[2]=t11,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2346 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[424]+1)))(3,*((C_word*)lf[424]+1),t12,((C_word*)t7)[1]);}}

/* k8113 in %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8115,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2347 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[421]+1)))(2,*((C_word*)lf[421]+1),t3);}

/* k8117 in k8113 in %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_8081(2,t3,t2);}

/* k8079 in %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8081,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8084,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm: 2348 chkstrlst */
t3=((C_word*)t0)[2];
f_8062(t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_8084(2,t3,C_SCHEME_UNDEFINED);}}

/* k8082 in k8079 in %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8089,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li218),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8095,a[2]=((C_word*)t0)[3],a[3]=((C_word)li219),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a8094 in k8082 in k8079 in %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8095,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm: 2351 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixunix.scm: 2352 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a8088 in k8082 in k8079 in %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8089,2,t0,t1);}
/* posixunix.scm: 2349 ##sys#process */
t2=*((C_word*)lf[428]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* chkstrlst in %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_8062(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8062,NULL,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8071,a[2]=((C_word*)t0)[2],a[3]=((C_word)li216),tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[430]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a8070 in chkstrlst in %process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8071(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8071,3,t0,t1,t2);}
t3=*((C_word*)lf[429]+1);
/* g20692070 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8004(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[21],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_8004,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8010,a[2]=t8,a[3]=t7,a[4]=t6,a[5]=t5,a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word)li213),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8016,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t6,a[9]=t7,a[10]=((C_word)li214),tmp=(C_word)a,a+=11,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}

/* a8015 in ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8016(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[26],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8016,6,t0,t1,t2,t3,t4,t5);}
t6=C_i_not(((C_word*)t0)[9]);
t7=C_i_not(((C_word*)t0)[8]);
t8=C_i_not(((C_word*)t0)[7]);
t9=C_a_i_vector(&a,3,t6,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8027,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t5,a[13]=t1,tmp=(C_word)a,a+=14,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8047,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t10,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2325 make-on-close */
t12=((C_word*)t0)[3];
f_7833(t12,t11,((C_word*)t0)[5],t5,t9,C_fix(0),C_fix(1),C_fix(2));}

/* k8045 in a8015 in ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2324 input-port */
t2=((C_word*)t0)[7];
f_7982(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8025 in a8015 in ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8031,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=t1,a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2327 make-on-close */
t4=((C_word*)t0)[6];
f_7833(t4,t3,((C_word*)t0)[10],((C_word*)t0)[12],((C_word*)t0)[5],C_fix(1),C_fix(0),C_fix(2));}

/* k8041 in k8025 in a8015 in ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2326 output-port */
t2=((C_word*)t0)[7];
f_7993(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8029 in k8025 in a8015 in ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8031,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8035,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8039,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2330 make-on-close */
t4=((C_word*)t0)[3];
f_7833(t4,t3,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[2],C_fix(2),C_fix(0),C_fix(1));}

/* k8037 in k8029 in k8025 in a8015 in ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2329 input-port */
t2=((C_word*)t0)[7];
f_7982(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8033 in k8029 in k8025 in a8015 in ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2323 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8009 in ##sys#process in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_8010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8010,2,t0,t1);}
/* posixunix.scm: 2318 spawn */
t2=((C_word*)t0)[8];
f_7937(t2,t1,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7993(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7993,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7997,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2314 connect-parent */
t8=((C_word*)t0)[2];
f_7890(t8,t7,t4,t5);}

/* k7995 in output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2315 ##sys#custom-output-port */
((C_proc8)C_retrieve_proc(*((C_word*)lf[320]+1)))(8,*((C_word*)lf[320]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_SCHEME_TRUE,C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7982(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7982,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7986,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2310 connect-parent */
t8=((C_word*)t0)[2];
f_7890(t8,t7,t4,t5);}

/* k7984 in input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2311 ##sys#custom-input-port */
((C_proc8)C_retrieve_proc(*((C_word*)lf[306]+1)))(8,*((C_word*)lf[306]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_SCHEME_TRUE,C_fix(256),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7937(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7937,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7941,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=t3,a[10]=t2,a[11]=((C_word*)t0)[5],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 2297 needed-pipe */
t9=((C_word*)t0)[2];
f_7870(t9,t8,t6);}

/* k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2298 needed-pipe */
t3=((C_word*)t0)[2];
f_7870(t3,t2,((C_word*)t0)[5]);}

/* k7942 in k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2299 needed-pipe */
t3=((C_word*)t0)[2];
f_7870(t3,t2,((C_word*)t0)[6]);}

/* k7945 in k7942 in k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_i_car(t3);
t6=t2;
f_7954(t6,C_a_i_cons(&a,2,t4,t5));}
else{
t4=t2;
f_7954(t4,C_SCHEME_FALSE);}}

/* k7952 in k7945 in k7942 in k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7954(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7954,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7958,a[2]=((C_word*)t0)[12],a[3]=t1,a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word)li209),tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2302 process-fork */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* a7959 in k7952 in k7945 in k7942 in k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7964,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t1,a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm: 2304 connect-child */
t3=((C_word*)t0)[7];
f_7904(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[283]+1));}

/* k7962 in a7959 in k7952 in k7945 in k7942 in k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7967,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_i_car(t3);
t6=C_a_i_cons(&a,2,t4,t5);
/* posixunix.scm: 2305 connect-child */
t7=((C_word*)t0)[5];
f_7904(t7,t2,t6,((C_word*)t0)[2],*((C_word*)lf[284]+1));}
else{
/* posixunix.scm: 2305 connect-child */
t4=((C_word*)t0)[5];
f_7904(t4,t2,C_SCHEME_FALSE,((C_word*)t0)[2],*((C_word*)lf[284]+1));}}

/* k7965 in k7962 in a7959 in k7952 in k7945 in k7942 in k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7970,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=C_i_cdr(t3);
t5=C_i_car(t3);
t6=C_a_i_cons(&a,2,t4,t5);
/* posixunix.scm: 2306 connect-child */
t7=((C_word*)t0)[3];
f_7904(t7,t2,t6,((C_word*)t0)[2],*((C_word*)lf[285]+1));}
else{
/* posixunix.scm: 2306 connect-child */
t4=((C_word*)t0)[3];
f_7904(t4,t2,C_SCHEME_FALSE,((C_word*)t0)[2],*((C_word*)lf[285]+1));}}

/* k7968 in k7965 in k7962 in a7959 in k7952 in k7945 in k7942 in k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2307 process-execute */
t2=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7956 in k7952 in k7945 in k7942 in k7939 in spawn in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2300 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* connect-child in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7904(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7904,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=C_i_car(t2);
t6=C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7917,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2288 file-close */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k7915 in connect-child in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7917,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7829,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2262 duplicate-fileno */
t6=*((C_word*)lf[302]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t3);}}

/* k7827 in k7915 in connect-child in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2263 file-close */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* connect-parent in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7890(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7890,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=C_i_car(t2);
t5=C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7903,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2282 file-close */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k7901 in connect-parent in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* needed-pipe in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7870(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7870,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7879,a[2]=((C_word*)t0)[2],a[3]=((C_word)li204),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7885,a[2]=((C_word)li205),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a7884 in needed-pipe in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7885(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7885,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_a_i_cons(&a,2,t2,t3));}

/* a7878 in needed-pipe in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7879,2,t0,t1);}
/* posixunix.scm: 2277 create-pipe */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* make-on-close in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7833(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7833,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7835,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t6,a[7]=t5,a[8]=t4,a[9]=((C_word)li202),tmp=(C_word)a,a+=10,tmp));}

/* f_7835 in make-on-close in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7835,2,t0,t1);}
t2=C_i_vector_set(((C_word*)t0)[8],((C_word*)t0)[7],C_SCHEME_TRUE);
t3=C_i_vector_ref(((C_word*)t0)[8],((C_word*)t0)[6]);
t4=(C_truep(t3)?C_i_vector_ref(((C_word*)t0)[8],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7850,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li200),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7856,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li201),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a7855 */
static void C_ccall f_7856(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7856,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm: 2272 ##sys#signal-hook */
t5=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t1,lf[195],((C_word*)t0)[3],lf[427],((C_word*)t0)[2],t4);}}

/* a7849 */
static void C_ccall f_7850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7850,2,t0,t1);}
/* posixunix.scm: 2270 process-wait */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* process-run in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7777(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_7777r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7777r(t0,t1,t2,t3);}}

static void C_ccall f_7777r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7784,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2226 process-fork */
t7=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}

/* k7782 in process-run in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7784,2,t0,t1);}
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm: 2228 process-execute */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2230 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[421]+1)))(2,*((C_word*)lf[421]+1),t3);}}
else{
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7801 in k7782 in process-run in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7807,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2230 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[424]+1)))(3,*((C_word*)lf[424]+1),t2,((C_word*)t0)[2]);}

/* k7805 in k7801 in k7782 in process-run in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2230 process-execute */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7771(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7771,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_list(&a,2,lf[425],t2));}

/* ##sys#shell-command in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7766,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 2216 get-environment-variable */
t3=*((C_word*)lf[119]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[423]);}

/* k7764 in ##sys#shell-command in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[422]);}}

/* process-signal in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7735(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_7735r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7735r(t0,t1,t2,t3);}}

static void C_ccall f_7735r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):C_fix((C_word)SIGTERM));
t6=C_i_check_exact_2(t2,lf[419]);
t7=C_i_check_exact_2(t5,lf[419]);
t8=C_kill(t2,t5);
t9=C_eqp(t8,C_fix(-1));
if(C_truep(t9)){
/* posixunix.scm: 2213 posix-error */
t10=lf[3];
f_2528(7,t10,t1,lf[195],lf[419],lf[420],t2,t5);}
else{
t10=C_SCHEME_UNDEFINED;
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}

/* sleep in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7728(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7728,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1900(C_SCHEME_UNDEFINED,t3));}

/* parent-process-id in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7725,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1897(C_SCHEME_UNDEFINED));}

/* current-process-id in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7722,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,stub1895(C_SCHEME_UNDEFINED));}

/* process-wait in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7644(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_7644r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7644r(t0,t1,t2);}}

static void C_ccall f_7644r(C_word t0,C_word t1,C_word t2){
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
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a=C_alloc(9);
t3=C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:C_i_car(t2));
t5=C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_i_cdr(t2));
t7=C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:C_i_car(t6));
t9=C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:C_i_cdr(t6));
if(C_truep(C_i_nullp(t10))){
t11=(C_truep(t4)?t4:C_fix(-1));
t12=C_i_check_exact_2(t11,lf[414]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7674,a[2]=t8,a[3]=t11,a[4]=((C_word)li190),tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7680,a[2]=t11,a[3]=((C_word)li191),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t13,t14);}
else{
/* ##sys#error */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}

/* a7679 in process-wait in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7680,5,t0,t1,t2,t3,t4);}
t5=C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm: 2199 posix-error */
t6=lf[3];
f_2528(6,t6,t1,lf[195],lf[414],lf[415],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 2200 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a7673 in process-wait in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7674,2,t0,t1);}
/* posixunix.scm: 2197 ##sys#process-wait */
((C_proc4)C_retrieve_proc(*((C_word*)lf[413]+1)))(4,*((C_word*)lf[413]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7627,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=C_waitpid(t2,t4);
t6=C_WIFEXITED(C_fix((C_word)C_wait_status));
if(C_truep(t6)){
t7=C_WEXITSTATUS(C_fix((C_word)C_wait_status));
/* posixunix.scm: 2184 values */
C_values(5,0,t1,t5,t6,t7);}
else{
if(C_truep(C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
t7=C_WTERMSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm: 2184 values */
C_values(5,0,t1,t5,t6,t7);}
else{
t7=C_WSTOPSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm: 2184 values */
C_values(5,0,t1,t5,t6,t7);}}}

/* process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7445(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_7445r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7445r(t0,t1,t2,t3);}}

static void C_ccall f_7445r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7447,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li185),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7574,a[2]=t4,a[3]=((C_word)li186),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7579,a[2]=t5,a[3]=((C_word)li187),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* def-arglist18071854 */
t7=t6;
f_7579(t7,t1);}
else{
t7=C_i_car(t3);
t8=C_i_cdr(t3);
if(C_truep(C_i_nullp(t8))){
/* def-envlist18081852 */
t9=t5;
f_7574(t9,t1,t7);}
else{
t9=C_i_car(t8);
t10=C_i_cdr(t8);
if(C_truep(C_i_nullp(t10))){
/* body18051813 */
t11=t4;
f_7447(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-arglist1807 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7579(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7579,NULL,2,t0,t1);}
/* def-envlist18081852 */
t2=((C_word*)t0)[2];
f_7574(t2,t1,C_SCHEME_END_OF_LIST);}

/* def-envlist1808 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7574(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7574,NULL,3,t0,t1,t2);}
/* body18051813 */
t3=((C_word*)t0)[2];
f_7447(t3,t1,t2,C_SCHEME_FALSE);}

/* body1805 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7447(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7447,NULL,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(((C_word*)t0)[5],lf[411]);
t5=C_i_check_list_2(t2,lf[411]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7457,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2152 pathname-strip-directory */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[5]);}

/* k7455 in body1805 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7457,2,t0,t1);}
t2=C_block_size(t1);
t3=f_7407(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7465,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li184),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_7465(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* doloop1817 in k7455 in body1805 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7465(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t15;
C_word t16;
C_word t17;
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7465,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=f_7407(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7478,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=C_i_check_list_2(((C_word*)t0)[5],lf[411]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7511,a[2]=((C_word*)t0)[3],a[3]=((C_word)li183),tmp=(C_word)a,a+=4,tmp);
t8=t5;
f_7478(t8,f_7511(t7,((C_word*)t0)[5],C_fix(0)));}
else{
t6=t5;
f_7478(t6,C_SCHEME_UNDEFINED);}}
else{
t4=C_i_car(t2);
t5=C_i_check_string_2(t4,lf[411]);
t6=C_block_size(t4);
t7=f_7407(t3,t4,t6);
t8=C_i_cdr(t2);
t9=C_fixnum_plus(t3,C_fix(1));
t15=t1;
t16=t8;
t17=t9;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}

/* doloop1825 in doloop1817 in k7455 in body1805 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_7511(C_word t0,C_word t1,C_word t2){
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
loop:
C_stack_check;
if(C_truep(C_i_nullp(t1))){
return(f_7426(t2,C_SCHEME_FALSE,C_fix(0)));}
else{
t3=C_i_car(t1);
t4=C_i_check_string_2(t3,lf[411]);
t5=C_block_size(t3);
t6=f_7426(t2,t3,t5);
t7=C_i_cdr(t1);
t8=C_fixnum_plus(t2,C_fix(1));
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k7476 in doloop1817 in k7455 in body1805 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7478(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7478,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7503,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 2166 ##sys#expand-home-path */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k7501 in k7476 in doloop1817 in k7455 in body1805 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2166 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7479 in k7476 in doloop1817 in k7455 in body1805 in process-execute in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?C_execve(t1):C_execvp(t1));
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=stub1778(C_SCHEME_UNDEFINED);
t5=stub1790(C_SCHEME_UNDEFINED);
/* posixunix.scm: 2173 posix-error */
t6=lf[3];
f_2528(6,t6,((C_word*)t0)[3],lf[195],lf[411],lf[412],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* setenv in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_7426(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
return(stub1783(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* setarg in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_7407(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_fixnum_argumentp(t3);
return(stub1771(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* process-fork in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7365(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_7365r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7365r(t0,t1,t2);}}

static void C_ccall f_7365r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(3);
t3=stub1742(C_SCHEME_UNDEFINED);
t4=C_eqp(C_fix(-1),t3);
if(C_truep(t4)){
/* posixunix.scm: 2137 posix-error */
t5=lf[3];
f_2528(5,t5,t1,lf[195],lf[408],lf[409]);}
else{
t5=C_i_pairp(t2);
t6=(C_truep(t5)?C_eqp(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7390,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* g17541755 */
t9=t7;
((C_proc2)C_retrieve_proc(t9))(2,t9,t8);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}}}

/* k7388 in process-fork in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=C_i_foreign_fixnum_argumentp(C_fix(0));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1759(C_SCHEME_UNDEFINED,t3));}

/* glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7251(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_7251r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7251r(t0,t1,t2);}}

static void C_ccall f_7251r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(12);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=((C_word)li178),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_7257(t6,t1,t2);}

/* conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7257(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7257,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7272,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word)li174),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li177),tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7278(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7278,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7282,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7357,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=t3;
/* posixunix.scm: 2122 make-pathname */
t8=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posixunix.scm: 2122 make-pathname */
t7=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,C_SCHEME_FALSE,lf[407],t4);}}

/* k7355 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2122 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7280 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7285,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 2123 regexp */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k7283 in k7280 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7292,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=((C_word*)t0)[5];
/* posixunix.scm: 2124 directory */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posixunix.scm: 2124 directory */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[406],C_SCHEME_TRUE);}}

/* k7290 in k7283 in k7280 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7292,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7294,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li176),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_7294(t5,((C_word*)t0)[2],t1);}

/* loop in k7290 in k7283 in k7280 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7294(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7294,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
t3=C_i_cdr(((C_word*)t0)[8]);
/* posixunix.scm: 2125 conc-loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_7257(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7311,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=C_i_car(t2);
/* posixunix.scm: 2126 string-match */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k7309 in loop in k7290 in k7283 in k7280 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7311,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7315,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li175),tmp=(C_word)a,a+=7,tmp);
/* g17311732 */
t3=t2;
f_7315(t3,((C_word*)t0)[2],t1);}
else{
t2=C_i_cdr(((C_word*)t0)[6]);
/* posixunix.scm: 2128 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7294(t3,((C_word*)t0)[2],t2);}}

/* g1731 in k7309 in loop in k7290 in k7283 in k7280 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7315(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7315,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7323,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=C_i_car(t2);
/* posixunix.scm: 2127 make-pathname */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}

/* k7321 in g1731 in k7309 in loop in k7290 in k7283 in k7280 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7327,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm: 2127 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7294(t4,t2,t3);}

/* k7325 in k7321 in g1731 in k7309 in loop in k7290 in k7283 in k7280 in a7277 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7327,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a7271 in conc-loop in glob in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7272,2,t0,t1);}
/* posixunix.scm: 2121 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* get-host-name in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7243,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,stub1682(t3),C_fix(0));}

/* k7241 in get-host-name in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7246,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
/* posixunix.scm: 2103 posix-error */
t3=lf[3];
f_2528(5,t3,t2,lf[396],lf[400],lf[401]);}}

/* k7244 in k7241 in get-host-name in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* terminal-size in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7204(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7204,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7208,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2084 ##sys#terminal-check */
f_7149(t3,lf[395],t2);}

/* k7206 in terminal-size in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7208,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(1));
t3=C_a_i_bytevector(&a,1,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7228,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[398]+1)))(6,*((C_word*)lf[398]+1),t4,t2,C_fix(0),C_SCHEME_FALSE,lf[399]);}

/* k7226 in k7206 in terminal-size in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[398]+1)))(6,*((C_word*)lf[398]+1),t2,((C_word*)t0)[2],C_fix(0),C_SCHEME_FALSE,lf[399]);}

/* k7230 in k7226 in k7206 in terminal-size in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
t2=C_C_fileno(((C_word*)t0)[6]);
t3=((C_word*)t0)[5];
t4=C_i_foreign_fixnum_argumentp(t2);
t5=C_i_foreign_pointer_argumentp(t3);
t6=C_i_foreign_pointer_argumentp(t1);
t7=stub1663(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=C_eqp(C_fix(0),t7);
if(C_truep(t8)){
/* posixunix.scm: 2091 values */
C_values(4,0,((C_word*)t0)[4],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[3]))),C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
/* posixunix.scm: 2092 posix-error */
t9=lf[3];
f_2528(6,t9,((C_word*)t0)[4],lf[396],lf[395],lf[397],((C_word*)t0)[6]);}}

/* terminal-name in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7181,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7185,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2076 ##sys#terminal-check */
f_7149(t3,lf[394],t2);}

/* k7183 in terminal-name in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7185,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_C_fileno(((C_word*)t0)[2]);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t3);
t6=stub1653(t4,t5);
/* ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* ##sys#terminal-check in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7149(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7149,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7153,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2068 ##sys#check-port */
t5=*((C_word*)lf[155]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,t2);}

/* k7151 in ##sys#terminal-check in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(7));
t3=C_eqp(lf[92],t2);
t4=(C_truep(t3)?C_tty_portp(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm: 2071 ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],((C_word*)t0)[2],lf[393],((C_word*)t0)[4]);}}

/* terminal-port? in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7130(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7130,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7134,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2063 ##sys#check-port */
t4=*((C_word*)lf[155]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[391]);}

/* k7132 in terminal-port? in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2064 ##sys#peek-unsigned-integer */
t3=*((C_word*)lf[301]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k7135 in k7132 in terminal-port? in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=C_tty_portp(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* set-buffering-mode! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7071(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_7071r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_7071r(t0,t1,t2,t3,t4);}}

static void C_ccall f_7071r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7075,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2048 ##sys#check-port */
t6=*((C_word*)lf[155]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[385]);}

/* k7073 in set-buffering-mode! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7075(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7075,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[5]):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=C_eqp(t4,lf[387]);
if(C_truep(t6)){
t7=t5;
f_7081(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=C_eqp(t4,lf[388]);
if(C_truep(t7)){
t8=C_fix((C_word)_IOLBF);
t9=t5;
f_7081(2,t9,t8);}
else{
t8=C_eqp(t4,lf[389]);
if(C_truep(t8)){
t9=t5;
f_7081(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixunix.scm: 2054 ##sys#error */
t9=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[385],lf[390],((C_word*)t0)[4],((C_word*)t0)[2]);}}}}

/* k7079 in k7073 in set-buffering-mode! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7081,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[385]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7090,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[2],C_fix(7));
t5=C_eqp(lf[92],t4);
if(C_truep(t5)){
t6=C_setvbuf(((C_word*)t0)[2],t1,((C_word*)t0)[4]);
t7=t3;
f_7090(t7,C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_7090(t6,C_SCHEME_TRUE);}}

/* k7088 in k7079 in k7073 in set-buffering-mode! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_7090(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2060 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],lf[385],lf[386],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* set-alarm! in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7064(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7064,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub1620(C_SCHEME_UNDEFINED,t3));}

/* _exit in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7048(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_7048r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7048r(t0,t1,t2);}}

static void C_ccall f_7048r(C_word t0,C_word t1,C_word t2){
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
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub1615(C_SCHEME_UNDEFINED,t5));}
else{
t3=t1;
t4=C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1615(C_SCHEME_UNDEFINED,t4));}}

/* local-timezone-abbreviation in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7036,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,stub1610(t2),C_fix(0));}

/* utc-time->seconds in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7021(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7021,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7025,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2015 check-time-vector */
f_6733(t3,lf[379],t2);}

/* k7023 in utc-time->seconds in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7025,2,t0,t1);}
t2=C_a_timegm(&a,1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7031,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2017 fp= */
t4=*((C_word*)lf[377]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[381],t2);}

/* k7029 in k7023 in utc-time->seconds in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2018 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[379],lf[380],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* local-time->seconds in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7006(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7006,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7010,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2008 check-time-vector */
f_6733(t3,lf[375],t2);}

/* k7008 in local-time->seconds in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7010,2,t0,t1);}
t2=C_a_mktime(&a,1,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7016,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2010 fp= */
t4=*((C_word*)lf[377]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,lf[378],t2);}

/* k7014 in k7008 in local-time->seconds in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_7016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2011 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[375],lf[376],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* string->time in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6960(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_6960r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6960r(t0,t1,t2,t3);}}

static void C_ccall f_6960r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6964,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_6964(2,t5,lf[374]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_6964(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k6962 in string->time in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6964,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[3],lf[373]);
t3=C_i_check_string_2(t1,lf[373]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6977,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2005 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}

/* k6975 in k6962 in string->time in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6981,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2005 ##sys#make-c-string */
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6979 in k6975 in k6962 in string->time in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6981,2,t0,t1);}
t2=C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub1582(C_SCHEME_UNDEFINED,t4,t1,t2));}

/* time->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6891(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_6891r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6891r(t0,t1,t2,t3);}}

static void C_ccall f_6891r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6895,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_6895(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_6895(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k6893 in time->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1989 check-time-vector */
f_6733(t2,lf[370],((C_word*)t0)[2]);}

/* k6896 in k6893 in time->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6898(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6898,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=C_i_check_string_2(((C_word*)t0)[4],lf[370]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6917,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1993 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6920,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,stub1546(t4,t3),C_fix(0));}}

/* k6918 in k6896 in k6893 in time->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posixunix.scm: 1997 ##sys#substring */
t4=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixunix.scm: 1998 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[370],lf[372],((C_word*)t0)[2]);}}

/* k6915 in k6896 in k6893 in time->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6917,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],stub1552(t3,t2,t1),C_fix(0));}

/* k6905 in k6896 in k6893 in time->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posixunix.scm: 1994 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[370],lf[371],((C_word*)t0)[2]);}}

/* seconds->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6830(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6830r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6830r(t0,t1,t2);}}

static void C_ccall f_6830r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6834,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posixunix.scm: 1978 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[366]+1)))(2,*((C_word*)lf[366]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_6834(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k6832 in seconds->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6834(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6834,2,t0,t1);}
t2=C_i_check_number_2(t1,lf[368]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6840,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=t1;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_integer_argumentp(t4);
t7=stub1525(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k6838 in k6832 in seconds->string in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_block_size(t1);
t3=C_fixnum_difference(t2,C_fix(1));
/* posixunix.scm: 1982 ##sys#substring */
t4=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixunix.scm: 1983 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[368],lf[369],((C_word*)t0)[2]);}}

/* seconds->utc-time in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6786(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6786r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6786r(t0,t1,t2);}}

static void C_ccall f_6786r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6790,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posixunix.scm: 1972 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[366]+1)))(2,*((C_word*)lf[366]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=C_i_check_number_2(t5,lf[367]);
/* posixunix.scm: 1974 ##sys#decode-seconds */
t7=*((C_word*)lf[365]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t5,C_SCHEME_TRUE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k6788 in seconds->utc-time in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[367]);
/* posixunix.scm: 1974 ##sys#decode-seconds */
t3=*((C_word*)lf[365]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* seconds->local-time in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6752(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6752r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6752r(t0,t1,t2);}}

static void C_ccall f_6752r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6756,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_nullp(t2))){
/* posixunix.scm: 1968 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[366]+1)))(2,*((C_word*)lf[366]+1),t3);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=C_i_car(t2);
t6=C_i_check_number_2(t5,lf[364]);
/* posixunix.scm: 1970 ##sys#decode-seconds */
t7=*((C_word*)lf[365]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k6754 in seconds->local-time in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_check_number_2(t1,lf[364]);
/* posixunix.scm: 1970 ##sys#decode-seconds */
t3=*((C_word*)lf[365]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* check-time-vector in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6733(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6733,NULL,3,t1,t2,t3);}
t4=C_i_check_vector_2(t3,t2);
t5=C_block_size(t3);
if(C_truep(C_fixnum_lessp(t5,C_fix(10)))){
/* posixunix.scm: 1966 ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[363],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* memory-mapped-file? in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6727,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[353]));}

/* memory-mapped-file-pointer in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6718(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6718,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[353],lf[360]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* unmap-file-from-memory in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6683(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_6683r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6683r(t0,t1,t2,t3);}}

static void C_ccall f_6683r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_structure_2(t2,lf[353],lf[358]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_i_car(t3):C_slot(t2,C_fix(2)));
t7=C_slot(t2,C_fix(1));
t8=(C_truep(t7)?C_i_foreign_pointer_argumentp(t7):C_SCHEME_FALSE);
t9=C_i_foreign_integer_argumentp(t6);
t10=stub1472(C_SCHEME_UNDEFINED,t8,t9);
t11=C_eqp(C_fix(0),t10);
if(C_truep(t11)){
t12=C_SCHEME_UNDEFINED;
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
/* posixunix.scm: 1952 posix-error */
t12=lf[3];
f_2528(7,t12,t1,lf[48],lf[358],lf[359],t2,t6);}}

/* map-file-to-memory in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr7r,(void*)f_6621r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_6621r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_6621r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6625,a[2]=t1,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;
f_6625(2,t10,t2);}
else{
/* posixunix.scm: 1937 ##sys#null-pointer */
t10=*((C_word*)lf[357]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t8);}}

/* k6623 in map-file-to-memory in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6625,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[7]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[7]):C_fix(0));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6631,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_specialp(t1))){
t5=t4;
f_6631(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1940 ##sys#signal-hook */
t5=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[60],lf[352],lf[356],t1);}}
else{
/* posixunix.scm: 1940 ##sys#signal-hook */
t5=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[60],lf[352],lf[356],t1);}}

/* k6629 in k6623 in map-file-to-memory in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6631(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6631,2,t0,t1);}
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=C_a_i_bytevector(&a,1,C_fix(3));
t8=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t9=C_i_foreign_integer_argumentp(t3);
t10=C_i_foreign_fixnum_argumentp(t4);
t11=C_i_foreign_fixnum_argumentp(t5);
t12=C_i_foreign_fixnum_argumentp(t6);
t13=C_i_foreign_integer_argumentp(((C_word*)t0)[3]);
t14=stub1441(t7,t8,t9,t10,t11,t12,t13);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6637,a[2]=((C_word*)t0)[7],a[3]=t14,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6650,a[2]=t14,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t15,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 1942 ##sys#pointer->address */
t17=*((C_word*)lf[355]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,t14);}

/* k6648 in k6629 in k6623 in map-file-to-memory in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6650,2,t0,t1);}
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm: 1943 posix-error */
t3=lf[3];
f_2528(11,t3,((C_word*)t0)[10],lf[48],lf[352],lf[354],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record(&a,3,lf[353],((C_word*)t0)[2],((C_word*)t0)[8]));}}

/* k6635 in k6629 in k6623 in map-file-to-memory in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6637,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record(&a,3,lf[353],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* get-environment-variables in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6517,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6523,a[2]=t3,a[3]=((C_word)li151),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6523(t5,t1,C_fix(0));}

/* loop in get-environment-variables in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6523(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6523,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6527,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub1423(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k6525 in loop in get-environment-variables in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6527,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6535,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li150),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_6535(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k6525 in loop in get-environment-variables in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6535(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6535,NULL,3,t0,t1,t2);}
t3=C_eqp(C_make_character(61),C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6561,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1901 ##sys#substring */
t5=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[5],C_fix(0),t2);}
else{
t4=C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm: 1904 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k6559 in scan in k6525 in loop in get-environment-variables in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6561,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6565,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_block_size(((C_word*)t0)[2]);
/* posixunix.scm: 1902 ##sys#substring */
t5=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,((C_word*)t0)[2],t3,t4);}

/* k6563 in k6559 in scan in k6525 in loop in get-environment-variables in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6565,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6553,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1903 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6523(t5,t3,t4);}

/* k6551 in k6563 in k6559 in scan in k6525 in loop in get-environment-variables in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6553,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6497(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6497,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[340]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6505,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1890 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6503 in unsetenv in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_unsetenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6480,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[339]);
t5=C_i_check_string_2(t3,lf[339]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6491,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1885 ##sys#make-c-string */
t7=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k6489 in setenv in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6495,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1885 ##sys#make-c-string */
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6493 in k6489 in setenv in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* fifo? in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6454(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6454,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[87]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6461,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6478,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1873 ##sys#expand-home-path */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k6476 in fifo? in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1873 ##sys#file-info */
t2=*((C_word*)lf[338]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6459 in fifo? in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_slot(t1,C_fix(4));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(3),t2));}
else{
/* posixunix.scm: 1876 posix-error */
t2=lf[3];
f_2528(6,t2,((C_word*)t0)[3],lf[48],lf[87],lf[337],((C_word*)t0)[2]);}}

/* create-fifo in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6411(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_6411r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6411r(t0,t1,t2,t3);}}

static void C_ccall f_6411r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=C_i_check_string_2(t2,lf[335]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6418,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_pairp(t3))){
t6=t5;
f_6418(t6,C_i_car(t3));}
else{
t6=C_fixnum_or(C_fix((C_word)S_IRWXG),C_fix((C_word)S_IRWXO));
t7=t5;
f_6418(t7,C_fixnum_or(C_fix((C_word)S_IRWXU),t6));}}

/* k6416 in create-fifo in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6418(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6418,NULL,2,t0,t1);}
t2=C_i_check_exact_2(t1,lf[335]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6439,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1867 ##sys#expand-home-path */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k6437 in k6416 in create-fifo in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1867 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6433 in k6416 in create-fifo in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mkfifo(t1,((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1868 posix-error */
t3=lf[3];
f_2528(7,t3,((C_word*)t0)[3],lf[48],lf[335],lf[336],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* file-unlock in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6383(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6383,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[326],lf[333]);
t4=C_slot(t2,C_fix(2));
t5=C_slot(t2,C_fix(3));
t6=C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=C_slot(t2,C_fix(1));
t8=C_flock_lock(t7);
if(C_truep(C_fixnum_lessp(t8,C_fix(0)))){
/* posixunix.scm: 1857 posix-error */
t9=lf[3];
f_2528(6,t9,t1,lf[48],lf[333],lf[334],t2);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* file-test-lock in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6356(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6356r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6356r(t0,t1,t2,t3);}}

static void C_ccall f_6356r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6360,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1848 setup */
f_6234(t4,t2,t3,lf[331]);}

/* k6358 in file-test-lock in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_flock_test(((C_word*)t0)[4]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=C_eqp(t2,C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_SCHEME_FALSE:t2));}
else{
/* posixunix.scm: 1850 err */
f_6308(((C_word*)t0)[3],lf[332],t1,lf[331]);}}

/* file-lock/blocking in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6341(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6341r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6341r(t0,t1,t2,t3);}}

static void C_ccall f_6341r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6345,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1842 setup */
f_6234(t4,t2,t3,lf[329]);}

/* k6343 in file-lock/blocking in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(C_flock_lockw(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1844 err */
f_6308(((C_word*)t0)[2],lf[330],t1,lf[329]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* file-lock in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6326(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6326r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6326r(t0,t1,t2,t3);}}

static void C_ccall f_6326r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6330,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1836 setup */
f_6234(t4,t2,t3,lf[327]);}

/* k6328 in file-lock in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(C_flock_lock(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1838 err */
f_6308(((C_word*)t0)[2],lf[328],t1,lf[327]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* err in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6308(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6308,NULL,4,t1,t2,t3,t4);}
t5=C_slot(t3,C_fix(1));
t6=C_slot(t3,C_fix(2));
t7=C_slot(t3,C_fix(3));
/* posixunix.scm: 1833 posix-error */
t8=lf[3];
f_2528(8,t8,t1,lf[48],t4,t2,t5,t6,t7);}

/* setup in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6234(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t16;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6234,NULL,4,t1,t2,t3,t4);}
t5=C_i_nullp(t3);
t6=(C_truep(t5)?C_fix(0):C_i_car(t3));
t7=C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:C_i_cdr(t3));
t9=C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_TRUE:C_i_car(t8));
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_i_nullp(t8);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:C_i_cdr(t8));
if(C_truep(C_i_nullp(t14))){
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6256,a[2]=t1,a[3]=t12,a[4]=t2,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1825 ##sys#check-port */
t16=*((C_word*)lf[155]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,t2,t4);}
else{
/* ##sys#error */
t15=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}

/* k6254 in setup in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6256,2,t0,t1);}
t2=C_i_check_number_2(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(C_SCHEME_TRUE,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t6=t3;
f_6262(t6,t5);}
else{
t5=t3;
f_6262(t5,C_i_check_number_2(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[5]));}}

/* k6260 in k6254 in setup in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6262(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6262,NULL,2,t0,t1);}
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=C_flock_setup(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record(&a,4,lf[326],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]));}

/* file-truncate in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6195,4,t0,t1,t2,t3);}
t4=C_i_check_number_2(t3,lf[323]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6205,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6212,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6219,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6223,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1808 ##sys#expand-home-path */
t9=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
if(C_truep(C_fixnump(t2))){
t7=C_ftruncate(t2,t3);
t8=t5;
f_6205(t8,C_fixnum_lessp(t7,C_fix(0)));}
else{
/* posixunix.scm: 1810 ##sys#error */
t7=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[323],lf[325],t2);}}}

/* k6221 in file-truncate in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1808 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6217 in file-truncate in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_truncate(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_6205(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* k6210 in file-truncate in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6205(t2,C_fixnum_lessp(t1,C_fix(0)));}

/* k6203 in file-truncate in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6205(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 1812 posix-error */
t2=lf[3];
f_2528(7,t2,((C_word*)t0)[4],lf[48],lf[323],lf[324],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr5r,(void*)f_5936r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5936r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5936r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a=C_alloc(20);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t4,a[7]=((C_word)li134),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6122,a[2]=t6,a[3]=((C_word)li135),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6127,a[2]=t7,a[3]=((C_word)li136),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6132,a[2]=t8,a[3]=((C_word)li137),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t5))){
/* def-nonblocking?12641330 */
t10=t9;
f_6132(t10,t1);}
else{
t10=C_i_car(t5);
t11=C_i_cdr(t5);
if(C_truep(C_i_nullp(t11))){
/* def-bufi12651328 */
t12=t8;
f_6127(t12,t1,t10);}
else{
t12=C_i_car(t11);
t13=C_i_cdr(t11);
if(C_truep(C_i_nullp(t13))){
/* def-on-close12661325 */
t14=t7;
f_6122(t14,t1,t10,t12);}
else{
t14=C_i_car(t13);
t15=C_i_cdr(t13);
if(C_truep(C_i_nullp(t15))){
/* body12621271 */
t16=t6;
f_5938(t16,t1,t10,t12,t14);}
else{
/* ##sys#error */
t16=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}}}}

/* def-nonblocking?1264 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6132(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6132,NULL,2,t0,t1);}
/* def-bufi12651328 */
t2=((C_word*)t0)[2];
f_6127(t2,t1,C_SCHEME_FALSE);}

/* def-bufi1265 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6127(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6127,NULL,3,t0,t1,t2);}
/* def-on-close12661325 */
t3=((C_word*)t0)[2];
f_6122(t3,t1,t2,C_fix(0));}

/* def-on-close1266 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_6122(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6122,NULL,4,t0,t1,t2,t3);}
/* body12621271 */
t4=((C_word*)t0)[2];
f_5938(t4,t1,t2,t3,*((C_word*)lf[318]+1));}

/* body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5938(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5938,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5942,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
/* posixunix.scm: 1750 ##sys#file-nonblocking! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t5,((C_word*)t0)[6]);}
else{
t6=t5;
f_5942(2,t6,C_SCHEME_UNDEFINED);}}

/* k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5942(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5942,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5944,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=((C_word*)t0)[9],a[6]=((C_word)li127),tmp=(C_word)a,a+=7,tmp));
t7=C_fixnump(((C_word*)t0)[6]);
t8=(C_truep(t7)?((C_word*)t0)[6]:C_block_size(((C_word*)t0)[6]));
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t5,tmp=(C_word)a,a+=10,tmp);
t10=C_eqp(C_fix(0),t8);
if(C_truep(t10)){
t11=t9;
f_5990(t11,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6034,a[2]=t3,a[3]=((C_word)li131),tmp=(C_word)a,a+=4,tmp));}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6048,a[2]=t3,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[6]))){
/* posixunix.scm: 1769 ##sys#make-string */
t12=*((C_word*)lf[316]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t0)[6]);}
else{
t12=t11;
f_6048(2,t12,((C_word*)t0)[6]);}}}

/* k6046 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6048,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[4];
f_5990(t4,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6049,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word)li133),tmp=(C_word)a,a+=7,tmp));}

/* f_6049 in k6046 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6049(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6049,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_fixnum_difference(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t4=C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6066,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=((C_word)li132),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6066(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep(C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm: 1785 poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5944(t3,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}}

/* loop */
static void C_fcall f_6066(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t16;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6066,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6076,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1775 poke */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5944(t7,t6,((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
if(C_truep(C_fixnum_lessp(t2,t4))){
t6=C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t2,((C_word*)((C_word*)t0)[7])[1]);
t7=C_fixnum_difference(t4,t2);
/* posixunix.scm: 1780 loop */
t13=t1;
t14=C_fix(0);
t15=t2;
t16=t7;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}
else{
t6=C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t4,((C_word*)((C_word*)t0)[7])[1]);
t7=C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t4);
t8=C_mutate(((C_word *)((C_word*)t0)[7])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}

/* k6074 in loop */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[6],0,C_fix(0));
/* posixunix.scm: 1777 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6066(t3,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* f_6034 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6034(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6034,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_block_size(t2);
/* posixunix.scm: 1768 poke */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5944(t4,t1,t2,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5988 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5990(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5990,NULL,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5994,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5999,a[2]=((C_word*)t0)[9],a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6005,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word)li129),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6026,a[2]=((C_word*)t0)[9],a[3]=((C_word)li130),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1788 make-output-port */
t9=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t9))(5,t9,t5,t6,t7,t8);}

/* a6025 in k5988 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6026,2,t0,t1);}
/* posixunix.scm: 1798 store */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* a6004 in k5988 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6005,2,t0,t1);}
if(C_truep(C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6015,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1795 posix-error */
t3=lf[3];
f_2528(7,t3,t2,lf[48],((C_word*)t0)[3],lf[322],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1796 on-close */
t3=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}}}

/* k6013 in a6004 in k5988 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_6015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1796 on-close */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a5998 in k5988 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5999(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5999,3,t0,t1,t2);}
/* posixunix.scm: 1790 store */
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* k5992 in k5988 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5994,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5997,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1799 set-port-name! */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k5995 in k5992 in k5988 in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* poke in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5944(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5944,NULL,4,t0,t1,t2,t3);}
t4=C_write(((C_word*)t0)[5],t2,t3);
t5=C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5960,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1758 ##sys#thread-yield! */
t8=*((C_word*)lf[308]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* posixunix.scm: 1760 posix-error */
t7=lf[3];
f_2528(7,t7,t1,((C_word*)t0)[3],lf[48],lf[321],((C_word*)t0)[5],((C_word*)t0)[2]);}}
else{
if(C_truep(C_fixnum_lessp(t4,t3))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5979,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1762 ##sys#substring */
t7=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t2,t4,t3);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}}

/* k5977 in poke in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* posixunix.scm: 1762 poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5944(t3,((C_word*)t0)[2],t1,t2);}

/* k5958 in poke in k5940 in body1262 in ##sys#custom-output-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1759 poke */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5944(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5454(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+24)){
C_save_and_reclaim((void*)tr5r,(void*)f_5454r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5454r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5454r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a=C_alloc(24);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=t2,a[7]=((C_word)li121),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5843,a[2]=t6,a[3]=((C_word)li122),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5848,a[2]=t7,a[3]=((C_word)li123),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5853,a[2]=t8,a[3]=((C_word)li124),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5858,a[2]=t9,a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t5))){
/* def-nonblocking?10911235 */
t11=t10;
f_5858(t11,t1);}
else{
t11=C_i_car(t5);
t12=C_i_cdr(t5);
if(C_truep(C_i_nullp(t12))){
/* def-bufi10921233 */
t13=t9;
f_5853(t13,t1,t11);}
else{
t13=C_i_car(t12);
t14=C_i_cdr(t12);
if(C_truep(C_i_nullp(t14))){
/* def-on-close10931230 */
t15=t8;
f_5848(t15,t1,t11,t13);}
else{
t15=C_i_car(t14);
t16=C_i_cdr(t14);
if(C_truep(C_i_nullp(t16))){
/* def-more?10941226 */
t17=t7;
f_5843(t17,t1,t11,t13,t15);}
else{
t17=C_i_car(t16);
t18=C_i_cdr(t16);
if(C_truep(C_i_nullp(t18))){
/* body10891099 */
t19=t6;
f_5456(t19,t1,t11,t13,t15,t17);}
else{
/* ##sys#error */
t19=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t1,lf[0],t18);}}}}}}

/* def-nonblocking?1091 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5858(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5858,NULL,2,t0,t1);}
/* def-bufi10921233 */
t2=((C_word*)t0)[2];
f_5853(t2,t1,C_SCHEME_FALSE);}

/* def-bufi1092 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5853(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5853,NULL,3,t0,t1,t2);}
/* def-on-close10931230 */
t3=((C_word*)t0)[2];
f_5848(t3,t1,t2,C_fix(1));}

/* def-on-close1093 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5848(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5848,NULL,4,t0,t1,t2,t3);}
/* def-more?10941226 */
t4=((C_word*)t0)[2];
f_5843(t4,t1,t2,t3,*((C_word*)lf[318]+1));}

/* def-more?1094 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5843(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5843,NULL,5,t0,t1,t2,t3,t4);}
/* body10891099 */
t5=((C_word*)t0)[2];
f_5456(t5,t1,t2,t3,t4,C_SCHEME_FALSE);}

/* body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5456(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5456,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5460,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
/* posixunix.scm: 1624 ##sys#file-nonblocking! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t6,((C_word*)t0)[5]);}
else{
t7=t6;
f_5460(2,t7,C_SCHEME_UNDEFINED);}}

/* k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5460,2,t0,t1);}
t2=C_fixnump(((C_word*)t0)[10]);
t3=(C_truep(t2)?((C_word*)t0)[10]:C_block_size(((C_word*)t0)[10]));
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[10]))){
/* posixunix.scm: 1626 ##sys#make-string */
t5=*((C_word*)lf[316]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[10]);}
else{
t5=t4;
f_5466(2,t5,((C_word*)t0)[10]);}}

/* k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5466(C_word c,C_word t0,C_word t1){
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
C_word ab[73],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5466,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5467,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word)li107),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5490,a[2]=t1,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5498,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=t3,a[9]=t5,a[10]=((C_word)li109),tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5580,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5585,a[2]=t8,a[3]=t5,a[4]=t7,a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5598,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=((C_word)li111),tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5610,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=((C_word)li112),tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5631,a[2]=t8,a[3]=t7,a[4]=((C_word)li113),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5640,a[2]=t8,a[3]=t1,a[4]=t3,a[5]=t5,a[6]=((C_word)li115),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5716,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=t5,a[6]=((C_word)li120),tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1674 make-input-port */
t18=((C_word*)t0)[2];
((C_proc8)C_retrieve_proc(t18))(8,t18,t11,t12,t13,t14,t15,t16,t17);}

/* a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5716,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5722,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li119),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_5722(t7,t1,C_SCHEME_FALSE);}

/* loop in a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5722(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5722,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5724,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li116),tmp=(C_word)a,a+=9,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5802,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word)li117),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5808,a[2]=((C_word*)t0)[2],a[3]=((C_word)li118),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5818,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1739 fetch */
t5=((C_word*)t0)[5];
f_5498(t5,t4);}}

/* k5816 in loop in a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1]))){
/* posixunix.scm: 1741 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5722(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* a5807 in loop in a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5808,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* posixunix.scm: 1736 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5722(t4,t1,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* a5801 in loop in a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5802,2,t0,t1);}
/* posixunix.scm: 1734 ##sys#scan-buffer-line */
((C_proc6)C_retrieve_proc(*((C_word*)lf[317]+1)))(6,*((C_word*)lf[317]+1),t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* bumper in loop in a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5724(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5724,4,t0,t1,t2,t3);}
t4=C_fixnum_difference(t2,((C_word*)((C_word*)t0)[7])[1]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5731,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=C_eqp(C_fix(0),t4);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
t8=t5;
f_5731(2,t8,(C_truep(t7)?t7:lf[314]));}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5774,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 1716 ##sys#make-string */
t8=*((C_word*)lf[316]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}}

/* k5772 in bumper in loop in a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=C_substring_copy(((C_word*)t0)[8],t1,((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],C_fix(0));
t3=C_slot(((C_word*)t0)[5],C_fix(5));
t4=C_fixnum_plus(t3,((C_word*)t0)[4]);
t5=C_i_set_i_slot(((C_word*)t0)[5],C_fix(5),t4);
if(C_truep(((C_word*)t0)[3])){
/* posixunix.scm: 1722 ##sys#string-append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[315]+1)))(4,*((C_word*)lf[315]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}
else{
t6=t1;
t7=((C_word*)t0)[2];
f_5731(2,t7,t6);}}

/* k5729 in bumper in loop in a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5731,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[7]);
t3=C_eqp(((C_word*)t0)[6],((C_word*)t0)[7]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5741,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1726 fetch */
t5=((C_word*)t0)[3];
f_5498(t5,t4);}
else{
t4=C_slot(((C_word*)t0)[2],C_fix(4));
t5=C_fixnum_plus(t4,C_fix(1));
t6=C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t5);
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_fix(0));
/* posixunix.scm: 1731 values */
C_values(4,0,((C_word*)t0)[4],t1,C_SCHEME_FALSE);}}

/* k5739 in k5729 in bumper in loop in a5715 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]);
/* posixunix.scm: 1727 values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a5639 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5640(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5640,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5648,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t7=t6;
f_5648(t7,t3);}
else{
t7=C_block_size(t4);
t8=t6;
f_5648(t8,C_fixnum_difference(t7,t5));}}

/* k5646 in a5639 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5648(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5648,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5650,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li114),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_5650(t5,((C_word*)t0)[3],t1,C_fix(0),((C_word*)t0)[2]);}

/* loop in k5646 in a5639 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5650(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5650,NULL,5,t0,t1,t2,t3,t4);}
t5=C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t6=C_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1]);
t7=C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t10=C_substring_copy(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1],t9,t4);
t11=C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t12=C_mutate(((C_word *)((C_word*)t0)[7])+1,t11);
t13=C_fixnum_difference(t2,t8);
t14=C_fixnum_plus(t3,t8);
t15=C_fixnum_plus(t4,t8);
/* posixunix.scm: 1702 loop */
t19=t1;
t20=t13;
t21=t14;
t22=t15;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5698,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 1704 fetch */
t7=((C_word*)t0)[2];
f_5498(t7,t6);}}}

/* k5696 in loop in k5646 in a5639 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(0),((C_word*)((C_word*)t0)[7])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixunix.scm: 1707 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5650(t3,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* a5630 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5631,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5635,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1692 fetch */
t3=((C_word*)t0)[2];
f_5498(t3,t2);}

/* k5633 in a5630 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1693 peek */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_5490(((C_word*)t0)[2]));}

/* a5609 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5610,2,t0,t1);}
if(C_truep(C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5620,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1689 posix-error */
t3=lf[3];
f_2528(7,t3,t2,lf[48],((C_word*)t0)[3],lf[313],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1690 on-close */
t3=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}}}

/* k5618 in a5609 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1690 on-close */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a5597 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5598,2,t0,t1);}
t2=C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm: 1684 ready? */
t3=((C_word*)t0)[2];
f_5467(t3,t1);}}

/* a5584 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5589,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1676 fetch */
t3=((C_word*)t0)[2];
f_5498(t3,t2);}

/* k5587 in a5584 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=f_5490(((C_word*)t0)[4]);
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* k5578 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5580,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5583,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1743 set-port-name! */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k5581 in k5578 in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* fetch in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5498(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5498,NULL,2,t0,t1);}
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[8])[1]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5510,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word)li108),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_5510(t5,t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop in fetch in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5510(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5510,NULL,2,t0,t1);}
t2=C_read(((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);
t3=C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5526,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1651 ##sys#thread-block-for-i/o! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[309]+1)))(5,*((C_word*)lf[309]+1),t5,*((C_word*)lf[310]+1),((C_word*)t0)[10],C_SCHEME_TRUE);}
else{
/* posixunix.scm: 1654 posix-error */
t5=lf[3];
f_2528(7,t5,t1,lf[48],((C_word*)t0)[6],lf[311],((C_word*)t0)[10],((C_word*)t0)[5]);}}
else{
t4=(C_truep(((C_word*)t0)[4])?C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5547,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 1658 more? */
t6=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t6=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k5545 in loop in fetch in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5547(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5547,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5550,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1660 ##sys#thread-yield! */
t3=*((C_word*)lf[308]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_read(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5556,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=C_set_block_item(t3,0,C_fix(0));
t8=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t3)[1]);
t9=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t10=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
/* posixunix.scm: 1666 posix-error */
t7=lf[3];
f_2528(7,t7,t4,lf[48],((C_word*)t0)[3],lf[312],((C_word*)t0)[8],((C_word*)t0)[2]);}}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t3)[1]);
t7=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t8=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}}

/* k5554 in k5545 in loop in fetch in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5548 in k5545 in loop in fetch in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1661 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5510(t2,((C_word*)t0)[2]);}

/* k5524 in loop in fetch in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1652 ##sys#thread-yield! */
t3=*((C_word*)lf[308]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5527 in k5524 in loop in fetch in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1653 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5510(t2,((C_word*)t0)[2]);}

/* peek in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_5490(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]))){
return(C_SCHEME_END_OF_FILE);}
else{
t1=C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
return(t1);}}

/* ready? in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5467(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5467,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5471,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1632 ##sys#file-select-one */
((C_proc3)C_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[3]);}

/* k5469 in ready? in k5464 in k5458 in body1089 in ##sys#custom-input-port in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* posixunix.scm: 1636 posix-error */
t4=lf[3];
f_2528(7,t4,((C_word*)t0)[5],lf[48],((C_word*)t0)[4],lf[307],((C_word*)t0)[3],((C_word*)t0)[2]);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_eqp(C_fix(1),t1));}}

/* duplicate-fileno in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5427r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5427r(t0,t1,t2,t3);}}

static void C_ccall f_5427r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=C_i_check_exact_2(t2,*((C_word*)lf[302]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5434,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t6=t5;
f_5434(t6,C_dup(t2));}
else{
t6=C_i_car(t3);
t7=C_i_check_exact_2(t6,lf[302]);
t8=t5;
f_5434(t8,C_dup2(t2,t6));}}

/* k5432 in duplicate-fileno in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5434(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5434,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5437,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 1617 posix-error */
t3=lf[3];
f_2528(6,t3,t2,lf[48],lf[302],lf[303],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5435 in k5432 in duplicate-fileno in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5382(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5382,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5386,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1599 ##sys#check-port */
t4=*((C_word*)lf[155]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[296]);}

/* k5384 in port->fileno in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5386,2,t0,t1);}
t2=C_slot(((C_word*)t0)[3],C_fix(7));
t3=C_eqp(lf[297],t2);
if(C_truep(t3)){
/* posixunix.scm: 1600 ##sys#tcp-port->fileno */
((C_proc3)C_retrieve_proc(*((C_word*)lf[298]+1)))(3,*((C_word*)lf[298]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5421,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1601 ##sys#peek-unsigned-integer */
t5=*((C_word*)lf[301]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],C_fix(0));}}

/* k5419 in k5384 in port->fileno in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5421,2,t0,t1);}
if(C_truep(C_i_zerop(t1))){
/* posixunix.scm: 1606 posix-error */
t2=lf[3];
f_2528(6,t2,((C_word*)t0)[3],lf[60],lf[296],lf[299],((C_word*)t0)[2]);}
else{
t2=C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5404,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1604 posix-error */
t4=lf[3];
f_2528(6,t4,t3,lf[48],lf[296],lf[300],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k5402 in k5419 in k5384 in port->fileno in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5368(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5368r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5368r(t0,t1,t2,t3);}}

static void C_ccall f_5368r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[295]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5380,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1595 mode */
f_5302(t5,C_SCHEME_FALSE,t3);}

/* k5378 in open-output-file* in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5380,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm: 1595 check */
f_5339(((C_word*)t0)[2],lf[295],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5354(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5354r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5354r(t0,t1,t2,t3);}}

static void C_ccall f_5354r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=C_i_check_exact_2(t2,lf[294]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5366,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1591 mode */
f_5302(t5,C_SCHEME_TRUE,t3);}

/* k5364 in open-input-file* in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5366,2,t0,t1);}
t2=C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm: 1591 check */
f_5339(((C_word*)t0)[2],lf[294],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5339(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5339,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posixunix.scm: 1584 posix-error */
t6=lf[3];
f_2528(6,t6,t1,lf[48],t2,lf[292],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5352,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1585 ##sys#make-port */
t7=*((C_word*)lf[144]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t4,*((C_word*)lf[145]+1),lf[293],lf[92]);}}

/* k5350 in check in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* mode in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5302(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5302,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5310,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t3))){
t5=C_i_car(t3);
t6=C_eqp(t5,lf[286]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixunix.scm: 1578 ##sys#error */
t8=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[287],t5);}
else{
/* posixunix.scm: 1574 ##sys#make-c-string */
t8=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,lf[288]);}}
else{
/* posixunix.scm: 1579 ##sys#error */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[289],t5);}}
else{
if(C_truep(t2)){
/* posixunix.scm: 1574 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[290]);}
else{
/* posixunix.scm: 1574 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[291]);}}}

/* k5308 in mode in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1574 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5277,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[280]);
t5=C_i_check_string_2(t3,lf[280]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5290,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=t3;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5258,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t7)){
t10=C_i_foreign_string_argumentp(t7);
/* ##sys#make-c-string */
t11=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
t10=t9;
f_5258(2,t10,C_SCHEME_FALSE);}}

/* k5256 in file-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5262,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t3=stub1004(C_SCHEME_UNDEFINED,t1,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_5290(t4,C_fixnum_lessp(t3,C_fix(0)));}}

/* k5260 in k5256 in file-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=stub1004(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_5290(t3,C_fixnum_lessp(t2,C_fix(0)));}

/* k5288 in file-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5290(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 1559 posix-error */
t2=lf[3];
f_2528(7,t2,((C_word*)t0)[4],lf[48],lf[281],lf[282],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* read-symbolic-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5193(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_5193r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5193r(t0,t1,t2,t3);}}

static void C_ccall f_5193r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5197,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_5197(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_5197(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5195 in read-symbolic-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5197,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[5],lf[277]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5204,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5232,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1545 ##sys#expand-home-path */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}

/* k5230 in k5195 in read-symbolic-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1545 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5202 in k5195 in read-symbolic-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5204,2,t0,t1);}
t2=C_do_readlink(t1,((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5207,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1547 posix-error */
t4=lf[3];
f_2528(6,t4,t3,lf[48],lf[277],lf[279],((C_word*)t0)[2]);}
else{
t4=t3;
f_5207(2,t4,C_SCHEME_UNDEFINED);}}

/* k5205 in k5202 in k5195 in read-symbolic-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5210,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1548 substring */
t3=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k5208 in k5205 in k5202 in k5195 in read-symbolic-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5216,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm: 1549 symbolic-link? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t2,t1);}
else{
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5214 in k5208 in k5205 in k5202 in k5195 in read-symbolic-link in k5190 in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 1550 read-symbolic-link */
((C_proc4)C_retrieve_proc(*((C_word*)lf[277]+1)))(4,*((C_word*)lf[277]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[278]);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* create-symbolic-link in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5155,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[273]);
t5=C_i_check_string_2(t3,lf[273]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5176,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5188,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1533 ##sys#expand-home-path */
t8=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k5186 in create-symbolic-link in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1533 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5174 in create-symbolic-link in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5184,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1534 ##sys#expand-home-path */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k5182 in k5174 in create-symbolic-link in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1534 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5178 in k5174 in create-symbolic-link in k5151 in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_symlink(((C_word*)t0)[5],t1);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1536 posix-error */
t3=lf[3];
f_2528(7,t3,((C_word*)t0)[4],lf[48],lf[274],lf[275],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* create-session in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5136,2,t0,t1);}
t2=C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5140,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5146,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1504 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k5144 in create-session in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1505 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[270],lf[271]);}

/* k5138 in create-session in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-execute-access? in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5130(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5130,3,t0,t1,t2);}
/* posixunix.scm: 1499 check */
f_5094(t1,t2,C_fix((C_word)X_OK),lf[269]);}

/* file-write-access? in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5124(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5124,3,t0,t1,t2);}
/* posixunix.scm: 1498 check */
f_5094(t1,t2,C_fix((C_word)W_OK),lf[268]);}

/* file-read-access? in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5118(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5118,3,t0,t1,t2);}
/* posixunix.scm: 1497 check */
f_5094(t1,t2,C_fix((C_word)R_OK),lf[267]);}

/* check in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_5094(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5094,NULL,4,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5112,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5116,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1494 ##sys#expand-home-path */
t8=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k5114 in check in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1494 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5110 in check in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5112,2,t0,t1);}
t2=C_test_access(t1,((C_word*)t0)[3]);
t3=C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5104,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixunix.scm: 1495 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5102 in k5110 in check in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-file-owner in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5064,5,t0,t1,t2,t3,t4);}
t5=C_i_check_string_2(t2,lf[265]);
t6=C_i_check_exact_2(t3,lf[265]);
t7=C_i_check_exact_2(t4,lf[265]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5088,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5092,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1484 ##sys#expand-home-path */
t10=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}

/* k5090 in change-file-owner in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1484 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5086 in change-file-owner in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_chown(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1485 posix-error */
t3=lf[3];
f_2528(8,t3,((C_word*)t0)[3],lf[48],lf[265],lf[266],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* change-file-mode in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5037(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5037,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[263]);
t5=C_i_check_exact_2(t3,lf[263]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5058,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5062,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1476 ##sys#expand-home-path */
t8=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k5060 in change-file-mode in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1476 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5056 in change-file-mode in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_5058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_chmod(t1,((C_word*)t0)[4]);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1477 posix-error */
t3=lf[3];
f_2528(7,t3,((C_word*)t0)[3],lf[48],lf[263],lf[264],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* initialize-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4973,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[222]);
t5=C_i_check_exact_2(t3,lf[222]);
t6=t2;
t7=t3;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4961,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t9=C_i_foreign_string_argumentp(t6);
/* ##sys#make-c-string */
t10=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t9=t8;
f_4961(2,t9,C_SCHEME_FALSE);}}

/* k4959 in initialize-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4961,2,t0,t1);}
t2=C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=stub910(C_SCHEME_UNDEFINED,t1,t2);
if(C_truep(C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1397 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4987 in k4959 in initialize-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1398 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[222],lf[223],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-groups! in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4899(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4899,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4903,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_length(t2);
t5=C_i_foreign_fixnum_argumentp(t4);
if(C_truep(stub868(C_SCHEME_UNDEFINED,t5))){
t6=t3;
f_4903(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1380 ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[219],lf[221]);}}

/* k4901 in set-groups! in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4903,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4908,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li88),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4908(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop893 in k4901 in set-groups! in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_4908(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4908,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
if(C_truep(C_fixnum_lessp(C_set_groups(t3),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4924,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1385 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=C_slot(t2,C_fix(0));
t5=C_i_check_exact_2(t4,lf[219]);
t6=C_set_gid(t3,t4);
t7=C_slot(t2,C_fix(1));
t8=C_fixnum_plus(t3,C_fix(1));
t11=t1;
t12=t7;
t13=t8;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* k4922 in doloop893 in k4901 in set-groups! in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1386 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[219],lf[220],((C_word*)t0)[2]);}

/* get-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4836,2,t0,t1);}
t2=C_fix((C_word)getgroups(0, C_groups));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4840,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4894,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1366 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_4840(2,t4,C_SCHEME_UNDEFINED);}}

/* k4892 in get-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1367 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[215],lf[218]);}

/* k4838 in get-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
if(C_truep(stub868(C_SCHEME_UNDEFINED,t3))){
t4=t2;
f_4843(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1369 ##sys#error */
t4=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[215],lf[217]);}}

/* k4841 in k4838 in get-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=stub864(C_SCHEME_UNDEFINED,t3);
if(C_truep(C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4875,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1371 ##sys#update-errno */
t6=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t2;
f_4846(2,t5,C_SCHEME_UNDEFINED);}}

/* k4873 in k4841 in k4838 in get-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1372 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[215],lf[216]);}

/* k4844 in k4841 in k4838 in get-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4846,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4851,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li86),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4851(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k4844 in k4841 in k4838 in get-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_4851(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4851,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4865,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm: 1376 loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k4863 in loop in k4844 in k4841 in k4838 in get-groups in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4865,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,C_get_gid(((C_word*)t0)[2]),t1));}

/* group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4743(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4743r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4743r(t0,t1,t2,t3);}}

static void C_ccall f_4743r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4747,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_4747(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_4747(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4750,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t3=t2;
f_4750(t3,C_getgrgid(((C_word*)t0)[2]));}
else{
t3=C_i_check_string_2(((C_word*)t0)[2],lf[214]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4801,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1340 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}

/* k4799 in k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4750(t2,C_getgrnam(t1));}

/* k4748 in k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_4750(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4750,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[3])?*((C_word*)lf[211]+1):*((C_word*)lf[212]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4763,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_group->gr_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4761 in k4748 in k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4763,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4767,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_group->gr_passwd),C_fix(0));}

/* k4765 in k4761 in k4748 in k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4771,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4773,a[2]=t4,a[3]=((C_word)li84),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4773(t6,t2,C_fix(0));}

/* loop in k4765 in k4761 in k4748 in k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_4773(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4773,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=stub835(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k4775 in loop in k4765 in k4761 in k4748 in k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4777,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4787,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1349 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4773(t4,t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k4785 in k4775 in loop in k4765 in k4761 in k4748 in k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4787,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4769 in k4765 in k4761 in k4748 in k4745 in group-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g857858 */
t2=((C_word*)t0)[5];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix((C_word)C_group->gr_gid),t1);}

/* current-effective-user-name in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4726,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4730,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1325 current-effective-user-id */
((C_proc2)C_retrieve_proc(*((C_word*)lf[207]+1)))(2,*((C_word*)lf[207]+1),t3);}

/* k4728 in current-effective-user-name in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1325 user-information */
((C_proc3)C_retrieve_proc(*((C_word*)lf[210]+1)))(3,*((C_word*)lf[210]+1),((C_word*)t0)[2],t1);}

/* k4724 in current-effective-user-name in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* current-user-name in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4712,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4716,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1322 current-user-id */
((C_proc2)C_retrieve_proc(*((C_word*)lf[206]+1)))(2,*((C_word*)lf[206]+1),t3);}

/* k4714 in current-user-name in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1322 user-information */
((C_proc3)C_retrieve_proc(*((C_word*)lf[210]+1)))(3,*((C_word*)lf[210]+1),((C_word*)t0)[2],t1);}

/* k4710 in current-user-name in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_car(t1));}

/* user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4637(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4637r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4637r(t0,t1,t2,t3);}}

static void C_ccall f_4637r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4641,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_4641(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_4641(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k4639 in user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_fixnump(((C_word*)t0)[2]))){
t3=t2;
f_4644(t3,C_getpwuid(((C_word*)t0)[2]));}
else{
t3=C_i_check_string_2(((C_word*)t0)[2],lf[210]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4683,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1310 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}

/* k4681 in k4639 in user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4644(t2,C_getpwnam(t1));}

/* k4642 in k4639 in user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_4644(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4644,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[3])?*((C_word*)lf[211]+1):*((C_word*)lf[212]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4657,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_user->pw_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4655 in k4642 in k4639 in user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4657,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4661,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_passwd),C_fix(0));}

/* k4659 in k4655 in k4642 in k4639 in user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4665,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_gecos),C_fix(0));}

/* k4663 in k4659 in k4655 in k4642 in k4639 in user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4669,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_dir),C_fix(0));}

/* k4667 in k4663 in k4659 in k4655 in k4642 in k4639 in user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4669,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4673,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_shell),C_fix(0));}

/* k4671 in k4667 in k4663 in k4659 in k4655 in k4642 in k4639 in user-information in k4633 in k4629 in k4625 in k4621 in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g830831 */
t2=((C_word*)t0)[7];
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_fix((C_word)C_user->pw_uid),C_fix((C_word)C_user->pw_gid),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* system-information in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4587,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_fix((C_word)C_uname),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4616,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1255 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_4587(2,t3,C_SCHEME_UNDEFINED);}}

/* k4614 in system-information in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1256 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[203],lf[205]);}

/* k4585 in system-information in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4594,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.sysname),C_fix(0));}

/* k4592 in k4585 in system-information in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4598,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.nodename),C_fix(0));}

/* k4596 in k4592 in k4585 in system-information in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4602,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.release),C_fix(0));}

/* k4600 in k4596 in k4592 in k4585 in system-information in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4606,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.version),C_fix(0));}

/* k4604 in k4600 in k4596 in k4592 in k4585 in system-information in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4610,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[204]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.machine),C_fix(0));}

/* k4608 in k4604 in k4600 in k4596 in k4592 in k4585 in system-information in k4579 in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4610,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* signal-unmask! in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4565(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4565,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[201]);
t4=C_sigdelset(t2);
if(C_truep(C_fixnum_lessp(C_sigprocmask_unblock(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1234 posix-error */
t5=lf[3];
f_2528(5,t5,t1,lf[195],lf[201],lf[202]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* signal-mask! in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4550(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4550,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[199]);
t4=C_sigaddset(t2);
if(C_truep(C_fixnum_lessp(C_sigprocmask_block(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1228 posix-error */
t5=lf[3];
f_2528(5,t5,t1,lf[195],lf[199],lf[200]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* signal-masked? in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4544(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4544,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[198]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_sigismember(t2));}

/* signal-mask in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4512,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4518,a[2]=t3,a[3]=((C_word)li75),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4518(t5,t1,*((C_word*)lf[190]+1),C_SCHEME_END_OF_LIST);}

/* loop in signal-mask in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_4518(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4518,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_i_car(t2);
t5=C_i_cdr(t2);
if(C_truep(C_sigismember(t4))){
t6=C_a_i_cons(&a,2,t4,t3);
/* posixunix.scm: 1218 loop */
t10=t1;
t11=t5;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t6=t3;
/* posixunix.scm: 1218 loop */
t10=t1;
t11=t5;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* set-signal-mask! in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4466(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4466,3,t0,t1,t2);}
t3=C_i_check_list_2(t2,lf[194]);
t4=C_sigemptyset(C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4484,a[2]=((C_word)li73),tmp=(C_word)a,a+=3,tmp);
t6=f_4484(t2);
if(C_truep(C_fixnum_lessp(C_sigprocmask_set(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1211 posix-error */
t7=lf[3];
f_2528(5,t7,t1,lf[195],lf[194],lf[196]);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* loop744 in set-signal-mask! in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_4484(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
C_stack_check;
if(C_truep(C_i_pairp(t1))){
t2=C_slot(t1,C_fix(0));
t3=C_i_check_exact_2(t2,lf[194]);
t4=C_sigaddset(t2);
t5=C_slot(t1,C_fix(1));
t8=t5;
t1=t8;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* ##sys#interrupt-hook in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4448,4,t0,t1,t2,t3);}
t4=C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4458,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1197 h */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixunix.scm: 1199 oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k4456 in ##sys#interrupt-hook in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1198 ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4435(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4435,4,t0,t1,t2,t3);}
t4=C_i_check_exact_2(t2,lf[193]);
if(C_truep(t3)){
t5=t2;
t6=C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_i_vector_set(((C_word*)t0)[2],t2,t3));}
else{
t5=C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_i_vector_set(((C_word*)t0)[2],t2,t3));}}

/* signal-handler in k4422 in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4426,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[192]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4383,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_lessp(C_pipe(C_SCHEME_FALSE),C_fix(0)))){
/* posixunix.scm: 1114 posix-error */
t3=lf[3];
f_2528(5,t3,t2,lf[48],lf[163],lf[164]);}
else{
/* posixunix.scm: 1115 values */
C_values(4,0,t1,C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k4381 in create-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1115 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4359r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4359r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4359r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[162]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4363,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k4361 in with-output-to-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4363,2,t0,t1);}
t2=C_mutate((C_word*)lf[162]+1 /* (set! standard-output ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4369,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li67),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1102 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a4368 in k4361 in with-output-to-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4369r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4369r(t0,t1,t2);}}

static void C_ccall f_4369r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4373,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1104 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4371 in a4368 in k4361 in with-output-to-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[162]+1 /* (set! standard-output ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4339r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4339r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4339r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[160]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4343,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k4341 in with-input-from-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4343,2,t0,t1);}
t2=C_mutate((C_word*)lf[160]+1 /* (set! standard-input ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4349,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1092 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a4348 in k4341 in with-input-from-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4349(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4349r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4349r(t0,t1,t2);}}

static void C_ccall f_4349r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4353,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1094 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4351 in a4348 in k4341 in with-input-from-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[160]+1 /* (set! standard-input ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4315r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4315r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4315r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4319,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k4317 in call-with-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4324,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4330,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1082 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4329 in k4317 in call-with-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4330(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4330r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4330r(t0,t1,t2);}}

static void C_ccall f_4330r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4334,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1085 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4332 in a4329 in k4317 in call-with-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4323 in k4317 in call-with-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4324,2,t0,t1);}
/* posixunix.scm: 1083 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4291r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4291r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4291r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4295,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k4293 in call-with-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4300,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4306,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1074 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4305 in k4293 in call-with-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4306(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4306r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4306r(t0,t1,t2);}}

static void C_ccall f_4306r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4310,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1077 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4308 in a4305 in k4293 in call-with-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4299 in k4293 in call-with-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4300,2,t0,t1);}
/* posixunix.scm: 1075 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4275(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4275,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4279,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1061 ##sys#check-port */
t4=*((C_word*)lf[155]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[152]);}

/* k4277 in close-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4279,2,t0,t1);}
t2=close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4282,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 1063 posix-error */
t5=lf[3];
f_2528(6,t5,t3,lf[48],lf[153],lf[154],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k4280 in k4277 in close-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4239r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4239r(t0,t1,t2,t3);}}

static void C_ccall f_4239r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[151]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[148]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4253,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[148]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4260,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1056 ##sys#make-c-string */
t10=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=C_eqp(t6,lf[149]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4270,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1057 ##sys#make-c-string */
t11=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixunix.scm: 1030 ##sys#error */
t10=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[150],t6);}}}

/* k4268 in open-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4270,2,t0,t1);}
t2=open_binary_output_pipe(&a,1,t1);
/* posixunix.scm: 1052 check */
f_4188(((C_word*)t0)[3],lf[151],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k4258 in open-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4260,2,t0,t1);}
t2=open_text_output_pipe(&a,1,t1);
/* posixunix.scm: 1052 check */
f_4188(((C_word*)t0)[3],lf[151],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k4251 in open-output-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1052 check */
f_4188(((C_word*)t0)[3],lf[151],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4203(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4203r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4203r(t0,t1,t2,t3);}}

static void C_ccall f_4203r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=C_i_check_string_2(t2,lf[147]);
t5=C_i_pairp(t3);
t6=(C_truep(t5)?C_slot(t3,C_fix(0)):lf[148]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4217,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=C_eqp(t6,lf[148]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4224,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1045 ##sys#make-c-string */
t10=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=C_eqp(t6,lf[149]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4234,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1046 ##sys#make-c-string */
t11=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixunix.scm: 1030 ##sys#error */
t10=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[150],t6);}}}

/* k4232 in open-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4234,2,t0,t1);}
t2=open_binary_input_pipe(&a,1,t1);
/* posixunix.scm: 1041 check */
f_4188(((C_word*)t0)[3],lf[147],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k4222 in open-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4224,2,t0,t1);}
t2=open_text_input_pipe(&a,1,t1);
/* posixunix.scm: 1041 check */
f_4188(((C_word*)t0)[3],lf[147],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k4215 in open-input-pipe in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1041 check */
f_4188(((C_word*)t0)[3],lf[147],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_4188(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4188,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep(C_null_pointerp(t5))){
/* posixunix.scm: 1033 posix-error */
t6=lf[3];
f_2528(6,t6,t1,lf[48],t2,lf[143],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4201,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1034 ##sys#make-port */
t7=*((C_word*)lf[144]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t4,*((C_word*)lf[145]+1),lf[146],lf[92]);}}

/* k4199 in check in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3853(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3853,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[125]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3860,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t5=C_block_size(t2);
t6=C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3974,a[2]=t4,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 978  cwd */
t8=((C_word*)t0)[6];
f_3797(t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[10],a[9]=t4,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t8=C_block_size(t2);
if(C_truep(C_fixnum_lessp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4160,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 980  sref */
t10=((C_word*)t0)[9];
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,t2,C_fix(0));}
else{
t9=t7;
f_3980(t9,C_SCHEME_FALSE);}}}

/* k4158 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3980(t3,(C_truep(t2)?t2:C_eqp(C_make_character(92),t1)));}

/* k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3980(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3980,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[10];
t3=((C_word*)t0)[9];
f_3860(2,t3,t2);}
else{
t2=C_block_size(((C_word*)t0)[10]);
t3=C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3993,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 983  cwd */
t5=((C_word*)t0)[7];
f_3797(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3999,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4146,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 984  sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[10],C_fix(0));}}}

/* k4144 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 984  char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(126),t1);}

/* k4133 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4135,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4142,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 985  sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(1));}
else{
t2=((C_word*)t0)[4];
f_3999(t2,C_SCHEME_FALSE);}}

/* k4140 in k4133 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_3999(t3,(C_truep(t2)?t2:C_eqp(C_make_character(92),t1)));}

/* k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3999,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4006,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 987  get-environment-variable */
t3=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[140]);}
else{
t2=C_block_size(((C_word*)t0)[8]);
t3=C_eqp(C_fix(2),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4037,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 992  cwd */
t5=((C_word*)t0)[5];
f_3797(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4107,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4128,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 993  sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[8],C_fix(0));}}}

/* k4126 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 993  alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4105 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4107,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4113,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4124,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 994  sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_4043(t2,C_SCHEME_FALSE);}}

/* k4122 in k4105 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 994  char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k4111 in k4105 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4113,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 995  sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_4043(t2,C_SCHEME_FALSE);}}

/* k4118 in k4111 in k4105 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_4043(t3,(C_truep(t2)?t2:C_eqp(C_make_character(92),t1)));}

/* k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_4043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4043,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[8]);
/* posixunix.scm: 996  ##sys#substring */
t3=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[7],((C_word*)t0)[8],C_fix(3),t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4056,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4104,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 997  sref */
t5=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[8],C_fix(0));}}

/* k4102 in k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 997  char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(47),t1);}

/* k4081 in k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4083,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4089,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4100,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 998  sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_4056(2,t2,C_SCHEME_FALSE);}}

/* k4098 in k4081 in k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 998  alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4087 in k4081 in k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4089,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 999  sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_4056(2,t2,C_SCHEME_FALSE);}}

/* k4094 in k4087 in k4081 in k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 999  char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k4054 in k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4056,2,t0,t1);}
if(C_truep(t1)){
t2=C_block_size(((C_word*)t0)[6]);
/* posixunix.scm: 1000 ##sys#substring */
t3=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(3),t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4080,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1001 sref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[6],C_fix(0));}}

/* k4078 in k4054 in k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4080,2,t0,t1);}
t2=C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
f_3860(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4076,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1004 cwd */
t5=((C_word*)t0)[2];
f_3797(t5,t4);}}

/* k4074 in k4078 in k4054 in k4041 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1004 sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[142],((C_word*)t0)[2]);}

/* k4035 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 992  sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[141],((C_word*)t0)[2]);}

/* k4004 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4009,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_4009(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4024,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 988  user */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}

/* k4022 in k4004 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 988  sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[139],t1);}

/* k4007 in k4004 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4013,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[2]);
/* posixunix.scm: 989  ##sys#substring */
t4=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],C_fix(1),t3);}

/* k4011 in k4007 in k4004 in k3997 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_4013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 986  sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3991 in k3978 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 983  sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[138],((C_word*)t0)[2]);}

/* k3972 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 978  sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[137]);}

/* k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=t1;
t4=*((C_word*)lf[135]+1);
/* g571572 */
t5=t4;
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,t3,lf[136]);}

/* k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3867,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li53),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_3869(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3869(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3869,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 1007 null? */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3876,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3882,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1008 null? */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}
else{
t2=C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=C_i_car(((C_word*)t0)[4]);
/* posixunix.scm: 1019 string=? */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,lf[134],t4);}}

/* k3938 in k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3940,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cdr(((C_word*)t0)[7]);
/* posixunix.scm: 1017 loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3869(t3,((C_word*)t0)[5],((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3949,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[3]);
/* posixunix.scm: 1021 string=? */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[133],t3);}}

/* k3947 in k3938 in k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3949,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
/* posixunix.scm: 1017 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3869(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}
else{
t2=C_i_car(((C_word*)t0)[2]);
t3=C_a_i_cons(&a,2,t2,((C_word*)t0)[6]);
/* posixunix.scm: 1017 loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3869(t4,((C_word*)t0)[4],((C_word*)t0)[3],t3);}}

/* k3880 in k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3882,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[126]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3918,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[3]);
t4=C_a_i_minus(&a,2,t3,C_fix(1));
/* posixunix.scm: 1010 sref */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[3],t4);}}

/* k3916 in k3880 in k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3918,2,t0,t1);}
t2=C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3895,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3899,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_a_i_cons(&a,2,lf[130],((C_word*)t0)[2]);
/* posixunix.scm: 1013 reverse */
t7=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3914,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1016 reverse */
t6=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}

/* k3912 in k3916 in k3880 in k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[128]+1);
/* g580581 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[129]);}

/* k3908 in k3916 in k3880 in k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1014 sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[132],t1);}

/* k3897 in k3916 in k3880 in k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[128]+1);
/* g580581 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[129]);}

/* k3893 in k3916 in k3880 in k3874 in loop in k3865 in k3858 in canonical-path in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1011 sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[127],t1);}

/* cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3797(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3797,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3801,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[2],a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[124]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a3805 in cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3806,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3812,a[2]=t2,a[3]=((C_word)li46),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3830,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t1,t3,t4);}

/* a3829 in a3805 in cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3836,a[2]=((C_word*)t0)[3],a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3842,a[2]=((C_word*)t0)[2],a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a3841 in a3829 in a3805 in cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3842(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3842r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3842r(t0,t1,t2);}}

static void C_ccall f_3842r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3848,a[2]=t2,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
/* k596601 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3847 in a3841 in a3829 in a3805 in cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3848,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a3835 in a3829 in a3805 in cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3836,2,t0,t1);}
/* posixunix.scm: 973  cw */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a3811 in a3805 in cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3812(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3812,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3818,a[2]=t2,a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
/* k596601 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3817 in a3811 in a3805 in cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3818,2,t0,t1);}
if(C_truep(C_i_structurep(((C_word*)t0)[2],lf[121]))){
t2=C_slot(((C_word*)t0)[2],C_fix(1));
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[122]);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[122]);}}

/* k3799 in cwd in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g599600 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* current-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3733(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3733r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3733r(t0,t1,t2);}}

static void C_ccall f_3733r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3737,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
t4=t3;
f_3737(2,t4,C_SCHEME_FALSE);}
else{
t4=C_i_cdr(t2);
if(C_truep(C_i_nullp(t4))){
t5=t3;
f_3737(2,t5,C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k3735 in current-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3737,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm: 952  change-directory */
t2=*((C_word*)lf[103]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3746,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 953  make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(256));}}

/* k3744 in k3735 in current-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_curdir(t1);
if(C_truep(t2)){
/* posixunix.scm: 956  ##sys#substring */
t3=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}
else{
/* posixunix.scm: 957  posix-error */
t3=lf[3];
f_2528(5,t3,((C_word*)t0)[2],lf[48],lf[112],lf[114]);}}

/* directory? in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3707,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[113]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3731,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 946  ##sys#expand-home-path */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3729 in directory? in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3731,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 876  ##sys#make-c-string */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k3722 in k3729 in directory? in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_stat(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_mk_bool(C_isdir);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3550(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr2r,(void*)f_3550r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3550r(t0,t1,t2);}}

static void C_ccall f_3550r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(13);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li39),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3650,a[2]=t3,a[3]=((C_word)li40),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3655,a[2]=t4,a[3]=((C_word)li41),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t2))){
/* def-spec479520 */
t6=t5;
f_3655(t6,t1);}
else{
t6=C_i_car(t2);
t7=C_i_cdr(t2);
if(C_truep(C_i_nullp(t7))){
/* def-show-dotfiles?480518 */
t8=t4;
f_3650(t8,t1,t6);}
else{
t8=C_i_car(t7);
t9=C_i_cdr(t7);
if(C_truep(C_i_nullp(t9))){
/* body477485 */
t10=t3;
f_3552(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[0],t9);}}}}

/* def-spec479 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3655,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3663,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 919  current-directory */
t3=*((C_word*)lf[112]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3661 in def-spec479 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?480518 */
t2=((C_word*)t0)[3];
f_3650(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?480 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3650(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3650,NULL,3,t0,t1,t2);}
/* body477485 */
t3=((C_word*)t0)[2];
f_3552(t3,t1,t2,C_SCHEME_FALSE);}

/* body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3552(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3552,NULL,4,t0,t1,t2,t3);}
t4=C_i_check_string_2(t2,lf[109]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3559,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 921  make-string */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_fix(256));}

/* k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 922  ##sys#make-pointer */
t3=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3562,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 923  ##sys#make-pointer */
t3=*((C_word*)lf[111]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3649,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 924  ##sys#expand-home-path */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k3647 in k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 924  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3567 in k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3569,2,t0,t1);}
t2=C_opendir(t1,((C_word*)t0)[8]);
if(C_truep(C_null_pointerp(((C_word*)t0)[8]))){
/* posixunix.scm: 926  posix-error */
t3=lf[3];
f_2528(6,t3,((C_word*)t0)[7],lf[48],lf[109],lf[110],((C_word*)t0)[6]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word)li38),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_3583(t6,((C_word*)t0)[7]);}}

/* loop in k3567 in k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3583(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3583,NULL,2,t0,t1);}
t2=C_readdir(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(C_null_pointerp(((C_word*)t0)[6]))){
t3=C_closedir(((C_word*)t0)[7]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=C_foundfile(((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 934  ##sys#substring */
t5=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[5],C_fix(0),t3);}}

/* k3591 in loop in k3567 in k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 935  string-ref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,C_fix(0));}

/* k3594 in k3591 in loop in k3567 in k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3596,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[4],C_fix(1)))){
/* posixunix.scm: 936  string-ref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[5],C_fix(1));}
else{
t3=t2;
f_3599(2,t3,C_SCHEME_FALSE);}}

/* k3597 in k3594 in k3591 in loop in k3567 in k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(C_make_character(46),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=C_i_not(t1);
if(C_truep(t4)){
t5=t2;
f_3605(t5,t4);}
else{
t5=C_eqp(C_make_character(46),t1);
if(C_truep(t5)){
t6=C_eqp(C_fix(2),((C_word*)t0)[3]);
t7=t2;
f_3605(t7,(C_truep(t6)?t6:C_i_not(((C_word*)t0)[2])));}
else{
t6=t2;
f_3605(t6,C_i_not(((C_word*)t0)[2]));}}}
else{
t4=t2;
f_3605(t4,C_SCHEME_FALSE);}}

/* k3603 in k3597 in k3594 in k3591 in loop in k3567 in k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3605(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3605,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm: 941  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3583(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 942  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3583(t3,t2);}}

/* k3613 in k3603 in k3597 in k3594 in k3591 in loop in k3567 in k3563 in k3560 in k3557 in body477 in directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3615,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* delete-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3528,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[105]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3535,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3548,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 910  ##sys#expand-home-path */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k3546 in delete-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 910  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3533 in delete-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3535,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3538,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(0),C_rmdir(t1));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
/* posixunix.scm: 912  posix-error */
t4=lf[3];
f_2528(6,t4,t2,lf[48],lf[105],lf[106],t1);}}

/* k3536 in k3533 in delete-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3506,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[103]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3513,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3526,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 902  ##sys#expand-home-path */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k3524 in change-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 902  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3511 in change-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3516,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(C_fix(0),C_chdir(t1));
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}
else{
/* posixunix.scm: 904  posix-error */
t4=lf[3];
f_2528(6,t4,t2,lf[48],lf[103],lf[104],t1);}}

/* k3514 in k3511 in change-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_3347r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3347r(t0,t1,t2,t3);}}

static void C_ccall f_3347r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_3351(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_3351(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3351,2,t0,t1);}
t2=C_i_check_string_2(((C_word*)t0)[5],lf[100]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 888  ##sys#expand-home-path */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3360,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_block_size(t1);
t4=C_eqp(C_fix(0),t3);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3366,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_3366(t6,t4);}
else{
t6=t1;
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3478,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 876  ##sys#make-c-string */
t8=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}}

/* k3476 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_stat(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_mk_bool(C_isdir);
t5=((C_word*)t0)[2];
f_3366(t5,t4);}
else{
t4=((C_word*)t0)[2];
f_3366(t4,C_SCHEME_FALSE);}}

/* k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3366(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3366,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word)li33),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3439,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=((C_word*)t0)[6];
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3462,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 880  ##sys#make-c-string */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}}}

/* k3460 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[4]);}
else{
/* posixunix.scm: 881  posix-error */
t4=lf[3];
f_2528(6,t4,((C_word*)t0)[3],lf[48],lf[100],lf[101],((C_word*)t0)[2]);}}

/* a3438 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3439(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3439,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
/* posixunix.scm: 892  make-pathname */
t5=*((C_word*)lf[102]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,t4);}
else{
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a3432 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3433,2,t0,t1);}
/* posixunix.scm: 891  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k3374 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3376,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3378,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3378(t5,((C_word*)t0)[2],t1);}

/* loop in k3374 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3378(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3378,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3428,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 876  ##sys#make-c-string */
t6=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=t3;
f_3385(t4,C_SCHEME_FALSE);}}

/* k3426 in loop in k3374 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_stat(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_mk_bool(C_isdir);
t5=((C_word*)t0)[2];
f_3385(t5,C_i_not(t4));}
else{
t4=((C_word*)t0)[2];
f_3385(t4,C_SCHEME_TRUE);}}

/* k3383 in loop in k3374 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3385(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3385,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3388,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3411,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 894  pathname-directory */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3409 in k3383 in loop in k3374 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 894  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3378(t2,((C_word*)t0)[2],t1);}

/* k3386 in k3383 in loop in k3374 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3388,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3404,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 880  ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k3402 in k3386 in k3383 in loop in k3374 in k3364 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mkdir(t1);
t3=C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posixunix.scm: 881  posix-error */
t4=lf[3];
f_2528(6,t4,((C_word*)t0)[3],lf[48],lf[100],lf[101],((C_word*)t0)[2]);}}

/* k3358 in k3355 in k3349 in create-directory in k3343 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* set-file-position! in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_3285r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3285r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3285r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=C_i_check_exact_2(t3,lf[90]);
t8=C_i_check_exact_2(t6,lf[90]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3298,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_negativep(t3))){
/* posixunix.scm: 846  ##sys#signal-hook */
t10=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t9,lf[95],lf[90],lf[96],t3,t2);}
else{
t10=t9;
f_3298(2,t10,C_SCHEME_UNDEFINED);}}

/* k3296 in set-file-position! in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3304,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3310,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 847  port? */
t4=*((C_word*)lf[94]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k3308 in k3296 in set-file-position! in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[5],C_fix(7));
t3=C_eqp(t2,lf[92]);
if(C_truep(t3)){
t4=C_fseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_3304(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_3304(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep(C_fixnump(((C_word*)t0)[5]))){
t2=C_lseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_3304(2,t3,t2);}
else{
/* posixunix.scm: 853  ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[60],lf[90],lf[93],((C_word*)t0)[5]);}}}

/* k3302 in k3296 in set-file-position! in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3304(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm: 854  posix-error */
t2=lf[3];
f_2528(7,t2,((C_word*)t0)[4],lf[48],lf[90],lf[91],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* socket? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3276,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[89]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3283,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 837  ##sys#stat */
f_3128(t4,t2,C_SCHEME_FALSE,lf[89]);}

/* k3281 in socket? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_issock));}

/* f_3267 in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3267(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3267,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[88]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3274,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 832  ##sys#stat */
f_3128(t4,t2,C_SCHEME_FALSE,lf[88]);}

/* k3272 */
static void C_ccall f_3274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isfifo));}

/* block-device? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3258(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3258,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[86]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3265,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 827  ##sys#stat */
f_3128(t4,t2,C_SCHEME_FALSE,lf[86]);}

/* k3263 in block-device? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isblk));}

/* character-device? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3249(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3249,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[85]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3256,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 822  ##sys#stat */
f_3128(t4,t2,C_SCHEME_FALSE,lf[85]);}

/* k3254 in character-device? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_ischr));}

/* symbolic-link? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3240(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3240,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[84]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3247,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 817  ##sys#stat */
f_3128(t4,t2,C_SCHEME_TRUE,lf[84]);}

/* k3245 in symbolic-link? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_islink));}

/* regular-file? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3231(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3231,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[83]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3238,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 812  ##sys#stat */
f_3128(t4,t2,C_SCHEME_TRUE,lf[83]);}

/* k3236 in regular-file? in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isreg));}

/* file-permissions in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3225(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3225,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3229,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 808  ##sys#stat */
f_3128(t3,t2,C_SCHEME_FALSE,lf[82]);}

/* k3227 in file-permissions in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3219,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3223,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 807  ##sys#stat */
f_3128(t3,t2,C_SCHEME_FALSE,lf[81]);}

/* k3221 in file-owner in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3213,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3217,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 806  ##sys#stat */
f_3128(t3,t2,C_SCHEME_FALSE,lf[80]);}

/* k3215 in file-change-time in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3217,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3207,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3211,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 805  ##sys#stat */
f_3128(t3,t2,C_SCHEME_FALSE,lf[79]);}

/* k3209 in file-access-time in k3203 in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3211,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-size in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3197,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3201,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 790  ##sys#stat */
f_3128(t3,t2,C_SCHEME_FALSE,lf[77]);}

/* k3199 in file-size in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3201,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_double_to_num(&a,C_statbuf.st_size));}

/* file-stat in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3165r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3165r(t0,t1,t2,t3);}}

static void C_ccall f_3165r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3169,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3176,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* posixunix.scm: 783  ##sys#stat */
f_3128(t4,t2,C_SCHEME_FALSE,lf[76]);}
else{
t6=C_i_cdr(t3);
if(C_truep(C_i_nullp(t6))){
t7=C_i_car(t3);
/* posixunix.scm: 783  ##sys#stat */
f_3128(t4,t2,t7,lf[76]);}
else{
/* ##sys#error */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t3);}}}

/* k3174 in file-stat in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 783  ##sys#stat */
f_3128(((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[76]);}

/* k3167 in file-stat in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3169,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks)));}

/* ##sys#stat in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3128(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3128,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3132,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_fixnump(t2))){
t6=t5;
f_3132(2,t6,C_fstat(t2));}
else{
if(C_truep(C_i_stringp(t2))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3153,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3160,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 774  ##sys#expand-home-path */
t8=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
/* posixunix.scm: 778  ##sys#signal-hook */
t6=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[60],lf[75],t2);}}}

/* k3158 in ##sys#stat in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 774  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3151 in ##sys#stat in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_3132(2,t2,(C_truep(((C_word*)t0)[2])?C_lstat(t1):C_stat(t1)));}

/* k3130 in ##sys#stat in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 780  posix-error */
t2=lf[3];
f_2528(6,t2,((C_word*)t0)[4],lf[48],((C_word*)t0)[3],lf[74],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4r,(void*)f_2848r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2848r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2848r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word *a=C_alloc(16);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_i_pairp(t4);
t8=(C_truep(t7)?C_i_car(t4):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(C_fix(0));
t10=stub116(C_SCHEME_UNDEFINED,t9);
t11=C_i_foreign_fixnum_argumentp(C_fix(1));
t12=stub116(C_SCHEME_UNDEFINED,t11);
t13=C_i_not(t2);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2864,a[2]=t6,a[3]=t8,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t13)){
t15=t14;
f_2864(2,t15,t13);}
else{
if(C_truep(C_fixnump(t2))){
t15=C_set_block_item(t6,0,t2);
t16=t2;
t17=C_i_foreign_fixnum_argumentp(C_fix(0));
t18=C_i_foreign_fixnum_argumentp(t16);
t19=t14;
f_2864(2,t19,stub121(C_SCHEME_UNDEFINED,t17,t18));}
else{
t15=C_i_check_list_2(t2,lf[68]);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3087,a[2]=t17,a[3]=t6,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_3087(t19,t14,t2);}}}

/* loop150 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3087(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3087,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[3],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=f_3095(t3,t4);
t6=C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g157 in loop150 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_3095(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t2=C_i_check_exact_2(t1,lf[68]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_i_fixnum_max(((C_word*)((C_word*)t0)[2])[1],t1));
t4=t1;
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=C_i_foreign_fixnum_argumentp(t4);
return(stub121(C_SCHEME_UNDEFINED,t5,t6));}

/* k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2864,2,t0,t1);}
t2=C_i_not(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_2870(2,t4,t2);}
else{
if(C_truep(C_fixnump(((C_word*)t0)[6]))){
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[6]);
t5=((C_word*)t0)[6];
t6=C_i_foreign_fixnum_argumentp(C_fix(1));
t7=C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_2870(2,t8,stub121(C_SCHEME_UNDEFINED,t6,t7));}
else{
t4=C_i_check_list_2(((C_word*)t0)[6],lf[68]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3039,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3039(t8,t3,((C_word*)t0)[6]);}}}

/* loop179 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_3039(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3039,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[3],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=f_3047(t3,t4);
t6=C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g186 in loop179 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_3047(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t2=C_i_check_exact_2(t1,lf[68]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,C_i_fixnum_max(((C_word*)((C_word*)t0)[2])[1],t1));
t4=t1;
t5=C_i_foreign_fixnum_argumentp(C_fix(1));
t6=C_i_foreign_fixnum_argumentp(t4);
return(stub121(C_SCHEME_UNDEFINED,t5,t6));}

/* k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_i_check_number_2(((C_word*)t0)[3],lf[68]);
t4=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t5=t2;
f_2873(t5,C_C_select_t(t4,((C_word*)t0)[3]));}
else{
t3=C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=t2;
f_2873(t4,C_C_select(t3));}}

/* k2871 in k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_2873(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2873,NULL,2,t0,t1);}
if(C_truep(C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 729  posix-error */
t2=lf[3];
f_2528(7,t2,((C_word*)t0)[4],lf[48],lf[68],lf[69],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=C_i_pairp(((C_word*)t0)[3]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
/* posixunix.scm: 730  values */
C_values(4,0,((C_word*)t0)[4],t4,C_SCHEME_END_OF_LIST);}
else{
/* posixunix.scm: 730  values */
C_values(4,0,((C_word*)t0)[4],t4,C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2912,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t4=((C_word*)t0)[3];
t5=C_i_foreign_fixnum_argumentp(C_fix(0));
t6=C_i_foreign_fixnum_argumentp(t4);
t7=t3;
f_2912(t7,stub127(C_SCHEME_UNDEFINED,t5,t6));}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2975,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2977,a[2]=t8,a[3]=t5,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2977(t10,t6,((C_word*)t0)[3]);}}
else{
t4=t3;
f_2912(t4,C_SCHEME_FALSE);}}}}

/* loop213 in k2871 in k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_2977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2977,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2985,a[2]=((C_word*)t0)[3],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=f_2985(C_a_i(&a,3),t3,t4);
t6=C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g220 in loop213 in k2871 in k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_2985(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
t2=t1;
t3=C_i_foreign_fixnum_argumentp(C_fix(0));
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(stub127(C_SCHEME_UNDEFINED,t3,t4))){
t5=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}
else{
t5=C_SCHEME_UNDEFINED;
return(t5);}}

/* k2973 in k2871 in k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
f_2912(t3,t2);}

/* k2910 in k2871 in k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_2912(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2912,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=C_i_foreign_fixnum_argumentp(C_fix(1));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=stub127(C_SCHEME_UNDEFINED,t3,t4);
/* posixunix.scm: 732  values */
C_values(4,0,((C_word*)t0)[2],t1,t5);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2928,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2930,a[2]=t6,a[3]=t3,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2930(t8,t4,((C_word*)t0)[3]);}}
else{
/* posixunix.scm: 732  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}}

/* loop233 in k2910 in k2871 in k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_fcall f_2930(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2930,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2938,a[2]=((C_word*)t0)[3],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t4=C_slot(t2,C_fix(0));
t5=f_2938(C_a_i(&a,3),t3,t4);
t6=C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g240 in loop233 in k2910 in k2871 in k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static C_word C_fcall f_2938(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
t2=t1;
t3=C_i_foreign_fixnum_argumentp(C_fix(1));
t4=C_i_foreign_fixnum_argumentp(t2);
if(C_truep(stub127(C_SCHEME_UNDEFINED,t3,t4))){
t5=C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}
else{
t5=C_SCHEME_UNDEFINED;
return(t5);}}

/* k2926 in k2910 in k2871 in k2868 in k2862 in file-select in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
/* posixunix.scm: 732  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* file-mkstemp in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2790,3,t0,t1,t2);}
t3=C_i_check_string_2(t2,lf[65]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2797,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 681  ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2795 in file-mkstemp in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2797,2,t0,t1);}
t2=C_mkstemp(t1);
t3=C_block_size(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2803,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
/* posixunix.scm: 685  posix-error */
t6=lf[3];
f_2528(6,t6,t4,lf[48],lf[65],lf[67],((C_word*)t0)[2]);}
else{
t6=t4;
f_2803(2,t6,C_SCHEME_UNDEFINED);}}

/* k2801 in k2795 in file-mkstemp in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2810,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 686  ##sys#substring */
t4=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k2808 in k2801 in k2795 in file-mkstemp in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 686  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2751(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2751r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2751r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2751r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=C_i_check_exact_2(t2,lf[62]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2758,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t3))){
if(C_truep(C_byteblockp(t3))){
t7=t6;
f_2758(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 670  ##sys#signal-hook */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[60],lf[62],lf[64],t3);}}
else{
/* posixunix.scm: 670  ##sys#signal-hook */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[60],lf[62],lf[64],t3);}}

/* k2756 in file-write in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2758,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[5]);
t3=(C_truep(t2)?C_i_car(((C_word*)t0)[5]):C_block_size(((C_word*)t0)[4]));
t4=C_i_check_exact_2(t3,lf[62]);
t5=C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2767,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm: 675  posix-error */
t8=lf[3];
f_2528(7,t8,t6,lf[48],lf[62],lf[63],((C_word*)t0)[3],t3);}
else{
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* k2765 in k2756 in file-write in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2709r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2709r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2709r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=C_i_check_exact_2(t2,lf[58]);
t6=C_i_check_exact_2(t3,lf[58]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2719,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t4))){
t8=t7;
f_2719(2,t8,C_i_car(t4));}
else{
/* posixunix.scm: 658  make-string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k2717 in file-read in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_blockp(t1))){
if(C_truep(C_byteblockp(t1))){
t3=t2;
f_2722(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 660  ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[60],lf[58],lf[61],t1);}}
else{
/* posixunix.scm: 660  ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[60],lf[58],lf[61],t1);}}

/* k2720 in k2717 in file-read in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2722,2,t0,t1);}
t2=C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2725,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 663  posix-error */
t5=lf[3];
f_2528(7,t5,t3,lf[48],lf[58],lf[59],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_list(&a,2,((C_word*)t0)[4],t2));}}

/* k2723 in k2720 in k2717 in file-read in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2725,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2694(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2694,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[55]);
if(C_truep(C_fixnum_lessp(C_close(t2),C_fix(0)))){
/* posixunix.scm: 651  posix-error */
t4=lf[3];
f_2528(6,t4,t1,lf[48],lf[55],lf[56],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* file-open in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_2656r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2656r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2656r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=C_i_check_string_2(t2,lf[51]);
t8=C_i_check_exact_2(t3,lf[51]);
t9=C_i_check_exact_2(t6,lf[51]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2673,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 642  ##sys#expand-home-path */
t12=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t2);}

/* k2684 in file-open in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 642  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2671 in file-open in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2673,2,t0,t1);}
t2=C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2676,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 644  posix-error */
t5=lf[3];
f_2528(8,t5,t3,lf[48],lf[51],lf[52],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k2674 in k2671 in file-open in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-control in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2610r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2610r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2610r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2614,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_2614(2,t6,C_fix(0));}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_2614(2,t7,C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k2612 in file-control in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
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
C_word t11;
C_word *a;
t2=C_i_check_exact_2(((C_word*)t0)[4],lf[47]);
t3=C_i_check_exact_2(((C_word*)t0)[3],lf[47]);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=C_i_foreign_fixnum_argumentp(t4);
t7=C_i_foreign_fixnum_argumentp(t5);
t8=C_i_foreign_integer_argumentp(t1);
t9=stub33(C_SCHEME_UNDEFINED,t6,t7,t8);
t10=C_eqp(t9,C_fix(-1));
if(C_truep(t10)){
/* posixunix.scm: 632  posix-error */
t11=lf[3];
f_2528(7,t11,((C_word*)t0)[2],lf[48],lf[47],lf[49],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t9);}}

/* ##sys#file-select-one in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2553,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub26(C_SCHEME_UNDEFINED,t3));}

/* ##sys#file-nonblocking! in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2546(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2546,3,t0,t1,t2);}
t3=C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub22(C_SCHEME_UNDEFINED,t3));}

/* posix-error in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_2528r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2528r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2528r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2532,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 522  ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k2530 in posix-error in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2539,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=C_i_foreign_fixnum_argumentp(t1);
t6=stub12(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2541 in k2530 in posix-error in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 523  string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[5],t1);}

/* k2537 in k2530 in posix-error in k2514 in k2511 in k2508 in k2505 in k2502 in k2499 in k2496 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[4]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[628] = {
{"toplevel:posixunix_scm",(void*)C_posix_toplevel},
{"f_2498:posixunix_scm",(void*)f_2498},
{"f_2501:posixunix_scm",(void*)f_2501},
{"f_2504:posixunix_scm",(void*)f_2504},
{"f_2507:posixunix_scm",(void*)f_2507},
{"f_2510:posixunix_scm",(void*)f_2510},
{"f_2513:posixunix_scm",(void*)f_2513},
{"f_2516:posixunix_scm",(void*)f_2516},
{"f_8683:posixunix_scm",(void*)f_8683},
{"f_8716:posixunix_scm",(void*)f_8716},
{"f_8693:posixunix_scm",(void*)f_8693},
{"f_8703:posixunix_scm",(void*)f_8703},
{"f_8677:posixunix_scm",(void*)f_8677},
{"f_8681:posixunix_scm",(void*)f_8681},
{"f_3205:posixunix_scm",(void*)f_3205},
{"f_8640:posixunix_scm",(void*)f_8640},
{"f_8656:posixunix_scm",(void*)f_8656},
{"f_8644:posixunix_scm",(void*)f_8644},
{"f_8647:posixunix_scm",(void*)f_8647},
{"f_3345:posixunix_scm",(void*)f_3345},
{"f_4424:posixunix_scm",(void*)f_4424},
{"f_8634:posixunix_scm",(void*)f_8634},
{"f_4581:posixunix_scm",(void*)f_4581},
{"f_8619:posixunix_scm",(void*)f_8619},
{"f_8629:posixunix_scm",(void*)f_8629},
{"f_8616:posixunix_scm",(void*)f_8616},
{"f_4623:posixunix_scm",(void*)f_4623},
{"f_8601:posixunix_scm",(void*)f_8601},
{"f_8611:posixunix_scm",(void*)f_8611},
{"f_8598:posixunix_scm",(void*)f_8598},
{"f_4627:posixunix_scm",(void*)f_4627},
{"f_8583:posixunix_scm",(void*)f_8583},
{"f_8593:posixunix_scm",(void*)f_8593},
{"f_8580:posixunix_scm",(void*)f_8580},
{"f_4631:posixunix_scm",(void*)f_4631},
{"f_8565:posixunix_scm",(void*)f_8565},
{"f_8575:posixunix_scm",(void*)f_8575},
{"f_8562:posixunix_scm",(void*)f_8562},
{"f_4635:posixunix_scm",(void*)f_4635},
{"f_8541:posixunix_scm",(void*)f_8541},
{"f_8557:posixunix_scm",(void*)f_8557},
{"f_8523:posixunix_scm",(void*)f_8523},
{"f_8536:posixunix_scm",(void*)f_8536},
{"f_8530:posixunix_scm",(void*)f_8530},
{"f_5153:posixunix_scm",(void*)f_5153},
{"f_5192:posixunix_scm",(void*)f_5192},
{"f_8500:posixunix_scm",(void*)f_8500},
{"f_8492:posixunix_scm",(void*)f_8492},
{"f_8510:posixunix_scm",(void*)f_8510},
{"f_8241:posixunix_scm",(void*)f_8241},
{"f_8418:posixunix_scm",(void*)f_8418},
{"f_8424:posixunix_scm",(void*)f_8424},
{"f_8413:posixunix_scm",(void*)f_8413},
{"f_8408:posixunix_scm",(void*)f_8408},
{"f_8243:posixunix_scm",(void*)f_8243},
{"f_8395:posixunix_scm",(void*)f_8395},
{"f_8403:posixunix_scm",(void*)f_8403},
{"f_8250:posixunix_scm",(void*)f_8250},
{"f_8383:posixunix_scm",(void*)f_8383},
{"f_8377:posixunix_scm",(void*)f_8377},
{"f_8260:posixunix_scm",(void*)f_8260},
{"f_8262:posixunix_scm",(void*)f_8262},
{"f_8281:posixunix_scm",(void*)f_8281},
{"f_8363:posixunix_scm",(void*)f_8363},
{"f_8370:posixunix_scm",(void*)f_8370},
{"f_8357:posixunix_scm",(void*)f_8357},
{"f_8296:posixunix_scm",(void*)f_8296},
{"f_8350:posixunix_scm",(void*)f_8350},
{"f_8347:posixunix_scm",(void*)f_8347},
{"f_8337:posixunix_scm",(void*)f_8337},
{"f_8313:posixunix_scm",(void*)f_8313},
{"f_8335:posixunix_scm",(void*)f_8335},
{"f_8321:posixunix_scm",(void*)f_8321},
{"f_8328:posixunix_scm",(void*)f_8328},
{"f_8325:posixunix_scm",(void*)f_8325},
{"f_8308:posixunix_scm",(void*)f_8308},
{"f_8306:posixunix_scm",(void*)f_8306},
{"f_8384:posixunix_scm",(void*)f_8384},
{"f_8181:posixunix_scm",(void*)f_8181},
{"f_8193:posixunix_scm",(void*)f_8193},
{"f_8188:posixunix_scm",(void*)f_8188},
{"f_8183:posixunix_scm",(void*)f_8183},
{"f_8121:posixunix_scm",(void*)f_8121},
{"f_8133:posixunix_scm",(void*)f_8133},
{"f_8128:posixunix_scm",(void*)f_8128},
{"f_8123:posixunix_scm",(void*)f_8123},
{"f_8060:posixunix_scm",(void*)f_8060},
{"f_8115:posixunix_scm",(void*)f_8115},
{"f_8119:posixunix_scm",(void*)f_8119},
{"f_8081:posixunix_scm",(void*)f_8081},
{"f_8084:posixunix_scm",(void*)f_8084},
{"f_8095:posixunix_scm",(void*)f_8095},
{"f_8089:posixunix_scm",(void*)f_8089},
{"f_8062:posixunix_scm",(void*)f_8062},
{"f_8071:posixunix_scm",(void*)f_8071},
{"f_8004:posixunix_scm",(void*)f_8004},
{"f_8016:posixunix_scm",(void*)f_8016},
{"f_8047:posixunix_scm",(void*)f_8047},
{"f_8027:posixunix_scm",(void*)f_8027},
{"f_8043:posixunix_scm",(void*)f_8043},
{"f_8031:posixunix_scm",(void*)f_8031},
{"f_8039:posixunix_scm",(void*)f_8039},
{"f_8035:posixunix_scm",(void*)f_8035},
{"f_8010:posixunix_scm",(void*)f_8010},
{"f_7993:posixunix_scm",(void*)f_7993},
{"f_7997:posixunix_scm",(void*)f_7997},
{"f_7982:posixunix_scm",(void*)f_7982},
{"f_7986:posixunix_scm",(void*)f_7986},
{"f_7937:posixunix_scm",(void*)f_7937},
{"f_7941:posixunix_scm",(void*)f_7941},
{"f_7944:posixunix_scm",(void*)f_7944},
{"f_7947:posixunix_scm",(void*)f_7947},
{"f_7954:posixunix_scm",(void*)f_7954},
{"f_7960:posixunix_scm",(void*)f_7960},
{"f_7964:posixunix_scm",(void*)f_7964},
{"f_7967:posixunix_scm",(void*)f_7967},
{"f_7970:posixunix_scm",(void*)f_7970},
{"f_7958:posixunix_scm",(void*)f_7958},
{"f_7904:posixunix_scm",(void*)f_7904},
{"f_7917:posixunix_scm",(void*)f_7917},
{"f_7829:posixunix_scm",(void*)f_7829},
{"f_7890:posixunix_scm",(void*)f_7890},
{"f_7903:posixunix_scm",(void*)f_7903},
{"f_7870:posixunix_scm",(void*)f_7870},
{"f_7885:posixunix_scm",(void*)f_7885},
{"f_7879:posixunix_scm",(void*)f_7879},
{"f_7833:posixunix_scm",(void*)f_7833},
{"f_7835:posixunix_scm",(void*)f_7835},
{"f_7856:posixunix_scm",(void*)f_7856},
{"f_7850:posixunix_scm",(void*)f_7850},
{"f_7777:posixunix_scm",(void*)f_7777},
{"f_7784:posixunix_scm",(void*)f_7784},
{"f_7803:posixunix_scm",(void*)f_7803},
{"f_7807:posixunix_scm",(void*)f_7807},
{"f_7771:posixunix_scm",(void*)f_7771},
{"f_7762:posixunix_scm",(void*)f_7762},
{"f_7766:posixunix_scm",(void*)f_7766},
{"f_7735:posixunix_scm",(void*)f_7735},
{"f_7728:posixunix_scm",(void*)f_7728},
{"f_7725:posixunix_scm",(void*)f_7725},
{"f_7722:posixunix_scm",(void*)f_7722},
{"f_7644:posixunix_scm",(void*)f_7644},
{"f_7680:posixunix_scm",(void*)f_7680},
{"f_7674:posixunix_scm",(void*)f_7674},
{"f_7627:posixunix_scm",(void*)f_7627},
{"f_7445:posixunix_scm",(void*)f_7445},
{"f_7579:posixunix_scm",(void*)f_7579},
{"f_7574:posixunix_scm",(void*)f_7574},
{"f_7447:posixunix_scm",(void*)f_7447},
{"f_7457:posixunix_scm",(void*)f_7457},
{"f_7465:posixunix_scm",(void*)f_7465},
{"f_7511:posixunix_scm",(void*)f_7511},
{"f_7478:posixunix_scm",(void*)f_7478},
{"f_7503:posixunix_scm",(void*)f_7503},
{"f_7481:posixunix_scm",(void*)f_7481},
{"f_7426:posixunix_scm",(void*)f_7426},
{"f_7407:posixunix_scm",(void*)f_7407},
{"f_7365:posixunix_scm",(void*)f_7365},
{"f_7390:posixunix_scm",(void*)f_7390},
{"f_7251:posixunix_scm",(void*)f_7251},
{"f_7257:posixunix_scm",(void*)f_7257},
{"f_7278:posixunix_scm",(void*)f_7278},
{"f_7357:posixunix_scm",(void*)f_7357},
{"f_7282:posixunix_scm",(void*)f_7282},
{"f_7285:posixunix_scm",(void*)f_7285},
{"f_7292:posixunix_scm",(void*)f_7292},
{"f_7294:posixunix_scm",(void*)f_7294},
{"f_7311:posixunix_scm",(void*)f_7311},
{"f_7315:posixunix_scm",(void*)f_7315},
{"f_7323:posixunix_scm",(void*)f_7323},
{"f_7327:posixunix_scm",(void*)f_7327},
{"f_7272:posixunix_scm",(void*)f_7272},
{"f_7239:posixunix_scm",(void*)f_7239},
{"f_7243:posixunix_scm",(void*)f_7243},
{"f_7246:posixunix_scm",(void*)f_7246},
{"f_7204:posixunix_scm",(void*)f_7204},
{"f_7208:posixunix_scm",(void*)f_7208},
{"f_7228:posixunix_scm",(void*)f_7228},
{"f_7232:posixunix_scm",(void*)f_7232},
{"f_7181:posixunix_scm",(void*)f_7181},
{"f_7185:posixunix_scm",(void*)f_7185},
{"f_7149:posixunix_scm",(void*)f_7149},
{"f_7153:posixunix_scm",(void*)f_7153},
{"f_7130:posixunix_scm",(void*)f_7130},
{"f_7134:posixunix_scm",(void*)f_7134},
{"f_7137:posixunix_scm",(void*)f_7137},
{"f_7071:posixunix_scm",(void*)f_7071},
{"f_7075:posixunix_scm",(void*)f_7075},
{"f_7081:posixunix_scm",(void*)f_7081},
{"f_7090:posixunix_scm",(void*)f_7090},
{"f_7064:posixunix_scm",(void*)f_7064},
{"f_7048:posixunix_scm",(void*)f_7048},
{"f_7036:posixunix_scm",(void*)f_7036},
{"f_7021:posixunix_scm",(void*)f_7021},
{"f_7025:posixunix_scm",(void*)f_7025},
{"f_7031:posixunix_scm",(void*)f_7031},
{"f_7006:posixunix_scm",(void*)f_7006},
{"f_7010:posixunix_scm",(void*)f_7010},
{"f_7016:posixunix_scm",(void*)f_7016},
{"f_6960:posixunix_scm",(void*)f_6960},
{"f_6964:posixunix_scm",(void*)f_6964},
{"f_6977:posixunix_scm",(void*)f_6977},
{"f_6981:posixunix_scm",(void*)f_6981},
{"f_6891:posixunix_scm",(void*)f_6891},
{"f_6895:posixunix_scm",(void*)f_6895},
{"f_6898:posixunix_scm",(void*)f_6898},
{"f_6920:posixunix_scm",(void*)f_6920},
{"f_6917:posixunix_scm",(void*)f_6917},
{"f_6907:posixunix_scm",(void*)f_6907},
{"f_6830:posixunix_scm",(void*)f_6830},
{"f_6834:posixunix_scm",(void*)f_6834},
{"f_6840:posixunix_scm",(void*)f_6840},
{"f_6786:posixunix_scm",(void*)f_6786},
{"f_6790:posixunix_scm",(void*)f_6790},
{"f_6752:posixunix_scm",(void*)f_6752},
{"f_6756:posixunix_scm",(void*)f_6756},
{"f_6733:posixunix_scm",(void*)f_6733},
{"f_6727:posixunix_scm",(void*)f_6727},
{"f_6718:posixunix_scm",(void*)f_6718},
{"f_6683:posixunix_scm",(void*)f_6683},
{"f_6621:posixunix_scm",(void*)f_6621},
{"f_6625:posixunix_scm",(void*)f_6625},
{"f_6631:posixunix_scm",(void*)f_6631},
{"f_6650:posixunix_scm",(void*)f_6650},
{"f_6637:posixunix_scm",(void*)f_6637},
{"f_6517:posixunix_scm",(void*)f_6517},
{"f_6523:posixunix_scm",(void*)f_6523},
{"f_6527:posixunix_scm",(void*)f_6527},
{"f_6535:posixunix_scm",(void*)f_6535},
{"f_6561:posixunix_scm",(void*)f_6561},
{"f_6565:posixunix_scm",(void*)f_6565},
{"f_6553:posixunix_scm",(void*)f_6553},
{"f_6497:posixunix_scm",(void*)f_6497},
{"f_6505:posixunix_scm",(void*)f_6505},
{"f_6480:posixunix_scm",(void*)f_6480},
{"f_6491:posixunix_scm",(void*)f_6491},
{"f_6495:posixunix_scm",(void*)f_6495},
{"f_6454:posixunix_scm",(void*)f_6454},
{"f_6478:posixunix_scm",(void*)f_6478},
{"f_6461:posixunix_scm",(void*)f_6461},
{"f_6411:posixunix_scm",(void*)f_6411},
{"f_6418:posixunix_scm",(void*)f_6418},
{"f_6439:posixunix_scm",(void*)f_6439},
{"f_6435:posixunix_scm",(void*)f_6435},
{"f_6383:posixunix_scm",(void*)f_6383},
{"f_6356:posixunix_scm",(void*)f_6356},
{"f_6360:posixunix_scm",(void*)f_6360},
{"f_6341:posixunix_scm",(void*)f_6341},
{"f_6345:posixunix_scm",(void*)f_6345},
{"f_6326:posixunix_scm",(void*)f_6326},
{"f_6330:posixunix_scm",(void*)f_6330},
{"f_6308:posixunix_scm",(void*)f_6308},
{"f_6234:posixunix_scm",(void*)f_6234},
{"f_6256:posixunix_scm",(void*)f_6256},
{"f_6262:posixunix_scm",(void*)f_6262},
{"f_6195:posixunix_scm",(void*)f_6195},
{"f_6223:posixunix_scm",(void*)f_6223},
{"f_6219:posixunix_scm",(void*)f_6219},
{"f_6212:posixunix_scm",(void*)f_6212},
{"f_6205:posixunix_scm",(void*)f_6205},
{"f_5936:posixunix_scm",(void*)f_5936},
{"f_6132:posixunix_scm",(void*)f_6132},
{"f_6127:posixunix_scm",(void*)f_6127},
{"f_6122:posixunix_scm",(void*)f_6122},
{"f_5938:posixunix_scm",(void*)f_5938},
{"f_5942:posixunix_scm",(void*)f_5942},
{"f_6048:posixunix_scm",(void*)f_6048},
{"f_6049:posixunix_scm",(void*)f_6049},
{"f_6066:posixunix_scm",(void*)f_6066},
{"f_6076:posixunix_scm",(void*)f_6076},
{"f_6034:posixunix_scm",(void*)f_6034},
{"f_5990:posixunix_scm",(void*)f_5990},
{"f_6026:posixunix_scm",(void*)f_6026},
{"f_6005:posixunix_scm",(void*)f_6005},
{"f_6015:posixunix_scm",(void*)f_6015},
{"f_5999:posixunix_scm",(void*)f_5999},
{"f_5994:posixunix_scm",(void*)f_5994},
{"f_5997:posixunix_scm",(void*)f_5997},
{"f_5944:posixunix_scm",(void*)f_5944},
{"f_5979:posixunix_scm",(void*)f_5979},
{"f_5960:posixunix_scm",(void*)f_5960},
{"f_5454:posixunix_scm",(void*)f_5454},
{"f_5858:posixunix_scm",(void*)f_5858},
{"f_5853:posixunix_scm",(void*)f_5853},
{"f_5848:posixunix_scm",(void*)f_5848},
{"f_5843:posixunix_scm",(void*)f_5843},
{"f_5456:posixunix_scm",(void*)f_5456},
{"f_5460:posixunix_scm",(void*)f_5460},
{"f_5466:posixunix_scm",(void*)f_5466},
{"f_5716:posixunix_scm",(void*)f_5716},
{"f_5722:posixunix_scm",(void*)f_5722},
{"f_5818:posixunix_scm",(void*)f_5818},
{"f_5808:posixunix_scm",(void*)f_5808},
{"f_5802:posixunix_scm",(void*)f_5802},
{"f_5724:posixunix_scm",(void*)f_5724},
{"f_5774:posixunix_scm",(void*)f_5774},
{"f_5731:posixunix_scm",(void*)f_5731},
{"f_5741:posixunix_scm",(void*)f_5741},
{"f_5640:posixunix_scm",(void*)f_5640},
{"f_5648:posixunix_scm",(void*)f_5648},
{"f_5650:posixunix_scm",(void*)f_5650},
{"f_5698:posixunix_scm",(void*)f_5698},
{"f_5631:posixunix_scm",(void*)f_5631},
{"f_5635:posixunix_scm",(void*)f_5635},
{"f_5610:posixunix_scm",(void*)f_5610},
{"f_5620:posixunix_scm",(void*)f_5620},
{"f_5598:posixunix_scm",(void*)f_5598},
{"f_5585:posixunix_scm",(void*)f_5585},
{"f_5589:posixunix_scm",(void*)f_5589},
{"f_5580:posixunix_scm",(void*)f_5580},
{"f_5583:posixunix_scm",(void*)f_5583},
{"f_5498:posixunix_scm",(void*)f_5498},
{"f_5510:posixunix_scm",(void*)f_5510},
{"f_5547:posixunix_scm",(void*)f_5547},
{"f_5556:posixunix_scm",(void*)f_5556},
{"f_5550:posixunix_scm",(void*)f_5550},
{"f_5526:posixunix_scm",(void*)f_5526},
{"f_5529:posixunix_scm",(void*)f_5529},
{"f_5490:posixunix_scm",(void*)f_5490},
{"f_5467:posixunix_scm",(void*)f_5467},
{"f_5471:posixunix_scm",(void*)f_5471},
{"f_5427:posixunix_scm",(void*)f_5427},
{"f_5434:posixunix_scm",(void*)f_5434},
{"f_5437:posixunix_scm",(void*)f_5437},
{"f_5382:posixunix_scm",(void*)f_5382},
{"f_5386:posixunix_scm",(void*)f_5386},
{"f_5421:posixunix_scm",(void*)f_5421},
{"f_5404:posixunix_scm",(void*)f_5404},
{"f_5368:posixunix_scm",(void*)f_5368},
{"f_5380:posixunix_scm",(void*)f_5380},
{"f_5354:posixunix_scm",(void*)f_5354},
{"f_5366:posixunix_scm",(void*)f_5366},
{"f_5339:posixunix_scm",(void*)f_5339},
{"f_5352:posixunix_scm",(void*)f_5352},
{"f_5302:posixunix_scm",(void*)f_5302},
{"f_5310:posixunix_scm",(void*)f_5310},
{"f_5277:posixunix_scm",(void*)f_5277},
{"f_5258:posixunix_scm",(void*)f_5258},
{"f_5262:posixunix_scm",(void*)f_5262},
{"f_5290:posixunix_scm",(void*)f_5290},
{"f_5193:posixunix_scm",(void*)f_5193},
{"f_5197:posixunix_scm",(void*)f_5197},
{"f_5232:posixunix_scm",(void*)f_5232},
{"f_5204:posixunix_scm",(void*)f_5204},
{"f_5207:posixunix_scm",(void*)f_5207},
{"f_5210:posixunix_scm",(void*)f_5210},
{"f_5216:posixunix_scm",(void*)f_5216},
{"f_5155:posixunix_scm",(void*)f_5155},
{"f_5188:posixunix_scm",(void*)f_5188},
{"f_5176:posixunix_scm",(void*)f_5176},
{"f_5184:posixunix_scm",(void*)f_5184},
{"f_5180:posixunix_scm",(void*)f_5180},
{"f_5136:posixunix_scm",(void*)f_5136},
{"f_5146:posixunix_scm",(void*)f_5146},
{"f_5140:posixunix_scm",(void*)f_5140},
{"f_5130:posixunix_scm",(void*)f_5130},
{"f_5124:posixunix_scm",(void*)f_5124},
{"f_5118:posixunix_scm",(void*)f_5118},
{"f_5094:posixunix_scm",(void*)f_5094},
{"f_5116:posixunix_scm",(void*)f_5116},
{"f_5112:posixunix_scm",(void*)f_5112},
{"f_5104:posixunix_scm",(void*)f_5104},
{"f_5064:posixunix_scm",(void*)f_5064},
{"f_5092:posixunix_scm",(void*)f_5092},
{"f_5088:posixunix_scm",(void*)f_5088},
{"f_5037:posixunix_scm",(void*)f_5037},
{"f_5062:posixunix_scm",(void*)f_5062},
{"f_5058:posixunix_scm",(void*)f_5058},
{"f_4973:posixunix_scm",(void*)f_4973},
{"f_4961:posixunix_scm",(void*)f_4961},
{"f_4989:posixunix_scm",(void*)f_4989},
{"f_4899:posixunix_scm",(void*)f_4899},
{"f_4903:posixunix_scm",(void*)f_4903},
{"f_4908:posixunix_scm",(void*)f_4908},
{"f_4924:posixunix_scm",(void*)f_4924},
{"f_4836:posixunix_scm",(void*)f_4836},
{"f_4894:posixunix_scm",(void*)f_4894},
{"f_4840:posixunix_scm",(void*)f_4840},
{"f_4843:posixunix_scm",(void*)f_4843},
{"f_4875:posixunix_scm",(void*)f_4875},
{"f_4846:posixunix_scm",(void*)f_4846},
{"f_4851:posixunix_scm",(void*)f_4851},
{"f_4865:posixunix_scm",(void*)f_4865},
{"f_4743:posixunix_scm",(void*)f_4743},
{"f_4747:posixunix_scm",(void*)f_4747},
{"f_4801:posixunix_scm",(void*)f_4801},
{"f_4750:posixunix_scm",(void*)f_4750},
{"f_4763:posixunix_scm",(void*)f_4763},
{"f_4767:posixunix_scm",(void*)f_4767},
{"f_4773:posixunix_scm",(void*)f_4773},
{"f_4777:posixunix_scm",(void*)f_4777},
{"f_4787:posixunix_scm",(void*)f_4787},
{"f_4771:posixunix_scm",(void*)f_4771},
{"f_4718:posixunix_scm",(void*)f_4718},
{"f_4730:posixunix_scm",(void*)f_4730},
{"f_4726:posixunix_scm",(void*)f_4726},
{"f_4704:posixunix_scm",(void*)f_4704},
{"f_4716:posixunix_scm",(void*)f_4716},
{"f_4712:posixunix_scm",(void*)f_4712},
{"f_4637:posixunix_scm",(void*)f_4637},
{"f_4641:posixunix_scm",(void*)f_4641},
{"f_4683:posixunix_scm",(void*)f_4683},
{"f_4644:posixunix_scm",(void*)f_4644},
{"f_4657:posixunix_scm",(void*)f_4657},
{"f_4661:posixunix_scm",(void*)f_4661},
{"f_4665:posixunix_scm",(void*)f_4665},
{"f_4669:posixunix_scm",(void*)f_4669},
{"f_4673:posixunix_scm",(void*)f_4673},
{"f_4583:posixunix_scm",(void*)f_4583},
{"f_4616:posixunix_scm",(void*)f_4616},
{"f_4587:posixunix_scm",(void*)f_4587},
{"f_4594:posixunix_scm",(void*)f_4594},
{"f_4598:posixunix_scm",(void*)f_4598},
{"f_4602:posixunix_scm",(void*)f_4602},
{"f_4606:posixunix_scm",(void*)f_4606},
{"f_4610:posixunix_scm",(void*)f_4610},
{"f_4565:posixunix_scm",(void*)f_4565},
{"f_4550:posixunix_scm",(void*)f_4550},
{"f_4544:posixunix_scm",(void*)f_4544},
{"f_4512:posixunix_scm",(void*)f_4512},
{"f_4518:posixunix_scm",(void*)f_4518},
{"f_4466:posixunix_scm",(void*)f_4466},
{"f_4484:posixunix_scm",(void*)f_4484},
{"f_4448:posixunix_scm",(void*)f_4448},
{"f_4458:posixunix_scm",(void*)f_4458},
{"f_4435:posixunix_scm",(void*)f_4435},
{"f_4426:posixunix_scm",(void*)f_4426},
{"f_4379:posixunix_scm",(void*)f_4379},
{"f_4383:posixunix_scm",(void*)f_4383},
{"f_4359:posixunix_scm",(void*)f_4359},
{"f_4363:posixunix_scm",(void*)f_4363},
{"f_4369:posixunix_scm",(void*)f_4369},
{"f_4373:posixunix_scm",(void*)f_4373},
{"f_4339:posixunix_scm",(void*)f_4339},
{"f_4343:posixunix_scm",(void*)f_4343},
{"f_4349:posixunix_scm",(void*)f_4349},
{"f_4353:posixunix_scm",(void*)f_4353},
{"f_4315:posixunix_scm",(void*)f_4315},
{"f_4319:posixunix_scm",(void*)f_4319},
{"f_4330:posixunix_scm",(void*)f_4330},
{"f_4334:posixunix_scm",(void*)f_4334},
{"f_4324:posixunix_scm",(void*)f_4324},
{"f_4291:posixunix_scm",(void*)f_4291},
{"f_4295:posixunix_scm",(void*)f_4295},
{"f_4306:posixunix_scm",(void*)f_4306},
{"f_4310:posixunix_scm",(void*)f_4310},
{"f_4300:posixunix_scm",(void*)f_4300},
{"f_4275:posixunix_scm",(void*)f_4275},
{"f_4279:posixunix_scm",(void*)f_4279},
{"f_4282:posixunix_scm",(void*)f_4282},
{"f_4239:posixunix_scm",(void*)f_4239},
{"f_4270:posixunix_scm",(void*)f_4270},
{"f_4260:posixunix_scm",(void*)f_4260},
{"f_4253:posixunix_scm",(void*)f_4253},
{"f_4203:posixunix_scm",(void*)f_4203},
{"f_4234:posixunix_scm",(void*)f_4234},
{"f_4224:posixunix_scm",(void*)f_4224},
{"f_4217:posixunix_scm",(void*)f_4217},
{"f_4188:posixunix_scm",(void*)f_4188},
{"f_4201:posixunix_scm",(void*)f_4201},
{"f_3853:posixunix_scm",(void*)f_3853},
{"f_4160:posixunix_scm",(void*)f_4160},
{"f_3980:posixunix_scm",(void*)f_3980},
{"f_4146:posixunix_scm",(void*)f_4146},
{"f_4135:posixunix_scm",(void*)f_4135},
{"f_4142:posixunix_scm",(void*)f_4142},
{"f_3999:posixunix_scm",(void*)f_3999},
{"f_4128:posixunix_scm",(void*)f_4128},
{"f_4107:posixunix_scm",(void*)f_4107},
{"f_4124:posixunix_scm",(void*)f_4124},
{"f_4113:posixunix_scm",(void*)f_4113},
{"f_4120:posixunix_scm",(void*)f_4120},
{"f_4043:posixunix_scm",(void*)f_4043},
{"f_4104:posixunix_scm",(void*)f_4104},
{"f_4083:posixunix_scm",(void*)f_4083},
{"f_4100:posixunix_scm",(void*)f_4100},
{"f_4089:posixunix_scm",(void*)f_4089},
{"f_4096:posixunix_scm",(void*)f_4096},
{"f_4056:posixunix_scm",(void*)f_4056},
{"f_4080:posixunix_scm",(void*)f_4080},
{"f_4076:posixunix_scm",(void*)f_4076},
{"f_4037:posixunix_scm",(void*)f_4037},
{"f_4006:posixunix_scm",(void*)f_4006},
{"f_4024:posixunix_scm",(void*)f_4024},
{"f_4009:posixunix_scm",(void*)f_4009},
{"f_4013:posixunix_scm",(void*)f_4013},
{"f_3993:posixunix_scm",(void*)f_3993},
{"f_3974:posixunix_scm",(void*)f_3974},
{"f_3860:posixunix_scm",(void*)f_3860},
{"f_3867:posixunix_scm",(void*)f_3867},
{"f_3869:posixunix_scm",(void*)f_3869},
{"f_3876:posixunix_scm",(void*)f_3876},
{"f_3940:posixunix_scm",(void*)f_3940},
{"f_3949:posixunix_scm",(void*)f_3949},
{"f_3882:posixunix_scm",(void*)f_3882},
{"f_3918:posixunix_scm",(void*)f_3918},
{"f_3914:posixunix_scm",(void*)f_3914},
{"f_3910:posixunix_scm",(void*)f_3910},
{"f_3899:posixunix_scm",(void*)f_3899},
{"f_3895:posixunix_scm",(void*)f_3895},
{"f_3797:posixunix_scm",(void*)f_3797},
{"f_3806:posixunix_scm",(void*)f_3806},
{"f_3830:posixunix_scm",(void*)f_3830},
{"f_3842:posixunix_scm",(void*)f_3842},
{"f_3848:posixunix_scm",(void*)f_3848},
{"f_3836:posixunix_scm",(void*)f_3836},
{"f_3812:posixunix_scm",(void*)f_3812},
{"f_3818:posixunix_scm",(void*)f_3818},
{"f_3801:posixunix_scm",(void*)f_3801},
{"f_3733:posixunix_scm",(void*)f_3733},
{"f_3737:posixunix_scm",(void*)f_3737},
{"f_3746:posixunix_scm",(void*)f_3746},
{"f_3707:posixunix_scm",(void*)f_3707},
{"f_3731:posixunix_scm",(void*)f_3731},
{"f_3724:posixunix_scm",(void*)f_3724},
{"f_3550:posixunix_scm",(void*)f_3550},
{"f_3655:posixunix_scm",(void*)f_3655},
{"f_3663:posixunix_scm",(void*)f_3663},
{"f_3650:posixunix_scm",(void*)f_3650},
{"f_3552:posixunix_scm",(void*)f_3552},
{"f_3559:posixunix_scm",(void*)f_3559},
{"f_3562:posixunix_scm",(void*)f_3562},
{"f_3565:posixunix_scm",(void*)f_3565},
{"f_3649:posixunix_scm",(void*)f_3649},
{"f_3569:posixunix_scm",(void*)f_3569},
{"f_3583:posixunix_scm",(void*)f_3583},
{"f_3593:posixunix_scm",(void*)f_3593},
{"f_3596:posixunix_scm",(void*)f_3596},
{"f_3599:posixunix_scm",(void*)f_3599},
{"f_3605:posixunix_scm",(void*)f_3605},
{"f_3615:posixunix_scm",(void*)f_3615},
{"f_3528:posixunix_scm",(void*)f_3528},
{"f_3548:posixunix_scm",(void*)f_3548},
{"f_3535:posixunix_scm",(void*)f_3535},
{"f_3538:posixunix_scm",(void*)f_3538},
{"f_3506:posixunix_scm",(void*)f_3506},
{"f_3526:posixunix_scm",(void*)f_3526},
{"f_3513:posixunix_scm",(void*)f_3513},
{"f_3516:posixunix_scm",(void*)f_3516},
{"f_3347:posixunix_scm",(void*)f_3347},
{"f_3351:posixunix_scm",(void*)f_3351},
{"f_3357:posixunix_scm",(void*)f_3357},
{"f_3478:posixunix_scm",(void*)f_3478},
{"f_3366:posixunix_scm",(void*)f_3366},
{"f_3462:posixunix_scm",(void*)f_3462},
{"f_3439:posixunix_scm",(void*)f_3439},
{"f_3433:posixunix_scm",(void*)f_3433},
{"f_3376:posixunix_scm",(void*)f_3376},
{"f_3378:posixunix_scm",(void*)f_3378},
{"f_3428:posixunix_scm",(void*)f_3428},
{"f_3385:posixunix_scm",(void*)f_3385},
{"f_3411:posixunix_scm",(void*)f_3411},
{"f_3388:posixunix_scm",(void*)f_3388},
{"f_3404:posixunix_scm",(void*)f_3404},
{"f_3360:posixunix_scm",(void*)f_3360},
{"f_3285:posixunix_scm",(void*)f_3285},
{"f_3298:posixunix_scm",(void*)f_3298},
{"f_3310:posixunix_scm",(void*)f_3310},
{"f_3304:posixunix_scm",(void*)f_3304},
{"f_3276:posixunix_scm",(void*)f_3276},
{"f_3283:posixunix_scm",(void*)f_3283},
{"f_3267:posixunix_scm",(void*)f_3267},
{"f_3274:posixunix_scm",(void*)f_3274},
{"f_3258:posixunix_scm",(void*)f_3258},
{"f_3265:posixunix_scm",(void*)f_3265},
{"f_3249:posixunix_scm",(void*)f_3249},
{"f_3256:posixunix_scm",(void*)f_3256},
{"f_3240:posixunix_scm",(void*)f_3240},
{"f_3247:posixunix_scm",(void*)f_3247},
{"f_3231:posixunix_scm",(void*)f_3231},
{"f_3238:posixunix_scm",(void*)f_3238},
{"f_3225:posixunix_scm",(void*)f_3225},
{"f_3229:posixunix_scm",(void*)f_3229},
{"f_3219:posixunix_scm",(void*)f_3219},
{"f_3223:posixunix_scm",(void*)f_3223},
{"f_3213:posixunix_scm",(void*)f_3213},
{"f_3217:posixunix_scm",(void*)f_3217},
{"f_3207:posixunix_scm",(void*)f_3207},
{"f_3211:posixunix_scm",(void*)f_3211},
{"f_3197:posixunix_scm",(void*)f_3197},
{"f_3201:posixunix_scm",(void*)f_3201},
{"f_3165:posixunix_scm",(void*)f_3165},
{"f_3176:posixunix_scm",(void*)f_3176},
{"f_3169:posixunix_scm",(void*)f_3169},
{"f_3128:posixunix_scm",(void*)f_3128},
{"f_3160:posixunix_scm",(void*)f_3160},
{"f_3153:posixunix_scm",(void*)f_3153},
{"f_3132:posixunix_scm",(void*)f_3132},
{"f_2848:posixunix_scm",(void*)f_2848},
{"f_3087:posixunix_scm",(void*)f_3087},
{"f_3095:posixunix_scm",(void*)f_3095},
{"f_2864:posixunix_scm",(void*)f_2864},
{"f_3039:posixunix_scm",(void*)f_3039},
{"f_3047:posixunix_scm",(void*)f_3047},
{"f_2870:posixunix_scm",(void*)f_2870},
{"f_2873:posixunix_scm",(void*)f_2873},
{"f_2977:posixunix_scm",(void*)f_2977},
{"f_2985:posixunix_scm",(void*)f_2985},
{"f_2975:posixunix_scm",(void*)f_2975},
{"f_2912:posixunix_scm",(void*)f_2912},
{"f_2930:posixunix_scm",(void*)f_2930},
{"f_2938:posixunix_scm",(void*)f_2938},
{"f_2928:posixunix_scm",(void*)f_2928},
{"f_2790:posixunix_scm",(void*)f_2790},
{"f_2797:posixunix_scm",(void*)f_2797},
{"f_2803:posixunix_scm",(void*)f_2803},
{"f_2810:posixunix_scm",(void*)f_2810},
{"f_2751:posixunix_scm",(void*)f_2751},
{"f_2758:posixunix_scm",(void*)f_2758},
{"f_2767:posixunix_scm",(void*)f_2767},
{"f_2709:posixunix_scm",(void*)f_2709},
{"f_2719:posixunix_scm",(void*)f_2719},
{"f_2722:posixunix_scm",(void*)f_2722},
{"f_2725:posixunix_scm",(void*)f_2725},
{"f_2694:posixunix_scm",(void*)f_2694},
{"f_2656:posixunix_scm",(void*)f_2656},
{"f_2686:posixunix_scm",(void*)f_2686},
{"f_2673:posixunix_scm",(void*)f_2673},
{"f_2676:posixunix_scm",(void*)f_2676},
{"f_2610:posixunix_scm",(void*)f_2610},
{"f_2614:posixunix_scm",(void*)f_2614},
{"f_2553:posixunix_scm",(void*)f_2553},
{"f_2546:posixunix_scm",(void*)f_2546},
{"f_2528:posixunix_scm",(void*)f_2528},
{"f_2532:posixunix_scm",(void*)f_2532},
{"f_2543:posixunix_scm",(void*)f_2543},
{"f_2539:posixunix_scm",(void*)f_2539},
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
