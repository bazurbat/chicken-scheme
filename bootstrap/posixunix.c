/* Generated from posixunix.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:26
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
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
#define C_getpid            getpid
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
#define C_readlink(f, b)    C_fix(readlink(C_data_pointer(f), C_data_pointer(b), FILENAME_MAX))
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
#define C_access(fn, m)     C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
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

static C_TLS C_word lf[465];
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
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,29),40,102,105,108,101,45,109,111,100,105,102,105,99,97,116,105,111,110,45,116,105,109,101,32,102,50,55,56,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,97,99,99,101,115,115,45,116,105,109,101,32,102,50,56,49,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,99,104,97,110,103,101,45,116,105,109,101,32,102,50,56,52,41,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,17),40,102,105,108,101,45,111,119,110,101,114,32,102,50,56,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,23),40,102,105,108,101,45,112,101,114,109,105,115,115,105,111,110,115,32,102,50,57,48,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,24),40,114,101,103,117,108,97,114,45,102,105,108,101,63,32,102,110,97,109,101,50,57,51,41};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,25),40,115,121,109,98,111,108,105,99,45,108,105,110,107,63,32,102,110,97,109,101,51,48,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,24),40,115,116,97,116,45,114,101,103,117,108,97,114,63,32,102,110,97,109,101,51,48,55,41};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,26),40,115,116,97,116,45,100,105,114,101,99,116,111,114,121,63,32,102,110,97,109,101,51,49,52,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,28),40,99,104,97,114,97,99,116,101,114,45,100,101,118,105,99,101,63,32,102,110,97,109,101,51,50,49,41,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,24),40,98,108,111,99,107,45,100,101,118,105,99,101,63,32,102,110,97,109,101,51,50,56,41};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,17),40,102,95,51,51,48,48,32,102,110,97,109,101,51,51,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,18),40,115,111,99,107,101,116,63,32,102,110,97,109,101,51,52,50,41,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,47),40,115,101,116,45,102,105,108,101,45,112,111,115,105,116,105,111,110,33,32,112,111,114,116,51,52,56,32,112,111,115,51,52,57,32,46,32,119,104,101,110,99,101,51,53,48,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,13),40,108,111,111,112,32,100,105,114,52,49,51,41,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,7),40,97,51,52,54,56,41,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,47),40,97,51,52,55,52,32,100,105,114,52,51,55,52,51,56,52,52,51,32,102,105,108,101,52,51,57,52,52,48,52,52,52,32,101,120,116,52,52,49,52,52,50,52,52,53,41,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,38),40,99,114,101,97,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,51,56,56,32,46,32,116,109,112,51,56,55,51,56,57,41,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,26),40,99,104,97,110,103,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,52,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,26),40,100,101,108,101,116,101,45,100,105,114,101,99,116,111,114,121,32,110,97,109,101,52,54,48,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,35),40,98,111,100,121,52,55,57,32,115,112,101,99,52,56,56,32,115,104,111,119,45,100,111,116,102,105,108,101,115,63,52,56,57,41,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,35),40,100,101,102,45,115,104,111,119,45,100,111,116,102,105,108,101,115,63,52,56,50,32,37,115,112,101,99,52,55,55,53,50,49,41,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,115,112,101,99,52,56,49,41,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,23),40,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,52,55,50,52,55,51,41,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,21),40,100,105,114,101,99,116,111,114,121,63,32,102,110,97,109,101,53,50,56,41,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,31),40,99,117,114,114,101,110,116,45,100,105,114,101,99,116,111,114,121,32,46,32,116,109,112,53,52,53,53,52,54,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,7),40,97,51,56,53,55,41,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,19),40,97,51,56,53,49,32,101,120,118,97,114,53,57,50,54,48,53,41,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,7),40,97,51,56,55,53,41,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,7),40,97,51,56,56,55,41,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,20),40,97,51,56,56,49,32,46,32,97,114,103,115,54,48,48,54,49,54,41,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,7),40,97,51,56,54,57,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,15),40,97,51,56,52,53,32,107,53,57,57,54,48,52,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,5),40,99,119,100,41,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,16),40,108,111,111,112,32,108,54,52,51,32,114,54,52,52,41};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,24),40,99,97,110,111,110,105,99,97,108,45,112,97,116,104,32,112,97,116,104,54,49,55,41};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,108,111,99,54,53,50,32,99,109,100,54,53,51,32,105,110,112,54,53,52,32,114,54,53,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,31),40,111,112,101,110,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,54,53,56,32,46,32,109,54,53,57,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,32),40,111,112,101,110,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,54,54,55,32,46,32,109,54,54,56,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,26),40,99,108,111,115,101,45,105,110,112,117,116,45,112,105,112,101,32,112,111,114,116,54,55,54,41,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,7),40,97,52,51,51,57,41,0};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,20),40,97,52,51,52,53,32,46,32,114,101,115,117,108,116,115,54,57,54,41,0,0,0,0};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,47),40,99,97,108,108,45,119,105,116,104,45,105,110,112,117,116,45,112,105,112,101,32,99,109,100,54,57,50,32,112,114,111,99,54,57,51,32,46,32,109,111,100,101,54,57,52,41,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,7),40,97,52,51,54,51,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,20),40,97,52,51,54,57,32,46,32,114,101,115,117,108,116,115,55,48,50,41,0,0,0,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,48),40,99,97,108,108,45,119,105,116,104,45,111,117,116,112,117,116,45,112,105,112,101,32,99,109,100,54,57,56,32,112,114,111,99,54,57,57,32,46,32,109,111,100,101,55,48,48,41};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,20),40,97,52,51,56,56,32,46,32,114,101,115,117,108,116,115,55,48,57,41,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,48),40,119,105,116,104,45,105,110,112,117,116,45,102,114,111,109,45,112,105,112,101,32,99,109,100,55,48,52,32,116,104,117,110,107,55,48,53,32,46,32,109,111,100,101,55,48,54,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,20),40,97,52,52,48,56,32,46,32,114,101,115,117,108,116,115,55,49,56,41,0,0,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,47),40,119,105,116,104,45,111,117,116,112,117,116,45,116,111,45,112,105,112,101,32,99,109,100,55,49,51,32,116,104,117,110,107,55,49,52,32,46,32,109,111,100,101,55,49,53,41,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,13),40,99,114,101,97,116,101,45,112,105,112,101,41,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,104,97,110,100,108,101,114,32,115,105,103,55,51,48,41,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,36),40,115,101,116,45,115,105,103,110,97,108,45,104,97,110,100,108,101,114,33,32,115,105,103,55,51,50,32,112,114,111,99,55,51,51,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,105,110,116,101,114,114,117,112,116,45,104,111,111,107,32,114,101,97,115,111,110,55,51,56,32,115,116,97,116,101,55,51,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,9),40,108,111,111,112,55,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,26),40,115,101,116,45,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,115,55,52,52,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,22),40,108,111,111,112,32,115,105,103,115,55,54,55,32,109,97,115,107,55,54,56,41,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,13),40,115,105,103,110,97,108,45,109,97,115,107,41,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,109,97,115,107,101,100,63,32,115,105,103,55,55,50,41,0};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,21),40,115,105,103,110,97,108,45,109,97,115,107,33,32,115,105,103,55,55,53,41,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,23),40,115,105,103,110,97,108,45,117,110,109,97,115,107,33,32,115,105,103,55,56,49,41,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,20),40,115,121,115,116,101,109,45,105,110,102,111,114,109,97,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,38),40,117,115,101,114,45,105,110,102,111,114,109,97,116,105,111,110,32,117,115,101,114,56,50,50,32,46,32,116,109,112,56,50,49,56,50,51,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,19),40,99,117,114,114,101,110,116,45,117,115,101,114,45,110,97,109,101,41,0,0,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,29),40,99,117,114,114,101,110,116,45,101,102,102,101,99,116,105,118,101,45,117,115,101,114,45,110,97,109,101,41,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,54,51,41,0,0,0,0,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,40),40,103,114,111,117,112,45,105,110,102,111,114,109,97,116,105,111,110,32,103,114,111,117,112,56,52,57,32,46,32,116,109,112,56,52,56,56,53,48,41};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,56,56,56,41,0,0,0,0,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,12),40,103,101,116,45,103,114,111,117,112,115,41,0,0,0,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,56,57,55,32,108,115,116,57,48,49,32,105,57,48,50,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,21),40,115,101,116,45,103,114,111,117,112,115,33,32,108,115,116,48,56,57,52,41,0,0,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,33),40,105,110,105,116,105,97,108,105,122,101,45,103,114,111,117,112,115,32,117,115,101,114,57,50,48,32,105,100,57,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,32),40,99,104,97,110,103,101,45,102,105,108,101,45,109,111,100,101,32,102,110,97,109,101,57,50,55,32,109,57,50,56,41};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,39),40,99,104,97,110,103,101,45,102,105,108,101,45,111,119,110,101,114,32,102,110,57,51,51,32,117,105,100,57,51,52,32,103,105,100,57,51,53,41,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,33),40,99,104,101,99,107,32,102,105,108,101,110,97,109,101,57,52,50,32,97,99,99,57,52,51,32,108,111,99,57,52,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li97[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,114,101,97,100,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,53,48,41,0};
static C_char C_TLS li98[] C_aligned={C_lihdr(0,0,32),40,102,105,108,101,45,119,114,105,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,53,49,41};
static C_char C_TLS li99[] C_aligned={C_lihdr(0,0,34),40,102,105,108,101,45,101,120,101,99,117,116,101,45,97,99,99,101,115,115,63,32,102,105,108,101,110,97,109,101,57,53,50,41,0,0,0,0,0,0};
static C_char C_TLS li100[] C_aligned={C_lihdr(0,0,16),40,99,114,101,97,116,101,45,115,101,115,115,105,111,110,41};
static C_char C_TLS li101[] C_aligned={C_lihdr(0,0,36),40,99,114,101,97,116,101,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,111,108,100,57,55,54,32,110,101,119,57,55,55,41,0,0,0,0};
static C_char C_TLS li102[] C_aligned={C_lihdr(0,0,41),40,114,101,97,100,45,115,121,109,98,111,108,105,99,45,108,105,110,107,32,102,110,97,109,101,57,57,48,32,46,32,116,109,112,57,56,57,57,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li103[] C_aligned={C_lihdr(0,0,27),40,102,105,108,101,45,108,105,110,107,32,111,108,100,49,48,49,54,32,110,101,119,49,48,49,55,41,0,0,0,0,0};
static C_char C_TLS li104[] C_aligned={C_lihdr(0,0,20),40,109,111,100,101,32,105,110,112,49,48,50,52,32,109,49,48,50,53,41,0,0,0,0};
static C_char C_TLS li105[] C_aligned={C_lihdr(0,0,36),40,99,104,101,99,107,32,108,111,99,49,48,51,56,32,102,100,49,48,51,57,32,105,110,112,49,48,52,48,32,114,49,48,52,49,41,0,0,0,0};
static C_char C_TLS li106[] C_aligned={C_lihdr(0,0,33),40,111,112,101,110,45,105,110,112,117,116,45,102,105,108,101,42,32,102,100,49,48,52,52,32,46,32,109,49,48,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li107[] C_aligned={C_lihdr(0,0,34),40,111,112,101,110,45,111,117,116,112,117,116,45,102,105,108,101,42,32,102,100,49,48,52,55,32,46,32,109,49,48,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li108[] C_aligned={C_lihdr(0,0,23),40,112,111,114,116,45,62,102,105,108,101,110,111,32,112,111,114,116,49,48,53,51,41,0};
static C_char C_TLS li109[] C_aligned={C_lihdr(0,0,36),40,100,117,112,108,105,99,97,116,101,45,102,105,108,101,110,111,32,111,108,100,49,48,54,53,32,46,32,110,101,119,49,48,54,54,41,0,0,0,0};
static C_char C_TLS li110[] C_aligned={C_lihdr(0,0,8),40,114,101,97,100,121,63,41};
static C_char C_TLS li111[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li112[] C_aligned={C_lihdr(0,0,7),40,102,101,116,99,104,41,0};
static C_char C_TLS li113[] C_aligned={C_lihdr(0,0,7),40,97,53,54,50,52,41,0};
static C_char C_TLS li114[] C_aligned={C_lihdr(0,0,7),40,97,53,54,51,55,41,0};
static C_char C_TLS li115[] C_aligned={C_lihdr(0,0,7),40,97,53,54,52,57,41,0};
static C_char C_TLS li116[] C_aligned={C_lihdr(0,0,7),40,97,53,54,55,48,41,0};
static C_char C_TLS li117[] C_aligned={C_lihdr(0,0,28),40,108,111,111,112,32,110,49,49,54,48,32,109,49,49,54,49,32,115,116,97,114,116,49,49,54,50,41,0,0,0,0};
static C_char C_TLS li118[] C_aligned={C_lihdr(0,0,41),40,97,53,54,55,57,32,112,111,114,116,49,49,53,53,32,110,49,49,53,54,32,100,101,115,116,49,49,53,55,32,115,116,97,114,116,49,49,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li119[] C_aligned={C_lihdr(0,0,24),40,98,117,109,112,101,114,32,99,117,114,49,49,56,54,32,112,116,114,49,49,56,55,41};
static C_char C_TLS li120[] C_aligned={C_lihdr(0,0,7),40,97,53,56,52,49,41,0};
static C_char C_TLS li121[] C_aligned={C_lihdr(0,0,42),40,97,53,56,52,55,32,100,101,115,116,49,50,49,55,49,50,49,56,49,50,50,49,32,99,111,110,116,63,49,50,49,57,49,50,50,48,49,50,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li122[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,115,116,114,49,49,56,52,41,0,0};
static C_char C_TLS li123[] C_aligned={C_lihdr(0,0,26),40,97,53,55,53,53,32,112,111,114,116,49,49,56,49,32,108,105,109,105,116,49,49,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li124[] C_aligned={C_lihdr(0,0,59),40,98,111,100,121,49,48,57,51,32,110,111,110,98,108,111,99,107,105,110,103,63,49,49,48,52,32,98,117,102,105,49,49,48,53,32,111,110,45,99,108,111,115,101,49,49,48,54,32,109,111,114,101,63,49,49,48,55,41,0,0,0,0,0};
static C_char C_TLS li125[] C_aligned={C_lihdr(0,0,69),40,100,101,102,45,109,111,114,101,63,49,48,57,56,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,48,56,57,49,50,51,49,32,37,98,117,102,105,49,48,57,48,49,50,51,50,32,37,111,110,45,99,108,111,115,101,49,48,57,49,49,50,51,51,41,0,0,0};
static C_char C_TLS li126[] C_aligned={C_lihdr(0,0,54),40,100,101,102,45,111,110,45,99,108,111,115,101,49,48,57,55,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,48,56,57,49,50,51,53,32,37,98,117,102,105,49,48,57,48,49,50,51,54,41,0,0};
static C_char C_TLS li127[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,98,117,102,105,49,48,57,54,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,48,56,57,49,50,51,56,41,0,0,0,0};
static C_char C_TLS li128[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,110,111,110,98,108,111,99,107,105,110,103,63,49,48,57,53,41,0,0};
static C_char C_TLS li129[] C_aligned={C_lihdr(0,0,62),40,35,35,115,121,115,35,99,117,115,116,111,109,45,105,110,112,117,116,45,112,111,114,116,32,108,111,99,49,48,56,50,32,110,97,109,49,48,56,51,32,102,100,49,48,56,52,32,46,32,116,109,112,49,48,56,49,49,48,56,53,41,0,0};
static C_char C_TLS li130[] C_aligned={C_lihdr(0,0,22),40,112,111,107,101,32,115,116,114,49,50,56,51,32,108,101,110,49,50,56,52,41,0,0};
static C_char C_TLS li131[] C_aligned={C_lihdr(0,0,15),40,97,54,48,51,56,32,115,116,114,49,51,49,56,41,0};
static C_char C_TLS li132[] C_aligned={C_lihdr(0,0,7),40,97,54,48,52,52,41,0};
static C_char C_TLS li133[] C_aligned={C_lihdr(0,0,7),40,97,54,48,54,53,41,0};
static C_char C_TLS li134[] C_aligned={C_lihdr(0,0,16),40,102,95,54,48,55,52,32,115,116,114,49,50,57,52,41};
static C_char C_TLS li135[] C_aligned={C_lihdr(0,0,32),40,108,111,111,112,32,114,101,109,49,51,48,49,32,115,116,97,114,116,49,51,48,50,32,108,101,110,49,51,48,51,41};
static C_char C_TLS li136[] C_aligned={C_lihdr(0,0,16),40,102,95,54,48,56,57,32,115,116,114,49,50,57,57,41};
static C_char C_TLS li137[] C_aligned={C_lihdr(0,0,49),40,98,111,100,121,49,50,54,54,32,110,111,110,98,108,111,99,107,105,110,103,63,49,50,55,54,32,98,117,102,105,49,50,55,55,32,111,110,45,99,108,111,115,101,49,50,55,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li138[] C_aligned={C_lihdr(0,0,54),40,100,101,102,45,111,110,45,99,108,111,115,101,49,50,55,48,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,50,54,51,49,51,51,48,32,37,98,117,102,105,49,50,54,52,49,51,51,49,41,0,0};
static C_char C_TLS li139[] C_aligned={C_lihdr(0,0,36),40,100,101,102,45,98,117,102,105,49,50,54,57,32,37,110,111,110,98,108,111,99,107,105,110,103,63,49,50,54,51,49,51,51,51,41,0,0,0,0};
static C_char C_TLS li140[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,110,111,110,98,108,111,99,107,105,110,103,63,49,50,54,56,41,0,0};
static C_char C_TLS li141[] C_aligned={C_lihdr(0,0,63),40,35,35,115,121,115,35,99,117,115,116,111,109,45,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,49,50,53,54,32,110,97,109,49,50,53,55,32,102,100,49,50,53,56,32,46,32,116,109,112,49,50,53,53,49,50,53,57,41,0};
static C_char C_TLS li142[] C_aligned={C_lihdr(0,0,33),40,102,105,108,101,45,116,114,117,110,99,97,116,101,32,102,110,97,109,101,49,51,52,49,32,111,102,102,49,51,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li143[] C_aligned={C_lihdr(0,0,33),40,115,101,116,117,112,32,112,111,114,116,49,51,53,52,32,97,114,103,115,49,51,53,53,32,108,111,99,49,51,53,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li144[] C_aligned={C_lihdr(0,0,30),40,101,114,114,32,109,115,103,49,51,55,50,32,108,111,99,107,49,51,55,51,32,108,111,99,49,51,55,52,41,0,0};
static C_char C_TLS li145[] C_aligned={C_lihdr(0,0,31),40,102,105,108,101,45,108,111,99,107,32,112,111,114,116,49,51,55,53,32,46,32,97,114,103,115,49,51,55,54,41,0};
static C_char C_TLS li146[] C_aligned={C_lihdr(0,0,40),40,102,105,108,101,45,108,111,99,107,47,98,108,111,99,107,105,110,103,32,112,111,114,116,49,51,55,56,32,46,32,97,114,103,115,49,51,55,57,41};
static C_char C_TLS li147[] C_aligned={C_lihdr(0,0,36),40,102,105,108,101,45,116,101,115,116,45,108,111,99,107,32,112,111,114,116,49,51,56,49,32,46,32,97,114,103,115,49,51,56,50,41,0,0,0,0};
static C_char C_TLS li148[] C_aligned={C_lihdr(0,0,22),40,102,105,108,101,45,117,110,108,111,99,107,32,108,111,99,107,49,52,48,49,41,0,0};
static C_char C_TLS li149[] C_aligned={C_lihdr(0,0,34),40,99,114,101,97,116,101,45,102,105,102,111,32,102,110,97,109,101,49,52,48,54,32,46,32,109,111,100,101,49,52,48,55,41,0,0,0,0,0,0};
static C_char C_TLS li150[] C_aligned={C_lihdr(0,0,20),40,102,105,102,111,63,32,102,105,108,101,110,97,109,101,49,52,49,51,41,0,0,0,0};
static C_char C_TLS li151[] C_aligned={C_lihdr(0,0,24),40,115,101,116,101,110,118,32,118,97,114,49,52,49,54,32,118,97,108,49,52,49,55,41};
static C_char C_TLS li152[] C_aligned={C_lihdr(0,0,18),40,117,110,115,101,116,101,110,118,32,118,97,114,49,52,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li153[] C_aligned={C_lihdr(0,0,12),40,115,99,97,110,32,106,49,52,51,53,41,0,0,0,0};
static C_char C_TLS li154[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,105,49,52,51,50,41,0,0,0,0};
static C_char C_TLS li155[] C_aligned={C_lihdr(0,0,27),40,103,101,116,45,101,110,118,105,114,111,110,109,101,110,116,45,118,97,114,105,97,98,108,101,115,41,0,0,0,0,0};
static C_char C_TLS li156[] C_aligned={C_lihdr(0,0,72),40,109,97,112,45,102,105,108,101,45,116,111,45,109,101,109,111,114,121,32,97,100,100,114,49,52,53,54,32,108,101,110,49,52,53,55,32,112,114,111,116,49,52,53,56,32,102,108,97,103,49,52,53,57,32,102,100,49,52,54,48,32,46,32,111,102,102,49,52,54,49,41};
static C_char C_TLS li157[] C_aligned={C_lihdr(0,0,43),40,117,110,109,97,112,45,102,105,108,101,45,102,114,111,109,45,109,101,109,111,114,121,32,109,109,97,112,49,52,56,50,32,46,32,108,101,110,49,52,56,51,41,0,0,0,0,0};
static C_char C_TLS li158[] C_aligned={C_lihdr(0,0,37),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,45,112,111,105,110,116,101,114,32,109,109,97,112,49,52,56,57,41,0,0,0};
static C_char C_TLS li159[] C_aligned={C_lihdr(0,0,27),40,109,101,109,111,114,121,45,109,97,112,112,101,100,45,102,105,108,101,63,32,120,49,52,57,50,41,0,0,0,0,0};
static C_char C_TLS li160[] C_aligned={C_lihdr(0,0,34),40,99,104,101,99,107,45,116,105,109,101,45,118,101,99,116,111,114,32,108,111,99,49,52,57,52,32,116,109,49,52,57,53,41,0,0,0,0,0,0};
static C_char C_TLS li161[] C_aligned={C_lihdr(0,0,35),40,115,101,99,111,110,100,115,45,62,108,111,99,97,108,45,116,105,109,101,32,46,32,116,109,112,49,53,48,53,49,53,48,54,41,0,0,0,0,0};
static C_char C_TLS li162[] C_aligned={C_lihdr(0,0,33),40,115,101,99,111,110,100,115,45,62,117,116,99,45,116,105,109,101,32,46,32,116,109,112,49,53,49,57,49,53,50,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li163[] C_aligned={C_lihdr(0,0,31),40,115,101,99,111,110,100,115,45,62,115,116,114,105,110,103,32,46,32,116,109,112,49,53,51,56,49,53,51,57,41,0};
static C_char C_TLS li164[] C_aligned={C_lihdr(0,0,35),40,116,105,109,101,45,62,115,116,114,105,110,103,32,116,109,49,53,54,55,32,46,32,116,109,112,49,53,54,54,49,53,54,56,41,0,0,0,0,0};
static C_char C_TLS li165[] C_aligned={C_lihdr(0,0,36),40,115,116,114,105,110,103,45,62,116,105,109,101,32,116,105,109,49,53,57,55,32,46,32,116,109,112,49,53,57,54,49,53,57,56,41,0,0,0,0};
static C_char C_TLS li166[] C_aligned={C_lihdr(0,0,28),40,108,111,99,97,108,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,49,54,48,55,41,0,0,0,0};
static C_char C_TLS li167[] C_aligned={C_lihdr(0,0,26),40,117,116,99,45,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,49,54,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li168[] C_aligned={C_lihdr(0,0,29),40,108,111,99,97,108,45,116,105,109,101,122,111,110,101,45,97,98,98,114,101,118,105,97,116,105,111,110,41,0,0,0};
static C_char C_TLS li169[] C_aligned={C_lihdr(0,0,18),40,95,101,120,105,116,32,46,32,99,111,100,101,49,54,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li170[] C_aligned={C_lihdr(0,0,22),40,115,101,116,45,97,108,97,114,109,33,32,97,49,54,50,51,49,54,50,54,41,0,0};
static C_char C_TLS li171[] C_aligned={C_lihdr(0,0,50),40,115,101,116,45,98,117,102,102,101,114,105,110,103,45,109,111,100,101,33,32,112,111,114,116,49,54,50,55,32,109,111,100,101,49,54,50,56,32,46,32,115,105,122,101,49,54,50,57,41,0,0,0,0,0,0};
static C_char C_TLS li172[] C_aligned={C_lihdr(0,0,25),40,116,101,114,109,105,110,97,108,45,112,111,114,116,63,32,112,111,114,116,49,54,52,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li173[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,116,101,114,109,105,110,97,108,45,99,104,101,99,107,32,99,97,108,108,101,114,49,54,52,56,32,112,111,114,116,49,54,52,57,41,0,0,0,0,0,0};
static C_char C_TLS li174[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,110,97,109,101,32,112,111,114,116,49,54,54,49,41};
static C_char C_TLS li175[] C_aligned={C_lihdr(0,0,24),40,116,101,114,109,105,110,97,108,45,115,105,122,101,32,112,111,114,116,49,54,55,50,41};
static C_char C_TLS li176[] C_aligned={C_lihdr(0,0,15),40,103,101,116,45,104,111,115,116,45,110,97,109,101,41,0};
static C_char C_TLS li177[] C_aligned={C_lihdr(0,0,7),40,97,55,51,49,49,41,0};
static C_char C_TLS li178[] C_aligned={C_lihdr(0,0,13),40,103,49,55,51,53,32,109,49,55,51,55,41,0,0,0};
static C_char C_TLS li179[] C_aligned={C_lihdr(0,0,14),40,108,111,111,112,32,102,110,115,49,55,50,54,41,0,0};
static C_char C_TLS li180[] C_aligned={C_lihdr(0,0,55),40,97,55,51,49,55,32,100,105,114,49,55,48,53,49,55,48,54,49,55,49,49,32,102,105,108,49,55,48,55,49,55,48,56,49,55,49,50,32,101,120,116,49,55,48,57,49,55,49,48,49,55,49,51,41,0};
static C_char C_TLS li181[] C_aligned={C_lihdr(0,0,21),40,99,111,110,99,45,108,111,111,112,32,112,97,116,104,115,49,55,48,49,41,0,0,0};
static C_char C_TLS li182[] C_aligned={C_lihdr(0,0,18),40,103,108,111,98,32,46,32,112,97,116,104,115,49,54,57,57,41,0,0,0,0,0,0};
static C_char C_TLS li183[] C_aligned={C_lihdr(0,0,26),40,112,114,111,99,101,115,115,45,102,111,114,107,32,46,32,116,104,117,110,107,49,55,52,56,41,0,0,0,0,0,0};
static C_char C_TLS li184[] C_aligned={C_lihdr(0,0,28),40,115,101,116,97,114,103,32,97,49,55,55,51,49,55,55,57,32,97,49,55,55,50,49,55,56,48,41,0,0,0,0};
static C_char C_TLS li185[] C_aligned={C_lihdr(0,0,28),40,115,101,116,101,110,118,32,97,49,55,56,53,49,55,57,49,32,97,49,55,56,52,49,55,57,50,41,0,0,0,0};
static C_char C_TLS li186[] C_aligned={C_lihdr(0,0,18),40,100,111,108,111,111,112,49,56,50,57,32,105,49,56,51,52,41,0,0,0,0,0,0};
static C_char C_TLS li187[] C_aligned={C_lihdr(0,0,25),40,100,111,108,111,111,112,49,56,50,49,32,97,108,49,56,50,53,32,105,49,56,50,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li188[] C_aligned={C_lihdr(0,0,34),40,98,111,100,121,49,56,48,57,32,97,114,103,108,105,115,116,49,56,49,56,32,101,110,118,108,105,115,116,49,56,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li189[] C_aligned={C_lihdr(0,0,34),40,100,101,102,45,101,110,118,108,105,115,116,49,56,49,50,32,37,97,114,103,108,105,115,116,49,56,48,55,49,56,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li190[] C_aligned={C_lihdr(0,0,17),40,100,101,102,45,97,114,103,108,105,115,116,49,56,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li191[] C_aligned={C_lihdr(0,0,44),40,112,114,111,99,101,115,115,45,101,120,101,99,117,116,101,32,102,105,108,101,110,97,109,101,49,56,48,50,32,46,32,116,109,112,49,56,48,49,49,56,48,51,41,0,0,0,0};
static C_char C_TLS li192[] C_aligned={C_lihdr(0,0,39),40,35,35,115,121,115,35,112,114,111,99,101,115,115,45,119,97,105,116,32,112,105,100,49,56,54,52,32,110,111,104,97,110,103,49,56,54,53,41,0};
static C_char C_TLS li193[] C_aligned={C_lihdr(0,0,7),40,97,55,55,49,51,41,0};
static C_char C_TLS li194[] C_aligned={C_lihdr(0,0,36),40,97,55,55,49,57,32,101,112,105,100,49,56,57,53,32,101,110,111,114,109,49,56,57,54,32,101,99,111,100,101,49,56,57,55,41,0,0,0,0};
static C_char C_TLS li195[] C_aligned={C_lihdr(0,0,25),40,112,114,111,99,101,115,115,45,119,97,105,116,32,46,32,97,114,103,115,49,56,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li196[] C_aligned={C_lihdr(0,0,20),40,99,117,114,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0};
static C_char C_TLS li197[] C_aligned={C_lihdr(0,0,19),40,112,97,114,101,110,116,45,112,114,111,99,101,115,115,45,105,100,41,0,0,0,0,0};
static C_char C_TLS li198[] C_aligned={C_lihdr(0,0,17),40,115,108,101,101,112,32,97,49,57,48,51,49,57,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li199[] C_aligned={C_lihdr(0,0,33),40,112,114,111,99,101,115,115,45,115,105,103,110,97,108,32,105,100,49,57,48,55,32,46,32,115,105,103,49,57,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li200[] C_aligned={C_lihdr(0,0,21),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,41,0,0,0};
static C_char C_TLS li201[] C_aligned={C_lihdr(0,0,42),40,35,35,115,121,115,35,115,104,101,108,108,45,99,111,109,109,97,110,100,45,97,114,103,117,109,101,110,116,115,32,99,109,100,108,105,110,49,57,50,50,41,0,0,0,0,0,0};
static C_char C_TLS li202[] C_aligned={C_lihdr(0,0,30),40,112,114,111,99,101,115,115,45,114,117,110,32,102,49,57,50,53,32,46,32,97,114,103,115,49,57,50,54,41,0,0};
static C_char C_TLS li203[] C_aligned={C_lihdr(0,0,7),40,97,55,56,56,57,41,0};
static C_char C_TLS li204[] C_aligned={C_lihdr(0,0,29),40,97,55,56,57,53,32,95,49,57,54,52,32,102,108,103,49,57,54,53,32,99,111,100,49,57,54,54,41,0,0,0};
static C_char C_TLS li205[] C_aligned={C_lihdr(0,0,8),40,102,95,55,56,55,53,41};
static C_char C_TLS li206[] C_aligned={C_lihdr(0,0,68),40,109,97,107,101,45,111,110,45,99,108,111,115,101,32,108,111,99,49,57,53,50,32,112,105,100,49,57,53,51,32,99,108,115,118,101,99,49,57,53,52,32,105,100,120,49,57,53,53,32,105,100,120,97,49,57,53,54,32,105,100,120,98,49,57,53,55,41,0,0,0,0};
static C_char C_TLS li207[] C_aligned={C_lihdr(0,0,7),40,97,55,57,49,56,41,0};
static C_char C_TLS li208[] C_aligned={C_lihdr(0,0,19),40,97,55,57,50,52,32,105,49,57,55,54,32,111,49,57,55,55,41,0,0,0,0,0};
static C_char C_TLS li209[] C_aligned={C_lihdr(0,0,22),40,110,101,101,100,101,100,45,112,105,112,101,32,112,111,114,116,49,57,55,49,41,0,0};
static C_char C_TLS li210[] C_aligned={C_lihdr(0,0,34),40,99,111,110,110,101,99,116,45,112,97,114,101,110,116,32,112,105,112,101,49,57,55,57,32,112,111,114,116,49,57,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li211[] C_aligned={C_lihdr(0,0,43),40,99,111,110,110,101,99,116,45,99,104,105,108,100,32,112,105,112,101,49,57,56,56,32,112,111,114,116,49,57,56,57,32,115,116,100,102,100,49,57,57,48,41,0,0,0,0,0};
static C_char C_TLS li212[] C_aligned={C_lihdr(0,0,7),40,97,55,57,57,57,41,0};
static C_char C_TLS li213[] C_aligned={C_lihdr(0,0,67),40,115,112,97,119,110,32,99,109,100,50,48,48,52,32,97,114,103,115,50,48,48,53,32,101,110,118,50,48,48,54,32,115,116,100,111,117,116,102,50,48,48,55,32,115,116,100,105,110,102,50,48,48,56,32,115,116,100,101,114,114,102,50,48,48,57,41,0,0,0,0,0};
static C_char C_TLS li214[] C_aligned={C_lihdr(0,0,59),40,105,110,112,117,116,45,112,111,114,116,32,108,111,99,50,48,49,54,32,99,109,100,50,48,49,56,32,112,105,112,101,50,48,49,57,32,115,116,100,102,50,48,50,48,32,111,110,45,99,108,111,115,101,50,48,50,50,41,0,0,0,0,0};
static C_char C_TLS li215[] C_aligned={C_lihdr(0,0,60),40,111,117,116,112,117,116,45,112,111,114,116,32,108,111,99,50,48,50,55,32,99,109,100,50,48,50,57,32,112,105,112,101,50,48,51,48,32,115,116,100,102,50,48,51,49,32,111,110,45,99,108,111,115,101,50,48,51,51,41,0,0,0,0};
static C_char C_TLS li216[] C_aligned={C_lihdr(0,0,7),40,97,56,48,52,57,41,0};
static C_char C_TLS li217[] C_aligned={C_lihdr(0,0,50),40,97,56,48,53,53,32,105,110,112,105,112,101,50,48,52,55,32,111,117,116,112,105,112,101,50,48,52,56,32,101,114,114,112,105,112,101,50,48,52,57,32,112,105,100,50,48,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li218[] C_aligned={C_lihdr(0,0,83),40,35,35,115,121,115,35,112,114,111,99,101,115,115,32,108,111,99,50,48,51,56,32,99,109,100,50,48,51,57,32,97,114,103,115,50,48,52,48,32,101,110,118,50,48,52,49,32,115,116,100,111,117,116,102,50,48,52,50,32,115,116,100,105,110,102,50,48,52,51,32,115,116,100,101,114,114,102,50,48,52,52,41,0,0,0,0,0};
static C_char C_TLS li219[] C_aligned={C_lihdr(0,0,21),40,97,56,49,49,50,32,103,50,48,55,48,50,48,55,49,50,48,55,50,41,0,0,0};
static C_char C_TLS li220[] C_aligned={C_lihdr(0,0,19),40,99,104,107,115,116,114,108,115,116,32,108,115,116,50,48,53,57,41,0,0,0,0,0};
static C_char C_TLS li221[] C_aligned={C_lihdr(0,0,7),40,97,56,49,51,48,41,0};
static C_char C_TLS li222[] C_aligned={C_lihdr(0,0,38),40,97,56,49,51,54,32,105,110,50,48,56,49,32,111,117,116,50,48,56,50,32,112,105,100,50,48,56,51,32,101,114,114,50,48,56,52,41,0,0};
static C_char C_TLS li223[] C_aligned={C_lihdr(0,0,52),40,37,112,114,111,99,101,115,115,32,108,111,99,50,48,53,51,32,101,114,114,63,50,48,53,52,32,99,109,100,50,48,53,53,32,97,114,103,115,50,48,53,54,32,101,110,118,50,48,53,55,41,0,0,0,0};
static C_char C_TLS li224[] C_aligned={C_lihdr(0,0,27),40,98,111,100,121,50,49,48,49,32,97,114,103,115,50,49,49,48,32,101,110,118,50,49,49,49,41,0,0,0,0,0};
static C_char C_TLS li225[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,50,49,48,52,32,37,97,114,103,115,50,48,57,57,50,49,49,51,41,0,0,0,0,0};
static C_char C_TLS li226[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,50,49,48,51,41,0,0};
static C_char C_TLS li227[] C_aligned={C_lihdr(0,0,31),40,112,114,111,99,101,115,115,32,99,109,100,50,48,57,52,32,46,32,116,109,112,50,48,57,51,50,48,57,53,41,0};
static C_char C_TLS li228[] C_aligned={C_lihdr(0,0,27),40,98,111,100,121,50,49,51,50,32,97,114,103,115,50,49,52,49,32,101,110,118,50,49,52,50,41,0,0,0,0,0};
static C_char C_TLS li229[] C_aligned={C_lihdr(0,0,27),40,100,101,102,45,101,110,118,50,49,51,53,32,37,97,114,103,115,50,49,51,48,50,49,52,52,41,0,0,0,0,0};
static C_char C_TLS li230[] C_aligned={C_lihdr(0,0,14),40,100,101,102,45,97,114,103,115,50,49,51,52,41,0,0};
static C_char C_TLS li231[] C_aligned={C_lihdr(0,0,32),40,112,114,111,99,101,115,115,42,32,99,109,100,50,49,50,53,32,46,32,116,109,112,50,49,50,52,50,49,50,54,41};
static C_char C_TLS li232[] C_aligned={C_lihdr(0,0,14),40,102,95,56,52,50,54,32,120,50,49,57,53,41,0,0};
static C_char C_TLS li233[] C_aligned={C_lihdr(0,0,7),40,97,56,51,52,57,41,0};
static C_char C_TLS li234[] C_aligned={C_lihdr(0,0,7),40,97,56,51,53,52,41,0};
static C_char C_TLS li235[] C_aligned={C_lihdr(0,0,7),40,97,56,51,55,56,41,0};
static C_char C_TLS li236[] C_aligned={C_lihdr(0,0,19),40,108,111,111,112,32,102,115,50,49,57,55,32,114,50,49,57,56,41,0,0,0,0,0};
static C_char C_TLS li237[] C_aligned={C_lihdr(0,0,16),40,102,95,56,52,52,53,32,46,32,95,50,49,56,56,41};
static C_char C_TLS li238[] C_aligned={C_lihdr(0,0,16),40,102,95,56,52,51,55,32,46,32,95,50,49,56,55,41};
static C_char C_TLS li239[] C_aligned={C_lihdr(0,0,38),40,98,111,100,121,50,49,54,53,32,97,99,116,105,111,110,50,49,55,53,32,105,100,50,49,55,54,32,108,105,109,105,116,50,49,55,55,41,0,0};
static C_char C_TLS li240[] C_aligned={C_lihdr(0,0,43),40,100,101,102,45,108,105,109,105,116,50,49,54,57,32,37,97,99,116,105,111,110,50,49,54,50,50,50,50,56,32,37,105,100,50,49,54,51,50,50,50,57,41,0,0,0,0,0};
static C_char C_TLS li241[] C_aligned={C_lihdr(0,0,28),40,100,101,102,45,105,100,50,49,54,56,32,37,97,99,116,105,111,110,50,49,54,50,50,50,51,49,41,0,0,0,0};
static C_char C_TLS li242[] C_aligned={C_lihdr(0,0,19),40,97,56,52,54,53,32,120,50,50,51,51,32,121,50,50,51,52,41,0,0,0,0,0};
static C_char C_TLS li243[] C_aligned={C_lihdr(0,0,16),40,100,101,102,45,97,99,116,105,111,110,50,49,54,55,41};
static C_char C_TLS li244[] C_aligned={C_lihdr(0,0,51),40,102,105,110,100,45,102,105,108,101,115,32,100,105,114,50,49,53,54,32,112,114,101,100,50,49,53,55,32,46,32,97,99,116,105,111,110,45,105,100,45,108,105,109,105,116,50,49,53,56,41,0,0,0,0,0};
static C_char C_TLS li245[] C_aligned={C_lihdr(0,0,29),40,115,101,116,45,114,111,111,116,45,100,105,114,101,99,116,111,114,121,33,32,100,105,114,50,50,52,56,41,0,0,0};
static C_char C_TLS li246[] C_aligned={C_lihdr(0,0,14),40,97,56,53,54,52,32,112,105,100,57,54,50,41,0,0};
static C_char C_TLS li247[] C_aligned={C_lihdr(0,0,22),40,97,56,53,56,50,32,112,105,100,57,54,57,32,112,103,105,100,57,55,48,41,0,0};
static C_char C_TLS li248[] C_aligned={C_lihdr(0,0,7),40,97,56,54,48,51,41,0};
static C_char C_TLS li249[] C_aligned={C_lihdr(0,0,13),40,97,56,54,48,54,32,105,100,56,49,49,41,0,0,0};
static C_char C_TLS li250[] C_aligned={C_lihdr(0,0,7),40,97,56,54,50,49,41,0};
static C_char C_TLS li251[] C_aligned={C_lihdr(0,0,13),40,97,56,54,50,52,32,105,100,56,48,53,41,0,0,0};
static C_char C_TLS li252[] C_aligned={C_lihdr(0,0,7),40,97,56,54,51,57,41,0};
static C_char C_TLS li253[] C_aligned={C_lihdr(0,0,13),40,97,56,54,52,50,32,105,100,55,57,57,41,0,0,0};
static C_char C_TLS li254[] C_aligned={C_lihdr(0,0,7),40,97,56,54,53,55,41,0};
static C_char C_TLS li255[] C_aligned={C_lihdr(0,0,13),40,97,56,54,54,48,32,105,100,55,57,51,41,0,0,0};
static C_char C_TLS li256[] C_aligned={C_lihdr(0,0,12),40,97,56,54,55,53,32,110,55,56,54,41,0,0,0,0};
static C_char C_TLS li257[] C_aligned={C_lihdr(0,0,15),40,97,56,54,56,49,32,112,111,114,116,51,54,55,41,0};
static C_char C_TLS li258[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k8532 in set-root-directory! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall stub2243(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2243(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from k7771 */
static C_word C_fcall stub1904(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1904(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from parent-process-id in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall stub1901(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1901(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from current-process-id in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall stub1899(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1899(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from freeenv */
static C_word C_fcall stub1794(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1794(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_env();
return C_r;}

/* from k7477 */
static C_word C_fcall stub1787(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1787(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from freeargs */
static C_word C_fcall stub1782(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1782(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k7458 */
static C_word C_fcall stub1775(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1775(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k7434 */
static C_word C_fcall stub1763(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1763(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from fork */
static C_word C_fcall stub1746(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1746(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

/* from getit */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1686(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1686(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
if(gethostname(C_hostbuf, 256) == -1) return(NULL);else return(C_hostbuf);
C_ret:
#undef return

return C_r;}

/* from k7241 */
static C_word C_fcall stub1667(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1667(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int *t1=(int *)C_c_pointer_nn(C_a1);
int *t2=(int *)C_c_pointer_nn(C_a2);
C_r=C_fix((C_word)get_tty_size(t0,t1,t2));
return C_r;}

/* from k7218 */
static C_word C_fcall stub1657(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1657(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k7107 */
static C_word C_fcall stub1624(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1624(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

/* from k7085 */
static C_word C_fcall stub1619(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1619(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from local-timezone-abbreviation in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub1614(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub1614(C_word C_buf){
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
static C_word C_fcall stub1586(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub1586(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_word t2=(C_word )(C_a2);
C_r=((C_word)C_strptime(t0,t1,t2));
return C_r;}

/* from strftime */
static C_word C_fcall stub1556(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1556(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_word t1=(C_word )(C_a1);
C_r=C_mpointer(&C_a,(void*)C_strftime(t0,t1));
return C_r;}

/* from asctime */
static C_word C_fcall stub1550(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1550(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k6867 */
static C_word C_fcall stub1529(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1529(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k6717 */
static C_word C_fcall stub1476(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1476(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k6655 */
static C_word C_fcall stub1445(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub1445(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k6554 */
static C_word C_fcall stub1427(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1427(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k5300 in k5296 in file-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall stub1008(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub1008(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from k5003 */
static C_word C_fcall stub914(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub914(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)initgroups(t0,t1));
return C_r;}

/* from k4872 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub871(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub871(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
if(C_groups != NULL) C_free(C_groups);C_groups = (gid_t *)C_malloc(sizeof(gid_t) * n);if(C_groups == NULL) return(0);else return(1);
C_ret:
#undef return

return C_r;}

/* from k4865 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub867(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub867(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
return(getgroups(n, C_groups));
C_ret:
#undef return

return C_r;}

/* from k4779 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub838(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub838(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
return(C_group->gr_mem[ i ]);
C_ret:
#undef return

return C_r;}

/* from a8603 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall stub809(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub809(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from a8621 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall stub803(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub803(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a8639 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall stub797(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub797(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from a8657 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall stub791(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub791(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

/* from k2856 */
static C_word C_fcall stub127(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub127(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mk_bool(C_test_fd_set(t0,t1));
return C_r;}

/* from k2846 */
static C_word C_fcall stub121(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub121(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_set_fd_set(t0,t1);
return C_r;}

/* from k2836 */
static C_word C_fcall stub116(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub116(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_zero_fd_set(t0);
return C_r;}

/* from k2618 */
static C_word C_fcall stub33(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub33(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

/* from k2567 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub26(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub26(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;struct timeval tm;FD_ZERO(&in);FD_SET(fd, &in);tm.tv_sec = tm.tv_usec = 0;if(select(fd + 1, &in, NULL, NULL, &tm) == -1) return(-1);else return(FD_ISSET(fd, &in) ? 1 : 0);
C_ret:
#undef return

return C_r;}

/* from k2560 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_ret; C_cblockend
static C_word C_fcall stub22(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub22(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) return(0);return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_ret:
#undef return

return C_r;}

/* from k2536 */
static C_word C_fcall stub12(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub12(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2512)
static void C_ccall f_2512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8682)
static void C_ccall f_8682(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8698)
static void C_ccall f_8698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8686)
static void C_ccall f_8686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8689)
static void C_ccall f_8689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8676)
static void C_ccall f_8676(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4621)
static void C_ccall f_4621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8661)
static void C_ccall f_8661(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8671)
static void C_ccall f_8671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8658)
static void C_ccall f_8658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4663)
static void C_ccall f_4663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8643)
static void C_ccall f_8643(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8653)
static void C_ccall f_8653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8640)
static void C_ccall f_8640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8625)
static void C_ccall f_8625(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8635)
static void C_ccall f_8635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8622)
static void C_ccall f_8622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4671)
static void C_ccall f_4671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8607)
static void C_ccall f_8607(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8617)
static void C_ccall f_8617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8604)
static void C_ccall f_8604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8583)
static void C_ccall f_8583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8599)
static void C_ccall f_8599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8565)
static void C_ccall f_8565(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8578)
static void C_ccall f_8578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8572)
static void C_ccall f_8572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5232)
static void C_ccall f_5232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8542)
static void C_ccall f_8542(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8534)
static void C_ccall f_8534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8552)
static void C_fcall f_8552(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_8283)
static void C_ccall f_8283r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8460)
static void C_fcall f_8460(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8466)
static void C_ccall f_8466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8455)
static void C_fcall f_8455(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8450)
static void C_fcall f_8450(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8285)
static void C_fcall f_8285(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8437)
static void C_ccall f_8437(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8445)
static void C_ccall f_8445(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8292)
static void C_fcall f_8292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8425)
static void C_ccall f_8425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8419)
static void C_ccall f_8419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8302)
static void C_ccall f_8302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8304)
static void C_fcall f_8304(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8323)
static void C_ccall f_8323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8405)
static void C_ccall f_8405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8412)
static void C_ccall f_8412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8399)
static void C_ccall f_8399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8338)
static void C_ccall f_8338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8392)
static void C_ccall f_8392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8389)
static void C_ccall f_8389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8379)
static void C_ccall f_8379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8355)
static void C_ccall f_8355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8377)
static void C_ccall f_8377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8363)
static void C_ccall f_8363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8370)
static void C_ccall f_8370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8367)
static void C_ccall f_8367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8350)
static void C_ccall f_8350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8348)
static void C_ccall f_8348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8426)
static void C_ccall f_8426(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8223)
static void C_ccall f_8223(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8223)
static void C_ccall f_8223r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8235)
static void C_fcall f_8235(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8230)
static void C_fcall f_8230(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8225)
static void C_fcall f_8225(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8163)
static void C_ccall f_8163(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8163)
static void C_ccall f_8163r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8175)
static void C_fcall f_8175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8170)
static void C_fcall f_8170(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8165)
static void C_fcall f_8165(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8102)
static void C_fcall f_8102(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8157)
static void C_ccall f_8157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8161)
static void C_ccall f_8161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8123)
static void C_ccall f_8123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8126)
static void C_ccall f_8126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8137)
static void C_ccall f_8137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8131)
static void C_ccall f_8131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8104)
static void C_fcall f_8104(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8113)
static void C_ccall f_8113(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8044)
static void C_ccall f_8044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8087)
static void C_ccall f_8087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8067)
static void C_ccall f_8067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8083)
static void C_ccall f_8083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8071)
static void C_ccall f_8071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8079)
static void C_ccall f_8079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8075)
static void C_ccall f_8075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8050)
static void C_ccall f_8050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8033)
static void C_fcall f_8033(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8037)
static void C_ccall f_8037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8022)
static void C_fcall f_8022(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8026)
static void C_ccall f_8026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7977)
static void C_fcall f_7977(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7984)
static void C_ccall f_7984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7987)
static void C_ccall f_7987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7994)
static void C_fcall f_7994(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8000)
static void C_ccall f_8000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8007)
static void C_ccall f_8007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8010)
static void C_ccall f_8010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7998)
static void C_ccall f_7998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7944)
static void C_fcall f_7944(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7957)
static void C_ccall f_7957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7869)
static void C_ccall f_7869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7930)
static void C_fcall f_7930(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7943)
static void C_ccall f_7943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7910)
static void C_fcall f_7910(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7925)
static void C_ccall f_7925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7919)
static void C_ccall f_7919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7873)
static void C_fcall f_7873(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7875)
static void C_ccall f_7875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7890)
static void C_ccall f_7890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7817)
static void C_ccall f_7817(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7817)
static void C_ccall f_7817r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7824)
static void C_ccall f_7824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7843)
static void C_ccall f_7843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7811)
static void C_ccall f_7811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7802)
static void C_ccall f_7802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7806)
static void C_ccall f_7806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7775)
static void C_ccall f_7775(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7775)
static void C_ccall f_7775r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7768)
static void C_ccall f_7768(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7765)
static void C_ccall f_7765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7762)
static void C_ccall f_7762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7720)
static void C_ccall f_7720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7714)
static void C_ccall f_7714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7667)
static void C_ccall f_7667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7485)
static void C_ccall f_7485(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7485)
static void C_ccall f_7485r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7619)
static void C_fcall f_7619(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7614)
static void C_fcall f_7614(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7487)
static void C_fcall f_7487(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7497)
static void C_ccall f_7497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7505)
static void C_fcall f_7505(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7551)
static C_word C_fcall f_7551(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7518)
static void C_fcall f_7518(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7543)
static void C_ccall f_7543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7521)
static void C_ccall f_7521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7466)
static C_word C_fcall f_7466(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7447)
static C_word C_fcall f_7447(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_7405)
static void C_ccall f_7405(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7405)
static void C_ccall f_7405r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7430)
static void C_ccall f_7430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7291)
static void C_ccall f_7291(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7291)
static void C_ccall f_7291r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7297)
static void C_fcall f_7297(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7318)
static void C_ccall f_7318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7397)
static void C_ccall f_7397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7322)
static void C_ccall f_7322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7332)
static void C_ccall f_7332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7334)
static void C_fcall f_7334(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7351)
static void C_ccall f_7351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7355)
static void C_fcall f_7355(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7363)
static void C_ccall f_7363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7367)
static void C_ccall f_7367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7312)
static void C_ccall f_7312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7279)
static void C_ccall f_7279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7283)
static void C_ccall f_7283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7286)
static void C_ccall f_7286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7244)
static void C_ccall f_7244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7248)
static void C_ccall f_7248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7268)
static void C_ccall f_7268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7272)
static void C_ccall f_7272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7221)
static void C_ccall f_7221(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7225)
static void C_ccall f_7225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7189)
static void C_fcall f_7189(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7193)
static void C_ccall f_7193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7170)
static void C_ccall f_7170(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7174)
static void C_ccall f_7174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7177)
static void C_ccall f_7177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7130)
static void C_fcall f_7130(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7104)
static void C_ccall f_7104(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7088)
static void C_ccall f_7088(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_7088)
static void C_ccall f_7088r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_7076)
static void C_ccall f_7076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7061)
static void C_ccall f_7061(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7065)
static void C_ccall f_7065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7046)
static void C_ccall f_7046(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7000)
static void C_ccall f_7000(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7000)
static void C_ccall f_7000r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7004)
static void C_ccall f_7004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7017)
static void C_ccall f_7017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7021)
static void C_ccall f_7021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6931)
static void C_ccall f_6931(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6931)
static void C_ccall f_6931r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6935)
static void C_ccall f_6935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6938)
static void C_ccall f_6938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6960)
static void C_ccall f_6960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6957)
static void C_ccall f_6957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6947)
static void C_ccall f_6947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6870)
static void C_ccall f_6870r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6874)
static void C_ccall f_6874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6880)
static void C_ccall f_6880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6826)
static void C_ccall f_6826(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6826)
static void C_ccall f_6826r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6830)
static void C_ccall f_6830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6792)
static void C_ccall f_6792(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6792)
static void C_ccall f_6792r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6796)
static void C_ccall f_6796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6773)
static void C_fcall f_6773(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6767)
static void C_ccall f_6767(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6758)
static void C_ccall f_6758(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6723)
static void C_ccall f_6723(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6723)
static void C_ccall f_6723r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6661)
static void C_ccall f_6661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_6661)
static void C_ccall f_6661r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_6665)
static void C_ccall f_6665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6671)
static void C_ccall f_6671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6690)
static void C_ccall f_6690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6677)
static void C_ccall f_6677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6557)
static void C_ccall f_6557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6563)
static void C_fcall f_6563(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6567)
static void C_ccall f_6567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6575)
static void C_fcall f_6575(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6601)
static void C_ccall f_6601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6605)
static void C_ccall f_6605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6593)
static void C_ccall f_6593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6537)
static void C_ccall f_6537(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6545)
static void C_ccall f_6545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6520)
static void C_ccall f_6520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6531)
static void C_ccall f_6531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6535)
static void C_ccall f_6535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6518)
static void C_ccall f_6518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6501)
static void C_ccall f_6501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6458)
static void C_fcall f_6458(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6479)
static void C_ccall f_6479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6475)
static void C_ccall f_6475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6423)
static void C_ccall f_6423(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6400)
static void C_ccall f_6400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6370)
static void C_ccall f_6370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6348)
static void C_fcall f_6348(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6274)
static void C_fcall f_6274(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6296)
static void C_ccall f_6296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6302)
static void C_fcall f_6302(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6263)
static void C_ccall f_6263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6259)
static void C_ccall f_6259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6252)
static void C_ccall f_6252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6245)
static void C_fcall f_6245(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5976)
static void C_ccall f_5976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5976)
static void C_ccall f_5976r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_6172)
static void C_fcall f_6172(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6167)
static void C_fcall f_6167(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6162)
static void C_fcall f_6162(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5978)
static void C_fcall f_5978(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5982)
static void C_ccall f_5982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6088)
static void C_ccall f_6088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6106)
static void C_fcall f_6106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6030)
static void C_fcall f_6030(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6045)
static void C_ccall f_6045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6034)
static void C_ccall f_6034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6037)
static void C_ccall f_6037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5984)
static void C_fcall f_5984(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6019)
static void C_ccall f_6019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5494)
static void C_ccall f_5494r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5898)
static void C_fcall f_5898(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5893)
static void C_fcall f_5893(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5888)
static void C_fcall f_5888(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5883)
static void C_fcall f_5883(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5496)
static void C_fcall f_5496(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5500)
static void C_ccall f_5500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5506)
static void C_ccall f_5506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5756)
static void C_ccall f_5756(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5762)
static void C_fcall f_5762(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5858)
static void C_ccall f_5858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5848)
static void C_ccall f_5848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5842)
static void C_ccall f_5842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5814)
static void C_ccall f_5814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_ccall f_5781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5688)
static void C_fcall f_5688(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5690)
static void C_fcall f_5690(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5671)
static void C_ccall f_5671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5675)
static void C_ccall f_5675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5650)
static void C_ccall f_5650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5660)
static void C_ccall f_5660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5638)
static void C_ccall f_5638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5625)
static void C_ccall f_5625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5629)
static void C_ccall f_5629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5623)
static void C_ccall f_5623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5538)
static void C_fcall f_5538(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5550)
static void C_fcall f_5550(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5596)
static void C_ccall f_5596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5590)
static void C_ccall f_5590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5530)
static C_word C_fcall f_5530(C_word t0);
C_noret_decl(f_5507)
static void C_fcall f_5507(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5511)
static void C_ccall f_5511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5467)
static void C_ccall f_5467r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5474)
static void C_fcall f_5474(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5477)
static void C_ccall f_5477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5422)
static void C_ccall f_5422(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5426)
static void C_ccall f_5426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5461)
static void C_ccall f_5461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5444)
static void C_ccall f_5444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5420)
static void C_ccall f_5420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5379)
static void C_fcall f_5379(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5392)
static void C_ccall f_5392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5342)
static void C_fcall f_5342(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5350)
static void C_ccall f_5350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5298)
static void C_ccall f_5298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_ccall f_5302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_fcall f_5330(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5237)
static void C_ccall f_5237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5272)
static void C_ccall f_5272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5244)
static void C_ccall f_5244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5250)
static void C_ccall f_5250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5195)
static void C_ccall f_5195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5228)
static void C_ccall f_5228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5216)
static void C_ccall f_5216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5224)
static void C_ccall f_5224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5220)
static void C_ccall f_5220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5186)
static void C_ccall f_5186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5134)
static void C_fcall f_5134(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5156)
static void C_ccall f_5156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5132)
static void C_ccall f_5132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5013)
static void C_ccall f_5013(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5001)
static void C_ccall f_5001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5029)
static void C_ccall f_5029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4943)
static void C_ccall f_4943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4948)
static void C_fcall f_4948(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4964)
static void C_ccall f_4964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4876)
static void C_ccall f_4876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4883)
static void C_ccall f_4883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4886)
static void C_ccall f_4886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4891)
static void C_fcall f_4891(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4783)
static void C_ccall f_4783r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4787)
static void C_ccall f_4787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4841)
static void C_ccall f_4841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_fcall f_4790(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4803)
static void C_ccall f_4803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4807)
static void C_ccall f_4807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4813)
static void C_fcall f_4813(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4817)
static void C_ccall f_4817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4766)
static void C_ccall f_4766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4677)
static void C_ccall f_4677r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4681)
static void C_ccall f_4681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4684)
static void C_fcall f_4684(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4697)
static void C_ccall f_4697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4709)
static void C_ccall f_4709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4713)
static void C_ccall f_4713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4623)
static void C_ccall f_4623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4627)
static void C_ccall f_4627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static void C_ccall f_4634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4646)
static void C_ccall f_4646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4650)
static void C_ccall f_4650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4605)
static void C_ccall f_4605(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4584)
static void C_ccall f_4584(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4552)
static void C_ccall f_4552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4558)
static void C_fcall f_4558(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4524)
static C_word C_fcall f_4524(C_word t0);
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4466)
static void C_ccall f_4466(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4419)
static void C_ccall f_4419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4423)
static void C_ccall f_4423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4413)
static void C_ccall f_4413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4379)
static void C_ccall f_4379r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4383)
static void C_ccall f_4383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4389)
static void C_ccall f_4389(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4389)
static void C_ccall f_4389r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4364)
static void C_ccall f_4364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4331)
static void C_ccall f_4331r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4335)
static void C_ccall f_4335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4346)
static void C_ccall f_4346r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4340)
static void C_ccall f_4340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4319)
static void C_ccall f_4319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4322)
static void C_ccall f_4322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4279)
static void C_ccall f_4279r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4300)
static void C_ccall f_4300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4293)
static void C_ccall f_4293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4228)
static void C_fcall f_4228(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4200)
static void C_ccall f_4200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_fcall f_4020(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4186)
static void C_ccall f_4186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4175)
static void C_ccall f_4175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4182)
static void C_ccall f_4182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_fcall f_4039(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4153)
static void C_ccall f_4153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4083)
static void C_fcall f_4083(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4096)
static void C_ccall f_4096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4077)
static void C_ccall f_4077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4064)
static void C_ccall f_4064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4049)
static void C_ccall f_4049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4053)
static void C_ccall f_4053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_fcall f_3909(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3958)
static void C_ccall f_3958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3950)
static void C_ccall f_3950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3939)
static void C_ccall f_3939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3837)
static void C_fcall f_3837(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3852)
static void C_ccall f_3852(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3747)
static void C_ccall f_3747(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_3695)
static void C_fcall f_3695(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3690)
static void C_fcall f_3690(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3592)
static void C_fcall f_3592(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3689)
static void C_ccall f_3689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3623)
static void C_fcall f_3623(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3645)
static void C_fcall f_3645(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3588)
static void C_ccall f_3588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3383)
static void C_ccall f_3383r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3387)
static void C_ccall f_3387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3402)
static void C_fcall f_3402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3475)
static void C_ccall f_3475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3414)
static void C_fcall f_3414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3421)
static void C_fcall f_3421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3447)
static void C_ccall f_3447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3334)
static void C_ccall f_3334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3346)
static void C_ccall f_3346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3318)
static void C_ccall f_3318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_ccall f_3300(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3290)
static void C_ccall f_3290(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3297)
static void C_ccall f_3297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3280)
static void C_ccall f_3280(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3269)
static void C_ccall f_3269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3238)
static void C_ccall f_3238(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3230)
static void C_ccall f_3230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3220)
static void C_ccall f_3220(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3218)
static void C_ccall f_3218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3212)
static void C_ccall f_3212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3176)
static void C_ccall f_3176r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3139)
static void C_fcall f_3139(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3098)
static void C_fcall f_3098(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3106)
static C_word C_fcall f_3106(C_word t0,C_word t1);
C_noret_decl(f_2875)
static void C_ccall f_2875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3050)
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3058)
static C_word C_fcall f_3058(C_word t0,C_word t1);
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2884)
static void C_fcall f_2884(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_fcall f_2988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2996)
static C_word C_fcall f_2996(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2923)
static void C_fcall f_2923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2941)
static void C_fcall f_2941(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2949)
static C_word C_fcall f_2949(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2814)
static void C_ccall f_2814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2762)
static void C_ccall f_2762r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2667)
static void C_ccall f_2667r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2684)
static void C_ccall f_2684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2550)
static void C_ccall f_2550(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_8552)
static void C_fcall trf_8552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8552(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8552(t0,t1);}

C_noret_decl(trf_8460)
static void C_fcall trf_8460(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8460(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8460(t0,t1);}

C_noret_decl(trf_8455)
static void C_fcall trf_8455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8455(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8455(t0,t1,t2);}

C_noret_decl(trf_8450)
static void C_fcall trf_8450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8450(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8450(t0,t1,t2,t3);}

C_noret_decl(trf_8285)
static void C_fcall trf_8285(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8285(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8285(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8292)
static void C_fcall trf_8292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8292(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8292(t0,t1);}

C_noret_decl(trf_8304)
static void C_fcall trf_8304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8304(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8304(t0,t1,t2,t3);}

C_noret_decl(trf_8235)
static void C_fcall trf_8235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8235(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8235(t0,t1);}

C_noret_decl(trf_8230)
static void C_fcall trf_8230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8230(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8230(t0,t1,t2);}

C_noret_decl(trf_8225)
static void C_fcall trf_8225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8225(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8225(t0,t1,t2,t3);}

C_noret_decl(trf_8175)
static void C_fcall trf_8175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8175(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8175(t0,t1);}

C_noret_decl(trf_8170)
static void C_fcall trf_8170(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8170(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8170(t0,t1,t2);}

C_noret_decl(trf_8165)
static void C_fcall trf_8165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8165(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8165(t0,t1,t2,t3);}

C_noret_decl(trf_8102)
static void C_fcall trf_8102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8102(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_8102(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_8104)
static void C_fcall trf_8104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8104(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8104(t0,t1,t2);}

C_noret_decl(trf_8033)
static void C_fcall trf_8033(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8033(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8033(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_8022)
static void C_fcall trf_8022(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8022(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_8022(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_7977)
static void C_fcall trf_7977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7977(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_7977(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7994)
static void C_fcall trf_7994(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7994(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7994(t0,t1);}

C_noret_decl(trf_7944)
static void C_fcall trf_7944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7944(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7944(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7930)
static void C_fcall trf_7930(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7930(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7930(t0,t1,t2,t3);}

C_noret_decl(trf_7910)
static void C_fcall trf_7910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7910(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7910(t0,t1,t2);}

C_noret_decl(trf_7873)
static void C_fcall trf_7873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7873(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_7873(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7619)
static void C_fcall trf_7619(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7619(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7619(t0,t1);}

C_noret_decl(trf_7614)
static void C_fcall trf_7614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7614(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7614(t0,t1,t2);}

C_noret_decl(trf_7487)
static void C_fcall trf_7487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7487(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7487(t0,t1,t2,t3);}

C_noret_decl(trf_7505)
static void C_fcall trf_7505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7505(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7505(t0,t1,t2,t3);}

C_noret_decl(trf_7518)
static void C_fcall trf_7518(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7518(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7518(t0,t1);}

C_noret_decl(trf_7297)
static void C_fcall trf_7297(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7297(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7297(t0,t1,t2);}

C_noret_decl(trf_7334)
static void C_fcall trf_7334(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7334(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7334(t0,t1,t2);}

C_noret_decl(trf_7355)
static void C_fcall trf_7355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7355(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7355(t0,t1,t2);}

C_noret_decl(trf_7189)
static void C_fcall trf_7189(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7189(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7189(t0,t1,t2);}

C_noret_decl(trf_7130)
static void C_fcall trf_7130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7130(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7130(t0,t1);}

C_noret_decl(trf_6773)
static void C_fcall trf_6773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6773(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6773(t0,t1,t2);}

C_noret_decl(trf_6563)
static void C_fcall trf_6563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6563(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6563(t0,t1,t2);}

C_noret_decl(trf_6575)
static void C_fcall trf_6575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6575(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6575(t0,t1,t2);}

C_noret_decl(trf_6458)
static void C_fcall trf_6458(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6458(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6458(t0,t1);}

C_noret_decl(trf_6348)
static void C_fcall trf_6348(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6348(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6348(t0,t1,t2,t3);}

C_noret_decl(trf_6274)
static void C_fcall trf_6274(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6274(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6274(t0,t1,t2,t3);}

C_noret_decl(trf_6302)
static void C_fcall trf_6302(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6302(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6302(t0,t1);}

C_noret_decl(trf_6245)
static void C_fcall trf_6245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6245(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6245(t0,t1);}

C_noret_decl(trf_6172)
static void C_fcall trf_6172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6172(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6172(t0,t1);}

C_noret_decl(trf_6167)
static void C_fcall trf_6167(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6167(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6167(t0,t1,t2);}

C_noret_decl(trf_6162)
static void C_fcall trf_6162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6162(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6162(t0,t1,t2,t3);}

C_noret_decl(trf_5978)
static void C_fcall trf_5978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5978(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5978(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6106)
static void C_fcall trf_6106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6106(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6106(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6030)
static void C_fcall trf_6030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6030(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6030(t0,t1);}

C_noret_decl(trf_5984)
static void C_fcall trf_5984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5984(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5984(t0,t1,t2,t3);}

C_noret_decl(trf_5898)
static void C_fcall trf_5898(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5898(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5898(t0,t1);}

C_noret_decl(trf_5893)
static void C_fcall trf_5893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5893(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5893(t0,t1,t2);}

C_noret_decl(trf_5888)
static void C_fcall trf_5888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5888(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5888(t0,t1,t2,t3);}

C_noret_decl(trf_5883)
static void C_fcall trf_5883(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5883(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5883(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5496)
static void C_fcall trf_5496(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5496(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5496(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5762)
static void C_fcall trf_5762(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5762(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5762(t0,t1,t2);}

C_noret_decl(trf_5688)
static void C_fcall trf_5688(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5688(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5688(t0,t1);}

C_noret_decl(trf_5690)
static void C_fcall trf_5690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5690(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5690(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5538)
static void C_fcall trf_5538(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5538(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5538(t0,t1);}

C_noret_decl(trf_5550)
static void C_fcall trf_5550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5550(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5550(t0,t1);}

C_noret_decl(trf_5507)
static void C_fcall trf_5507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5507(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5507(t0,t1);}

C_noret_decl(trf_5474)
static void C_fcall trf_5474(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5474(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5474(t0,t1);}

C_noret_decl(trf_5379)
static void C_fcall trf_5379(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5379(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5379(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5342)
static void C_fcall trf_5342(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5342(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5342(t0,t1,t2);}

C_noret_decl(trf_5330)
static void C_fcall trf_5330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5330(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5330(t0,t1);}

C_noret_decl(trf_5134)
static void C_fcall trf_5134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5134(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5134(t0,t1,t2,t3);}

C_noret_decl(trf_4948)
static void C_fcall trf_4948(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4948(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4948(t0,t1,t2,t3);}

C_noret_decl(trf_4891)
static void C_fcall trf_4891(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4891(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4891(t0,t1,t2);}

C_noret_decl(trf_4790)
static void C_fcall trf_4790(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4790(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4790(t0,t1);}

C_noret_decl(trf_4813)
static void C_fcall trf_4813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4813(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4813(t0,t1,t2);}

C_noret_decl(trf_4684)
static void C_fcall trf_4684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4684(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4684(t0,t1);}

C_noret_decl(trf_4558)
static void C_fcall trf_4558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4558(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4558(t0,t1,t2,t3);}

C_noret_decl(trf_4228)
static void C_fcall trf_4228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4228(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4228(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4020)
static void C_fcall trf_4020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4020(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4020(t0,t1);}

C_noret_decl(trf_4039)
static void C_fcall trf_4039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4039(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4039(t0,t1);}

C_noret_decl(trf_4083)
static void C_fcall trf_4083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4083(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4083(t0,t1);}

C_noret_decl(trf_3909)
static void C_fcall trf_3909(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3909(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3909(t0,t1,t2,t3);}

C_noret_decl(trf_3837)
static void C_fcall trf_3837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3837(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3837(t0,t1);}

C_noret_decl(trf_3695)
static void C_fcall trf_3695(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3695(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3695(t0,t1);}

C_noret_decl(trf_3690)
static void C_fcall trf_3690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3690(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3690(t0,t1,t2);}

C_noret_decl(trf_3592)
static void C_fcall trf_3592(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3592(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3592(t0,t1,t2,t3);}

C_noret_decl(trf_3623)
static void C_fcall trf_3623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3623(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3623(t0,t1);}

C_noret_decl(trf_3645)
static void C_fcall trf_3645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3645(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3645(t0,t1);}

C_noret_decl(trf_3402)
static void C_fcall trf_3402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3402(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3402(t0,t1);}

C_noret_decl(trf_3414)
static void C_fcall trf_3414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3414(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3414(t0,t1,t2);}

C_noret_decl(trf_3421)
static void C_fcall trf_3421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3421(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3421(t0,t1);}

C_noret_decl(trf_3139)
static void C_fcall trf_3139(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3139(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3139(t0,t1,t2,t3);}

C_noret_decl(trf_3098)
static void C_fcall trf_3098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3098(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3098(t0,t1,t2);}

C_noret_decl(trf_3050)
static void C_fcall trf_3050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3050(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3050(t0,t1,t2);}

C_noret_decl(trf_2884)
static void C_fcall trf_2884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2884(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2884(t0,t1);}

C_noret_decl(trf_2988)
static void C_fcall trf_2988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2988(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2988(t0,t1,t2);}

C_noret_decl(trf_2923)
static void C_fcall trf_2923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2923(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2923(t0,t1);}

C_noret_decl(trf_2941)
static void C_fcall trf_2941(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2941(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2941(t0,t1,t2);}

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

C_noret_decl(tr7rv)
static void C_fcall tr7rv(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7rv(C_proc7 k){
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
a=C_alloc(n+1);
t7=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7);}

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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3388)){
C_save(t1);
C_rereclaim2(3388*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,465);
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
lf[85]=C_h_intern(&lf[85],13,"stat-regular\077");
lf[86]=C_h_intern(&lf[86],15,"stat-directory\077");
lf[87]=C_h_intern(&lf[87],17,"character-device\077");
lf[88]=C_h_intern(&lf[88],17,"stat-char-device\077");
lf[89]=C_h_intern(&lf[89],13,"block-device\077");
lf[90]=C_h_intern(&lf[90],18,"stat-block-device\077");
lf[91]=C_h_intern(&lf[91],5,"fifo\077");
lf[92]=C_h_intern(&lf[92],10,"stat-fifo\077");
lf[93]=C_h_intern(&lf[93],13,"stat-symlink\077");
lf[94]=C_h_intern(&lf[94],7,"socket\077");
lf[95]=C_h_intern(&lf[95],12,"stat-socket\077");
lf[96]=C_h_intern(&lf[96],18,"set-file-position!");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot set file position");
lf[98]=C_h_intern(&lf[98],6,"stream");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[100]=C_h_intern(&lf[100],5,"port\077");
lf[101]=C_h_intern(&lf[101],13,"\000bounds-error");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\036invalid negative port position");
lf[103]=C_h_intern(&lf[103],13,"file-position");
lf[104]=C_h_intern(&lf[104],18,"decompose-pathname");
lf[105]=C_h_intern(&lf[105],18,"pathname-directory");
lf[106]=C_h_intern(&lf[106],16,"create-directory");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot create directory");
lf[108]=C_h_intern(&lf[108],13,"make-pathname");
lf[109]=C_h_intern(&lf[109],16,"change-directory");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\037cannot change current directory");
lf[111]=C_h_intern(&lf[111],16,"delete-directory");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot delete directory");
lf[113]=C_h_intern(&lf[113],10,"string-ref");
lf[114]=C_h_intern(&lf[114],6,"string");
lf[115]=C_h_intern(&lf[115],9,"directory");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot open directory");
lf[117]=C_h_intern(&lf[117],16,"\003sysmake-pointer");
lf[118]=C_h_intern(&lf[118],17,"current-directory");
lf[119]=C_h_intern(&lf[119],10,"directory\077");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000!cannot retrieve current directory");
lf[121]=C_h_intern(&lf[121],5,"null\077");
lf[122]=C_h_intern(&lf[122],6,"char=\077");
lf[123]=C_h_intern(&lf[123],8,"string=\077");
lf[124]=C_h_intern(&lf[124],16,"char-alphabetic\077");
lf[125]=C_h_intern(&lf[125],24,"get-environment-variable");
lf[126]=C_h_intern(&lf[126],17,"current-user-name");
lf[127]=C_h_intern(&lf[127],9,"condition");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[129]=C_h_intern(&lf[129],22,"with-exception-handler");
lf[130]=C_h_intern(&lf[130],30,"call-with-current-continuation");
lf[131]=C_h_intern(&lf[131],14,"canonical-path");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[134]=C_h_intern(&lf[134],18,"string-intersperse");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[137]=C_h_intern(&lf[137],7,"reverse");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[141]=C_h_intern(&lf[141],12,"string-split");
lf[142]=C_decode_literal(C_heaptop,"\376B\000\000\002/\134");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\006/home/");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\004HOME");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open pipe");
lf[150]=C_h_intern(&lf[150],13,"\003sysmake-port");
lf[151]=C_h_intern(&lf[151],21,"\003sysstream-port-class");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\006(pipe)");
lf[153]=C_h_intern(&lf[153],15,"open-input-pipe");
lf[154]=C_h_intern(&lf[154],5,"\000text");
lf[155]=C_h_intern(&lf[155],7,"\000binary");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000#illegal input/output mode specifier");
lf[157]=C_h_intern(&lf[157],16,"open-output-pipe");
lf[158]=C_h_intern(&lf[158],16,"close-input-pipe");
lf[159]=C_h_intern(&lf[159],23,"close-input/output-pipe");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\030error while closing pipe");
lf[161]=C_h_intern(&lf[161],14,"\003syscheck-port");
lf[162]=C_h_intern(&lf[162],17,"close-output-pipe");
lf[163]=C_h_intern(&lf[163],20,"call-with-input-pipe");
lf[164]=C_h_intern(&lf[164],21,"call-with-output-pipe");
lf[165]=C_h_intern(&lf[165],20,"with-input-from-pipe");
lf[166]=C_h_intern(&lf[166],18,"\003sysstandard-input");
lf[167]=C_h_intern(&lf[167],19,"with-output-to-pipe");
lf[168]=C_h_intern(&lf[168],19,"\003sysstandard-output");
lf[169]=C_h_intern(&lf[169],11,"create-pipe");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create pipe");
lf[171]=C_h_intern(&lf[171],11,"signal/term");
lf[172]=C_h_intern(&lf[172],11,"signal/kill");
lf[173]=C_h_intern(&lf[173],10,"signal/int");
lf[174]=C_h_intern(&lf[174],10,"signal/hup");
lf[175]=C_h_intern(&lf[175],10,"signal/fpe");
lf[176]=C_h_intern(&lf[176],10,"signal/ill");
lf[177]=C_h_intern(&lf[177],11,"signal/segv");
lf[178]=C_h_intern(&lf[178],11,"signal/abrt");
lf[179]=C_h_intern(&lf[179],11,"signal/trap");
lf[180]=C_h_intern(&lf[180],11,"signal/quit");
lf[181]=C_h_intern(&lf[181],11,"signal/alrm");
lf[182]=C_h_intern(&lf[182],13,"signal/vtalrm");
lf[183]=C_h_intern(&lf[183],11,"signal/prof");
lf[184]=C_h_intern(&lf[184],9,"signal/io");
lf[185]=C_h_intern(&lf[185],10,"signal/urg");
lf[186]=C_h_intern(&lf[186],11,"signal/chld");
lf[187]=C_h_intern(&lf[187],11,"signal/cont");
lf[188]=C_h_intern(&lf[188],11,"signal/stop");
lf[189]=C_h_intern(&lf[189],11,"signal/tstp");
lf[190]=C_h_intern(&lf[190],11,"signal/pipe");
lf[191]=C_h_intern(&lf[191],11,"signal/xcpu");
lf[192]=C_h_intern(&lf[192],11,"signal/xfsz");
lf[193]=C_h_intern(&lf[193],11,"signal/usr1");
lf[194]=C_h_intern(&lf[194],11,"signal/usr2");
lf[195]=C_h_intern(&lf[195],12,"signal/winch");
lf[196]=C_h_intern(&lf[196],12,"signals-list");
lf[197]=C_h_intern(&lf[197],18,"\003sysinterrupt-hook");
lf[198]=C_h_intern(&lf[198],14,"signal-handler");
lf[199]=C_h_intern(&lf[199],19,"set-signal-handler!");
lf[200]=C_h_intern(&lf[200],16,"set-signal-mask!");
lf[201]=C_h_intern(&lf[201],14,"\000process-error");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot set signal mask");
lf[203]=C_h_intern(&lf[203],11,"signal-mask");
lf[204]=C_h_intern(&lf[204],14,"signal-masked\077");
lf[205]=C_h_intern(&lf[205],12,"signal-mask!");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot block signal");
lf[207]=C_h_intern(&lf[207],14,"signal-unmask!");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot unblock signal");
lf[209]=C_h_intern(&lf[209],18,"system-information");
lf[210]=C_h_intern(&lf[210],25,"\003syspeek-nonnull-c-string");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot retrieve system information");
lf[212]=C_h_intern(&lf[212],15,"current-user-id");
lf[213]=C_h_intern(&lf[213],25,"current-effective-user-id");
lf[214]=C_h_intern(&lf[214],16,"current-group-id");
lf[215]=C_h_intern(&lf[215],26,"current-effective-group-id");
lf[216]=C_h_intern(&lf[216],16,"user-information");
lf[217]=C_h_intern(&lf[217],6,"vector");
lf[218]=C_h_intern(&lf[218],4,"list");
lf[219]=C_h_intern(&lf[219],27,"current-effective-user-name");
lf[220]=C_h_intern(&lf[220],17,"group-information");
lf[221]=C_h_intern(&lf[221],10,"get-groups");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\047cannot retrieve supplementary group ids");
lf[225]=C_h_intern(&lf[225],11,"set-groups!");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot set supplementary group ids");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\015out of memory");
lf[228]=C_h_intern(&lf[228],17,"initialize-groups");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000)cannot initialize supplementary group ids");
lf[230]=C_h_intern(&lf[230],10,"errno/perm");
lf[231]=C_h_intern(&lf[231],11,"errno/noent");
lf[232]=C_h_intern(&lf[232],10,"errno/srch");
lf[233]=C_h_intern(&lf[233],10,"errno/intr");
lf[234]=C_h_intern(&lf[234],8,"errno/io");
lf[235]=C_h_intern(&lf[235],12,"errno/noexec");
lf[236]=C_h_intern(&lf[236],10,"errno/badf");
lf[237]=C_h_intern(&lf[237],11,"errno/child");
lf[238]=C_h_intern(&lf[238],11,"errno/nomem");
lf[239]=C_h_intern(&lf[239],11,"errno/acces");
lf[240]=C_h_intern(&lf[240],11,"errno/fault");
lf[241]=C_h_intern(&lf[241],10,"errno/busy");
lf[242]=C_h_intern(&lf[242],12,"errno/notdir");
lf[243]=C_h_intern(&lf[243],11,"errno/isdir");
lf[244]=C_h_intern(&lf[244],11,"errno/inval");
lf[245]=C_h_intern(&lf[245],11,"errno/mfile");
lf[246]=C_h_intern(&lf[246],11,"errno/nospc");
lf[247]=C_h_intern(&lf[247],11,"errno/spipe");
lf[248]=C_h_intern(&lf[248],10,"errno/pipe");
lf[249]=C_h_intern(&lf[249],11,"errno/again");
lf[250]=C_h_intern(&lf[250],10,"errno/rofs");
lf[251]=C_h_intern(&lf[251],11,"errno/exist");
lf[252]=C_h_intern(&lf[252],16,"errno/wouldblock");
lf[253]=C_h_intern(&lf[253],10,"errno/2big");
lf[254]=C_h_intern(&lf[254],12,"errno/deadlk");
lf[255]=C_h_intern(&lf[255],9,"errno/dom");
lf[256]=C_h_intern(&lf[256],10,"errno/fbig");
lf[257]=C_h_intern(&lf[257],11,"errno/ilseq");
lf[258]=C_h_intern(&lf[258],11,"errno/mlink");
lf[259]=C_h_intern(&lf[259],17,"errno/nametoolong");
lf[260]=C_h_intern(&lf[260],11,"errno/nfile");
lf[261]=C_h_intern(&lf[261],11,"errno/nodev");
lf[262]=C_h_intern(&lf[262],11,"errno/nolck");
lf[263]=C_h_intern(&lf[263],11,"errno/nosys");
lf[264]=C_h_intern(&lf[264],14,"errno/notempty");
lf[265]=C_h_intern(&lf[265],11,"errno/notty");
lf[266]=C_h_intern(&lf[266],10,"errno/nxio");
lf[267]=C_h_intern(&lf[267],11,"errno/range");
lf[268]=C_h_intern(&lf[268],10,"errno/xdev");
lf[269]=C_h_intern(&lf[269],16,"change-file-mode");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\027cannot change file mode");
lf[271]=C_h_intern(&lf[271],17,"change-file-owner");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\030cannot change file owner");
lf[273]=C_h_intern(&lf[273],17,"file-read-access\077");
lf[274]=C_h_intern(&lf[274],18,"file-write-access\077");
lf[275]=C_h_intern(&lf[275],20,"file-execute-access\077");
lf[276]=C_h_intern(&lf[276],14,"create-session");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\025cannot create session");
lf[278]=C_h_intern(&lf[278],16,"process-group-id");
lf[279]=C_h_intern(&lf[279],20,"create-symbolic-link");
lf[280]=C_h_intern(&lf[280],18,"create-symbol-link");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create symbolic link");
lf[282]=C_h_intern(&lf[282],9,"substring");
lf[283]=C_h_intern(&lf[283],18,"read-symbolic-link");
lf[284]=C_h_intern(&lf[284],12,"canonicalize");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot read symbolic link");
lf[286]=C_h_intern(&lf[286],9,"file-link");
lf[287]=C_h_intern(&lf[287],9,"hard-link");
lf[288]=C_decode_literal(C_heaptop,"\376B\000\000\032could not create hard link");
lf[289]=C_h_intern(&lf[289],12,"fileno/stdin");
lf[290]=C_h_intern(&lf[290],13,"fileno/stdout");
lf[291]=C_h_intern(&lf[291],13,"fileno/stderr");
lf[292]=C_h_intern(&lf[292],7,"\000append");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid mode for input file");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\025invalid mode argument");
lf[296]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\001w");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot open file");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\010(fdport)");
lf[300]=C_h_intern(&lf[300],16,"open-input-file*");
lf[301]=C_h_intern(&lf[301],17,"open-output-file*");
lf[302]=C_h_intern(&lf[302],12,"port->fileno");
lf[303]=C_h_intern(&lf[303],6,"socket");
lf[304]=C_h_intern(&lf[304],20,"\003systcp-port->fileno");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\031port has no attached file");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000%cannot access file-descriptor of port");
lf[307]=C_h_intern(&lf[307],25,"\003syspeek-unsigned-integer");
lf[308]=C_h_intern(&lf[308],16,"duplicate-fileno");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000 cannot duplicate file-descriptor");
lf[310]=C_h_intern(&lf[310],15,"make-input-port");
lf[311]=C_h_intern(&lf[311],14,"set-port-name!");
lf[312]=C_h_intern(&lf[312],21,"\003syscustom-input-port");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\015cannot select");
lf[314]=C_h_intern(&lf[314],17,"\003systhread-yield!");
lf[315]=C_h_intern(&lf[315],25,"\003systhread-block-for-i/o!");
lf[316]=C_h_intern(&lf[316],18,"\003syscurrent-thread");
lf[317]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\013cannot read");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[321]=C_h_intern(&lf[321],17,"\003sysstring-append");
lf[322]=C_h_intern(&lf[322],15,"\003sysmake-string");
lf[323]=C_h_intern(&lf[323],20,"\003sysscan-buffer-line");
lf[324]=C_h_intern(&lf[324],4,"noop");
lf[325]=C_h_intern(&lf[325],16,"make-output-port");
lf[326]=C_h_intern(&lf[326],22,"\003syscustom-output-port");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot write");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\014cannot close");
lf[329]=C_h_intern(&lf[329],13,"file-truncate");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\024cannot truncate file");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[332]=C_h_intern(&lf[332],4,"lock");
lf[333]=C_h_intern(&lf[333],9,"file-lock");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[335]=C_h_intern(&lf[335],18,"file-lock/blocking");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000\020cannot lock file");
lf[337]=C_h_intern(&lf[337],14,"file-test-lock");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[339]=C_h_intern(&lf[339],11,"file-unlock");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot unlock file");
lf[341]=C_h_intern(&lf[341],11,"create-fifo");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot create FIFO");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\023file does not exist");
lf[344]=C_h_intern(&lf[344],13,"\003sysfile-info");
lf[345]=C_h_intern(&lf[345],6,"setenv");
lf[346]=C_h_intern(&lf[346],8,"unsetenv");
lf[347]=C_h_intern(&lf[347],25,"get-environment-variables");
lf[348]=C_h_intern(&lf[348],19,"current-environment");
lf[349]=C_h_intern(&lf[349],9,"prot/read");
lf[350]=C_h_intern(&lf[350],10,"prot/write");
lf[351]=C_h_intern(&lf[351],9,"prot/exec");
lf[352]=C_h_intern(&lf[352],9,"prot/none");
lf[353]=C_h_intern(&lf[353],9,"map/fixed");
lf[354]=C_h_intern(&lf[354],10,"map/shared");
lf[355]=C_h_intern(&lf[355],11,"map/private");
lf[356]=C_h_intern(&lf[356],13,"map/anonymous");
lf[357]=C_h_intern(&lf[357],8,"map/file");
lf[358]=C_h_intern(&lf[358],18,"map-file-to-memory");
lf[359]=C_h_intern(&lf[359],4,"mmap");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot map file to memory");
lf[361]=C_h_intern(&lf[361],20,"\003syspointer->address");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000)bad argument type - not a foreign pointer");
lf[363]=C_h_intern(&lf[363],16,"\003sysnull-pointer");
lf[364]=C_h_intern(&lf[364],22,"unmap-file-from-memory");
lf[365]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot unmap file from memory");
lf[366]=C_h_intern(&lf[366],26,"memory-mapped-file-pointer");
lf[367]=C_h_intern(&lf[367],19,"memory-mapped-file\077");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\025time vector too short");
lf[370]=C_h_intern(&lf[370],19,"seconds->local-time");
lf[371]=C_h_intern(&lf[371],18,"\003sysdecode-seconds");
lf[372]=C_h_intern(&lf[372],15,"current-seconds");
lf[373]=C_h_intern(&lf[373],17,"seconds->utc-time");
lf[374]=C_h_intern(&lf[374],15,"seconds->string");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000 cannot convert seconds to string");
lf[376]=C_h_intern(&lf[376],12,"time->string");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000 time formatting overflows buffer");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000$cannot convert time vector to string");
lf[379]=C_h_intern(&lf[379],12,"string->time");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\027%a %b %e %H:%M:%S %Z %Y");
lf[381]=C_h_intern(&lf[381],19,"local-time->seconds");
lf[382]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[384]=C_h_intern(&lf[384],17,"utc-time->seconds");
lf[385]=C_decode_literal(C_heaptop,"\376U-1.0\000");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000%cannot convert time vector to seconds");
lf[387]=C_h_intern(&lf[387],27,"local-timezone-abbreviation");
lf[388]=C_h_intern(&lf[388],5,"_exit");
lf[389]=C_h_intern(&lf[389],10,"set-alarm!");
lf[390]=C_h_intern(&lf[390],19,"set-buffering-mode!");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot set buffering mode");
lf[392]=C_h_intern(&lf[392],5,"\000full");
lf[393]=C_h_intern(&lf[393],5,"\000line");
lf[394]=C_h_intern(&lf[394],5,"\000none");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid buffering-mode");
lf[396]=C_h_intern(&lf[396],14,"terminal-port\077");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000#port is not connected to a terminal");
lf[399]=C_h_intern(&lf[399],13,"terminal-name");
lf[400]=C_h_intern(&lf[400],13,"terminal-size");
lf[401]=C_h_intern(&lf[401],6,"\000error");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\036Unable to get size of terminal");
lf[403]=C_h_intern(&lf[403],17,"\003sysmake-locative");
lf[404]=C_h_intern(&lf[404],8,"location");
lf[405]=C_h_intern(&lf[405],13,"get-host-name");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\031cannot retrieve host-name");
lf[407]=C_h_intern(&lf[407],6,"regexp");
lf[408]=C_h_intern(&lf[408],12,"string-match");
lf[409]=C_h_intern(&lf[409],12,"glob->regexp");
lf[410]=C_h_intern(&lf[410],4,"glob");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[413]=C_h_intern(&lf[413],12,"process-fork");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot create child process");
lf[415]=C_h_intern(&lf[415],24,"pathname-strip-directory");
lf[416]=C_h_intern(&lf[416],15,"process-execute");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\026cannot execute process");
lf[418]=C_h_intern(&lf[418],16,"\003sysprocess-wait");
lf[419]=C_h_intern(&lf[419],12,"process-wait");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000 waiting for child process failed");
lf[421]=C_h_intern(&lf[421],18,"current-process-id");
lf[422]=C_h_intern(&lf[422],17,"parent-process-id");
lf[423]=C_h_intern(&lf[423],5,"sleep");
lf[424]=C_h_intern(&lf[424],14,"process-signal");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000 could not send signal to process");
lf[426]=C_h_intern(&lf[426],17,"\003sysshell-command");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\007/bin/sh");
lf[428]=C_decode_literal(C_heaptop,"\376B\000\000\005SHELL");
lf[429]=C_h_intern(&lf[429],27,"\003sysshell-command-arguments");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\002-c");
lf[431]=C_h_intern(&lf[431],11,"process-run");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\025abnormal process exit");
lf[433]=C_h_intern(&lf[433],11,"\003sysprocess");
lf[434]=C_h_intern(&lf[434],7,"process");
lf[435]=C_h_intern(&lf[435],8,"process*");
lf[436]=C_h_intern(&lf[436],16,"\003syscheck-string");
lf[437]=C_h_intern(&lf[437],12,"\003sysfor-each");
lf[438]=C_h_intern(&lf[438],13,"pathname-file");
lf[439]=C_h_intern(&lf[439],10,"find-files");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[441]=C_decode_literal(C_heaptop,"\376B\000\000\002..");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[443]=C_h_intern(&lf[443],16,"\003sysdynamic-wind");
lf[444]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[445]=C_h_intern(&lf[445],7,"regexp\077");
lf[446]=C_h_intern(&lf[446],19,"set-root-directory!");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\037unable to change root directory");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000 cannot retrieve process group ID");
lf[449]=C_h_intern(&lf[449],21,"set-process-group-id!");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\033cannot set process group ID");
lf[451]=C_h_intern(&lf[451],18,"getter-with-setter");
lf[452]=C_h_intern(&lf[452],26,"effective-group-id!-setter");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\035cannot set effective group ID");
lf[454]=C_h_intern(&lf[454],12,"set-user-id!");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\023cannot set group ID");
lf[456]=C_h_intern(&lf[456],25,"effective-user-id!-setter");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\034cannot set effective user ID");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\022cannot set user ID");
lf[459]=C_h_intern(&lf[459],23,"\003sysuser-interrupt-hook");
lf[460]=C_h_intern(&lf[460],11,"make-vector");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000%cannot retrieve file position of port");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\014invalid file");
lf[463]=C_h_intern(&lf[463],17,"register-feature!");
lf[464]=C_h_intern(&lf[464],5,"posix");
C_register_lf2(lf,465,create_ptable());
t2=C_mutate(&lf[0] /* (set! c52 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2509,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k2507 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2510 in k2507 */
static void C_ccall f_2512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2515,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2513 in k2510 in k2507 */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_files_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 508  register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[463]+1)))(3,*((C_word*)lf[463]+1),t2,lf[464]);}

/* k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
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
C_word ab[98],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2527,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=C_mutate(&lf[3] /* (set! posix-error ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2539,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! posix-error ...) */,lf[3]);
t5=C_mutate((C_word*)lf[9]+1 /* (set! file-nonblocking! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2557,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! file-select-one ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2564,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
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
t43=C_mutate((C_word*)lf[47]+1 /* (set! file-control ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2621,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t44=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRGRP),C_fix((C_word)S_IROTH));
t45=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRWXU),t44);
t46=C_mutate((C_word*)lf[51]+1 /* (set! file-open ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2667,a[2]=t45,a[3]=((C_word)li4),tmp=(C_word)a,a+=4,tmp));
t47=C_mutate((C_word*)lf[55]+1 /* (set! file-close ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2705,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t48=*((C_word*)lf[57]+1);
t49=C_mutate((C_word*)lf[58]+1 /* (set! file-read ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2720,a[2]=t48,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t50=C_mutate((C_word*)lf[62]+1 /* (set! file-write ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2762,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[65]+1 /* (set! file-mkstemp ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2801,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[68]+1 /* (set! file-select ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[70]+1 /* (set! seek/set ...) */,C_fix((C_word)SEEK_SET));
t54=C_mutate((C_word*)lf[71]+1 /* (set! seek/end ...) */,C_fix((C_word)SEEK_END));
t55=C_mutate((C_word*)lf[72]+1 /* (set! seek/cur ...) */,C_fix((C_word)SEEK_CUR));
t56=C_mutate(&lf[73] /* (set! stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3139,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[76]+1 /* (set! file-stat ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3176,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[77]+1 /* (set! file-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3208,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[78]+1 /* (set! file-modification-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[79]+1 /* (set! file-access-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3220,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[80]+1 /* (set! file-change-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3226,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[81]+1 /* (set! file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3232,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[82]+1 /* (set! file-permissions ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3238,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[83]+1 /* (set! regular-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3244,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[84]+1 /* (set! symbolic-link? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[85]+1 /* (set! stat-regular? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3262,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[86]+1 /* (set! stat-directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3271,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[87]+1 /* (set! character-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3280,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[88]+1 /* (set! stat-char-device? ...) */,*((C_word*)lf[87]+1));
t70=C_mutate((C_word*)lf[89]+1 /* (set! block-device? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3290,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[90]+1 /* (set! stat-block-device? ...) */,*((C_word*)lf[89]+1));
t72=C_mutate((C_word*)lf[91]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3300,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[92]+1 /* (set! stat-fifo? ...) */,*((C_word*)lf[91]+1));
t74=C_mutate((C_word*)lf[93]+1 /* (set! stat-symlink? ...) */,*((C_word*)lf[84]+1));
t75=C_mutate((C_word*)lf[94]+1 /* (set! socket? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3311,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[95]+1 /* (set! stat-socket? ...) */,*((C_word*)lf[94]+1));
t77=C_mutate((C_word*)lf[96]+1 /* (set! set-file-position! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t78=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t79=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8682,a[2]=((C_word)li257),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 855  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[451]+1)))(4,*((C_word*)lf[451]+1),t78,t79,*((C_word*)lf[96]+1));}

/* a8681 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8682(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8682,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8686,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8698,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 857  port? */
t5=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k8696 in a8681 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(t2,lf[98]);
if(C_truep(t3)){
t4=(C_word)C_ftell(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_8686(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_8686(2,t4,C_fix(-1));}}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t2=(C_word)C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR));
t3=((C_word*)t0)[2];
f_8686(2,t3,t2);}
else{
/* posixunix.scm: 864  ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[60],lf[103],lf[462],((C_word*)t0)[3]);}}}

/* k8684 in a8681 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8686,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8689,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_lessp(t1,C_fix(0)))){
/* posixunix.scm: 866  posix-error */
t3=lf[3];
f_2539(6,t3,t2,lf[48],lf[103],lf[461],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k8687 in k8684 in a8681 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3381,2,t0,t1);}
t2=C_mutate((C_word*)lf[103]+1 /* (set! file-position ...) */,t1);
t3=*((C_word*)lf[104]+1);
t4=*((C_word*)lf[105]+1);
t5=C_mutate((C_word*)lf[106]+1 /* (set! create-directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3383,a[2]=t3,a[3]=t4,a[4]=((C_word)li38),tmp=(C_word)a,a+=5,tmp));
t6=C_mutate((C_word*)lf[109]+1 /* (set! change-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3542,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[111]+1 /* (set! delete-directory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3566,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[113]+1);
t9=*((C_word*)lf[57]+1);
t10=*((C_word*)lf[114]+1);
t11=C_mutate((C_word*)lf[115]+1 /* (set! directory ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3590,a[2]=t9,a[3]=t8,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[119]+1 /* (set! directory? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3747,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t13=*((C_word*)lf[57]+1);
t14=C_mutate((C_word*)lf[118]+1 /* (set! current-directory ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3773,a[2]=t13,a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp));
t15=*((C_word*)lf[121]+1);
t16=*((C_word*)lf[122]+1);
t17=*((C_word*)lf[123]+1);
t18=*((C_word*)lf[124]+1);
t19=*((C_word*)lf[113]+1);
t20=*((C_word*)lf[2]+1);
t21=*((C_word*)lf[125]+1);
t22=*((C_word*)lf[126]+1);
t23=*((C_word*)lf[118]+1);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3837,a[2]=t23,a[3]=((C_word)li55),tmp=(C_word)a,a+=4,tmp);
t25=C_mutate((C_word*)lf[131]+1 /* (set! canonical-path ...) */,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3893,a[2]=t18,a[3]=t16,a[4]=t21,a[5]=t22,a[6]=t24,a[7]=t17,a[8]=t15,a[9]=t19,a[10]=t20,a[11]=((C_word)li57),tmp=(C_word)a,a+=12,tmp));
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4228,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp);
t27=C_mutate((C_word*)lf[153]+1 /* (set! open-input-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4243,a[2]=t26,a[3]=((C_word)li59),tmp=(C_word)a,a+=4,tmp));
t28=C_mutate((C_word*)lf[157]+1 /* (set! open-output-pipe ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4279,a[2]=t26,a[3]=((C_word)li60),tmp=(C_word)a,a+=4,tmp));
t29=C_mutate((C_word*)lf[158]+1 /* (set! close-input-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4315,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[162]+1 /* (set! close-output-pipe ...) */,*((C_word*)lf[158]+1));
t31=*((C_word*)lf[153]+1);
t32=*((C_word*)lf[157]+1);
t33=*((C_word*)lf[158]+1);
t34=*((C_word*)lf[162]+1);
t35=C_mutate((C_word*)lf[163]+1 /* (set! call-with-input-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4331,a[2]=t31,a[3]=t33,a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp));
t36=C_mutate((C_word*)lf[164]+1 /* (set! call-with-output-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4355,a[2]=t32,a[3]=t34,a[4]=((C_word)li67),tmp=(C_word)a,a+=5,tmp));
t37=C_mutate((C_word*)lf[165]+1 /* (set! with-input-from-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4379,a[2]=t31,a[3]=t33,a[4]=((C_word)li69),tmp=(C_word)a,a+=5,tmp));
t38=C_mutate((C_word*)lf[167]+1 /* (set! with-output-to-pipe ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4399,a[2]=t32,a[3]=t34,a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp));
t39=C_mutate((C_word*)lf[169]+1 /* (set! create-pipe ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4419,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[171]+1 /* (set! signal/term ...) */,C_fix((C_word)SIGTERM));
t41=C_mutate((C_word*)lf[172]+1 /* (set! signal/kill ...) */,C_fix((C_word)SIGKILL));
t42=C_mutate((C_word*)lf[173]+1 /* (set! signal/int ...) */,C_fix((C_word)SIGINT));
t43=C_mutate((C_word*)lf[174]+1 /* (set! signal/hup ...) */,C_fix((C_word)SIGHUP));
t44=C_mutate((C_word*)lf[175]+1 /* (set! signal/fpe ...) */,C_fix((C_word)SIGFPE));
t45=C_mutate((C_word*)lf[176]+1 /* (set! signal/ill ...) */,C_fix((C_word)SIGILL));
t46=C_mutate((C_word*)lf[177]+1 /* (set! signal/segv ...) */,C_fix((C_word)SIGSEGV));
t47=C_mutate((C_word*)lf[178]+1 /* (set! signal/abrt ...) */,C_fix((C_word)SIGABRT));
t48=C_mutate((C_word*)lf[179]+1 /* (set! signal/trap ...) */,C_fix((C_word)SIGTRAP));
t49=C_mutate((C_word*)lf[180]+1 /* (set! signal/quit ...) */,C_fix((C_word)SIGQUIT));
t50=C_mutate((C_word*)lf[181]+1 /* (set! signal/alrm ...) */,C_fix((C_word)SIGALRM));
t51=C_mutate((C_word*)lf[182]+1 /* (set! signal/vtalrm ...) */,C_fix((C_word)SIGVTALRM));
t52=C_mutate((C_word*)lf[183]+1 /* (set! signal/prof ...) */,C_fix((C_word)SIGPROF));
t53=C_mutate((C_word*)lf[184]+1 /* (set! signal/io ...) */,C_fix((C_word)SIGIO));
t54=C_mutate((C_word*)lf[185]+1 /* (set! signal/urg ...) */,C_fix((C_word)SIGURG));
t55=C_mutate((C_word*)lf[186]+1 /* (set! signal/chld ...) */,C_fix((C_word)SIGCHLD));
t56=C_mutate((C_word*)lf[187]+1 /* (set! signal/cont ...) */,C_fix((C_word)SIGCONT));
t57=C_mutate((C_word*)lf[188]+1 /* (set! signal/stop ...) */,C_fix((C_word)SIGSTOP));
t58=C_mutate((C_word*)lf[189]+1 /* (set! signal/tstp ...) */,C_fix((C_word)SIGTSTP));
t59=C_mutate((C_word*)lf[190]+1 /* (set! signal/pipe ...) */,C_fix((C_word)SIGPIPE));
t60=C_mutate((C_word*)lf[191]+1 /* (set! signal/xcpu ...) */,C_fix((C_word)SIGXCPU));
t61=C_mutate((C_word*)lf[192]+1 /* (set! signal/xfsz ...) */,C_fix((C_word)SIGXFSZ));
t62=C_mutate((C_word*)lf[193]+1 /* (set! signal/usr1 ...) */,C_fix((C_word)SIGUSR1));
t63=C_mutate((C_word*)lf[194]+1 /* (set! signal/usr2 ...) */,C_fix((C_word)SIGUSR2));
t64=C_mutate((C_word*)lf[195]+1 /* (set! signal/winch ...) */,C_fix((C_word)SIGWINCH));
t65=(C_word)C_a_i_list(&a,25,*((C_word*)lf[171]+1),*((C_word*)lf[172]+1),*((C_word*)lf[173]+1),*((C_word*)lf[174]+1),*((C_word*)lf[175]+1),*((C_word*)lf[176]+1),*((C_word*)lf[177]+1),*((C_word*)lf[178]+1),*((C_word*)lf[179]+1),*((C_word*)lf[180]+1),*((C_word*)lf[181]+1),*((C_word*)lf[182]+1),*((C_word*)lf[183]+1),*((C_word*)lf[184]+1),*((C_word*)lf[185]+1),*((C_word*)lf[186]+1),*((C_word*)lf[187]+1),*((C_word*)lf[188]+1),*((C_word*)lf[189]+1),*((C_word*)lf[190]+1),*((C_word*)lf[191]+1),*((C_word*)lf[192]+1),*((C_word*)lf[193]+1),*((C_word*)lf[194]+1),*((C_word*)lf[195]+1));
t66=C_mutate((C_word*)lf[196]+1 /* (set! signals-list ...) */,t65);
t67=*((C_word*)lf[197]+1);
t68=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4464,a[2]=((C_word*)t0)[2],a[3]=t67,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1175 make-vector */
t69=*((C_word*)lf[460]+1);
((C_proc4)(void*)(*((C_word*)t69+1)))(4,t69,t68,C_fix(256),C_SCHEME_FALSE);}

/* k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4464(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4464,2,t0,t1);}
t2=C_mutate((C_word*)lf[198]+1 /* (set! signal-handler ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4466,a[2]=t1,a[3]=((C_word)li73),tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[199]+1 /* (set! set-signal-handler! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4475,a[2]=t1,a[3]=((C_word)li74),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[197]+1 /* (set! interrupt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li75),tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[200]+1 /* (set! set-signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4506,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[203]+1 /* (set! signal-mask ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4552,a[2]=((C_word)li79),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[204]+1 /* (set! signal-masked? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4584,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[205]+1 /* (set! signal-mask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4590,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[207]+1 /* (set! signal-unmask! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4605,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4621,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8676,a[2]=((C_word)li256),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1231 set-signal-handler! */
((C_proc4)C_retrieve_proc(*((C_word*)lf[199]+1)))(4,*((C_word*)lf[199]+1),t10,*((C_word*)lf[173]+1),t11);}

/* a8675 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8676(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8676,3,t0,t1,t2);}
/* posixunix.scm: 1233 ##sys#user-interrupt-hook */
((C_proc2)C_retrieve_proc(*((C_word*)lf[459]+1)))(2,*((C_word*)lf[459]+1),t1);}

/* k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4621,2,t0,t1);}
t2=C_mutate((C_word*)lf[209]+1 /* (set! system-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4623,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4663,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8658,a[2]=((C_word)li254),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8661,a[2]=((C_word)li255),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1257 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[451]+1)))(4,*((C_word*)lf[451]+1),t3,t4,t5);}

/* a8660 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8661(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8661,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setuid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8671,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1261 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8669 in a8660 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1262 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[454],lf[458],((C_word*)t0)[2]);}

/* a8657 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8658,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub791(C_SCHEME_UNDEFINED));}

/* k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4663,2,t0,t1);}
t2=C_mutate((C_word*)lf[212]+1 /* (set! current-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8640,a[2]=((C_word)li252),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8643,a[2]=((C_word)li253),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1265 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[451]+1)))(4,*((C_word*)lf[451]+1),t3,t4,t5);}

/* a8642 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8643(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8643,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_seteuid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8653,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1269 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8651 in a8642 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1270 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[456],lf[457],((C_word*)t0)[2]);}

/* a8639 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8640,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub797(C_SCHEME_UNDEFINED));}

/* k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
t2=C_mutate((C_word*)lf[213]+1 /* (set! current-effective-user-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8622,a[2]=((C_word)li250),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8625,a[2]=((C_word)li251),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1274 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[451]+1)))(4,*((C_word*)lf[451]+1),t3,t4,t5);}

/* a8624 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8625(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8625,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setgid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8635,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1278 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8633 in a8624 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1279 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[454],lf[455],((C_word*)t0)[2]);}

/* a8621 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8622,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub803(C_SCHEME_UNDEFINED));}

/* k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4671,2,t0,t1);}
t2=C_mutate((C_word*)lf[214]+1 /* (set! current-group-id ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4675,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8604,a[2]=((C_word)li248),tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8607,a[2]=((C_word)li249),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1282 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[451]+1)))(4,*((C_word*)lf[451]+1),t3,t4,t5);}

/* a8606 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8607(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8607,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setegid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8617,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1286 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8615 in a8606 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1287 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[452],lf[453],((C_word*)t0)[2]);}

/* a8603 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8604,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub809(C_SCHEME_UNDEFINED));}

/* k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4675(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4675,2,t0,t1);}
t2=C_mutate((C_word*)lf[215]+1 /* (set! current-effective-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[216]+1 /* (set! user-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4677,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[126]+1 /* (set! current-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4744,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[219]+1 /* (set! current-effective-user-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4758,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[220]+1 /* (set! group-information ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4783,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[221]+1 /* (set! get-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4876,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[225]+1 /* (set! set-groups! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4939,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[228]+1 /* (set! initialize-groups ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5013,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[230]+1 /* (set! errno/perm ...) */,C_fix((C_word)EPERM));
t11=C_mutate((C_word*)lf[231]+1 /* (set! errno/noent ...) */,C_fix((C_word)ENOENT));
t12=C_mutate((C_word*)lf[232]+1 /* (set! errno/srch ...) */,C_fix((C_word)ESRCH));
t13=C_mutate((C_word*)lf[233]+1 /* (set! errno/intr ...) */,C_fix((C_word)EINTR));
t14=C_mutate((C_word*)lf[234]+1 /* (set! errno/io ...) */,C_fix((C_word)EIO));
t15=C_mutate((C_word*)lf[235]+1 /* (set! errno/noexec ...) */,C_fix((C_word)ENOEXEC));
t16=C_mutate((C_word*)lf[236]+1 /* (set! errno/badf ...) */,C_fix((C_word)EBADF));
t17=C_mutate((C_word*)lf[237]+1 /* (set! errno/child ...) */,C_fix((C_word)ECHILD));
t18=C_mutate((C_word*)lf[238]+1 /* (set! errno/nomem ...) */,C_fix((C_word)ENOMEM));
t19=C_mutate((C_word*)lf[239]+1 /* (set! errno/acces ...) */,C_fix((C_word)EACCES));
t20=C_mutate((C_word*)lf[240]+1 /* (set! errno/fault ...) */,C_fix((C_word)EFAULT));
t21=C_mutate((C_word*)lf[241]+1 /* (set! errno/busy ...) */,C_fix((C_word)EBUSY));
t22=C_mutate((C_word*)lf[242]+1 /* (set! errno/notdir ...) */,C_fix((C_word)ENOTDIR));
t23=C_mutate((C_word*)lf[243]+1 /* (set! errno/isdir ...) */,C_fix((C_word)EISDIR));
t24=C_mutate((C_word*)lf[244]+1 /* (set! errno/inval ...) */,C_fix((C_word)EINVAL));
t25=C_mutate((C_word*)lf[245]+1 /* (set! errno/mfile ...) */,C_fix((C_word)EMFILE));
t26=C_mutate((C_word*)lf[246]+1 /* (set! errno/nospc ...) */,C_fix((C_word)ENOSPC));
t27=C_mutate((C_word*)lf[247]+1 /* (set! errno/spipe ...) */,C_fix((C_word)ESPIPE));
t28=C_mutate((C_word*)lf[248]+1 /* (set! errno/pipe ...) */,C_fix((C_word)EPIPE));
t29=C_mutate((C_word*)lf[249]+1 /* (set! errno/again ...) */,C_fix((C_word)EAGAIN));
t30=C_mutate((C_word*)lf[250]+1 /* (set! errno/rofs ...) */,C_fix((C_word)EROFS));
t31=C_mutate((C_word*)lf[251]+1 /* (set! errno/exist ...) */,C_fix((C_word)EEXIST));
t32=C_mutate((C_word*)lf[252]+1 /* (set! errno/wouldblock ...) */,C_fix((C_word)EWOULDBLOCK));
t33=C_set_block_item(lf[253] /* errno/2big */,0,C_fix(0));
t34=C_set_block_item(lf[254] /* errno/deadlk */,0,C_fix(0));
t35=C_set_block_item(lf[255] /* errno/dom */,0,C_fix(0));
t36=C_set_block_item(lf[256] /* errno/fbig */,0,C_fix(0));
t37=C_set_block_item(lf[257] /* errno/ilseq */,0,C_fix(0));
t38=C_set_block_item(lf[258] /* errno/mlink */,0,C_fix(0));
t39=C_set_block_item(lf[259] /* errno/nametoolong */,0,C_fix(0));
t40=C_set_block_item(lf[260] /* errno/nfile */,0,C_fix(0));
t41=C_set_block_item(lf[261] /* errno/nodev */,0,C_fix(0));
t42=C_set_block_item(lf[262] /* errno/nolck */,0,C_fix(0));
t43=C_set_block_item(lf[263] /* errno/nosys */,0,C_fix(0));
t44=C_set_block_item(lf[264] /* errno/notempty */,0,C_fix(0));
t45=C_set_block_item(lf[265] /* errno/notty */,0,C_fix(0));
t46=C_set_block_item(lf[266] /* errno/nxio */,0,C_fix(0));
t47=C_set_block_item(lf[267] /* errno/range */,0,C_fix(0));
t48=C_set_block_item(lf[268] /* errno/xdev */,0,C_fix(0));
t49=C_mutate((C_word*)lf[269]+1 /* (set! change-file-mode ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5077,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[271]+1 /* (set! change-file-owner ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5104,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp));
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5134,a[2]=((C_word)li96),tmp=(C_word)a,a+=3,tmp);
t52=C_mutate((C_word*)lf[273]+1 /* (set! file-read-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5158,a[2]=t51,a[3]=((C_word)li97),tmp=(C_word)a,a+=4,tmp));
t53=C_mutate((C_word*)lf[274]+1 /* (set! file-write-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5164,a[2]=t51,a[3]=((C_word)li98),tmp=(C_word)a,a+=4,tmp));
t54=C_mutate((C_word*)lf[275]+1 /* (set! file-execute-access? ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5170,a[2]=t51,a[3]=((C_word)li99),tmp=(C_word)a,a+=4,tmp));
t55=C_mutate((C_word*)lf[276]+1 /* (set! create-session ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5176,a[2]=((C_word)li100),tmp=(C_word)a,a+=3,tmp));
t56=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t57=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8565,a[2]=((C_word)li246),tmp=(C_word)a,a+=3,tmp);
t58=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8583,a[2]=((C_word)li247),tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1502 getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[451]+1)))(4,*((C_word*)lf[451]+1),t56,t57,t58);}

/* a8582 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8583(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8583,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t2,lf[449]);
t5=(C_word)C_i_check_exact_2(t3,lf[449]);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setpgid(t2,t3),C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8599,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1514 ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8597 in a8582 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1515 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[449],lf[450],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8564 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8565(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8565,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[278]);
t4=(C_word)C_getpgid(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8572,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8578,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1507 ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t4);}}

/* k8576 in a8564 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1508 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[278],lf[448],((C_word*)t0)[2]);}

/* k8570 in a8564 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5193,2,t0,t1);}
t2=C_mutate((C_word*)lf[278]+1 /* (set! process-group-id ...) */,t1);
t3=C_mutate((C_word*)lf[279]+1 /* (set! create-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5195,a[2]=((C_word)li101),tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[282]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5232,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* posixunix.scm: 1535 make-string */
t7=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5232(C_word c,C_word t0,C_word t1){
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
C_word ab[266],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5232,2,t0,t1);}
t2=C_mutate((C_word*)lf[283]+1 /* (set! read-symbolic-link ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li102),tmp=(C_word)a,a+=5,tmp));
t3=C_mutate((C_word*)lf[286]+1 /* (set! file-link ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5317,a[2]=((C_word)li103),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[289]+1 /* (set! fileno/stdin ...) */,C_fix((C_word)STDIN_FILENO));
t5=C_mutate((C_word*)lf[290]+1 /* (set! fileno/stdout ...) */,C_fix((C_word)STDOUT_FILENO));
t6=C_mutate((C_word*)lf[291]+1 /* (set! fileno/stderr ...) */,C_fix((C_word)STDERR_FILENO));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5342,a[2]=((C_word)li104),tmp=(C_word)a,a+=3,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5379,a[2]=((C_word)li105),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[300]+1 /* (set! open-input-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5394,a[2]=t8,a[3]=t10,a[4]=((C_word)li106),tmp=(C_word)a,a+=5,tmp));
t14=C_mutate((C_word*)lf[301]+1 /* (set! open-output-file* ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5408,a[2]=t8,a[3]=t10,a[4]=((C_word)li107),tmp=(C_word)a,a+=5,tmp));
t15=C_mutate((C_word*)lf[302]+1 /* (set! port->fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5422,a[2]=((C_word)li108),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[308]+1 /* (set! duplicate-fileno ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5467,a[2]=((C_word)li109),tmp=(C_word)a,a+=3,tmp));
t17=*((C_word*)lf[310]+1);
t18=*((C_word*)lf[311]+1);
t19=C_mutate((C_word*)lf[312]+1 /* (set! custom-input-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5494,a[2]=t17,a[3]=t18,a[4]=((C_word)li129),tmp=(C_word)a,a+=5,tmp));
t20=*((C_word*)lf[325]+1);
t21=*((C_word*)lf[311]+1);
t22=C_mutate((C_word*)lf[326]+1 /* (set! custom-output-port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5976,a[2]=t20,a[3]=t21,a[4]=((C_word)li141),tmp=(C_word)a,a+=5,tmp));
t23=C_mutate((C_word*)lf[329]+1 /* (set! file-truncate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6235,a[2]=((C_word)li142),tmp=(C_word)a,a+=3,tmp));
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6274,a[2]=((C_word)li143),tmp=(C_word)a,a+=3,tmp));
t29=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6348,a[2]=((C_word)li144),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[333]+1 /* (set! file-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6366,a[2]=t25,a[3]=t27,a[4]=((C_word)li145),tmp=(C_word)a,a+=5,tmp));
t31=C_mutate((C_word*)lf[335]+1 /* (set! file-lock/blocking ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6381,a[2]=t25,a[3]=t27,a[4]=((C_word)li146),tmp=(C_word)a,a+=5,tmp));
t32=C_mutate((C_word*)lf[337]+1 /* (set! file-test-lock ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6396,a[2]=t25,a[3]=t27,a[4]=((C_word)li147),tmp=(C_word)a,a+=5,tmp));
t33=C_mutate((C_word*)lf[339]+1 /* (set! file-unlock ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6423,a[2]=((C_word)li148),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[341]+1 /* (set! create-fifo ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6451,a[2]=((C_word)li149),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[91]+1 /* (set! fifo? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6494,a[2]=((C_word)li150),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[345]+1 /* (set! setenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6520,a[2]=((C_word)li151),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[346]+1 /* (set! unsetenv ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6537,a[2]=((C_word)li152),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[347]+1 /* (set! get-environment-variables ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6557,a[2]=((C_word)li155),tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[348]+1 /* (set! current-environment ...) */,*((C_word*)lf[347]+1));
t40=C_mutate((C_word*)lf[349]+1 /* (set! prot/read ...) */,C_fix((C_word)PROT_READ));
t41=C_mutate((C_word*)lf[350]+1 /* (set! prot/write ...) */,C_fix((C_word)PROT_WRITE));
t42=C_mutate((C_word*)lf[351]+1 /* (set! prot/exec ...) */,C_fix((C_word)PROT_EXEC));
t43=C_mutate((C_word*)lf[352]+1 /* (set! prot/none ...) */,C_fix((C_word)PROT_NONE));
t44=C_mutate((C_word*)lf[353]+1 /* (set! map/fixed ...) */,C_fix((C_word)MAP_FIXED));
t45=C_mutate((C_word*)lf[354]+1 /* (set! map/shared ...) */,C_fix((C_word)MAP_SHARED));
t46=C_mutate((C_word*)lf[355]+1 /* (set! map/private ...) */,C_fix((C_word)MAP_PRIVATE));
t47=C_mutate((C_word*)lf[356]+1 /* (set! map/anonymous ...) */,C_fix((C_word)MAP_ANON));
t48=C_mutate((C_word*)lf[357]+1 /* (set! map/file ...) */,C_fix((C_word)MAP_FILE));
t49=C_mutate((C_word*)lf[358]+1 /* (set! map-file-to-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6661,a[2]=((C_word)li156),tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[364]+1 /* (set! unmap-file-from-memory ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6723,a[2]=((C_word)li157),tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[366]+1 /* (set! memory-mapped-file-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6758,a[2]=((C_word)li158),tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[367]+1 /* (set! memory-mapped-file? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6767,a[2]=((C_word)li159),tmp=(C_word)a,a+=3,tmp));
t53=C_mutate(&lf[368] /* (set! check-time-vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6773,a[2]=((C_word)li160),tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[370]+1 /* (set! seconds->local-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6792,a[2]=((C_word)li161),tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[373]+1 /* (set! seconds->utc-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6826,a[2]=((C_word)li162),tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[374]+1 /* (set! seconds->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6870,a[2]=((C_word)li163),tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[376]+1 /* (set! time->string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6931,a[2]=((C_word)li164),tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[379]+1 /* (set! string->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7000,a[2]=((C_word)li165),tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[381]+1 /* (set! local-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7046,a[2]=((C_word)li166),tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[384]+1 /* (set! utc-time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7061,a[2]=((C_word)li167),tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[387]+1 /* (set! local-timezone-abbreviation ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7076,a[2]=((C_word)li168),tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[388]+1 /* (set! _exit ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7088,a[2]=((C_word)li169),tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[389]+1 /* (set! set-alarm! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7104,a[2]=((C_word)li170),tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[390]+1 /* (set! set-buffering-mode! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7111,a[2]=((C_word)li171),tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[396]+1 /* (set! terminal-port? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7170,a[2]=((C_word)li172),tmp=(C_word)a,a+=3,tmp));
t66=C_mutate(&lf[397] /* (set! terminal-check ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7189,a[2]=((C_word)li173),tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[399]+1 /* (set! terminal-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7221,a[2]=((C_word)li174),tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[400]+1 /* (set! terminal-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7244,a[2]=((C_word)li175),tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[405]+1 /* (set! get-host-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7279,a[2]=((C_word)li176),tmp=(C_word)a,a+=3,tmp));
t70=*((C_word*)lf[407]+1);
t71=*((C_word*)lf[408]+1);
t72=*((C_word*)lf[409]+1);
t73=*((C_word*)lf[115]+1);
t74=*((C_word*)lf[108]+1);
t75=*((C_word*)lf[104]+1);
t76=C_mutate((C_word*)lf[410]+1 /* (set! glob ...) */,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7291,a[2]=t72,a[3]=t70,a[4]=t73,a[5]=t71,a[6]=t74,a[7]=t75,a[8]=((C_word)li182),tmp=(C_word)a,a+=9,tmp));
t77=C_mutate((C_word*)lf[413]+1 /* (set! process-fork ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7405,a[2]=((C_word)li183),tmp=(C_word)a,a+=3,tmp));
t78=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7447,a[2]=((C_word)li184),tmp=(C_word)a,a+=3,tmp);
t79=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7466,a[2]=((C_word)li185),tmp=(C_word)a,a+=3,tmp);
t80=*((C_word*)lf[415]+1);
t81=C_mutate((C_word*)lf[416]+1 /* (set! process-execute ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7485,a[2]=t80,a[3]=t79,a[4]=t78,a[5]=((C_word)li191),tmp=(C_word)a,a+=6,tmp));
t82=C_mutate((C_word*)lf[418]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7667,a[2]=((C_word)li192),tmp=(C_word)a,a+=3,tmp));
t83=C_mutate((C_word*)lf[419]+1 /* (set! process-wait ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7684,a[2]=((C_word)li195),tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[421]+1 /* (set! current-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7762,a[2]=((C_word)li196),tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[422]+1 /* (set! parent-process-id ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7765,a[2]=((C_word)li197),tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[423]+1 /* (set! sleep ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7768,a[2]=((C_word)li198),tmp=(C_word)a,a+=3,tmp));
t87=C_mutate((C_word*)lf[424]+1 /* (set! process-signal ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7775,a[2]=((C_word)li199),tmp=(C_word)a,a+=3,tmp));
t88=C_mutate((C_word*)lf[426]+1 /* (set! shell-command ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7802,a[2]=((C_word)li200),tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[429]+1 /* (set! shell-command-arguments ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7811,a[2]=((C_word)li201),tmp=(C_word)a,a+=3,tmp));
t90=*((C_word*)lf[413]+1);
t91=*((C_word*)lf[416]+1);
t92=C_mutate((C_word*)lf[431]+1 /* (set! process-run ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7817,a[2]=t90,a[3]=t91,a[4]=((C_word)li202),tmp=(C_word)a,a+=5,tmp));
t93=*((C_word*)lf[169]+1);
t94=*((C_word*)lf[419]+1);
t95=*((C_word*)lf[413]+1);
t96=*((C_word*)lf[416]+1);
t97=*((C_word*)lf[308]+1);
t98=*((C_word*)lf[55]+1);
t99=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7873,a[2]=t94,a[3]=((C_word)li206),tmp=(C_word)a,a+=4,tmp);
t100=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7910,a[2]=t93,a[3]=((C_word)li209),tmp=(C_word)a,a+=4,tmp);
t101=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7930,a[2]=t98,a[3]=((C_word)li210),tmp=(C_word)a,a+=4,tmp);
t102=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7944,a[2]=t98,a[3]=((C_word)li211),tmp=(C_word)a,a+=4,tmp);
t103=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7977,a[2]=t100,a[3]=t95,a[4]=t102,a[5]=t96,a[6]=((C_word)li213),tmp=(C_word)a,a+=7,tmp);
t104=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8022,a[2]=t101,a[3]=((C_word)li214),tmp=(C_word)a,a+=4,tmp);
t105=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8033,a[2]=t101,a[3]=((C_word)li215),tmp=(C_word)a,a+=4,tmp);
t106=C_mutate((C_word*)lf[433]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8044,a[2]=t105,a[3]=t99,a[4]=t104,a[5]=t103,a[6]=((C_word)li218),tmp=(C_word)a,a+=7,tmp));
t107=C_set_block_item(lf[434] /* process */,0,C_SCHEME_UNDEFINED);
t108=C_set_block_item(lf[435] /* process* */,0,C_SCHEME_UNDEFINED);
t109=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8102,a[2]=((C_word)li223),tmp=(C_word)a,a+=3,tmp);
t110=C_mutate((C_word*)lf[434]+1 /* (set! process ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8163,a[2]=t109,a[3]=((C_word)li227),tmp=(C_word)a,a+=4,tmp));
t111=C_mutate((C_word*)lf[435]+1 /* (set! process* ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8223,a[2]=t109,a[3]=((C_word)li231),tmp=(C_word)a,a+=4,tmp));
t112=*((C_word*)lf[410]+1);
t113=*((C_word*)lf[408]+1);
t114=*((C_word*)lf[108]+1);
t115=*((C_word*)lf[438]+1);
t116=*((C_word*)lf[119]+1);
t117=C_mutate((C_word*)lf[439]+1 /* (set! find-files ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8283,a[2]=t116,a[3]=t115,a[4]=t114,a[5]=t112,a[6]=t113,a[7]=((C_word)li244),tmp=(C_word)a,a+=8,tmp));
t118=C_mutate((C_word*)lf[446]+1 /* (set! set-root-directory! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8542,a[2]=((C_word)li245),tmp=(C_word)a,a+=3,tmp));
t119=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t119+1)))(2,t119,C_SCHEME_UNDEFINED);}

/* set-root-directory! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8542(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_8542,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[446]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8552,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=t2;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8534,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
t7=(C_word)C_i_foreign_string_argumentp(t5);
/* ##sys#make-c-string */
t8=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}
else{
t7=(C_word)stub2243(C_SCHEME_UNDEFINED,C_SCHEME_FALSE);
t8=t4;
f_8552(t8,(C_word)C_fixnum_lessp(t7,C_fix(0)));}}

/* k8532 in set-root-directory! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)stub2243(C_SCHEME_UNDEFINED,t1);
t3=((C_word*)t0)[2];
f_8552(t3,(C_word)C_fixnum_lessp(t2,C_fix(0)));}

/* k8550 in set-root-directory! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8552(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2402 posix-error */
t2=lf[3];
f_2539(6,t2,((C_word*)t0)[3],lf[48],lf[446],lf[447],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8283(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+22)){
C_save_and_reclaim((void*)tr4r,(void*)f_8283r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_8283r(t0,t1,t2,t3,t4);}}

static void C_ccall f_8283r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8285,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t2,a[9]=((C_word)li239),tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8450,a[2]=t5,a[3]=((C_word)li240),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8455,a[2]=t6,a[3]=((C_word)li241),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8460,a[2]=t7,a[3]=((C_word)li243),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-action21672232 */
t9=t8;
f_8460(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-id21682230 */
t11=t7;
f_8455(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-limit21692227 */
t13=t6;
f_8450(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body21652174 */
t15=t5;
f_8285(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-action2167 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8460(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8460,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8466,a[2]=((C_word)li242),tmp=(C_word)a,a+=3,tmp);
/* def-id21682230 */
t3=((C_word*)t0)[2];
f_8455(t3,t1,t2);}

/* a8465 in def-action2167 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8466,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* def-id2168 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8455(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8455,NULL,3,t0,t1,t2);}
/* def-limit21692227 */
t3=((C_word*)t0)[2];
f_8450(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit2169 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8450(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8450,NULL,4,t0,t1,t2,t3);}
/* body21652174 */
t4=((C_word*)t0)[2];
f_8285(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8285(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_8285,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(((C_word*)t0)[8],lf[439]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8292,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=t7,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],tmp=(C_word)a,a+=13,tmp);
t9=t4;
if(C_truep(t9)){
if(C_truep((C_word)C_fixnump(t4))){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8445,a[2]=t4,a[3]=t7,a[4]=((C_word)li237),tmp=(C_word)a,a+=5,tmp);
t11=t8;
f_8292(t11,t10);}
else{
t10=t4;
t11=t8;
f_8292(t11,t10);}}
else{
t10=t8;
f_8292(t10,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8437,a[2]=((C_word)li238),tmp=(C_word)a,a+=3,tmp));}}

/* f_8437 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8437(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8437,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_8445 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8445(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8445,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8292(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8292,NULL,2,t0,t1);}
t2=(C_word)C_i_stringp(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8425,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t2)){
t4=t3;
f_8425(2,t4,t2);}
else{
/* posixunix.scm: 2374 regexp? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[445]+1)))(3,*((C_word*)lf[445]+1),t3,((C_word*)t0)[12]);}}

/* k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8425,2,t0,t1);}
t2=(C_truep(t1)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8426,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],a[4]=((C_word)li232),tmp=(C_word)a,a+=5,tmp):((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8302,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t2,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8419,a[2]=t3,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2377 make-pathname */
t5=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],lf[444]);}

/* k8417 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2377 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8302,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8304,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t3,a[11]=((C_word)li236),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_8304(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8304(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8304,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8323,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t4,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=t5,a[12]=t1,a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2383 directory? */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}}

/* k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8323,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_8399,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 2384 pathname-file */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8405,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2391 pproc */
t3=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}}

/* k8403 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8405,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8412,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2391 action */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 2392 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_8304(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k8410 in k8403 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2391 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8304(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8399,2,t0,t1);}
if(C_truep((C_truep((C_word)C_i_equalp(t1,lf[440]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t1,lf[441]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixunix.scm: 2384 loop */
t2=((C_word*)((C_word*)t0)[12])[1];
f_8304(t2,((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8338,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm: 2385 lproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}}

/* k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8338(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8338,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[11])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8348,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8350,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=t6,a[5]=((C_word)li233),tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word)li234),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8379,a[2]=t6,a[3]=((C_word*)t0)[11],a[4]=t4,a[5]=((C_word)li235),tmp=(C_word)a,a+=6,tmp);
/* ##sys#dynamic-wind */
t11=*((C_word*)lf[443]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8389,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8392,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 2390 pproc */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}}

/* k8390 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2390 action */
t2=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posixunix.scm: 2390 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8304(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k8387 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2390 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8304(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8378 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8379,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a8354 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8363,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8377,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2388 make-pathname */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[6],lf[442]);}

/* k8375 in a8354 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2388 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k8361 in a8354 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8367,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8370,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 2389 pproc */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k8368 in k8361 in a8354 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2389 action */
t2=((C_word*)t0)[8];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[5];
/* posixunix.scm: 2388 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_8304(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* k8365 in k8361 in a8354 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2388 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8304(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8349 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8350,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k8346 in k8336 in k8397 in k8321 in loop in k8300 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2386 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_8304(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_8426 in k8423 in k8290 in body2165 in find-files in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8426(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8426,3,t0,t1,t2);}
/* posixunix.scm: 2375 string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* process* in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8223(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_8223r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8223r(t0,t1,t2,t3);}}

static void C_ccall f_8223r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8225,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li228),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8230,a[2]=t4,a[3]=((C_word)li229),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8235,a[2]=t5,a[3]=((C_word)li230),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args21342145 */
t7=t6;
f_8235(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env21352143 */
t9=t5;
f_8230(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body21322140 */
t11=t4;
f_8225(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-args2134 in process* in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8235(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8235,NULL,2,t0,t1);}
/* def-env21352143 */
t2=((C_word*)t0)[2];
f_8230(t2,t1,C_SCHEME_FALSE);}

/* def-env2135 in process* in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8230(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8230,NULL,3,t0,t1,t2);}
/* body21322140 */
t3=((C_word*)t0)[2];
f_8225(t3,t1,t2,C_SCHEME_FALSE);}

/* body2132 in process* in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8225(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8225,NULL,4,t0,t1,t2,t3);}
/* posixunix.scm: 2351 %process */
f_8102(t1,lf[435],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3);}

/* process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8163(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_8163r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8163r(t0,t1,t2,t3);}}

static void C_ccall f_8163r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8165,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li224),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8170,a[2]=t4,a[3]=((C_word)li225),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8175,a[2]=t5,a[3]=((C_word)li226),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args21032114 */
t7=t6;
f_8175(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env21042112 */
t9=t5;
f_8170(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body21012109 */
t11=t4;
f_8165(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-args2103 in process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8175(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8175,NULL,2,t0,t1);}
/* def-env21042112 */
t2=((C_word*)t0)[2];
f_8170(t2,t1,C_SCHEME_FALSE);}

/* def-env2104 in process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8170(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8170,NULL,3,t0,t1,t2);}
/* body21012109 */
t3=((C_word*)t0)[2];
f_8165(t3,t1,t2,C_SCHEME_FALSE);}

/* body2101 in process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8165(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8165,NULL,4,t0,t1,t2,t3);}
/* posixunix.scm: 2348 %process */
f_8102(t1,lf[434],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3);}

/* %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8102(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_save_and_reclaim((void*)trf_8102,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8104,a[2]=t2,a[3]=((C_word)li220),tmp=(C_word)a,a+=4,tmp);
t10=(C_word)C_i_check_string_2(((C_word*)t7)[1],t2);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8123,a[2]=t9,a[3]=t1,a[4]=t3,a[5]=t6,a[6]=t8,a[7]=t7,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t8)[1])){
/* posixunix.scm: 2337 chkstrlst */
t12=t9;
f_8104(t12,t11,((C_word*)t8)[1]);}
else{
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8157,a[2]=t11,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2339 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[429]+1)))(3,*((C_word*)lf[429]+1),t12,((C_word*)t7)[1]);}}

/* k8155 in %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8157,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2340 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[426]+1)))(2,*((C_word*)lf[426]+1),t3);}

/* k8159 in k8155 in %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_8123(2,t3,t2);}

/* k8121 in %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8126,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm: 2341 chkstrlst */
t3=((C_word*)t0)[2];
f_8104(t3,t2,((C_word*)t0)[5]);}
else{
t3=t2;
f_8126(2,t3,C_SCHEME_UNDEFINED);}}

/* k8124 in k8121 in %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8131,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li221),tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8137,a[2]=((C_word*)t0)[3],a[3]=((C_word)li222),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a8136 in k8124 in k8121 in %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8137(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8137,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm: 2344 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixunix.scm: 2345 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a8130 in k8124 in k8121 in %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8131,2,t0,t1);}
/* posixunix.scm: 2342 ##sys#process */
t2=*((C_word*)lf[433]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* chkstrlst in %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8104(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8104,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8113,a[2]=((C_word*)t0)[2],a[3]=((C_word)li219),tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[437]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a8112 in chkstrlst in %process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8113(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8113,3,t0,t1,t2);}
t3=*((C_word*)lf[436]+1);
/* g20732074 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[21],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_8044,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8050,a[2]=t8,a[3]=t7,a[4]=t6,a[5]=t5,a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word)li216),tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8056,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t6,a[9]=t7,a[10]=((C_word)li217),tmp=(C_word)a,a+=11,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}

/* a8055 in ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim((void*)tr6,(void*)f_8056,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_not(((C_word*)t0)[9]);
t7=(C_word)C_i_not(((C_word*)t0)[8]);
t8=(C_word)C_i_not(((C_word*)t0)[7]);
t9=(C_word)C_a_i_vector(&a,3,t6,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8067,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t5,a[13]=t1,tmp=(C_word)a,a+=14,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8087,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t10,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2318 make-on-close */
t12=((C_word*)t0)[3];
f_7873(t12,t11,((C_word*)t0)[5],t5,t9,C_fix(0),C_fix(1),C_fix(2));}

/* k8085 in a8055 in ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2317 input-port */
t2=((C_word*)t0)[7];
f_8022(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8065 in a8055 in ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8071,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=t1,a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2320 make-on-close */
t4=((C_word*)t0)[6];
f_7873(t4,t3,((C_word*)t0)[10],((C_word*)t0)[12],((C_word*)t0)[5],C_fix(1),C_fix(0),C_fix(2));}

/* k8081 in k8065 in a8055 in ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2319 output-port */
t2=((C_word*)t0)[7];
f_8033(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8069 in k8065 in a8055 in ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8075,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8079,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2323 make-on-close */
t4=((C_word*)t0)[3];
f_7873(t4,t3,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[2],C_fix(2),C_fix(0),C_fix(1));}

/* k8077 in k8069 in k8065 in a8055 in ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2322 input-port */
t2=((C_word*)t0)[7];
f_8022(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8073 in k8069 in k8065 in a8055 in ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2316 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8049 in ##sys#process in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8050,2,t0,t1);}
/* posixunix.scm: 2311 spawn */
t2=((C_word*)t0)[8];
f_7977(t2,t1,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8033(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8033,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8037,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2307 connect-parent */
t8=((C_word*)t0)[2];
f_7930(t8,t7,t4,t5);}

/* k8035 in output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2308 ##sys#custom-output-port */
((C_proc8)C_retrieve_proc(*((C_word*)lf[326]+1)))(8,*((C_word*)lf[326]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_SCHEME_TRUE,C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_8022(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8022,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8026,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2303 connect-parent */
t8=((C_word*)t0)[2];
f_7930(t8,t7,t4,t5);}

/* k8024 in input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2304 ##sys#custom-input-port */
((C_proc8)C_retrieve_proc(*((C_word*)lf[312]+1)))(8,*((C_word*)lf[312]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_SCHEME_TRUE,C_fix(256),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7977(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7977,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=t3,a[10]=t2,a[11]=((C_word*)t0)[5],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 2290 needed-pipe */
t9=((C_word*)t0)[2];
f_7910(t9,t8,t6);}

/* k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7984,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2291 needed-pipe */
t3=((C_word*)t0)[2];
f_7910(t3,t2,((C_word*)t0)[5]);}

/* k7982 in k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7987,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2292 needed-pipe */
t3=((C_word*)t0)[2];
f_7910(t3,t2,((C_word*)t0)[6]);}

/* k7985 in k7982 in k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_i_car(t3);
t6=t2;
f_7994(t6,(C_word)C_a_i_cons(&a,2,t4,t5));}
else{
t4=t2;
f_7994(t4,C_SCHEME_FALSE);}}

/* k7992 in k7985 in k7982 in k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7994(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7994,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7998,a[2]=((C_word*)t0)[12],a[3]=t1,a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_8000,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word)li212),tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2295 process-fork */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* a7999 in k7992 in k7985 in k7982 in k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8004,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=t1,a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* posixunix.scm: 2297 connect-child */
t3=((C_word*)t0)[7];
f_7944(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[289]+1));}

/* k8002 in a7999 in k7992 in k7985 in k7982 in k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8007,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_i_car(t3);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
/* posixunix.scm: 2298 connect-child */
t7=((C_word*)t0)[5];
f_7944(t7,t2,t6,((C_word*)t0)[2],*((C_word*)lf[290]+1));}
else{
/* posixunix.scm: 2298 connect-child */
t4=((C_word*)t0)[5];
f_7944(t4,t2,C_SCHEME_FALSE,((C_word*)t0)[2],*((C_word*)lf[290]+1));}}

/* k8005 in k8002 in a7999 in k7992 in k7985 in k7982 in k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8007,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8010,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[4];
if(C_truep(t3)){
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_i_car(t3);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
/* posixunix.scm: 2299 connect-child */
t7=((C_word*)t0)[3];
f_7944(t7,t2,t6,((C_word*)t0)[2],*((C_word*)lf[291]+1));}
else{
/* posixunix.scm: 2299 connect-child */
t4=((C_word*)t0)[3];
f_7944(t4,t2,C_SCHEME_FALSE,((C_word*)t0)[2],*((C_word*)lf[291]+1));}}

/* k8008 in k8005 in k8002 in a7999 in k7992 in k7985 in k7982 in k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_8010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2300 process-execute */
t2=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7996 in k7992 in k7985 in k7982 in k7979 in spawn in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2293 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* connect-child in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7944(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7944,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7957,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2281 file-close */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k7955 in connect-child in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7957,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=(C_word)C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7869,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2255 duplicate-fileno */
t6=*((C_word*)lf[308]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t3);}}

/* k7867 in k7955 in connect-child in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2256 file-close */
t2=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* connect-parent in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7930(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7930,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7943,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2275 file-close */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k7941 in connect-parent in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* needed-pipe in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7910(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7910,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7919,a[2]=((C_word*)t0)[2],a[3]=((C_word)li207),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7925,a[2]=((C_word)li208),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a7924 in needed-pipe in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7925(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7925,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* a7918 in needed-pipe in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7919,2,t0,t1);}
/* posixunix.scm: 2270 create-pipe */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* make-on-close in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7873(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7873,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7875,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t6,a[7]=t5,a[8]=t4,a[9]=((C_word)li205),tmp=(C_word)a,a+=10,tmp));}

/* f_7875 in make-on-close in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7875(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7875,2,t0,t1);}
t2=(C_word)C_i_vector_set(((C_word*)t0)[8],((C_word*)t0)[7],C_SCHEME_TRUE);
t3=(C_word)C_i_vector_ref(((C_word*)t0)[8],((C_word*)t0)[6]);
t4=(C_truep(t3)?(C_word)C_i_vector_ref(((C_word*)t0)[8],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7890,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li203),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7896,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word)li204),tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a7895 */
static void C_ccall f_7896(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7896,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm: 2265 ##sys#signal-hook */
t5=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t1,lf[201],((C_word*)t0)[3],lf[432],((C_word*)t0)[2],t4);}}

/* a7889 */
static void C_ccall f_7890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7890,2,t0,t1);}
/* posixunix.scm: 2263 process-wait */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* process-run in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7817(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_7817r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_7817r(t0,t1,t2,t3);}}

static void C_ccall f_7817r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7824,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2219 process-fork */
t7=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}

/* k7822 in process-run in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7824,2,t0,t1);}
t2=(C_word)C_eqp(C_fix(0),t1);
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm: 2221 process-execute */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7843,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2223 ##sys#shell-command */
((C_proc2)C_retrieve_proc(*((C_word*)lf[426]+1)))(2,*((C_word*)lf[426]+1),t3);}}
else{
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7841 in k7822 in process-run in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7847,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2223 ##sys#shell-command-arguments */
((C_proc3)C_retrieve_proc(*((C_word*)lf[429]+1)))(3,*((C_word*)lf[429]+1),t2,((C_word*)t0)[2]);}

/* k7845 in k7841 in k7822 in process-run in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2223 process-execute */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7811,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[430],t2));}

/* ##sys#shell-command in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7806,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 2209 get-environment-variable */
t3=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[428]);}

/* k7804 in ##sys#shell-command in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7806(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[427]);}}

/* process-signal in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7775(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_7775r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_7775r(t0,t1,t2,t3);}}

static void C_ccall f_7775r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_fix((C_word)SIGTERM));
t6=(C_word)C_i_check_exact_2(t2,lf[424]);
t7=(C_word)C_i_check_exact_2(t5,lf[424]);
t8=(C_word)C_kill(t2,t5);
t9=(C_word)C_eqp(t8,C_fix(-1));
if(C_truep(t9)){
/* posixunix.scm: 2206 posix-error */
t10=lf[3];
f_2539(7,t10,t1,lf[201],lf[424],lf[425],t2,t5);}
else{
t10=C_SCHEME_UNDEFINED;
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}

/* sleep in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7768(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7768,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub1904(C_SCHEME_UNDEFINED,t3));}

/* parent-process-id in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7765,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub1901(C_SCHEME_UNDEFINED));}

/* current-process-id in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7762,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub1899(C_SCHEME_UNDEFINED));}

/* process-wait in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7684(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_7684r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7684r(t0,t1,t2);}}

static void C_ccall f_7684r(C_word t0,C_word t1,C_word t2){
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
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_i_car(t2));
t5=(C_word)C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t2));
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:(C_word)C_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t6));
if(C_truep((C_word)C_i_nullp(t10))){
t11=(C_truep(t4)?t4:C_fix(-1));
t12=(C_word)C_i_check_exact_2(t11,lf[419]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7714,a[2]=t8,a[3]=t11,a[4]=((C_word)li193),tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7720,a[2]=t11,a[3]=((C_word)li194),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t13,t14);}
else{
/* ##sys#error */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}

/* a7719 in process-wait in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7720,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm: 2192 posix-error */
t6=lf[3];
f_2539(6,t6,t1,lf[201],lf[419],lf[420],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 2193 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a7713 in process-wait in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7714,2,t0,t1);}
/* posixunix.scm: 2190 ##sys#process-wait */
((C_proc4)C_retrieve_proc(*((C_word*)lf[418]+1)))(4,*((C_word*)lf[418]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_7667,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=(C_word)C_waitpid(t2,t4);
t6=(C_word)C_WIFEXITED(C_fix((C_word)C_wait_status));
if(C_truep(t6)){
t7=(C_word)C_WEXITSTATUS(C_fix((C_word)C_wait_status));
/* posixunix.scm: 2177 values */
C_values(5,0,t1,t5,t6,t7);}
else{
if(C_truep((C_word)C_WIFSIGNALED(C_fix((C_word)C_wait_status)))){
t7=(C_word)C_WTERMSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm: 2177 values */
C_values(5,0,t1,t5,t6,t7);}
else{
t7=(C_word)C_WSTOPSIG(C_fix((C_word)C_wait_status));
/* posixunix.scm: 2177 values */
C_values(5,0,t1,t5,t6,t7);}}}

/* process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7485(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_7485r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7485r(t0,t1,t2,t3);}}

static void C_ccall f_7485r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word)li188),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7614,a[2]=t4,a[3]=((C_word)li189),tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7619,a[2]=t5,a[3]=((C_word)li190),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-arglist18111858 */
t7=t6;
f_7619(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-envlist18121856 */
t9=t5;
f_7614(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body18091817 */
t11=t4;
f_7487(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-arglist1811 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7619(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7619,NULL,2,t0,t1);}
/* def-envlist18121856 */
t2=((C_word*)t0)[2];
f_7614(t2,t1,C_SCHEME_END_OF_LIST);}

/* def-envlist1812 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7614(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7614,NULL,3,t0,t1,t2);}
/* body18091817 */
t3=((C_word*)t0)[2];
f_7487(t3,t1,t2,C_SCHEME_FALSE);}

/* body1809 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7487(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7487,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(((C_word*)t0)[5],lf[416]);
t5=(C_word)C_i_check_list_2(t2,lf[416]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7497,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2145 pathname-strip-directory */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[5]);}

/* k7495 in body1809 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7497,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=f_7447(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7505,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li187),tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_7505(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* doloop1821 in k7495 in body1809 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7505(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7505,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=f_7447(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7518,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=(C_word)C_i_check_list_2(((C_word*)t0)[5],lf[416]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7551,a[2]=((C_word*)t0)[3],a[3]=((C_word)li186),tmp=(C_word)a,a+=4,tmp);
t8=t5;
f_7518(t8,f_7551(t7,((C_word*)t0)[5],C_fix(0)));}
else{
t6=t5;
f_7518(t6,C_SCHEME_UNDEFINED);}}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_check_string_2(t4,lf[416]);
t6=(C_word)C_block_size(t4);
t7=f_7447(t3,t4,t6);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_fixnum_plus(t3,C_fix(1));
t15=t1;
t16=t8;
t17=t9;
t1=t15;
t2=t16;
t3=t17;
goto loop;}}

/* doloop1829 in doloop1821 in k7495 in body1809 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_7551(C_word t0,C_word t1,C_word t2){
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
if(C_truep((C_word)C_i_nullp(t1))){
return(f_7466(t2,C_SCHEME_FALSE,C_fix(0)));}
else{
t3=(C_word)C_i_car(t1);
t4=(C_word)C_i_check_string_2(t3,lf[416]);
t5=(C_word)C_block_size(t3);
t6=f_7466(t2,t3,t5);
t7=(C_word)C_i_cdr(t1);
t8=(C_word)C_fixnum_plus(t2,C_fix(1));
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k7516 in doloop1821 in k7495 in body1809 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7518(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7518,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7543,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 2159 ##sys#expand-home-path */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k7541 in k7516 in doloop1821 in k7495 in body1809 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2159 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k7519 in k7516 in doloop1821 in k7495 in body1809 in process-execute in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_execve(t1):(C_word)C_execvp(t1));
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=(C_word)stub1782(C_SCHEME_UNDEFINED);
t5=(C_word)stub1794(C_SCHEME_UNDEFINED);
/* posixunix.scm: 2166 posix-error */
t6=lf[3];
f_2539(6,t6,((C_word*)t0)[3],lf[201],lf[416],lf[417],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* setenv in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_7466(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=(C_word)C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
return((C_word)stub1787(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* setarg in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_7447(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=(C_word)C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
return((C_word)stub1775(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* process-fork in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7405(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_7405r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_7405r(t0,t1,t2);}}

static void C_ccall f_7405r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(3);
t3=(C_word)stub1746(C_SCHEME_UNDEFINED);
t4=(C_word)C_eqp(C_fix(-1),t3);
if(C_truep(t4)){
/* posixunix.scm: 2130 posix-error */
t5=lf[3];
f_2539(5,t5,t1,lf[201],lf[413],lf[414]);}
else{
t5=(C_word)C_notvemptyp(t2);
t6=(C_truep(t5)?(C_word)C_eqp(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(C_word)C_i_vector_ref(t2,C_fix(0));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7430,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* g17581759 */
t9=t7;
((C_proc2)C_retrieve_proc(t9))(2,t9,t8);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}}}

/* k7428 in process-fork in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[2];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub1763(C_SCHEME_UNDEFINED,t3));}

/* glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7291(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_7291r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_7291r(t0,t1,t2);}}

static void C_ccall f_7291r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(12);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=((C_word)li181),tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_7297(t6,t1,t2);}

/* conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7297(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7297,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7312,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word)li177),tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7318,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=((C_word)li180),tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7318,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7322,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7397,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t7=t3;
/* posixunix.scm: 2115 make-pathname */
t8=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}
else{
/* posixunix.scm: 2115 make-pathname */
t7=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,C_SCHEME_FALSE,lf[412],t4);}}

/* k7395 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2115 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7320 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7325,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 2116 regexp */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k7323 in k7320 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7332,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=((C_word*)t0)[5];
/* posixunix.scm: 2117 directory */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_SCHEME_TRUE);}
else{
/* posixunix.scm: 2117 directory */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[411],C_SCHEME_TRUE);}}

/* k7330 in k7323 in k7320 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7332,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7334,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word)li179),tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_7334(t5,((C_word*)t0)[2],t1);}

/* loop in k7330 in k7323 in k7320 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7334(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7334,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cdr(((C_word*)t0)[8]);
/* posixunix.scm: 2118 conc-loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_7297(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7351,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(t2);
/* posixunix.scm: 2119 string-match */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k7349 in loop in k7330 in k7323 in k7320 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7351,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7355,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word)li178),tmp=(C_word)a,a+=7,tmp);
/* g17351736 */
t3=t2;
f_7355(t3,((C_word*)t0)[2],t1);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* posixunix.scm: 2121 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7334(t3,((C_word*)t0)[2],t2);}}

/* g1735 in k7349 in loop in k7330 in k7323 in k7320 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7355(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7355,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7363,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* posixunix.scm: 2120 make-pathname */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}

/* k7361 in g1735 in k7349 in loop in k7330 in k7323 in k7320 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7367,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm: 2120 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7334(t4,t2,t3);}

/* k7365 in k7361 in g1735 in k7349 in loop in k7330 in k7323 in k7320 in a7317 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7367,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a7311 in conc-loop in glob in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7312,2,t0,t1);}
/* posixunix.scm: 2114 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* get-host-name in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7283,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,(C_word)stub1686(t3),C_fix(0));}

/* k7281 in get-host-name in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7286,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}
else{
/* posixunix.scm: 2096 posix-error */
t3=lf[3];
f_2539(5,t3,t2,lf[401],lf[405],lf[406]);}}

/* k7284 in k7281 in get-host-name in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* terminal-size in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7244,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7248,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2077 ##sys#terminal-check */
f_7189(t3,lf[400],t2);}

/* k7246 in terminal-size in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7248,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7268,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[403]+1)))(6,*((C_word*)lf[403]+1),t4,t2,C_fix(0),C_SCHEME_FALSE,lf[404]);}

/* k7266 in k7246 in terminal-size in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7272,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#make-locative */
((C_proc6)C_retrieve_proc(*((C_word*)lf[403]+1)))(6,*((C_word*)lf[403]+1),t2,((C_word*)t0)[2],C_fix(0),C_SCHEME_FALSE,lf[404]);}

/* k7270 in k7266 in k7246 in terminal-size in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7272(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_C_fileno(((C_word*)t0)[6]);
t3=((C_word*)t0)[5];
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=(C_word)C_i_foreign_pointer_argumentp(t3);
t6=(C_word)C_i_foreign_pointer_argumentp(t1);
t7=(C_word)stub1667(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=(C_word)C_eqp(C_fix(0),t7);
if(C_truep(t8)){
/* posixunix.scm: 2084 values */
C_values(4,0,((C_word*)t0)[4],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[3]))),C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
/* posixunix.scm: 2085 posix-error */
t9=lf[3];
f_2539(6,t9,((C_word*)t0)[4],lf[401],lf[400],lf[402],((C_word*)t0)[6]);}}

/* terminal-name in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7221(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7221,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7225,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2069 ##sys#terminal-check */
f_7189(t3,lf[399],t2);}

/* k7223 in terminal-name in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7225,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(C_word)C_C_fileno(((C_word*)t0)[2]);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=(C_word)stub1657(t4,t5);
/* ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* ##sys#terminal-check in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7189(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7189,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7193,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2061 ##sys#check-port */
t5=*((C_word*)lf[161]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,t2);}

/* k7191 in ##sys#terminal-check in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(7));
t3=(C_word)C_eqp(lf[98],t2);
t4=(C_truep(t3)?(C_word)C_tty_portp(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
/* posixunix.scm: 2064 ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,((C_word*)t0)[3],((C_word*)t0)[2],lf[398],((C_word*)t0)[4]);}}

/* terminal-port? in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7170(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7170,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7174,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2056 ##sys#check-port */
t4=*((C_word*)lf[161]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[396]);}

/* k7172 in terminal-port? in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7174,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2057 ##sys#peek-unsigned-integer */
t3=*((C_word*)lf[307]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k7175 in k7172 in terminal-port? in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(C_fix(0),t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_tty_portp(((C_word*)t0)[2]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* set-buffering-mode! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7111(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_7111r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_7111r(t0,t1,t2,t3,t4);}}

static void C_ccall f_7111r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7115,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2041 ##sys#check-port */
t6=*((C_word*)lf[161]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[390]);}

/* k7113 in set-buffering-mode! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7115(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7115,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7121,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[392]);
if(C_truep(t6)){
t7=t5;
f_7121(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=(C_word)C_eqp(t4,lf[393]);
if(C_truep(t7)){
t8=C_fix((C_word)_IOLBF);
t9=t5;
f_7121(2,t9,t8);}
else{
t8=(C_word)C_eqp(t4,lf[394]);
if(C_truep(t8)){
t9=t5;
f_7121(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixunix.scm: 2047 ##sys#error */
t9=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[390],lf[395],((C_word*)t0)[4],((C_word*)t0)[2]);}}}}

/* k7119 in k7113 in set-buffering-mode! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7121,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[390]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7130,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(7));
t5=(C_word)C_eqp(lf[98],t4);
if(C_truep(t5)){
t6=(C_word)C_setvbuf(((C_word*)t0)[2],t1,((C_word*)t0)[4]);
t7=t3;
f_7130(t7,(C_word)C_fixnum_lessp(t6,C_fix(0)));}
else{
t6=t3;
f_7130(t6,C_SCHEME_TRUE);}}

/* k7128 in k7119 in k7113 in set-buffering-mode! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_7130(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2053 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],lf[390],lf[391],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* set-alarm! in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7104(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7104,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub1624(C_SCHEME_UNDEFINED,t3));}

/* _exit in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7088(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_7088r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_7088r(t0,t1,t2);}}

static void C_ccall f_7088r(C_word t0,C_word t1,C_word t2){
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
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub1619(C_SCHEME_UNDEFINED,t5));}
else{
t3=t1;
t4=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub1619(C_SCHEME_UNDEFINED,t4));}}

/* local-timezone-abbreviation in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7076,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,(C_word)stub1614(t2),C_fix(0));}

/* utc-time->seconds in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7061(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7061,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7065,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2008 check-time-vector */
f_6773(t3,lf[384],t2);}

/* k7063 in utc-time->seconds in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7065,2,t0,t1);}
t2=(C_word)C_a_timegm(&a,1,((C_word*)t0)[3]);
if(C_truep((C_word)C_flonum_equalp(lf[385],t2))){
/* posixunix.scm: 2011 ##sys#error */
t3=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[384],lf[386],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* local-time->seconds in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7046(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7046,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7050,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2001 check-time-vector */
f_6773(t3,lf[381],t2);}

/* k7048 in local-time->seconds in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7050,2,t0,t1);}
t2=(C_word)C_a_mktime(&a,1,((C_word*)t0)[3]);
if(C_truep((C_word)C_flonum_equalp(lf[382],t2))){
/* posixunix.scm: 2004 ##sys#error */
t3=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],lf[381],lf[383],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* string->time in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7000(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_7000r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7000r(t0,t1,t2,t3);}}

static void C_ccall f_7000r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7004,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_7004(2,t5,lf[380]);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_7004(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k7002 in string->time in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7004,2,t0,t1);}
t2=(C_word)C_i_check_string_2(((C_word*)t0)[3],lf[379]);
t3=(C_word)C_i_check_string_2(t1,lf[379]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7017,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1998 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}

/* k7015 in k7002 in string->time in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7021,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1998 ##sys#make-c-string */
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k7019 in k7015 in k7002 in string->time in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_7021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7021,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,10,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub1586(C_SCHEME_UNDEFINED,t4,t1,t2));}

/* time->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6931(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_6931r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6931r(t0,t1,t2,t3);}}

static void C_ccall f_6931r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6935,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_6935(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_6935(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k6933 in time->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1982 check-time-vector */
f_6773(t2,lf[376],((C_word*)t0)[2]);}

/* k6936 in k6933 in time->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6938(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6938,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_i_check_string_2(((C_word*)t0)[4],lf[376]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6957,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1986 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub1550(t4,t3),C_fix(0));}}

/* k6958 in k6936 in k6933 in time->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(t1);
t3=(C_word)C_fixnum_difference(t2,C_fix(1));
/* posixunix.scm: 1990 ##sys#substring */
t4=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixunix.scm: 1991 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[376],lf[378],((C_word*)t0)[2]);}}

/* k6955 in k6936 in k6933 in time->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6957,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],(C_word)stub1556(t3,t2,t1),C_fix(0));}

/* k6945 in k6936 in k6933 in time->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* posixunix.scm: 1987 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[376],lf[377],((C_word*)t0)[2]);}}

/* seconds->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6870(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6870r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6870r(t0,t1,t2);}}

static void C_ccall f_6870r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6874,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixunix.scm: 1971 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[372]+1)))(2,*((C_word*)lf[372]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_6874(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k6872 in seconds->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6874(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6874,2,t0,t1);}
t2=(C_word)C_i_check_number_2(t1,lf[374]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6880,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=t1;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_integer_argumentp(t4);
t7=(C_word)stub1529(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k6878 in k6872 in seconds->string in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(t1);
t3=(C_word)C_fixnum_difference(t2,C_fix(1));
/* posixunix.scm: 1975 ##sys#substring */
t4=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],t1,C_fix(0),t3);}
else{
/* posixunix.scm: 1976 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[374],lf[375],((C_word*)t0)[2]);}}

/* seconds->utc-time in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6826(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6826r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6826r(t0,t1,t2);}}

static void C_ccall f_6826r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6830,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixunix.scm: 1965 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[372]+1)))(2,*((C_word*)lf[372]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_check_number_2(t5,lf[373]);
/* posixunix.scm: 1967 ##sys#decode-seconds */
t7=*((C_word*)lf[371]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t5,C_SCHEME_TRUE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k6828 in seconds->utc-time in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_number_2(t1,lf[373]);
/* posixunix.scm: 1967 ##sys#decode-seconds */
t3=*((C_word*)lf[371]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* seconds->local-time in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6792(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_6792r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6792r(t0,t1,t2);}}

static void C_ccall f_6792r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6796,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* posixunix.scm: 1961 current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[372]+1)))(2,*((C_word*)lf[372]+1),t3);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_check_number_2(t5,lf[370]);
/* posixunix.scm: 1963 ##sys#decode-seconds */
t7=*((C_word*)lf[371]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,t5,C_SCHEME_FALSE);}
else{
/* ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k6794 in seconds->local-time in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_check_number_2(t1,lf[370]);
/* posixunix.scm: 1963 ##sys#decode-seconds */
t3=*((C_word*)lf[371]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* check-time-vector in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6773(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6773,NULL,3,t1,t2,t3);}
t4=(C_word)C_i_check_vector_2(t3,t2);
t5=(C_word)C_block_size(t3);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixunix.scm: 1959 ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,t2,lf[369],t3);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* memory-mapped-file? in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6767(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6767,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[359]));}

/* memory-mapped-file-pointer in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6758(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6758,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[359],lf[366]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* unmap-file-from-memory in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6723(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_6723r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_6723r(t0,t1,t2,t3);}}

static void C_ccall f_6723r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_structure_2(t2,lf[359],lf[364]);
t5=(C_word)C_notvemptyp(t3);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t3,C_fix(0)):(C_word)C_slot(t2,C_fix(2)));
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_truep(t7)?(C_word)C_i_foreign_pointer_argumentp(t7):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_integer_argumentp(t6);
t10=(C_word)stub1476(C_SCHEME_UNDEFINED,t8,t9);
t11=(C_word)C_eqp(C_fix(0),t10);
if(C_truep(t11)){
t12=C_SCHEME_UNDEFINED;
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
/* posixunix.scm: 1945 posix-error */
t12=lf[3];
f_2539(7,t12,t1,lf[48],lf[364],lf[365],t2,t6);}}

/* map-file-to-memory in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr7rv,(void*)f_6661r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest_vector(a,C_rest_count(0));
f_6661r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_6661r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6665,a[2]=t1,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;
f_6665(2,t10,t2);}
else{
/* posixunix.scm: 1930 ##sys#null-pointer */
t10=*((C_word*)lf[363]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t8);}}

/* k6663 in map-file-to-memory in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6665,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[7]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[7],C_fix(0)):C_fix(0));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6671,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_blockp(t1))){
if(C_truep((C_word)C_specialp(t1))){
t5=t4;
f_6671(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1933 ##sys#signal-hook */
t5=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[60],lf[358],lf[362],t1);}}
else{
/* posixunix.scm: 1933 ##sys#signal-hook */
t5=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[60],lf[358],lf[362],t1);}}

/* k6669 in k6663 in map-file-to-memory in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6671(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6671,2,t0,t1);}
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t8=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_integer_argumentp(t3);
t10=(C_word)C_i_foreign_fixnum_argumentp(t4);
t11=(C_word)C_i_foreign_fixnum_argumentp(t5);
t12=(C_word)C_i_foreign_fixnum_argumentp(t6);
t13=(C_word)C_i_foreign_integer_argumentp(((C_word*)t0)[3]);
t14=(C_word)stub1445(t7,t8,t9,t10,t11,t12,t13);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6677,a[2]=((C_word*)t0)[7],a[3]=t14,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6690,a[2]=t14,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t15,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 1935 ##sys#pointer->address */
t17=*((C_word*)lf[361]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,t14);}

/* k6688 in k6669 in k6663 in map-file-to-memory in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6690,2,t0,t1);}
t2=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm: 1936 posix-error */
t3=lf[3];
f_2539(11,t3,((C_word*)t0)[10],lf[48],lf[358],lf[360],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,3,lf[359],((C_word*)t0)[2],((C_word*)t0)[8]));}}

/* k6675 in k6669 in k6663 in map-file-to-memory in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6677,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[359],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* get-environment-variables in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6557,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6563,a[2]=t3,a[3]=((C_word)li154),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6563(t5,t1,C_fix(0));}

/* loop in get-environment-variables in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6563(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6563,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6567,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)stub1427(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k6565 in loop in get-environment-variables in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6567,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6575,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word)li153),tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_6575(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k6565 in loop in get-environment-variables in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6575(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6575,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(C_make_character(61),(C_word)C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6601,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1894 ##sys#substring */
t5=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[5],C_fix(0),t2);}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm: 1897 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k6599 in scan in k6565 in loop in get-environment-variables in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6605,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=(C_word)C_block_size(((C_word*)t0)[2]);
/* posixunix.scm: 1895 ##sys#substring */
t5=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,((C_word*)t0)[2],t3,t4);}

/* k6603 in k6599 in scan in k6565 in loop in get-environment-variables in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6605,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6593,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1896 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6563(t5,t3,t4);}

/* k6591 in k6603 in k6599 in scan in k6565 in loop in get-environment-variables in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6593,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6537(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6537,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[346]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6545,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1883 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6543 in unsetenv in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_unsetenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6520,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[345]);
t5=(C_word)C_i_check_string_2(t3,lf[345]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6531,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1878 ##sys#make-c-string */
t7=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k6529 in setenv in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6535,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1878 ##sys#make-c-string */
t3=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k6533 in k6529 in setenv in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* fifo? in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6494(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6494,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[91]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6501,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6518,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1866 ##sys#expand-home-path */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k6516 in fifo? in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1866 ##sys#file-info */
t2=*((C_word*)lf[344]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6499 in fifo? in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(C_fix(3),t2));}
else{
/* posixunix.scm: 1869 posix-error */
t2=lf[3];
f_2539(6,t2,((C_word*)t0)[3],lf[48],lf[91],lf[343],((C_word*)t0)[2]);}}

/* create-fifo in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6451(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_6451r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_6451r(t0,t1,t2,t3);}}

static void C_ccall f_6451r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_string_2(t2,lf[341]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6458,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(t3))){
t6=t5;
f_6458(t6,(C_word)C_i_vector_ref(t3,C_fix(0)));}
else{
t6=(C_word)C_fixnum_or(C_fix((C_word)S_IRWXG),C_fix((C_word)S_IRWXO));
t7=t5;
f_6458(t7,(C_word)C_fixnum_or(C_fix((C_word)S_IRWXU),t6));}}

/* k6456 in create-fifo in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6458(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6458,NULL,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(t1,lf[341]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6479,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1860 ##sys#expand-home-path */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k6477 in k6456 in create-fifo in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1860 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6473 in k6456 in create-fifo in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_mkfifo(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1861 posix-error */
t3=lf[3];
f_2539(7,t3,((C_word*)t0)[3],lf[48],lf[341],lf[342],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* file-unlock in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6423(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_6423,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[332],lf[339]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(C_word)C_slot(t2,C_fix(3));
t6=(C_word)C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_flock_lock(t7);
if(C_truep((C_word)C_fixnum_lessp(t8,C_fix(0)))){
/* posixunix.scm: 1850 posix-error */
t9=lf[3];
f_2539(6,t9,t1,lf[48],lf[339],lf[340],t2);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* file-test-lock in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6396(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6396r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6396r(t0,t1,t2,t3);}}

static void C_ccall f_6396r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6400,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1841 setup */
f_6274(t4,t2,t3,lf[337]);}

/* k6398 in file-test-lock in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_flock_test(((C_word*)t0)[4]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=(C_word)C_eqp(t2,C_fix(0));
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?C_SCHEME_FALSE:t2));}
else{
/* posixunix.scm: 1843 err */
f_6348(((C_word*)t0)[3],lf[338],t1,lf[337]);}}

/* file-lock/blocking in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6381(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6381r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6381r(t0,t1,t2,t3);}}

static void C_ccall f_6381r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6385,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1835 setup */
f_6274(t4,t2,t3,lf[335]);}

/* k6383 in file-lock/blocking in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp((C_word)C_flock_lockw(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1837 err */
f_6348(((C_word*)t0)[2],lf[336],t1,lf[335]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* file-lock in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6366(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6366r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6366r(t0,t1,t2,t3);}}

static void C_ccall f_6366r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6370,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1829 setup */
f_6274(t4,t2,t3,lf[333]);}

/* k6368 in file-lock in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp((C_word)C_flock_lock(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1831 err */
f_6348(((C_word*)t0)[2],lf[334],t1,lf[333]);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* err in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6348(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6348,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_slot(t3,C_fix(2));
t7=(C_word)C_slot(t3,C_fix(3));
/* posixunix.scm: 1826 posix-error */
t8=lf[3];
f_2539(8,t8,t1,lf[48],t4,t2,t5,t6,t7);}

/* setup in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6274(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_6274,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_nullp(t3);
t6=(C_truep(t5)?C_fix(0):(C_word)C_i_car(t3));
t7=(C_word)C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t9=(C_word)C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_TRUE:(C_word)C_i_car(t8));
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(C_word)C_i_nullp(t8);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t8));
if(C_truep((C_word)C_i_nullp(t14))){
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6296,a[2]=t1,a[3]=t12,a[4]=t2,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1818 ##sys#check-port */
t16=*((C_word*)lf[161]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,t2,t4);}
else{
/* ##sys#error */
t15=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}

/* k6294 in setup in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6296,2,t0,t1);}
t2=(C_word)C_i_check_number_2(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t6=t3;
f_6302(t6,t5);}
else{
t5=t3;
f_6302(t5,(C_word)C_i_check_number_2(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[5]));}}

/* k6300 in k6294 in setup in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6302(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6302,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=(C_word)C_flock_setup(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[332],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]));}

/* file-truncate in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_6235,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_number_2(t3,lf[329]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6245,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6252,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_stringp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6259,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6263,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1801 ##sys#expand-home-path */
t9=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
if(C_truep((C_word)C_fixnump(t2))){
t7=(C_word)C_ftruncate(t2,t3);
t8=t5;
f_6245(t8,(C_word)C_fixnum_lessp(t7,C_fix(0)));}
else{
/* posixunix.scm: 1803 ##sys#error */
t7=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,lf[329],lf[331],t2);}}}

/* k6261 in file-truncate in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1801 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k6257 in file-truncate in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_truncate(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_6245(t3,(C_word)C_fixnum_lessp(t2,C_fix(0)));}

/* k6250 in file-truncate in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6245(t2,(C_word)C_fixnum_lessp(t1,C_fix(0)));}

/* k6243 in file-truncate in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6245(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 1805 posix-error */
t2=lf[3];
f_2539(7,t2,((C_word*)t0)[4],lf[48],lf[329],lf[330],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr5r,(void*)f_5976r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5976r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5976r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t4,a[7]=((C_word)li137),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6162,a[2]=t6,a[3]=((C_word)li138),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6167,a[2]=t7,a[3]=((C_word)li139),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6172,a[2]=t8,a[3]=((C_word)li140),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-nonblocking?12681334 */
t10=t9;
f_6172(t10,t1);}
else{
t10=(C_word)C_i_car(t5);
t11=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-bufi12691332 */
t12=t8;
f_6167(t12,t1,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* def-on-close12701329 */
t14=t7;
f_6162(t14,t1,t10,t12);}
else{
t14=(C_word)C_i_car(t13);
t15=(C_word)C_i_cdr(t13);
if(C_truep((C_word)C_i_nullp(t15))){
/* body12661275 */
t16=t6;
f_5978(t16,t1,t10,t12,t14);}
else{
/* ##sys#error */
t16=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}}}}

/* def-nonblocking?1268 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6172(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6172,NULL,2,t0,t1);}
/* def-bufi12691332 */
t2=((C_word*)t0)[2];
f_6167(t2,t1,C_SCHEME_FALSE);}

/* def-bufi1269 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6167(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6167,NULL,3,t0,t1,t2);}
/* def-on-close12701329 */
t3=((C_word*)t0)[2];
f_6162(t3,t1,t2,C_fix(0));}

/* def-on-close1270 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6162(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6162,NULL,4,t0,t1,t2,t3);}
/* body12661275 */
t4=((C_word*)t0)[2];
f_5978(t4,t1,t2,t3,*((C_word*)lf[324]+1));}

/* body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5978(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5978,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5982,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t2)){
/* posixunix.scm: 1743 ##sys#file-nonblocking! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t5,((C_word*)t0)[6]);}
else{
t6=t5;
f_5982(2,t6,C_SCHEME_UNDEFINED);}}

/* k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5982(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5982,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5984,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=((C_word*)t0)[9],a[6]=((C_word)li130),tmp=(C_word)a,a+=7,tmp));
t7=(C_word)C_fixnump(((C_word*)t0)[6]);
t8=(C_truep(t7)?((C_word*)t0)[6]:(C_word)C_block_size(((C_word*)t0)[6]));
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t5,tmp=(C_word)a,a+=10,tmp);
t10=(C_word)C_eqp(C_fix(0),t8);
if(C_truep(t10)){
t11=t9;
f_6030(t11,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6074,a[2]=t3,a[3]=((C_word)li134),tmp=(C_word)a,a+=4,tmp));}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6088,a[2]=t3,a[3]=t8,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnump(((C_word*)t0)[6]))){
/* posixunix.scm: 1762 ##sys#make-string */
t12=*((C_word*)lf[322]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,((C_word*)t0)[6]);}
else{
t12=t11;
f_6088(2,t12,((C_word*)t0)[6]);}}}

/* k6086 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6088,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[4];
f_6030(t4,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6089,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word)li136),tmp=(C_word)a,a+=7,tmp));}

/* f_6089 in k6086 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6089(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_6089,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6106,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=((C_word)li135),tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_6106(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep((C_word)C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm: 1778 poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5984(t3,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}}

/* loop */
static void C_fcall f_6106(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_6106,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6116,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1768 poke */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5984(t7,t6,((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_fixnum_lessp(t2,t4))){
t6=(C_word)C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t2,((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_fixnum_difference(t4,t2);
/* posixunix.scm: 1773 loop */
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
t6=(C_word)C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t4,((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t4);
t8=C_mutate(((C_word *)((C_word*)t0)[7])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}

/* k6114 in loop */
static void C_ccall f_6116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[6],0,C_fix(0));
/* posixunix.scm: 1770 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_6106(t3,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* f_6074 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6074(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6074,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_block_size(t2);
/* posixunix.scm: 1761 poke */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5984(t4,t1,t2,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6028 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_6030(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6030,NULL,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6034,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6039,a[2]=((C_word*)t0)[9],a[3]=((C_word)li131),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6045,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=((C_word)li132),tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6066,a[2]=((C_word*)t0)[9],a[3]=((C_word)li133),tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1781 make-output-port */
t9=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t9))(5,t9,t5,t6,t7,t8);}

/* a6065 in k6028 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6066,2,t0,t1);}
/* posixunix.scm: 1791 store */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* a6044 in k6028 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6045,2,t0,t1);}
if(C_truep((C_word)C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6055,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1788 posix-error */
t3=lf[3];
f_2539(7,t3,t2,lf[48],((C_word*)t0)[3],lf[328],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1789 on-close */
t3=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}}}

/* k6053 in a6044 in k6028 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1789 on-close */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a6038 in k6028 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6039(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6039,3,t0,t1,t2);}
/* posixunix.scm: 1783 store */
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* k6032 in k6028 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6034,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6037,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1792 set-port-name! */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k6035 in k6032 in k6028 in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* poke in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5984(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5984,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_write(((C_word*)t0)[5],t2,t3);
t5=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
t6=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6000,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1751 ##sys#thread-yield! */
t8=*((C_word*)lf[314]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* posixunix.scm: 1753 posix-error */
t7=lf[3];
f_2539(7,t7,t1,((C_word*)t0)[3],lf[48],lf[327],((C_word*)t0)[5],((C_word*)t0)[2]);}}
else{
if(C_truep((C_word)C_fixnum_lessp(t4,t3))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6019,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1755 ##sys#substring */
t7=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t2,t4,t3);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}}

/* k6017 in poke in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* posixunix.scm: 1755 poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5984(t3,((C_word*)t0)[2],t1,t2);}

/* k5998 in poke in k5980 in body1266 in ##sys#custom-output-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_6000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1752 poke */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5984(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5494(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+24)){
C_save_and_reclaim((void*)tr5r,(void*)f_5494r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5494r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5494r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5496,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=t2,a[7]=((C_word)li124),tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5883,a[2]=t6,a[3]=((C_word)li125),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=t7,a[3]=((C_word)li126),tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5893,a[2]=t8,a[3]=((C_word)li127),tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5898,a[2]=t9,a[3]=((C_word)li128),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-nonblocking?10951239 */
t11=t10;
f_5898(t11,t1);}
else{
t11=(C_word)C_i_car(t5);
t12=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-bufi10961237 */
t13=t9;
f_5893(t13,t1,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* def-on-close10971234 */
t15=t8;
f_5888(t15,t1,t11,t13);}
else{
t15=(C_word)C_i_car(t14);
t16=(C_word)C_i_cdr(t14);
if(C_truep((C_word)C_i_nullp(t16))){
/* def-more?10981230 */
t17=t7;
f_5883(t17,t1,t11,t13,t15);}
else{
t17=(C_word)C_i_car(t16);
t18=(C_word)C_i_cdr(t16);
if(C_truep((C_word)C_i_nullp(t18))){
/* body10931103 */
t19=t6;
f_5496(t19,t1,t11,t13,t15,t17);}
else{
/* ##sys#error */
t19=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t1,lf[0],t18);}}}}}}

/* def-nonblocking?1095 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5898(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5898,NULL,2,t0,t1);}
/* def-bufi10961237 */
t2=((C_word*)t0)[2];
f_5893(t2,t1,C_SCHEME_FALSE);}

/* def-bufi1096 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5893(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5893,NULL,3,t0,t1,t2);}
/* def-on-close10971234 */
t3=((C_word*)t0)[2];
f_5888(t3,t1,t2,C_fix(1));}

/* def-on-close1097 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5888(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5888,NULL,4,t0,t1,t2,t3);}
/* def-more?10981230 */
t4=((C_word*)t0)[2];
f_5883(t4,t1,t2,t3,*((C_word*)lf[324]+1));}

/* def-more?1098 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5883(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5883,NULL,5,t0,t1,t2,t3,t4);}
/* body10931103 */
t5=((C_word*)t0)[2];
f_5496(t5,t1,t2,t3,t4,C_SCHEME_FALSE);}

/* body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5496(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5496,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5500,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
if(C_truep(t2)){
/* posixunix.scm: 1617 ##sys#file-nonblocking! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[9]+1)))(3,*((C_word*)lf[9]+1),t6,((C_word*)t0)[5]);}
else{
t7=t6;
f_5500(2,t7,C_SCHEME_UNDEFINED);}}

/* k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5500,2,t0,t1);}
t2=(C_word)C_fixnump(((C_word*)t0)[10]);
t3=(C_truep(t2)?((C_word*)t0)[10]:(C_word)C_block_size(((C_word*)t0)[10]));
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_fixnump(((C_word*)t0)[10]))){
/* posixunix.scm: 1619 ##sys#make-string */
t5=*((C_word*)lf[322]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[10]);}
else{
t5=t4;
f_5506(2,t5,((C_word*)t0)[10]);}}

/* k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5506(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5506,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5507,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word)li110),tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5530,a[2]=t1,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5538,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=t3,a[9]=t5,a[10]=((C_word)li112),tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5620,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5625,a[2]=t8,a[3]=t5,a[4]=t7,a[5]=((C_word)li113),tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5638,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=((C_word)li114),tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5650,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=((C_word)li115),tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5671,a[2]=t8,a[3]=t7,a[4]=((C_word)li116),tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5680,a[2]=t8,a[3]=t1,a[4]=t3,a[5]=t5,a[6]=((C_word)li118),tmp=(C_word)a,a+=7,tmp);
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5756,a[2]=t1,a[3]=t8,a[4]=t3,a[5]=t5,a[6]=((C_word)li123),tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1667 make-input-port */
t18=((C_word*)t0)[2];
((C_proc8)C_retrieve_proc(t18))(8,t18,t11,t12,t13,t14,t15,t16,t17);}

/* a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5756(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5756,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5762,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word)li122),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_5762(t7,t1,C_SCHEME_FALSE);}

/* loop in a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5762(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5762,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5764,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li119),tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5842,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word)li120),tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5848,a[2]=((C_word*)t0)[2],a[3]=((C_word)li121),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5858,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1732 fetch */
t5=((C_word*)t0)[5];
f_5538(t5,t4);}}

/* k5856 in loop in a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1]))){
/* posixunix.scm: 1734 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5762(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* a5847 in loop in a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5848(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5848,4,t0,t1,t2,t3);}
if(C_truep(t3)){
/* posixunix.scm: 1729 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5762(t4,t1,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* a5841 in loop in a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5842,2,t0,t1);}
/* posixunix.scm: 1727 ##sys#scan-buffer-line */
((C_proc6)C_retrieve_proc(*((C_word*)lf[323]+1)))(6,*((C_word*)lf[323]+1),t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* bumper in loop in a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5764(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_5764,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t2,((C_word*)((C_word*)t0)[7])[1]);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5771,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t6=(C_word)C_eqp(C_fix(0),t4);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
t8=t5;
f_5771(2,t8,(C_truep(t7)?t7:lf[320]));}
else{
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5814,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 1709 ##sys#make-string */
t8=*((C_word*)lf[322]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}}

/* k5812 in bumper in loop in a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
t2=(C_word)C_substring_copy(((C_word*)t0)[8],t1,((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],C_fix(0));
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(5));
t4=(C_word)C_fixnum_plus(t3,((C_word*)t0)[4]);
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[5],C_fix(5),t4);
if(C_truep(((C_word*)t0)[3])){
/* posixunix.scm: 1715 ##sys#string-append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[321]+1)))(4,*((C_word*)lf[321]+1),((C_word*)t0)[2],((C_word*)t0)[3],t1);}
else{
t6=t1;
t7=((C_word*)t0)[2];
f_5771(2,t7,t6);}}

/* k5769 in bumper in loop in a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5771,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[7]);
t3=(C_word)C_eqp(((C_word*)t0)[6],((C_word*)t0)[7]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5781,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1719 fetch */
t5=((C_word*)t0)[3];
f_5538(t5,t4);}
else{
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(4));
t5=(C_word)C_fixnum_plus(t4,C_fix(1));
t6=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t5);
t7=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_fix(0));
/* posixunix.scm: 1724 values */
C_values(4,0,((C_word*)t0)[4],t1,C_SCHEME_FALSE);}}

/* k5779 in k5769 in bumper in loop in a5755 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]);
/* posixunix.scm: 1720 values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a5679 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5680(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5680,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5688,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t7=t6;
f_5688(t7,t3);}
else{
t7=(C_word)C_block_size(t4);
t8=t6;
f_5688(t8,(C_word)C_fixnum_difference(t7,t5));}}

/* k5686 in a5679 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5688(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5688,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5690,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word)li117),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_5690(t5,((C_word*)t0)[3],t1,C_fix(0),((C_word*)t0)[2]);}

/* loop in k5686 in a5679 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5690(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_5690,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=t3;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t6=(C_word)C_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t10=(C_word)C_substring_copy(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1],t9,t4);
t11=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t12=C_mutate(((C_word *)((C_word*)t0)[7])+1,t11);
t13=(C_word)C_fixnum_difference(t2,t8);
t14=(C_word)C_fixnum_plus(t3,t8);
t15=(C_word)C_fixnum_plus(t4,t8);
/* posixunix.scm: 1695 loop */
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5738,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 1697 fetch */
t7=((C_word*)t0)[2];
f_5538(t7,t6);}}}

/* k5736 in loop in k5686 in a5679 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(C_fix(0),((C_word*)((C_word*)t0)[7])[1]);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* posixunix.scm: 1700 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5690(t3,((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* a5670 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5675,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1685 fetch */
t3=((C_word*)t0)[2];
f_5538(t3,t2);}

/* k5673 in a5670 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1686 peek */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_5530(((C_word*)t0)[2]));}

/* a5649 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5650,2,t0,t1);}
if(C_truep((C_word)C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5660,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1682 posix-error */
t3=lf[3];
f_2539(7,t3,t2,lf[48],((C_word*)t0)[3],lf[319],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1683 on-close */
t3=((C_word*)t0)[5];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}}}

/* k5658 in a5649 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1683 on-close */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a5637 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5638,2,t0,t1);}
t2=(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm: 1677 ready? */
t3=((C_word*)t0)[2];
f_5507(t3,t1);}}

/* a5624 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5629,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1669 fetch */
t3=((C_word*)t0)[2];
f_5538(t3,t2);}

/* k5627 in a5624 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=f_5530(((C_word*)t0)[4]);
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* k5618 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5620,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5623,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1736 set-port-name! */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k5621 in k5618 in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* fetch in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5538(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5538,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[8])[1]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5550,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word)li111),tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_5550(t5,t1);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop in fetch in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5550(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_5550,NULL,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5566,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1644 ##sys#thread-block-for-i/o! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[315]+1)))(5,*((C_word*)lf[315]+1),t5,*((C_word*)lf[316]+1),((C_word*)t0)[10],C_SCHEME_TRUE);}
else{
/* posixunix.scm: 1647 posix-error */
t5=lf[3];
f_2539(7,t5,t1,lf[48],((C_word*)t0)[6],lf[317],((C_word*)t0)[10],((C_word*)t0)[5]);}}
else{
t4=(C_truep(((C_word*)t0)[4])?(C_word)C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5587,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 1651 more? */
t6=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t6=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k5585 in loop in fetch in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5587(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5587,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5590,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1653 ##sys#thread-yield! */
t3=*((C_word*)lf[314]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_read(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5596,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=C_set_block_item(t3,0,C_fix(0));
t8=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t3)[1]);
t9=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t10=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
/* posixunix.scm: 1659 posix-error */
t7=lf[3];
f_2539(7,t7,t4,lf[48],((C_word*)t0)[3],lf[318],((C_word*)t0)[8],((C_word*)t0)[2]);}}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)t3)[1]);
t7=C_set_block_item(((C_word*)t0)[4],0,C_fix(0));
t8=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}}

/* k5594 in k5585 in loop in fetch in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5588 in k5585 in loop in fetch in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1654 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5550(t2,((C_word*)t0)[2]);}

/* k5564 in loop in fetch in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1645 ##sys#thread-yield! */
t3=*((C_word*)lf[314]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5567 in k5564 in loop in fetch in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1646 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5550(t2,((C_word*)t0)[2]);}

/* peek in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_5530(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]))){
return(C_SCHEME_END_OF_FILE);}
else{
t1=(C_word)C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);
return(t1);}}

/* ready? in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5507(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5507,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1625 ##sys#file-select-one */
((C_proc3)C_retrieve_proc(*((C_word*)lf[10]+1)))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[3]);}

/* k5509 in ready? in k5504 in k5498 in body1093 in ##sys#custom-input-port in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
/* posixunix.scm: 1629 posix-error */
t4=lf[3];
f_2539(7,t4,((C_word*)t0)[5],lf[48],((C_word*)t0)[4],lf[313],((C_word*)t0)[3],((C_word*)t0)[2]);}}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(C_fix(1),t1));}}

/* duplicate-fileno in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5467(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_5467r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_5467r(t0,t1,t2,t3);}}

static void C_ccall f_5467r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_exact_2(t2,*((C_word*)lf[308]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5474,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_vemptyp(t3))){
t6=t5;
f_5474(t6,(C_word)C_dup(t2));}
else{
t6=(C_word)C_i_vector_ref(t3,C_fix(0));
t7=(C_word)C_i_check_exact_2(t6,lf[308]);
t8=t5;
f_5474(t8,(C_word)C_dup2(t2,t6));}}

/* k5472 in duplicate-fileno in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5474(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5474,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5477,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 1610 posix-error */
t3=lf[3];
f_2539(6,t3,t2,lf[48],lf[308],lf[309],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5475 in k5472 in duplicate-fileno in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5422(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5422,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5426,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1592 ##sys#check-port */
t4=*((C_word*)lf[161]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[302]);}

/* k5424 in port->fileno in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5426,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(lf[303],t2);
if(C_truep(t3)){
/* posixunix.scm: 1593 ##sys#tcp-port->fileno */
((C_proc3)C_retrieve_proc(*((C_word*)lf[304]+1)))(3,*((C_word*)lf[304]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5461,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1594 ##sys#peek-unsigned-integer */
t5=*((C_word*)lf[307]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],C_fix(0));}}

/* k5459 in k5424 in port->fileno in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5461,2,t0,t1);}
if(C_truep((C_word)C_i_zerop(t1))){
/* posixunix.scm: 1599 posix-error */
t2=lf[3];
f_2539(6,t2,((C_word*)t0)[3],lf[60],lf[302],lf[305],((C_word*)t0)[2]);}
else{
t2=(C_word)C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5444,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1597 posix-error */
t4=lf[3];
f_2539(6,t4,t3,lf[48],lf[302],lf[306],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}}

/* k5442 in k5459 in k5424 in port->fileno in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5408(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5408r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5408r(t0,t1,t2,t3);}}

static void C_ccall f_5408r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[301]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5420,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1588 mode */
f_5342(t5,C_SCHEME_FALSE,t3);}

/* k5418 in open-output-file* in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5420,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm: 1588 check */
f_5379(((C_word*)t0)[2],lf[301],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5394(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_5394r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5394r(t0,t1,t2,t3);}}

static void C_ccall f_5394r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[300]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5406,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1584 mode */
f_5342(t5,C_SCHEME_TRUE,t3);}

/* k5404 in open-input-file* in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5406,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm: 1584 check */
f_5379(((C_word*)t0)[2],lf[300],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5379(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5379,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_null_pointerp(t5))){
/* posixunix.scm: 1577 posix-error */
t6=lf[3];
f_2539(6,t6,t1,lf[48],t2,lf[298],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5392,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1578 ##sys#make-port */
t7=*((C_word*)lf[150]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t4,*((C_word*)lf[151]+1),lf[299],lf[98]);}}

/* k5390 in check in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* mode in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5342(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5342,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5350,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_i_car(t3);
t6=(C_word)C_eqp(t5,lf[292]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixunix.scm: 1571 ##sys#error */
t8=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[293],t5);}
else{
/* posixunix.scm: 1567 ##sys#make-c-string */
t8=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,lf[294]);}}
else{
/* posixunix.scm: 1572 ##sys#error */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[295],t5);}}
else{
if(C_truep(t2)){
/* posixunix.scm: 1567 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[296]);}
else{
/* posixunix.scm: 1567 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,lf[297]);}}}

/* k5348 in mode in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1567 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_5317,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[286]);
t5=(C_word)C_i_check_string_2(t3,lf[286]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5330,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=t2;
t8=t3;
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5298,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t7)){
t10=(C_word)C_i_foreign_string_argumentp(t7);
/* ##sys#make-c-string */
t11=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
t10=t9;
f_5298(2,t10,C_SCHEME_FALSE);}}

/* k5296 in file-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5298,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5302,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t3=(C_word)stub1008(C_SCHEME_UNDEFINED,t1,C_SCHEME_FALSE);
t4=((C_word*)t0)[3];
f_5330(t4,(C_word)C_fixnum_lessp(t3,C_fix(0)));}}

/* k5300 in k5296 in file-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)stub1008(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_5330(t3,(C_word)C_fixnum_lessp(t2,C_fix(0)));}

/* k5328 in file-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5330(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 1552 posix-error */
t2=lf[3];
f_2539(7,t2,((C_word*)t0)[4],lf[48],lf[287],lf[288],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* read-symbolic-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5233(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_5233r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5233r(t0,t1,t2,t3);}}

static void C_ccall f_5233r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5237,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_5237(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_5237(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k5235 in read-symbolic-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5237,2,t0,t1);}
t2=(C_word)C_i_check_string_2(((C_word*)t0)[5],lf[283]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5244,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5272,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1538 ##sys#expand-home-path */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}

/* k5270 in k5235 in read-symbolic-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1538 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5242 in k5235 in read-symbolic-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5244,2,t0,t1);}
t2=(C_word)C_readlink(t1,((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5247,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1540 posix-error */
t4=lf[3];
f_2539(6,t4,t3,lf[48],lf[283],lf[285],((C_word*)t0)[2]);}
else{
t4=t3;
f_5247(2,t4,C_SCHEME_UNDEFINED);}}

/* k5245 in k5242 in k5235 in read-symbolic-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5250,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1541 substring */
t3=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k5248 in k5245 in k5242 in k5235 in read-symbolic-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5250,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5256,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm: 1542 symbolic-link? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[84]+1)))(3,*((C_word*)lf[84]+1),t2,t1);}
else{
t3=t1;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5254 in k5248 in k5245 in k5242 in k5235 in read-symbolic-link in k5230 in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 1543 read-symbolic-link */
((C_proc4)C_retrieve_proc(*((C_word*)lf[283]+1)))(4,*((C_word*)lf[283]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[284]);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* create-symbolic-link in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5195,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[279]);
t5=(C_word)C_i_check_string_2(t3,lf[279]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5216,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5228,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1526 ##sys#expand-home-path */
t8=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k5226 in create-symbolic-link in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1526 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5214 in create-symbolic-link in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5224,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1527 ##sys#expand-home-path */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k5222 in k5214 in create-symbolic-link in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1527 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5218 in k5214 in create-symbolic-link in k5191 in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_symlink(((C_word*)t0)[5],t1);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1529 posix-error */
t3=lf[3];
f_2539(7,t3,((C_word*)t0)[4],lf[48],lf[280],lf[281],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* create-session in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5176,2,t0,t1);}
t2=(C_word)C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5180,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5186,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1497 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}}

/* k5184 in create-session in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1498 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[276],lf[277]);}

/* k5178 in create-session in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-execute-access? in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5170(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5170,3,t0,t1,t2);}
/* posixunix.scm: 1492 check */
f_5134(t1,t2,C_fix((C_word)X_OK),lf[275]);}

/* file-write-access? in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5164(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5164,3,t0,t1,t2);}
/* posixunix.scm: 1491 check */
f_5134(t1,t2,C_fix((C_word)W_OK),lf[274]);}

/* file-read-access? in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5158(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5158,3,t0,t1,t2);}
/* posixunix.scm: 1490 check */
f_5134(t1,t2,C_fix((C_word)R_OK),lf[273]);}

/* check in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_5134(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5134,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5152,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5156,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1487 ##sys#expand-home-path */
t8=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k5154 in check in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1487 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5150 in check in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5152,2,t0,t1);}
t2=(C_word)C_access(t1,((C_word*)t0)[3]);
t3=(C_word)C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5144,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
/* posixunix.scm: 1488 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5142 in k5150 in check in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-file-owner in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_5104,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,lf[271]);
t6=(C_word)C_i_check_exact_2(t3,lf[271]);
t7=(C_word)C_i_check_exact_2(t4,lf[271]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5128,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5132,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1477 ##sys#expand-home-path */
t10=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}

/* k5130 in change-file-owner in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1477 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5126 in change-file-owner in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_chown(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1478 posix-error */
t3=lf[3];
f_2539(8,t3,((C_word*)t0)[3],lf[48],lf[271],lf[272],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* change-file-mode in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5077(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5077,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[269]);
t5=(C_word)C_i_check_exact_2(t3,lf[269]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5098,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5102,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1469 ##sys#expand-home-path */
t8=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k5100 in change-file-mode in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1469 ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5096 in change-file-mode in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_chmod(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1470 posix-error */
t3=lf[3];
f_2539(7,t3,((C_word*)t0)[3],lf[48],lf[269],lf[270],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* initialize-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5013(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_5013,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[228]);
t5=(C_word)C_i_check_exact_2(t3,lf[228]);
t6=t2;
t7=t3;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5001,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t9=(C_word)C_i_foreign_string_argumentp(t6);
/* ##sys#make-c-string */
t10=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t9=t8;
f_5001(2,t9,C_SCHEME_FALSE);}}

/* k4999 in initialize-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5001,2,t0,t1);}
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=(C_word)stub914(C_SCHEME_UNDEFINED,t1,t2);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1390 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5027 in k4999 in initialize-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_5029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1391 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[228],lf[229],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-groups! in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4939(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4939,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4943,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_length(t2);
t5=(C_word)C_i_foreign_fixnum_argumentp(t4);
if(C_truep((C_word)stub871(C_SCHEME_UNDEFINED,t5))){
t6=t3;
f_4943(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1373 ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[225],lf[227]);}}

/* k4941 in set-groups! in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4943,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4948,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li91),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4948(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* doloop897 in k4941 in set-groups! in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4948(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4948,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_fixnum_lessp((C_word)C_set_groups(t3),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4964,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1378 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_check_exact_2(t4,lf[225]);
t6=(C_word)C_set_gid(t3,t4);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_fixnum_plus(t3,C_fix(1));
t11=t1;
t12=t7;
t13=t8;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* k4962 in doloop897 in k4941 in set-groups! in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1379 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[225],lf[226],((C_word*)t0)[2]);}

/* get-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4876,2,t0,t1);}
t2=C_fix((C_word)getgroups(0, C_groups));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4880,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4934,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1359 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_4880(2,t4,C_SCHEME_UNDEFINED);}}

/* k4932 in get-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1360 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[221],lf[224]);}

/* k4878 in get-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4883,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
if(C_truep((C_word)stub871(C_SCHEME_UNDEFINED,t3))){
t4=t2;
f_4883(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1362 ##sys#error */
t4=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[221],lf[223]);}}

/* k4881 in k4878 in get-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4883,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4886,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=(C_word)stub867(C_SCHEME_UNDEFINED,t3);
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4915,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1364 ##sys#update-errno */
t6=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t2;
f_4886(2,t5,C_SCHEME_UNDEFINED);}}

/* k4913 in k4881 in k4878 in get-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1365 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[221],lf[222]);}

/* k4884 in k4881 in k4878 in get-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4886,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4891,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word)li89),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4891(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k4884 in k4881 in k4878 in get-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4891(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4891,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4905,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm: 1369 loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k4903 in loop in k4884 in k4881 in k4878 in get-groups in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4905,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,(C_word)C_get_gid(((C_word*)t0)[2]),t1));}

/* group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4783(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4783r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4783r(t0,t1,t2,t3);}}

static void C_ccall f_4783r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4787,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_4787(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_4787(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4790,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnump(((C_word*)t0)[2]))){
t3=t2;
f_4790(t3,(C_word)C_getgrgid(((C_word*)t0)[2]));}
else{
t3=(C_word)C_i_check_string_2(((C_word*)t0)[2],lf[220]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4841,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1333 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}

/* k4839 in k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4790(t2,(C_word)C_getgrnam(t1));}

/* k4788 in k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4790(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4790,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[3])?*((C_word*)lf[217]+1):*((C_word*)lf[218]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4803,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_group->gr_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4801 in k4788 in k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4807,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_group->gr_passwd),C_fix(0));}

/* k4805 in k4801 in k4788 in k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4811,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4813,a[2]=t4,a[3]=((C_word)li87),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4813(t6,t2,C_fix(0));}

/* loop in k4805 in k4801 in k4788 in k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4813(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4813,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4817,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)stub838(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k4815 in loop in k4805 in k4801 in k4788 in k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4817,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4827,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1342 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4813(t4,t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k4825 in k4815 in loop in k4805 in k4801 in k4788 in k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4827,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4809 in k4805 in k4801 in k4788 in k4785 in group-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g860861 */
t2=((C_word*)t0)[5];
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix((C_word)C_group->gr_gid),t1);}

/* current-effective-user-name in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4766,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4770,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1318 current-effective-user-id */
((C_proc2)C_retrieve_proc(*((C_word*)lf[213]+1)))(2,*((C_word*)lf[213]+1),t3);}

/* k4768 in current-effective-user-name in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1318 user-information */
((C_proc3)C_retrieve_proc(*((C_word*)lf[216]+1)))(3,*((C_word*)lf[216]+1),((C_word*)t0)[2],t1);}

/* k4764 in current-effective-user-name in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_list_ref(t1,C_fix(0)));}

/* current-user-name in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4752,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4756,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1315 current-user-id */
((C_proc2)C_retrieve_proc(*((C_word*)lf[212]+1)))(2,*((C_word*)lf[212]+1),t3);}

/* k4754 in current-user-name in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1315 user-information */
((C_proc3)C_retrieve_proc(*((C_word*)lf[216]+1)))(3,*((C_word*)lf[216]+1),((C_word*)t0)[2],t1);}

/* k4750 in current-user-name in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_list_ref(t1,C_fix(0)));}

/* user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4677(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4677r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4677r(t0,t1,t2,t3);}}

static void C_ccall f_4677r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4681,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_4681(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_4681(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k4679 in user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnump(((C_word*)t0)[2]))){
t3=t2;
f_4684(t3,(C_word)C_getpwuid(((C_word*)t0)[2]));}
else{
t3=(C_word)C_i_check_string_2(((C_word*)t0)[2],lf[216]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4723,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1303 ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}

/* k4721 in k4679 in user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4684(t2,(C_word)C_getpwnam(t1));}

/* k4682 in k4679 in user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4684(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4684,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_truep(((C_word*)t0)[3])?*((C_word*)lf[217]+1):*((C_word*)lf[218]+1));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4697,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t4=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_user->pw_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4695 in k4682 in k4679 in user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4701,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_passwd),C_fix(0));}

/* k4699 in k4695 in k4682 in k4679 in user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4705,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_gecos),C_fix(0));}

/* k4703 in k4699 in k4695 in k4682 in k4679 in user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4709,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_dir),C_fix(0));}

/* k4707 in k4703 in k4699 in k4695 in k4682 in k4679 in user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4713,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_shell),C_fix(0));}

/* k4711 in k4707 in k4703 in k4699 in k4695 in k4682 in k4679 in user-information in k4673 in k4669 in k4665 in k4661 in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g833834 */
t2=((C_word*)t0)[7];
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_fix((C_word)C_user->pw_uid),C_fix((C_word)C_user->pw_gid),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* system-information in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4623,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4627,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp(C_fix((C_word)C_uname),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4656,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1248 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_4627(2,t3,C_SCHEME_UNDEFINED);}}

/* k4654 in system-information in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1249 ##sys#error */
t2=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[209],lf[211]);}

/* k4625 in system-information in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.sysname),C_fix(0));}

/* k4632 in k4625 in system-information in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4634,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4638,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.nodename),C_fix(0));}

/* k4636 in k4632 in k4625 in system-information in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4642,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.release),C_fix(0));}

/* k4640 in k4636 in k4632 in k4625 in system-information in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4646,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.version),C_fix(0));}

/* k4644 in k4640 in k4636 in k4632 in k4625 in system-information in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4650,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[210]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.machine),C_fix(0));}

/* k4648 in k4644 in k4640 in k4636 in k4632 in k4625 in system-information in k4619 in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4650,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* signal-unmask! in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4605(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4605,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[207]);
t4=(C_word)C_sigdelset(t2);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_unblock(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1227 posix-error */
t5=lf[3];
f_2539(5,t5,t1,lf[201],lf[207],lf[208]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* signal-mask! in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4590(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4590,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[205]);
t4=(C_word)C_sigaddset(t2);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_block(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1221 posix-error */
t5=lf[3];
f_2539(5,t5,t1,lf[201],lf[205],lf[206]);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* signal-masked? in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4584(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4584,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[204]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_sigismember(t2));}

/* signal-mask in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4552,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4558,a[2]=t3,a[3]=((C_word)li78),tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4558(t5,t1,*((C_word*)lf[196]+1),C_SCHEME_END_OF_LIST);}

/* loop in signal-mask in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4558(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4558,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_sigismember(t4))){
t6=(C_word)C_a_i_cons(&a,2,t4,t3);
/* posixunix.scm: 1211 loop */
t10=t1;
t11=t5;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}
else{
t6=t3;
/* posixunix.scm: 1211 loop */
t10=t1;
t11=t5;
t12=t6;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}}

/* set-signal-mask! in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4506(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4506,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,lf[200]);
t4=(C_word)C_sigemptyset(C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4524,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp);
t6=f_4524(t2);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_set(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1204 posix-error */
t7=lf[3];
f_2539(5,t7,t1,lf[201],lf[200],lf[202]);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* loop747 in set-signal-mask! in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_4524(C_word t1){
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
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_slot(t1,C_fix(0));
t3=(C_word)C_i_check_exact_2(t2,lf[200]);
t4=(C_word)C_sigaddset(t2);
t5=(C_word)C_slot(t1,C_fix(1));
t8=t5;
t1=t8;
goto loop;}
else{
t2=C_SCHEME_UNDEFINED;
return(t2);}}

/* ##sys#interrupt-hook in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4488,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4498,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1190 h */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixunix.scm: 1192 oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k4496 in ##sys#interrupt-hook in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1191 ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4475,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t2,lf[199]);
if(C_truep(t3)){
t5=t2;
t6=(C_word)C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_vector_set(((C_word*)t0)[2],t2,t3));}
else{
t5=(C_word)C_establish_signal_handler(t2,C_SCHEME_FALSE);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_vector_set(((C_word*)t0)[2],t2,t3));}}

/* signal-handler in k4462 in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4466(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4466,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[198]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4423,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_pipe(C_SCHEME_FALSE),C_fix(0)))){
/* posixunix.scm: 1107 posix-error */
t3=lf[3];
f_2539(5,t3,t2,lf[48],lf[169],lf[170]);}
else{
/* posixunix.scm: 1108 values */
C_values(4,0,t1,C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}}

/* k4421 in create-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1108 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4399r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4399r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4399r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[168]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4403,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k4401 in with-output-to-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4403,2,t0,t1);}
t2=C_mutate((C_word*)lf[168]+1 /* (set! standard-output ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4409,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li70),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1095 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a4408 in k4401 in with-output-to-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4409(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4409r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4409r(t0,t1,t2);}}

static void C_ccall f_4409r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4413,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1097 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4411 in a4408 in k4401 in with-output-to-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[168]+1 /* (set! standard-output ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4379(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4379r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4379r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4379r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[166]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4383,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k4381 in with-input-from-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4383,2,t0,t1);}
t2=C_mutate((C_word*)lf[166]+1 /* (set! standard-input ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4389,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word)li68),tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1085 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a4388 in k4381 in with-input-from-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4389(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_4389r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4389r(t0,t1,t2);}}

static void C_ccall f_4389r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4393,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1087 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4391 in a4388 in k4381 in with-input-from-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[166]+1 /* (set! standard-input ...) */,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4355r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4355r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4355r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4359,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k4357 in call-with-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4364,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li65),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4370,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li66),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1075 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4369 in k4357 in call-with-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4370r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4370r(t0,t1,t2);}}

static void C_ccall f_4370r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4374,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1078 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4372 in a4369 in k4357 in call-with-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4363 in k4357 in call-with-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4364,2,t0,t1);}
/* posixunix.scm: 1076 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4331r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4331r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4331r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4335,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k4333 in call-with-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4340,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4346,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word)li63),tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1067 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4345 in k4333 in call-with-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4346(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4346r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4346r(t0,t1,t2);}}

static void C_ccall f_4346r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4350,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1070 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4348 in a4345 in k4333 in call-with-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4339 in k4333 in call-with-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4340,2,t0,t1);}
/* posixunix.scm: 1068 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4315,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4319,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1054 ##sys#check-port */
t4=*((C_word*)lf[161]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[158]);}

/* k4317 in close-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4319,2,t0,t1);}
t2=(C_word)close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4322,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 1056 posix-error */
t5=lf[3];
f_2539(6,t5,t3,lf[48],lf[159],lf[160],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k4320 in k4317 in close-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4279(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4279r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4279r(t0,t1,t2,t3);}}

static void C_ccall f_4279r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_string_2(t2,lf[157]);
t5=(C_word)C_i_pairp(t3);
t6=(C_truep(t5)?(C_word)C_slot(t3,C_fix(0)):lf[154]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4293,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_eqp(t6,lf[154]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4300,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1049 ##sys#make-c-string */
t10=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=(C_word)C_eqp(t6,lf[155]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4310,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1050 ##sys#make-c-string */
t11=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixunix.scm: 1023 ##sys#error */
t10=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[156],t6);}}}

/* k4308 in open-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4310,2,t0,t1);}
t2=(C_word)open_binary_output_pipe(&a,1,t1);
/* posixunix.scm: 1045 check */
f_4228(((C_word*)t0)[3],lf[157],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k4298 in open-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4300,2,t0,t1);}
t2=(C_word)open_text_output_pipe(&a,1,t1);
/* posixunix.scm: 1045 check */
f_4228(((C_word*)t0)[3],lf[157],((C_word*)t0)[2],C_SCHEME_FALSE,t2);}

/* k4291 in open-output-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1045 check */
f_4228(((C_word*)t0)[3],lf[157],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4243(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4243r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4243r(t0,t1,t2,t3);}}

static void C_ccall f_4243r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_string_2(t2,lf[153]);
t5=(C_word)C_i_pairp(t3);
t6=(C_truep(t5)?(C_word)C_slot(t3,C_fix(0)):lf[154]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4257,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_eqp(t6,lf[154]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4264,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1038 ##sys#make-c-string */
t10=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
t9=(C_word)C_eqp(t6,lf[155]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4274,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1039 ##sys#make-c-string */
t11=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t2);}
else{
/* posixunix.scm: 1023 ##sys#error */
t10=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,lf[156],t6);}}}

/* k4272 in open-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
t2=(C_word)open_binary_input_pipe(&a,1,t1);
/* posixunix.scm: 1034 check */
f_4228(((C_word*)t0)[3],lf[153],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k4262 in open-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4264,2,t0,t1);}
t2=(C_word)open_text_input_pipe(&a,1,t1);
/* posixunix.scm: 1034 check */
f_4228(((C_word*)t0)[3],lf[153],((C_word*)t0)[2],C_SCHEME_TRUE,t2);}

/* k4255 in open-input-pipe in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1034 check */
f_4228(((C_word*)t0)[3],lf[153],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4228(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4228,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_null_pointerp(t5))){
/* posixunix.scm: 1026 posix-error */
t6=lf[3];
f_2539(6,t6,t1,lf[48],t2,lf[149],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4241,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1027 ##sys#make-port */
t7=*((C_word*)lf[150]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t4,*((C_word*)lf[151]+1),lf[152],lf[98]);}}

/* k4239 in check in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=t1;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3893(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_3893,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[131]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3900,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_block_size(t2);
t6=(C_word)C_eqp(C_fix(0),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4014,a[2]=t4,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 971  cwd */
t8=((C_word*)t0)[6];
f_3837(t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[10],a[9]=t4,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
t8=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t8,C_fix(3)))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4200,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 973  sref */
t10=((C_word*)t0)[9];
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,t2,C_fix(0));}
else{
t9=t7;
f_4020(t9,C_SCHEME_FALSE);}}}

/* k4198 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_4020(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4020(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4020,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[10];
t3=((C_word*)t0)[9];
f_3900(2,t3,t2);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[10]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 976  cwd */
t5=((C_word*)t0)[7];
f_3837(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4175,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4186,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 977  sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[10],C_fix(0));}}}

/* k4184 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 977  char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(126),t1);}

/* k4173 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4175,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4182,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 978  sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(1));}
else{
t2=((C_word*)t0)[4];
f_4039(t2,C_SCHEME_FALSE);}}

/* k4180 in k4173 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_4039(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4039(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4039,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4046,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 980  get-environment-variable */
t3=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[146]);}
else{
t2=(C_word)C_block_size(((C_word*)t0)[8]);
t3=(C_word)C_eqp(C_fix(2),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4077,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 985  cwd */
t5=((C_word*)t0)[5];
f_3837(t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4083,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4147,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4168,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 986  sref */
t7=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[8],C_fix(0));}}}

/* k4166 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 986  alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4145 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4147,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4153,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4164,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 987  sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_4083(t2,C_SCHEME_FALSE);}}

/* k4162 in k4145 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 987  char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k4151 in k4145 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4153,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4160,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 988  sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_4083(t2,C_SCHEME_FALSE);}}

/* k4158 in k4151 in k4145 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=((C_word*)t0)[2];
f_4083(t3,(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1)));}

/* k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_4083(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4083,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_block_size(((C_word*)t0)[8]);
/* posixunix.scm: 989  ##sys#substring */
t3=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[7],((C_word*)t0)[8],C_fix(3),t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4096,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4144,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 990  sref */
t5=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[8],C_fix(0));}}

/* k4142 in k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 990  char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(47),t1);}

/* k4121 in k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4123,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4140,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 991  sref */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],C_fix(1));}
else{
t2=((C_word*)t0)[5];
f_4096(2,t2,C_SCHEME_FALSE);}}

/* k4138 in k4121 in k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 991  alpha? */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4127 in k4121 in k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4129,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4136,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 992  sref */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_fix(2));}
else{
t2=((C_word*)t0)[4];
f_4096(2,t2,C_SCHEME_FALSE);}}

/* k4134 in k4127 in k4121 in k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 992  char=? */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(58),t1);}

/* k4094 in k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4096,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_block_size(((C_word*)t0)[6]);
/* posixunix.scm: 993  ##sys#substring */
t3=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],((C_word*)t0)[6],C_fix(3),t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4120,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 994  sref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[6],C_fix(0));}}

/* k4118 in k4094 in k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4120,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
f_3900(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4116,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 997  cwd */
t5=((C_word*)t0)[2];
f_3837(t5,t4);}}

/* k4114 in k4118 in k4094 in k4081 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 997  sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[148],((C_word*)t0)[2]);}

/* k4075 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 985  sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[147],((C_word*)t0)[2]);}

/* k4044 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4049,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_4049(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4064,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 981  user */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}

/* k4062 in k4044 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 981  sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[145],t1);}

/* k4047 in k4044 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4049,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4053,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
/* posixunix.scm: 982  ##sys#substring */
t4=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],C_fix(1),t3);}

/* k4051 in k4047 in k4044 in k4037 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 979  sappend */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4031 in k4018 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 976  sappend */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],t1,lf[144],((C_word*)t0)[2]);}

/* k4012 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 971  sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[143]);}

/* k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=t1;
t4=*((C_word*)lf[141]+1);
/* g574575 */
t5=t4;
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,t3,lf[142]);}

/* k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3907,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3909,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li56),tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_3909(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3909(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3909,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=((C_word*)t0)[7],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 1000 null? */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3916,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3922,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1001 null? */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
/* posixunix.scm: 1012 string=? */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,lf[140],t4);}}

/* k3978 in k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3980,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* posixunix.scm: 1010 loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_3909(t3,((C_word*)t0)[5],((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3989,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* posixunix.scm: 1014 string=? */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[139],t3);}}

/* k3987 in k3978 in k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3989,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
/* posixunix.scm: 1010 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3909(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[6]);
/* posixunix.scm: 1010 loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3909(t4,((C_word*)t0)[4],((C_word*)t0)[3],t3);}}

/* k3920 in k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3922,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[132]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3958,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[3]);
t4=(C_word)C_a_i_minus(&a,2,t3,C_fix(1));
/* posixunix.scm: 1003 sref */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[3],t4);}}

/* k3956 in k3920 in k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3958(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3958,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(47),t1);
t3=(C_truep(t2)?t2:(C_word)C_eqp(C_make_character(92),t1));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3935,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3939,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_a_i_cons(&a,2,lf[136],((C_word*)t0)[2]);
/* posixunix.scm: 1006 reverse */
t7=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3950,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3954,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1009 reverse */
t6=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}}

/* k3952 in k3956 in k3920 in k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[134]+1);
/* g583584 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[135]);}

/* k3948 in k3956 in k3920 in k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1007 sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[138],t1);}

/* k3937 in k3956 in k3920 in k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=*((C_word*)lf[134]+1);
/* g583584 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,lf[135]);}

/* k3933 in k3956 in k3920 in k3914 in loop in k3905 in k3898 in canonical-path in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1004 sappend */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[133],t1);}

/* cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3837(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3837,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3841,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3846,a[2]=((C_word*)t0)[2],a[3]=((C_word)li54),tmp=(C_word)a,a+=4,tmp);
/* call-with-current-continuation */
t4=*((C_word*)lf[130]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* a3845 in cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3846,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3852,a[2]=t2,a[3]=((C_word)li49),tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3870,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li53),tmp=(C_word)a,a+=5,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_proc(*((C_word*)lf[129]+1)))(4,*((C_word*)lf[129]+1),t1,t3,t4);}

/* a3869 in a3845 in cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3876,a[2]=((C_word*)t0)[3],a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3882,a[2]=((C_word*)t0)[2],a[3]=((C_word)li52),tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a3881 in a3869 in a3845 in cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3882r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3882r(t0,t1,t2);}}

static void C_ccall f_3882r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3888,a[2]=t2,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp);
/* k599604 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3887 in a3881 in a3869 in a3845 in cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3888,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a3875 in a3869 in a3845 in cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3876,2,t0,t1);}
/* posixunix.scm: 966  cw */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* a3851 in a3845 in cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3852(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3852,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3858,a[2]=t2,a[3]=((C_word)li48),tmp=(C_word)a,a+=4,tmp);
/* k599604 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a3857 in a3851 in a3845 in cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3858,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[2],lf[127]))){
t2=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[128]);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[128]);}}

/* k3839 in cwd in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g602603 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* current-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3773r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3773r(t0,t1,t2);}}

static void C_ccall f_3773r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3777,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_3777(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_3777(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k3775 in current-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3777,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm: 945  change-directory */
t2=*((C_word*)lf[109]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 946  make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(256));}}

/* k3784 in k3775 in current-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_curdir(t1);
if(C_truep(t2)){
/* posixunix.scm: 949  ##sys#substring */
t3=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}
else{
/* posixunix.scm: 950  posix-error */
t3=lf[3];
f_2539(5,t3,((C_word*)t0)[2],lf[48],lf[118],lf[120]);}}

/* directory? in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3747(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3747,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[119]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3771,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 939  ##sys#expand-home-path */
t5=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3769 in directory? in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3771,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3764,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 874  ##sys#make-c-string */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k3762 in k3769 in directory? in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_stat(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_mk_bool(C_isdir);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr2r,(void*)f_3590r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3590r(t0,t1,t2);}}

static void C_ccall f_3590r(C_word t0,C_word t1,C_word t2){
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
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3690,a[2]=t3,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3695,a[2]=t4,a[3]=((C_word)li44),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-spec481522 */
t6=t5;
f_3695(t6,t1);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-show-dotfiles?482520 */
t8=t4;
f_3690(t8,t1,t6);}
else{
t8=(C_word)C_i_car(t7);
t9=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t9))){
/* body479487 */
t10=t3;
f_3592(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[0],t9);}}}}

/* def-spec481 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3695(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3695,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3703,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 912  current-directory */
t3=*((C_word*)lf[118]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3701 in def-spec481 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?482520 */
t2=((C_word*)t0)[3];
f_3690(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?482 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3690(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3690,NULL,3,t0,t1,t2);}
/* body479487 */
t3=((C_word*)t0)[2];
f_3592(t3,t1,t2,C_SCHEME_FALSE);}

/* body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3592(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3592,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[115]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3599,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 914  make-string */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_fix(256));}

/* k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3599,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 915  ##sys#make-pointer */
t3=*((C_word*)lf[117]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 916  ##sys#make-pointer */
t3=*((C_word*)lf[117]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3689,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 917  ##sys#expand-home-path */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k3687 in k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 917  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3607 in k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3609,2,t0,t1);}
t2=(C_word)C_opendir(t1,((C_word*)t0)[8]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[8]))){
/* posixunix.scm: 919  posix-error */
t3=lf[3];
f_2539(6,t3,((C_word*)t0)[7],lf[48],lf[115],lf[116],((C_word*)t0)[6]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3623,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word)li41),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_3623(t6,((C_word*)t0)[7]);}}

/* loop in k3607 in k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3623(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3623,NULL,2,t0,t1);}
t2=(C_word)C_readdir(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[6]))){
t3=(C_word)C_closedir(((C_word*)t0)[7]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_foundfile(((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 927  ##sys#substring */
t5=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[5],C_fix(0),t3);}}

/* k3631 in loop in k3607 in k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 928  string-ref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,C_fix(0));}

/* k3634 in k3631 in loop in k3607 in k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3639,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[4],C_fix(1)))){
/* posixunix.scm: 929  string-ref */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[5],C_fix(1));}
else{
t3=t2;
f_3639(2,t3,C_SCHEME_FALSE);}}

/* k3637 in k3634 in k3631 in loop in k3607 in k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3645,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(C_make_character(46),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(C_word)C_i_not(t1);
if(C_truep(t4)){
t5=t2;
f_3645(t5,t4);}
else{
t5=(C_word)C_eqp(C_make_character(46),t1);
if(C_truep(t5)){
t6=(C_word)C_eqp(C_fix(2),((C_word*)t0)[3]);
t7=t2;
f_3645(t7,(C_truep(t6)?t6:(C_word)C_i_not(((C_word*)t0)[2])));}
else{
t6=t2;
f_3645(t6,(C_word)C_i_not(((C_word*)t0)[2]));}}}
else{
t4=t2;
f_3645(t4,C_SCHEME_FALSE);}}

/* k3643 in k3637 in k3634 in k3631 in loop in k3607 in k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3645(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3645,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm: 934  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3623(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 935  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3623(t3,t2);}}

/* k3653 in k3643 in k3637 in k3634 in k3631 in loop in k3607 in k3603 in k3600 in k3597 in body479 in directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3655,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* delete-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3566,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[111]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3584,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3588,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 905  ##sys#expand-home-path */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k3586 in delete-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 905  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3582 in delete-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_rmdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posixunix.scm: 906  posix-error */
t4=lf[3];
f_2539(6,t4,((C_word*)t0)[3],lf[48],lf[111],lf[112],((C_word*)t0)[2]);}}

/* change-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3542(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3542,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[109]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3560,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3564,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 899  ##sys#expand-home-path */
t6=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k3562 in change-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 899  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3558 in change-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_chdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posixunix.scm: 900  posix-error */
t4=lf[3];
f_2539(6,t4,((C_word*)t0)[3],lf[48],lf[109],lf[110],((C_word*)t0)[2]);}}

/* create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3383(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_3383r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3383r(t0,t1,t2,t3);}}

static void C_ccall f_3383r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_3387(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_3387(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3387,2,t0,t1);}
t2=(C_word)C_i_check_string_2(((C_word*)t0)[5],lf[106]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 886  ##sys#expand-home-path */
t4=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3393,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3402,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t5=t4;
f_3402(t5,t3);}
else{
t5=t1;
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3514,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 874  ##sys#make-c-string */
t7=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}}

/* k3512 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_stat(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_mk_bool(C_isdir);
t5=((C_word*)t0)[2];
f_3402(t5,t4);}
else{
t4=((C_word*)t0)[2];
f_3402(t4,C_SCHEME_FALSE);}}

/* k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3402(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3402,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li36),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3475,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}
else{
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3498,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 878  ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}}}

/* k3496 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_mkdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posixunix.scm: 879  posix-error */
t4=lf[3];
f_2539(6,t4,((C_word*)t0)[3],lf[48],lf[106],lf[107],((C_word*)t0)[2]);}}

/* a3474 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3475,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
/* posixunix.scm: 890  make-pathname */
t5=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,t4);}
else{
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* a3468 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3469,2,t0,t1);}
/* posixunix.scm: 889  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k3410 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3414,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word)li35),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3414(t5,((C_word*)t0)[2],t1);}

/* loop in k3410 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3414(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3414,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3464,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 874  ##sys#make-c-string */
t6=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=t3;
f_3421(t4,C_SCHEME_FALSE);}}

/* k3462 in loop in k3410 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_stat(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_mk_bool(C_isdir);
t5=((C_word*)t0)[2];
f_3421(t5,(C_word)C_i_not(t4));}
else{
t4=((C_word*)t0)[2];
f_3421(t4,C_SCHEME_TRUE);}}

/* k3419 in loop in k3410 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3421,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3447,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 892  pathname-directory */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3445 in k3419 in loop in k3410 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 892  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3414(t2,((C_word*)t0)[2],t1);}

/* k3422 in k3419 in loop in k3410 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3424,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3440,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 878  ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k3438 in k3422 in k3419 in loop in k3410 in k3400 in k3391 in k3385 in create-directory in k3379 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_mkdir(t1);
t3=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* posixunix.scm: 879  posix-error */
t4=lf[3];
f_2539(6,t4,((C_word*)t0)[3],lf[48],lf[106],lf[107],((C_word*)t0)[2]);}}

/* set-file-position! in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_3321r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_3321r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3321r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=(C_word)C_i_check_exact_2(t3,lf[96]);
t8=(C_word)C_i_check_exact_2(t6,lf[96]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3334,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_negativep(t3))){
/* posixunix.scm: 844  ##sys#signal-hook */
t10=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t9,lf[101],lf[96],lf[102],t3,t2);}
else{
t10=t9;
f_3334(2,t10,C_SCHEME_UNDEFINED);}}

/* k3332 in set-file-position! in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3340,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3346,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 845  port? */
t4=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k3344 in k3332 in set-file-position! in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t3=(C_word)C_eqp(t2,lf[98]);
if(C_truep(t3)){
t4=(C_word)C_fseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
f_3340(2,t5,t4);}
else{
t4=((C_word*)t0)[2];
f_3340(2,t4,C_SCHEME_FALSE);}}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[5]))){
t2=(C_word)C_lseek(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_3340(2,t3,t2);}
else{
/* posixunix.scm: 851  ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[60],lf[96],lf[99],((C_word*)t0)[5]);}}}

/* k3338 in k3332 in set-file-position! in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm: 852  posix-error */
t2=lf[3];
f_2539(7,t2,((C_word*)t0)[4],lf[48],lf[96],lf[97],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* socket? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3311,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[94]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3318,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 833  ##sys#stat */
f_3139(t4,t2,C_SCHEME_FALSE,lf[94]);}

/* k3316 in socket? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_issock));}

/* f_3300 in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3300(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3300,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[92]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3307,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 825  ##sys#stat */
f_3139(t4,t2,C_SCHEME_FALSE,lf[92]);}

/* k3305 */
static void C_ccall f_3307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isfifo));}

/* block-device? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3290(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3290,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[89]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3297,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 818  ##sys#stat */
f_3139(t4,t2,C_SCHEME_FALSE,lf[89]);}

/* k3295 in block-device? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isblk));}

/* character-device? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3280(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3280,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[87]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3287,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 811  ##sys#stat */
f_3139(t4,t2,C_SCHEME_FALSE,lf[87]);}

/* k3285 in character-device? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_ischr));}

/* stat-directory? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3271,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[86]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3278,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 806  ##sys#stat */
f_3139(t4,t2,C_SCHEME_FALSE,lf[86]);}

/* k3276 in stat-directory? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isdir));}

/* stat-regular? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3262,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[85]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3269,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 801  ##sys#stat */
f_3139(t4,t2,C_SCHEME_FALSE,lf[85]);}

/* k3267 in stat-regular? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isreg));}

/* symbolic-link? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3253,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[84]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3260,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 796  ##sys#stat */
f_3139(t4,t2,C_SCHEME_TRUE,lf[84]);}

/* k3258 in symbolic-link? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_islink));}

/* regular-file? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3244(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3244,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[83]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 791  ##sys#stat */
f_3139(t4,t2,C_SCHEME_TRUE,lf[83]);}

/* k3249 in regular-file? in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isreg));}

/* file-permissions in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3238(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3238,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3242,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 787  ##sys#stat */
f_3139(t3,t2,C_SCHEME_FALSE,lf[82]);}

/* k3240 in file-permissions in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3232(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3232,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3236,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 786  ##sys#stat */
f_3139(t3,t2,C_SCHEME_FALSE,lf[81]);}

/* k3234 in file-owner in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3226,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3230,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 785  ##sys#stat */
f_3139(t3,t2,C_SCHEME_FALSE,lf[80]);}

/* k3228 in file-change-time in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3230,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3220(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3220,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3224,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 784  ##sys#stat */
f_3139(t3,t2,C_SCHEME_FALSE,lf[79]);}

/* k3222 in file-access-time in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3224,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-modification-time in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3214(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3214,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3218,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 783  ##sys#stat */
f_3139(t3,t2,C_SCHEME_FALSE,lf[78]);}

/* k3216 in file-modification-time in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3218,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* file-size in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3208(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3208,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3212,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 782  ##sys#stat */
f_3139(t3,t2,C_SCHEME_FALSE,lf[77]);}

/* k3210 in file-size in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3212,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_double_to_num(&a,C_statbuf.st_size));}

/* file-stat in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3176(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3176r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3176r(t0,t1,t2,t3);}}

static void C_ccall f_3176r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3180,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3187,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* posixunix.scm: 775  ##sys#stat */
f_3139(t4,t2,C_SCHEME_FALSE,lf[76]);}
else{
t6=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t6))){
t7=(C_word)C_i_car(t3);
/* posixunix.scm: 775  ##sys#stat */
f_3139(t4,t2,t7,lf[76]);}
else{
/* ##sys#error */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t3);}}}

/* k3185 in file-stat in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 775  ##sys#stat */
f_3139(((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[76]);}

/* k3178 in file-stat in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3180,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_a_double_to_num(&a,C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blocks)));}

/* ##sys#stat in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3139(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3139,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3143,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t6=t5;
f_3143(2,t6,(C_word)C_fstat(t2));}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3164,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3171,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 766  ##sys#expand-home-path */
t8=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
/* posixunix.scm: 770  ##sys#signal-hook */
t6=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[60],lf[75],t2);}}}

/* k3169 in ##sys#stat in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 766  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3162 in ##sys#stat in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_3143(2,t2,(C_truep(((C_word*)t0)[2])?(C_word)C_lstat(t1):(C_word)C_stat(t1)));}

/* k3141 in ##sys#stat in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 772  posix-error */
t2=lf[3];
f_2539(6,t2,((C_word*)t0)[4],lf[48],((C_word*)t0)[3],lf[74],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2859r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2859r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2859r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=(C_word)C_notvemptyp(t4);
t8=(C_truep(t7)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t10=(C_word)stub116(C_SCHEME_UNDEFINED,t9);
t11=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1));
t12=(C_word)stub116(C_SCHEME_UNDEFINED,t11);
t13=(C_word)C_i_not(t2);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2875,a[2]=t6,a[3]=t8,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t13)){
t15=t14;
f_2875(2,t15,t13);}
else{
if(C_truep((C_word)C_fixnump(t2))){
t15=C_set_block_item(t6,0,t2);
t16=t2;
t17=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t18=(C_word)C_i_foreign_fixnum_argumentp(t16);
t19=t14;
f_2875(2,t19,(C_word)stub121(C_SCHEME_UNDEFINED,t17,t18));}
else{
t15=(C_word)C_i_check_list_2(t2,lf[68]);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3098,a[2]=t17,a[3]=t6,a[4]=((C_word)li16),tmp=(C_word)a,a+=5,tmp));
t19=((C_word*)t17)[1];
f_3098(t19,t14,t2);}}}

/* loop150 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3098(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3098,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3106,a[2]=((C_word*)t0)[3],a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_3106(t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g157 in loop150 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_3106(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t2=(C_word)C_i_check_exact_2(t1,lf[68]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,(C_word)C_i_fixnum_max(((C_word*)((C_word*)t0)[2])[1],t1));
t4=t1;
t5=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
return((C_word)stub121(C_SCHEME_UNDEFINED,t5,t6));}

/* k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2875(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2875,2,t0,t1);}
t2=(C_word)C_i_not(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_2881(2,t4,t2);}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[6]))){
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,((C_word*)t0)[6]);
t5=((C_word*)t0)[6];
t6=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1));
t7=(C_word)C_i_foreign_fixnum_argumentp(t5);
t8=t3;
f_2881(2,t8,(C_word)stub121(C_SCHEME_UNDEFINED,t6,t7));}
else{
t4=(C_word)C_i_check_list_2(((C_word*)t0)[6],lf[68]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3050,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word)li14),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_3050(t8,t3,((C_word*)t0)[6]);}}}

/* loop179 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3050,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3058,a[2]=((C_word*)t0)[3],a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_3058(t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g186 in loop179 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_3058(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t2=(C_word)C_i_check_exact_2(t1,lf[68]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,(C_word)C_i_fixnum_max(((C_word*)((C_word*)t0)[2])[1],t1));
t4=t1;
t5=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
return((C_word)stub121(C_SCHEME_UNDEFINED,t5,t6));}

/* k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2884,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(C_word)C_i_check_number_2(((C_word*)t0)[3],lf[68]);
t4=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t5=t2;
f_2884(t5,(C_word)C_C_select_t(t4,((C_word*)t0)[3]));}
else{
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=t2;
f_2884(t4,(C_word)C_C_select(t3));}}

/* k2882 in k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_2884(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2884,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 721  posix-error */
t2=lf[3];
f_2539(7,t2,((C_word*)t0)[4],lf[48],lf[68],lf[69],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=(C_word)C_i_pairp(((C_word*)t0)[3]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
/* posixunix.scm: 722  values */
C_values(4,0,((C_word*)t0)[4],t4,C_SCHEME_END_OF_LIST);}
else{
/* posixunix.scm: 722  values */
C_values(4,0,((C_word*)t0)[4],t4,C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2923,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t4=((C_word*)t0)[3];
t5=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=t3;
f_2923(t7,(C_word)stub127(C_SCHEME_UNDEFINED,t5,t6));}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2986,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2988,a[2]=t8,a[3]=t5,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2988(t10,t6,((C_word*)t0)[3]);}}
else{
t4=t3;
f_2923(t4,C_SCHEME_FALSE);}}}}

/* loop213 in k2882 in k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_2988(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2988,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=((C_word*)t0)[3],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_2996(C_a_i(&a,3),t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g220 in loop213 in k2882 in k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_2996(C_word *a,C_word t0,C_word t1){
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
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
if(C_truep((C_word)stub127(C_SCHEME_UNDEFINED,t3,t4))){
t5=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}
else{
t5=C_SCHEME_UNDEFINED;
return(t5);}}

/* k2984 in k2882 in k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
f_2923(t3,t2);}

/* k2921 in k2882 in k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_2923(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2923,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[3];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1));
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=(C_word)stub127(C_SCHEME_UNDEFINED,t3,t4);
/* posixunix.scm: 724  values */
C_values(4,0,((C_word*)t0)[2],t1,t5);}
else{
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2939,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2941,a[2]=t6,a[3]=t3,a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_2941(t8,t4,((C_word*)t0)[3]);}}
else{
/* posixunix.scm: 724  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}}

/* loop233 in k2921 in k2882 in k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_fcall f_2941(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2941,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2949,a[2]=((C_word*)t0)[3],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_2949(C_a_i(&a,3),t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g240 in loop233 in k2921 in k2882 in k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static C_word C_fcall f_2949(C_word *a,C_word t0,C_word t1){
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
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1));
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
if(C_truep((C_word)stub127(C_SCHEME_UNDEFINED,t3,t4))){
t5=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}
else{
t5=C_SCHEME_UNDEFINED;
return(t5);}}

/* k2937 in k2921 in k2882 in k2879 in k2873 in file-select in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
/* posixunix.scm: 724  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* file-mkstemp in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2801,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[65]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2808,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 673  ##sys#make-c-string */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2806 in file-mkstemp in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=(C_word)C_mkstemp(t1);
t3=(C_word)C_block_size(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2814,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
/* posixunix.scm: 677  posix-error */
t6=lf[3];
f_2539(6,t6,t4,lf[48],lf[65],lf[67],((C_word*)t0)[2]);}
else{
t6=t4;
f_2814(2,t6,C_SCHEME_UNDEFINED);}}

/* k2812 in k2806 in file-mkstemp in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2814,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 678  ##sys#substring */
t4=*((C_word*)lf[66]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k2819 in k2812 in k2806 in file-mkstemp in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 678  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2762(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2762r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2762r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2762r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=(C_word)C_i_check_exact_2(t2,lf[62]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2769,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(t3))){
if(C_truep((C_word)C_byteblockp(t3))){
t7=t6;
f_2769(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 662  ##sys#signal-hook */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[60],lf[62],lf[64],t3);}}
else{
/* posixunix.scm: 662  ##sys#signal-hook */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,lf[60],lf[62],lf[64],t3);}}

/* k2767 in file-write in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2769,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):(C_word)C_block_size(((C_word*)t0)[4]));
t4=(C_word)C_i_check_exact_2(t3,lf[62]);
t5=(C_word)C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2778,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm: 667  posix-error */
t8=lf[3];
f_2539(7,t8,t6,lf[48],lf[62],lf[63],((C_word*)t0)[3],t3);}
else{
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t5);}}

/* k2776 in k2767 in file-write in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2720r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2720r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2720r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_i_check_exact_2(t2,lf[58]);
t6=(C_word)C_i_check_exact_2(t3,lf[58]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2730,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(t4))){
t8=t7;
f_2730(2,t8,(C_word)C_i_vector_ref(t4,C_fix(0)));}
else{
/* posixunix.scm: 650  make-string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k2728 in file-read in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2730,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_blockp(t1))){
if(C_truep((C_word)C_byteblockp(t1))){
t3=t2;
f_2733(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 652  ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[60],lf[58],lf[61],t1);}}
else{
/* posixunix.scm: 652  ##sys#signal-hook */
t3=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[60],lf[58],lf[61],t1);}}

/* k2731 in k2728 in file-read in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2733,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2736,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 655  posix-error */
t5=lf[3];
f_2539(7,t5,t3,lf[48],lf[58],lf[59],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t2));}}

/* k2734 in k2731 in k2728 in file-read in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2736,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2705,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[55]);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(t2),C_fix(0)))){
/* posixunix.scm: 643  posix-error */
t4=lf[3];
f_2539(6,t4,t1,lf[48],lf[55],lf[56],t2);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* file-open in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2667(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2667r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2667r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2667r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=(C_word)C_i_check_string_2(t2,lf[51]);
t8=(C_word)C_i_check_exact_2(t3,lf[51]);
t9=(C_word)C_i_check_exact_2(t6,lf[51]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2684,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2697,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 634  ##sys#expand-home-path */
t12=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t2);}

/* k2695 in file-open in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 634  ##sys#make-c-string */
t2=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2682 in file-open in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2684,2,t0,t1);}
t2=(C_word)C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2687,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 636  posix-error */
t5=lf[3];
f_2539(8,t5,t3,lf[48],lf[51],lf[52],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k2685 in k2682 in file-open in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-control in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2621r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2621r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2621r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2625,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_2625(2,t6,C_fix(0));}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_2625(2,t7,(C_word)C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k2623 in file-control in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[47]);
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[3],lf[47]);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)C_i_foreign_fixnum_argumentp(t5);
t8=(C_word)C_i_foreign_integer_argumentp(t1);
t9=(C_word)stub33(C_SCHEME_UNDEFINED,t6,t7,t8);
t10=(C_word)C_eqp(t9,C_fix(-1));
if(C_truep(t10)){
/* posixunix.scm: 624  posix-error */
t11=lf[3];
f_2539(7,t11,((C_word*)t0)[2],lf[48],lf[47],lf[49],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t9);}}

/* ##sys#file-select-one in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2564,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub26(C_SCHEME_UNDEFINED,t3));}

/* ##sys#file-nonblocking! in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2557,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub22(C_SCHEME_UNDEFINED,t3));}

/* posix-error in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_2539r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_2539r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_2539r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2543,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 514  ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k2541 in posix-error in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2543,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2550,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2554,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t1);
t6=(C_word)stub12(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k2552 in k2541 in posix-error in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 515  string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[5],t1);}

/* k2548 in k2541 in posix-error in k2525 in k2522 in k2519 in k2516 in k2513 in k2510 in k2507 */
static void C_ccall f_2550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[4]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[622] = {
{"toplevel:posixunix_scm",(void*)C_posix_toplevel},
{"f_2509:posixunix_scm",(void*)f_2509},
{"f_2512:posixunix_scm",(void*)f_2512},
{"f_2515:posixunix_scm",(void*)f_2515},
{"f_2518:posixunix_scm",(void*)f_2518},
{"f_2521:posixunix_scm",(void*)f_2521},
{"f_2524:posixunix_scm",(void*)f_2524},
{"f_2527:posixunix_scm",(void*)f_2527},
{"f_8682:posixunix_scm",(void*)f_8682},
{"f_8698:posixunix_scm",(void*)f_8698},
{"f_8686:posixunix_scm",(void*)f_8686},
{"f_8689:posixunix_scm",(void*)f_8689},
{"f_3381:posixunix_scm",(void*)f_3381},
{"f_4464:posixunix_scm",(void*)f_4464},
{"f_8676:posixunix_scm",(void*)f_8676},
{"f_4621:posixunix_scm",(void*)f_4621},
{"f_8661:posixunix_scm",(void*)f_8661},
{"f_8671:posixunix_scm",(void*)f_8671},
{"f_8658:posixunix_scm",(void*)f_8658},
{"f_4663:posixunix_scm",(void*)f_4663},
{"f_8643:posixunix_scm",(void*)f_8643},
{"f_8653:posixunix_scm",(void*)f_8653},
{"f_8640:posixunix_scm",(void*)f_8640},
{"f_4667:posixunix_scm",(void*)f_4667},
{"f_8625:posixunix_scm",(void*)f_8625},
{"f_8635:posixunix_scm",(void*)f_8635},
{"f_8622:posixunix_scm",(void*)f_8622},
{"f_4671:posixunix_scm",(void*)f_4671},
{"f_8607:posixunix_scm",(void*)f_8607},
{"f_8617:posixunix_scm",(void*)f_8617},
{"f_8604:posixunix_scm",(void*)f_8604},
{"f_4675:posixunix_scm",(void*)f_4675},
{"f_8583:posixunix_scm",(void*)f_8583},
{"f_8599:posixunix_scm",(void*)f_8599},
{"f_8565:posixunix_scm",(void*)f_8565},
{"f_8578:posixunix_scm",(void*)f_8578},
{"f_8572:posixunix_scm",(void*)f_8572},
{"f_5193:posixunix_scm",(void*)f_5193},
{"f_5232:posixunix_scm",(void*)f_5232},
{"f_8542:posixunix_scm",(void*)f_8542},
{"f_8534:posixunix_scm",(void*)f_8534},
{"f_8552:posixunix_scm",(void*)f_8552},
{"f_8283:posixunix_scm",(void*)f_8283},
{"f_8460:posixunix_scm",(void*)f_8460},
{"f_8466:posixunix_scm",(void*)f_8466},
{"f_8455:posixunix_scm",(void*)f_8455},
{"f_8450:posixunix_scm",(void*)f_8450},
{"f_8285:posixunix_scm",(void*)f_8285},
{"f_8437:posixunix_scm",(void*)f_8437},
{"f_8445:posixunix_scm",(void*)f_8445},
{"f_8292:posixunix_scm",(void*)f_8292},
{"f_8425:posixunix_scm",(void*)f_8425},
{"f_8419:posixunix_scm",(void*)f_8419},
{"f_8302:posixunix_scm",(void*)f_8302},
{"f_8304:posixunix_scm",(void*)f_8304},
{"f_8323:posixunix_scm",(void*)f_8323},
{"f_8405:posixunix_scm",(void*)f_8405},
{"f_8412:posixunix_scm",(void*)f_8412},
{"f_8399:posixunix_scm",(void*)f_8399},
{"f_8338:posixunix_scm",(void*)f_8338},
{"f_8392:posixunix_scm",(void*)f_8392},
{"f_8389:posixunix_scm",(void*)f_8389},
{"f_8379:posixunix_scm",(void*)f_8379},
{"f_8355:posixunix_scm",(void*)f_8355},
{"f_8377:posixunix_scm",(void*)f_8377},
{"f_8363:posixunix_scm",(void*)f_8363},
{"f_8370:posixunix_scm",(void*)f_8370},
{"f_8367:posixunix_scm",(void*)f_8367},
{"f_8350:posixunix_scm",(void*)f_8350},
{"f_8348:posixunix_scm",(void*)f_8348},
{"f_8426:posixunix_scm",(void*)f_8426},
{"f_8223:posixunix_scm",(void*)f_8223},
{"f_8235:posixunix_scm",(void*)f_8235},
{"f_8230:posixunix_scm",(void*)f_8230},
{"f_8225:posixunix_scm",(void*)f_8225},
{"f_8163:posixunix_scm",(void*)f_8163},
{"f_8175:posixunix_scm",(void*)f_8175},
{"f_8170:posixunix_scm",(void*)f_8170},
{"f_8165:posixunix_scm",(void*)f_8165},
{"f_8102:posixunix_scm",(void*)f_8102},
{"f_8157:posixunix_scm",(void*)f_8157},
{"f_8161:posixunix_scm",(void*)f_8161},
{"f_8123:posixunix_scm",(void*)f_8123},
{"f_8126:posixunix_scm",(void*)f_8126},
{"f_8137:posixunix_scm",(void*)f_8137},
{"f_8131:posixunix_scm",(void*)f_8131},
{"f_8104:posixunix_scm",(void*)f_8104},
{"f_8113:posixunix_scm",(void*)f_8113},
{"f_8044:posixunix_scm",(void*)f_8044},
{"f_8056:posixunix_scm",(void*)f_8056},
{"f_8087:posixunix_scm",(void*)f_8087},
{"f_8067:posixunix_scm",(void*)f_8067},
{"f_8083:posixunix_scm",(void*)f_8083},
{"f_8071:posixunix_scm",(void*)f_8071},
{"f_8079:posixunix_scm",(void*)f_8079},
{"f_8075:posixunix_scm",(void*)f_8075},
{"f_8050:posixunix_scm",(void*)f_8050},
{"f_8033:posixunix_scm",(void*)f_8033},
{"f_8037:posixunix_scm",(void*)f_8037},
{"f_8022:posixunix_scm",(void*)f_8022},
{"f_8026:posixunix_scm",(void*)f_8026},
{"f_7977:posixunix_scm",(void*)f_7977},
{"f_7981:posixunix_scm",(void*)f_7981},
{"f_7984:posixunix_scm",(void*)f_7984},
{"f_7987:posixunix_scm",(void*)f_7987},
{"f_7994:posixunix_scm",(void*)f_7994},
{"f_8000:posixunix_scm",(void*)f_8000},
{"f_8004:posixunix_scm",(void*)f_8004},
{"f_8007:posixunix_scm",(void*)f_8007},
{"f_8010:posixunix_scm",(void*)f_8010},
{"f_7998:posixunix_scm",(void*)f_7998},
{"f_7944:posixunix_scm",(void*)f_7944},
{"f_7957:posixunix_scm",(void*)f_7957},
{"f_7869:posixunix_scm",(void*)f_7869},
{"f_7930:posixunix_scm",(void*)f_7930},
{"f_7943:posixunix_scm",(void*)f_7943},
{"f_7910:posixunix_scm",(void*)f_7910},
{"f_7925:posixunix_scm",(void*)f_7925},
{"f_7919:posixunix_scm",(void*)f_7919},
{"f_7873:posixunix_scm",(void*)f_7873},
{"f_7875:posixunix_scm",(void*)f_7875},
{"f_7896:posixunix_scm",(void*)f_7896},
{"f_7890:posixunix_scm",(void*)f_7890},
{"f_7817:posixunix_scm",(void*)f_7817},
{"f_7824:posixunix_scm",(void*)f_7824},
{"f_7843:posixunix_scm",(void*)f_7843},
{"f_7847:posixunix_scm",(void*)f_7847},
{"f_7811:posixunix_scm",(void*)f_7811},
{"f_7802:posixunix_scm",(void*)f_7802},
{"f_7806:posixunix_scm",(void*)f_7806},
{"f_7775:posixunix_scm",(void*)f_7775},
{"f_7768:posixunix_scm",(void*)f_7768},
{"f_7765:posixunix_scm",(void*)f_7765},
{"f_7762:posixunix_scm",(void*)f_7762},
{"f_7684:posixunix_scm",(void*)f_7684},
{"f_7720:posixunix_scm",(void*)f_7720},
{"f_7714:posixunix_scm",(void*)f_7714},
{"f_7667:posixunix_scm",(void*)f_7667},
{"f_7485:posixunix_scm",(void*)f_7485},
{"f_7619:posixunix_scm",(void*)f_7619},
{"f_7614:posixunix_scm",(void*)f_7614},
{"f_7487:posixunix_scm",(void*)f_7487},
{"f_7497:posixunix_scm",(void*)f_7497},
{"f_7505:posixunix_scm",(void*)f_7505},
{"f_7551:posixunix_scm",(void*)f_7551},
{"f_7518:posixunix_scm",(void*)f_7518},
{"f_7543:posixunix_scm",(void*)f_7543},
{"f_7521:posixunix_scm",(void*)f_7521},
{"f_7466:posixunix_scm",(void*)f_7466},
{"f_7447:posixunix_scm",(void*)f_7447},
{"f_7405:posixunix_scm",(void*)f_7405},
{"f_7430:posixunix_scm",(void*)f_7430},
{"f_7291:posixunix_scm",(void*)f_7291},
{"f_7297:posixunix_scm",(void*)f_7297},
{"f_7318:posixunix_scm",(void*)f_7318},
{"f_7397:posixunix_scm",(void*)f_7397},
{"f_7322:posixunix_scm",(void*)f_7322},
{"f_7325:posixunix_scm",(void*)f_7325},
{"f_7332:posixunix_scm",(void*)f_7332},
{"f_7334:posixunix_scm",(void*)f_7334},
{"f_7351:posixunix_scm",(void*)f_7351},
{"f_7355:posixunix_scm",(void*)f_7355},
{"f_7363:posixunix_scm",(void*)f_7363},
{"f_7367:posixunix_scm",(void*)f_7367},
{"f_7312:posixunix_scm",(void*)f_7312},
{"f_7279:posixunix_scm",(void*)f_7279},
{"f_7283:posixunix_scm",(void*)f_7283},
{"f_7286:posixunix_scm",(void*)f_7286},
{"f_7244:posixunix_scm",(void*)f_7244},
{"f_7248:posixunix_scm",(void*)f_7248},
{"f_7268:posixunix_scm",(void*)f_7268},
{"f_7272:posixunix_scm",(void*)f_7272},
{"f_7221:posixunix_scm",(void*)f_7221},
{"f_7225:posixunix_scm",(void*)f_7225},
{"f_7189:posixunix_scm",(void*)f_7189},
{"f_7193:posixunix_scm",(void*)f_7193},
{"f_7170:posixunix_scm",(void*)f_7170},
{"f_7174:posixunix_scm",(void*)f_7174},
{"f_7177:posixunix_scm",(void*)f_7177},
{"f_7111:posixunix_scm",(void*)f_7111},
{"f_7115:posixunix_scm",(void*)f_7115},
{"f_7121:posixunix_scm",(void*)f_7121},
{"f_7130:posixunix_scm",(void*)f_7130},
{"f_7104:posixunix_scm",(void*)f_7104},
{"f_7088:posixunix_scm",(void*)f_7088},
{"f_7076:posixunix_scm",(void*)f_7076},
{"f_7061:posixunix_scm",(void*)f_7061},
{"f_7065:posixunix_scm",(void*)f_7065},
{"f_7046:posixunix_scm",(void*)f_7046},
{"f_7050:posixunix_scm",(void*)f_7050},
{"f_7000:posixunix_scm",(void*)f_7000},
{"f_7004:posixunix_scm",(void*)f_7004},
{"f_7017:posixunix_scm",(void*)f_7017},
{"f_7021:posixunix_scm",(void*)f_7021},
{"f_6931:posixunix_scm",(void*)f_6931},
{"f_6935:posixunix_scm",(void*)f_6935},
{"f_6938:posixunix_scm",(void*)f_6938},
{"f_6960:posixunix_scm",(void*)f_6960},
{"f_6957:posixunix_scm",(void*)f_6957},
{"f_6947:posixunix_scm",(void*)f_6947},
{"f_6870:posixunix_scm",(void*)f_6870},
{"f_6874:posixunix_scm",(void*)f_6874},
{"f_6880:posixunix_scm",(void*)f_6880},
{"f_6826:posixunix_scm",(void*)f_6826},
{"f_6830:posixunix_scm",(void*)f_6830},
{"f_6792:posixunix_scm",(void*)f_6792},
{"f_6796:posixunix_scm",(void*)f_6796},
{"f_6773:posixunix_scm",(void*)f_6773},
{"f_6767:posixunix_scm",(void*)f_6767},
{"f_6758:posixunix_scm",(void*)f_6758},
{"f_6723:posixunix_scm",(void*)f_6723},
{"f_6661:posixunix_scm",(void*)f_6661},
{"f_6665:posixunix_scm",(void*)f_6665},
{"f_6671:posixunix_scm",(void*)f_6671},
{"f_6690:posixunix_scm",(void*)f_6690},
{"f_6677:posixunix_scm",(void*)f_6677},
{"f_6557:posixunix_scm",(void*)f_6557},
{"f_6563:posixunix_scm",(void*)f_6563},
{"f_6567:posixunix_scm",(void*)f_6567},
{"f_6575:posixunix_scm",(void*)f_6575},
{"f_6601:posixunix_scm",(void*)f_6601},
{"f_6605:posixunix_scm",(void*)f_6605},
{"f_6593:posixunix_scm",(void*)f_6593},
{"f_6537:posixunix_scm",(void*)f_6537},
{"f_6545:posixunix_scm",(void*)f_6545},
{"f_6520:posixunix_scm",(void*)f_6520},
{"f_6531:posixunix_scm",(void*)f_6531},
{"f_6535:posixunix_scm",(void*)f_6535},
{"f_6494:posixunix_scm",(void*)f_6494},
{"f_6518:posixunix_scm",(void*)f_6518},
{"f_6501:posixunix_scm",(void*)f_6501},
{"f_6451:posixunix_scm",(void*)f_6451},
{"f_6458:posixunix_scm",(void*)f_6458},
{"f_6479:posixunix_scm",(void*)f_6479},
{"f_6475:posixunix_scm",(void*)f_6475},
{"f_6423:posixunix_scm",(void*)f_6423},
{"f_6396:posixunix_scm",(void*)f_6396},
{"f_6400:posixunix_scm",(void*)f_6400},
{"f_6381:posixunix_scm",(void*)f_6381},
{"f_6385:posixunix_scm",(void*)f_6385},
{"f_6366:posixunix_scm",(void*)f_6366},
{"f_6370:posixunix_scm",(void*)f_6370},
{"f_6348:posixunix_scm",(void*)f_6348},
{"f_6274:posixunix_scm",(void*)f_6274},
{"f_6296:posixunix_scm",(void*)f_6296},
{"f_6302:posixunix_scm",(void*)f_6302},
{"f_6235:posixunix_scm",(void*)f_6235},
{"f_6263:posixunix_scm",(void*)f_6263},
{"f_6259:posixunix_scm",(void*)f_6259},
{"f_6252:posixunix_scm",(void*)f_6252},
{"f_6245:posixunix_scm",(void*)f_6245},
{"f_5976:posixunix_scm",(void*)f_5976},
{"f_6172:posixunix_scm",(void*)f_6172},
{"f_6167:posixunix_scm",(void*)f_6167},
{"f_6162:posixunix_scm",(void*)f_6162},
{"f_5978:posixunix_scm",(void*)f_5978},
{"f_5982:posixunix_scm",(void*)f_5982},
{"f_6088:posixunix_scm",(void*)f_6088},
{"f_6089:posixunix_scm",(void*)f_6089},
{"f_6106:posixunix_scm",(void*)f_6106},
{"f_6116:posixunix_scm",(void*)f_6116},
{"f_6074:posixunix_scm",(void*)f_6074},
{"f_6030:posixunix_scm",(void*)f_6030},
{"f_6066:posixunix_scm",(void*)f_6066},
{"f_6045:posixunix_scm",(void*)f_6045},
{"f_6055:posixunix_scm",(void*)f_6055},
{"f_6039:posixunix_scm",(void*)f_6039},
{"f_6034:posixunix_scm",(void*)f_6034},
{"f_6037:posixunix_scm",(void*)f_6037},
{"f_5984:posixunix_scm",(void*)f_5984},
{"f_6019:posixunix_scm",(void*)f_6019},
{"f_6000:posixunix_scm",(void*)f_6000},
{"f_5494:posixunix_scm",(void*)f_5494},
{"f_5898:posixunix_scm",(void*)f_5898},
{"f_5893:posixunix_scm",(void*)f_5893},
{"f_5888:posixunix_scm",(void*)f_5888},
{"f_5883:posixunix_scm",(void*)f_5883},
{"f_5496:posixunix_scm",(void*)f_5496},
{"f_5500:posixunix_scm",(void*)f_5500},
{"f_5506:posixunix_scm",(void*)f_5506},
{"f_5756:posixunix_scm",(void*)f_5756},
{"f_5762:posixunix_scm",(void*)f_5762},
{"f_5858:posixunix_scm",(void*)f_5858},
{"f_5848:posixunix_scm",(void*)f_5848},
{"f_5842:posixunix_scm",(void*)f_5842},
{"f_5764:posixunix_scm",(void*)f_5764},
{"f_5814:posixunix_scm",(void*)f_5814},
{"f_5771:posixunix_scm",(void*)f_5771},
{"f_5781:posixunix_scm",(void*)f_5781},
{"f_5680:posixunix_scm",(void*)f_5680},
{"f_5688:posixunix_scm",(void*)f_5688},
{"f_5690:posixunix_scm",(void*)f_5690},
{"f_5738:posixunix_scm",(void*)f_5738},
{"f_5671:posixunix_scm",(void*)f_5671},
{"f_5675:posixunix_scm",(void*)f_5675},
{"f_5650:posixunix_scm",(void*)f_5650},
{"f_5660:posixunix_scm",(void*)f_5660},
{"f_5638:posixunix_scm",(void*)f_5638},
{"f_5625:posixunix_scm",(void*)f_5625},
{"f_5629:posixunix_scm",(void*)f_5629},
{"f_5620:posixunix_scm",(void*)f_5620},
{"f_5623:posixunix_scm",(void*)f_5623},
{"f_5538:posixunix_scm",(void*)f_5538},
{"f_5550:posixunix_scm",(void*)f_5550},
{"f_5587:posixunix_scm",(void*)f_5587},
{"f_5596:posixunix_scm",(void*)f_5596},
{"f_5590:posixunix_scm",(void*)f_5590},
{"f_5566:posixunix_scm",(void*)f_5566},
{"f_5569:posixunix_scm",(void*)f_5569},
{"f_5530:posixunix_scm",(void*)f_5530},
{"f_5507:posixunix_scm",(void*)f_5507},
{"f_5511:posixunix_scm",(void*)f_5511},
{"f_5467:posixunix_scm",(void*)f_5467},
{"f_5474:posixunix_scm",(void*)f_5474},
{"f_5477:posixunix_scm",(void*)f_5477},
{"f_5422:posixunix_scm",(void*)f_5422},
{"f_5426:posixunix_scm",(void*)f_5426},
{"f_5461:posixunix_scm",(void*)f_5461},
{"f_5444:posixunix_scm",(void*)f_5444},
{"f_5408:posixunix_scm",(void*)f_5408},
{"f_5420:posixunix_scm",(void*)f_5420},
{"f_5394:posixunix_scm",(void*)f_5394},
{"f_5406:posixunix_scm",(void*)f_5406},
{"f_5379:posixunix_scm",(void*)f_5379},
{"f_5392:posixunix_scm",(void*)f_5392},
{"f_5342:posixunix_scm",(void*)f_5342},
{"f_5350:posixunix_scm",(void*)f_5350},
{"f_5317:posixunix_scm",(void*)f_5317},
{"f_5298:posixunix_scm",(void*)f_5298},
{"f_5302:posixunix_scm",(void*)f_5302},
{"f_5330:posixunix_scm",(void*)f_5330},
{"f_5233:posixunix_scm",(void*)f_5233},
{"f_5237:posixunix_scm",(void*)f_5237},
{"f_5272:posixunix_scm",(void*)f_5272},
{"f_5244:posixunix_scm",(void*)f_5244},
{"f_5247:posixunix_scm",(void*)f_5247},
{"f_5250:posixunix_scm",(void*)f_5250},
{"f_5256:posixunix_scm",(void*)f_5256},
{"f_5195:posixunix_scm",(void*)f_5195},
{"f_5228:posixunix_scm",(void*)f_5228},
{"f_5216:posixunix_scm",(void*)f_5216},
{"f_5224:posixunix_scm",(void*)f_5224},
{"f_5220:posixunix_scm",(void*)f_5220},
{"f_5176:posixunix_scm",(void*)f_5176},
{"f_5186:posixunix_scm",(void*)f_5186},
{"f_5180:posixunix_scm",(void*)f_5180},
{"f_5170:posixunix_scm",(void*)f_5170},
{"f_5164:posixunix_scm",(void*)f_5164},
{"f_5158:posixunix_scm",(void*)f_5158},
{"f_5134:posixunix_scm",(void*)f_5134},
{"f_5156:posixunix_scm",(void*)f_5156},
{"f_5152:posixunix_scm",(void*)f_5152},
{"f_5144:posixunix_scm",(void*)f_5144},
{"f_5104:posixunix_scm",(void*)f_5104},
{"f_5132:posixunix_scm",(void*)f_5132},
{"f_5128:posixunix_scm",(void*)f_5128},
{"f_5077:posixunix_scm",(void*)f_5077},
{"f_5102:posixunix_scm",(void*)f_5102},
{"f_5098:posixunix_scm",(void*)f_5098},
{"f_5013:posixunix_scm",(void*)f_5013},
{"f_5001:posixunix_scm",(void*)f_5001},
{"f_5029:posixunix_scm",(void*)f_5029},
{"f_4939:posixunix_scm",(void*)f_4939},
{"f_4943:posixunix_scm",(void*)f_4943},
{"f_4948:posixunix_scm",(void*)f_4948},
{"f_4964:posixunix_scm",(void*)f_4964},
{"f_4876:posixunix_scm",(void*)f_4876},
{"f_4934:posixunix_scm",(void*)f_4934},
{"f_4880:posixunix_scm",(void*)f_4880},
{"f_4883:posixunix_scm",(void*)f_4883},
{"f_4915:posixunix_scm",(void*)f_4915},
{"f_4886:posixunix_scm",(void*)f_4886},
{"f_4891:posixunix_scm",(void*)f_4891},
{"f_4905:posixunix_scm",(void*)f_4905},
{"f_4783:posixunix_scm",(void*)f_4783},
{"f_4787:posixunix_scm",(void*)f_4787},
{"f_4841:posixunix_scm",(void*)f_4841},
{"f_4790:posixunix_scm",(void*)f_4790},
{"f_4803:posixunix_scm",(void*)f_4803},
{"f_4807:posixunix_scm",(void*)f_4807},
{"f_4813:posixunix_scm",(void*)f_4813},
{"f_4817:posixunix_scm",(void*)f_4817},
{"f_4827:posixunix_scm",(void*)f_4827},
{"f_4811:posixunix_scm",(void*)f_4811},
{"f_4758:posixunix_scm",(void*)f_4758},
{"f_4770:posixunix_scm",(void*)f_4770},
{"f_4766:posixunix_scm",(void*)f_4766},
{"f_4744:posixunix_scm",(void*)f_4744},
{"f_4756:posixunix_scm",(void*)f_4756},
{"f_4752:posixunix_scm",(void*)f_4752},
{"f_4677:posixunix_scm",(void*)f_4677},
{"f_4681:posixunix_scm",(void*)f_4681},
{"f_4723:posixunix_scm",(void*)f_4723},
{"f_4684:posixunix_scm",(void*)f_4684},
{"f_4697:posixunix_scm",(void*)f_4697},
{"f_4701:posixunix_scm",(void*)f_4701},
{"f_4705:posixunix_scm",(void*)f_4705},
{"f_4709:posixunix_scm",(void*)f_4709},
{"f_4713:posixunix_scm",(void*)f_4713},
{"f_4623:posixunix_scm",(void*)f_4623},
{"f_4656:posixunix_scm",(void*)f_4656},
{"f_4627:posixunix_scm",(void*)f_4627},
{"f_4634:posixunix_scm",(void*)f_4634},
{"f_4638:posixunix_scm",(void*)f_4638},
{"f_4642:posixunix_scm",(void*)f_4642},
{"f_4646:posixunix_scm",(void*)f_4646},
{"f_4650:posixunix_scm",(void*)f_4650},
{"f_4605:posixunix_scm",(void*)f_4605},
{"f_4590:posixunix_scm",(void*)f_4590},
{"f_4584:posixunix_scm",(void*)f_4584},
{"f_4552:posixunix_scm",(void*)f_4552},
{"f_4558:posixunix_scm",(void*)f_4558},
{"f_4506:posixunix_scm",(void*)f_4506},
{"f_4524:posixunix_scm",(void*)f_4524},
{"f_4488:posixunix_scm",(void*)f_4488},
{"f_4498:posixunix_scm",(void*)f_4498},
{"f_4475:posixunix_scm",(void*)f_4475},
{"f_4466:posixunix_scm",(void*)f_4466},
{"f_4419:posixunix_scm",(void*)f_4419},
{"f_4423:posixunix_scm",(void*)f_4423},
{"f_4399:posixunix_scm",(void*)f_4399},
{"f_4403:posixunix_scm",(void*)f_4403},
{"f_4409:posixunix_scm",(void*)f_4409},
{"f_4413:posixunix_scm",(void*)f_4413},
{"f_4379:posixunix_scm",(void*)f_4379},
{"f_4383:posixunix_scm",(void*)f_4383},
{"f_4389:posixunix_scm",(void*)f_4389},
{"f_4393:posixunix_scm",(void*)f_4393},
{"f_4355:posixunix_scm",(void*)f_4355},
{"f_4359:posixunix_scm",(void*)f_4359},
{"f_4370:posixunix_scm",(void*)f_4370},
{"f_4374:posixunix_scm",(void*)f_4374},
{"f_4364:posixunix_scm",(void*)f_4364},
{"f_4331:posixunix_scm",(void*)f_4331},
{"f_4335:posixunix_scm",(void*)f_4335},
{"f_4346:posixunix_scm",(void*)f_4346},
{"f_4350:posixunix_scm",(void*)f_4350},
{"f_4340:posixunix_scm",(void*)f_4340},
{"f_4315:posixunix_scm",(void*)f_4315},
{"f_4319:posixunix_scm",(void*)f_4319},
{"f_4322:posixunix_scm",(void*)f_4322},
{"f_4279:posixunix_scm",(void*)f_4279},
{"f_4310:posixunix_scm",(void*)f_4310},
{"f_4300:posixunix_scm",(void*)f_4300},
{"f_4293:posixunix_scm",(void*)f_4293},
{"f_4243:posixunix_scm",(void*)f_4243},
{"f_4274:posixunix_scm",(void*)f_4274},
{"f_4264:posixunix_scm",(void*)f_4264},
{"f_4257:posixunix_scm",(void*)f_4257},
{"f_4228:posixunix_scm",(void*)f_4228},
{"f_4241:posixunix_scm",(void*)f_4241},
{"f_3893:posixunix_scm",(void*)f_3893},
{"f_4200:posixunix_scm",(void*)f_4200},
{"f_4020:posixunix_scm",(void*)f_4020},
{"f_4186:posixunix_scm",(void*)f_4186},
{"f_4175:posixunix_scm",(void*)f_4175},
{"f_4182:posixunix_scm",(void*)f_4182},
{"f_4039:posixunix_scm",(void*)f_4039},
{"f_4168:posixunix_scm",(void*)f_4168},
{"f_4147:posixunix_scm",(void*)f_4147},
{"f_4164:posixunix_scm",(void*)f_4164},
{"f_4153:posixunix_scm",(void*)f_4153},
{"f_4160:posixunix_scm",(void*)f_4160},
{"f_4083:posixunix_scm",(void*)f_4083},
{"f_4144:posixunix_scm",(void*)f_4144},
{"f_4123:posixunix_scm",(void*)f_4123},
{"f_4140:posixunix_scm",(void*)f_4140},
{"f_4129:posixunix_scm",(void*)f_4129},
{"f_4136:posixunix_scm",(void*)f_4136},
{"f_4096:posixunix_scm",(void*)f_4096},
{"f_4120:posixunix_scm",(void*)f_4120},
{"f_4116:posixunix_scm",(void*)f_4116},
{"f_4077:posixunix_scm",(void*)f_4077},
{"f_4046:posixunix_scm",(void*)f_4046},
{"f_4064:posixunix_scm",(void*)f_4064},
{"f_4049:posixunix_scm",(void*)f_4049},
{"f_4053:posixunix_scm",(void*)f_4053},
{"f_4033:posixunix_scm",(void*)f_4033},
{"f_4014:posixunix_scm",(void*)f_4014},
{"f_3900:posixunix_scm",(void*)f_3900},
{"f_3907:posixunix_scm",(void*)f_3907},
{"f_3909:posixunix_scm",(void*)f_3909},
{"f_3916:posixunix_scm",(void*)f_3916},
{"f_3980:posixunix_scm",(void*)f_3980},
{"f_3989:posixunix_scm",(void*)f_3989},
{"f_3922:posixunix_scm",(void*)f_3922},
{"f_3958:posixunix_scm",(void*)f_3958},
{"f_3954:posixunix_scm",(void*)f_3954},
{"f_3950:posixunix_scm",(void*)f_3950},
{"f_3939:posixunix_scm",(void*)f_3939},
{"f_3935:posixunix_scm",(void*)f_3935},
{"f_3837:posixunix_scm",(void*)f_3837},
{"f_3846:posixunix_scm",(void*)f_3846},
{"f_3870:posixunix_scm",(void*)f_3870},
{"f_3882:posixunix_scm",(void*)f_3882},
{"f_3888:posixunix_scm",(void*)f_3888},
{"f_3876:posixunix_scm",(void*)f_3876},
{"f_3852:posixunix_scm",(void*)f_3852},
{"f_3858:posixunix_scm",(void*)f_3858},
{"f_3841:posixunix_scm",(void*)f_3841},
{"f_3773:posixunix_scm",(void*)f_3773},
{"f_3777:posixunix_scm",(void*)f_3777},
{"f_3786:posixunix_scm",(void*)f_3786},
{"f_3747:posixunix_scm",(void*)f_3747},
{"f_3771:posixunix_scm",(void*)f_3771},
{"f_3764:posixunix_scm",(void*)f_3764},
{"f_3590:posixunix_scm",(void*)f_3590},
{"f_3695:posixunix_scm",(void*)f_3695},
{"f_3703:posixunix_scm",(void*)f_3703},
{"f_3690:posixunix_scm",(void*)f_3690},
{"f_3592:posixunix_scm",(void*)f_3592},
{"f_3599:posixunix_scm",(void*)f_3599},
{"f_3602:posixunix_scm",(void*)f_3602},
{"f_3605:posixunix_scm",(void*)f_3605},
{"f_3689:posixunix_scm",(void*)f_3689},
{"f_3609:posixunix_scm",(void*)f_3609},
{"f_3623:posixunix_scm",(void*)f_3623},
{"f_3633:posixunix_scm",(void*)f_3633},
{"f_3636:posixunix_scm",(void*)f_3636},
{"f_3639:posixunix_scm",(void*)f_3639},
{"f_3645:posixunix_scm",(void*)f_3645},
{"f_3655:posixunix_scm",(void*)f_3655},
{"f_3566:posixunix_scm",(void*)f_3566},
{"f_3588:posixunix_scm",(void*)f_3588},
{"f_3584:posixunix_scm",(void*)f_3584},
{"f_3542:posixunix_scm",(void*)f_3542},
{"f_3564:posixunix_scm",(void*)f_3564},
{"f_3560:posixunix_scm",(void*)f_3560},
{"f_3383:posixunix_scm",(void*)f_3383},
{"f_3387:posixunix_scm",(void*)f_3387},
{"f_3393:posixunix_scm",(void*)f_3393},
{"f_3514:posixunix_scm",(void*)f_3514},
{"f_3402:posixunix_scm",(void*)f_3402},
{"f_3498:posixunix_scm",(void*)f_3498},
{"f_3475:posixunix_scm",(void*)f_3475},
{"f_3469:posixunix_scm",(void*)f_3469},
{"f_3412:posixunix_scm",(void*)f_3412},
{"f_3414:posixunix_scm",(void*)f_3414},
{"f_3464:posixunix_scm",(void*)f_3464},
{"f_3421:posixunix_scm",(void*)f_3421},
{"f_3447:posixunix_scm",(void*)f_3447},
{"f_3424:posixunix_scm",(void*)f_3424},
{"f_3440:posixunix_scm",(void*)f_3440},
{"f_3321:posixunix_scm",(void*)f_3321},
{"f_3334:posixunix_scm",(void*)f_3334},
{"f_3346:posixunix_scm",(void*)f_3346},
{"f_3340:posixunix_scm",(void*)f_3340},
{"f_3311:posixunix_scm",(void*)f_3311},
{"f_3318:posixunix_scm",(void*)f_3318},
{"f_3300:posixunix_scm",(void*)f_3300},
{"f_3307:posixunix_scm",(void*)f_3307},
{"f_3290:posixunix_scm",(void*)f_3290},
{"f_3297:posixunix_scm",(void*)f_3297},
{"f_3280:posixunix_scm",(void*)f_3280},
{"f_3287:posixunix_scm",(void*)f_3287},
{"f_3271:posixunix_scm",(void*)f_3271},
{"f_3278:posixunix_scm",(void*)f_3278},
{"f_3262:posixunix_scm",(void*)f_3262},
{"f_3269:posixunix_scm",(void*)f_3269},
{"f_3253:posixunix_scm",(void*)f_3253},
{"f_3260:posixunix_scm",(void*)f_3260},
{"f_3244:posixunix_scm",(void*)f_3244},
{"f_3251:posixunix_scm",(void*)f_3251},
{"f_3238:posixunix_scm",(void*)f_3238},
{"f_3242:posixunix_scm",(void*)f_3242},
{"f_3232:posixunix_scm",(void*)f_3232},
{"f_3236:posixunix_scm",(void*)f_3236},
{"f_3226:posixunix_scm",(void*)f_3226},
{"f_3230:posixunix_scm",(void*)f_3230},
{"f_3220:posixunix_scm",(void*)f_3220},
{"f_3224:posixunix_scm",(void*)f_3224},
{"f_3214:posixunix_scm",(void*)f_3214},
{"f_3218:posixunix_scm",(void*)f_3218},
{"f_3208:posixunix_scm",(void*)f_3208},
{"f_3212:posixunix_scm",(void*)f_3212},
{"f_3176:posixunix_scm",(void*)f_3176},
{"f_3187:posixunix_scm",(void*)f_3187},
{"f_3180:posixunix_scm",(void*)f_3180},
{"f_3139:posixunix_scm",(void*)f_3139},
{"f_3171:posixunix_scm",(void*)f_3171},
{"f_3164:posixunix_scm",(void*)f_3164},
{"f_3143:posixunix_scm",(void*)f_3143},
{"f_2859:posixunix_scm",(void*)f_2859},
{"f_3098:posixunix_scm",(void*)f_3098},
{"f_3106:posixunix_scm",(void*)f_3106},
{"f_2875:posixunix_scm",(void*)f_2875},
{"f_3050:posixunix_scm",(void*)f_3050},
{"f_3058:posixunix_scm",(void*)f_3058},
{"f_2881:posixunix_scm",(void*)f_2881},
{"f_2884:posixunix_scm",(void*)f_2884},
{"f_2988:posixunix_scm",(void*)f_2988},
{"f_2996:posixunix_scm",(void*)f_2996},
{"f_2986:posixunix_scm",(void*)f_2986},
{"f_2923:posixunix_scm",(void*)f_2923},
{"f_2941:posixunix_scm",(void*)f_2941},
{"f_2949:posixunix_scm",(void*)f_2949},
{"f_2939:posixunix_scm",(void*)f_2939},
{"f_2801:posixunix_scm",(void*)f_2801},
{"f_2808:posixunix_scm",(void*)f_2808},
{"f_2814:posixunix_scm",(void*)f_2814},
{"f_2821:posixunix_scm",(void*)f_2821},
{"f_2762:posixunix_scm",(void*)f_2762},
{"f_2769:posixunix_scm",(void*)f_2769},
{"f_2778:posixunix_scm",(void*)f_2778},
{"f_2720:posixunix_scm",(void*)f_2720},
{"f_2730:posixunix_scm",(void*)f_2730},
{"f_2733:posixunix_scm",(void*)f_2733},
{"f_2736:posixunix_scm",(void*)f_2736},
{"f_2705:posixunix_scm",(void*)f_2705},
{"f_2667:posixunix_scm",(void*)f_2667},
{"f_2697:posixunix_scm",(void*)f_2697},
{"f_2684:posixunix_scm",(void*)f_2684},
{"f_2687:posixunix_scm",(void*)f_2687},
{"f_2621:posixunix_scm",(void*)f_2621},
{"f_2625:posixunix_scm",(void*)f_2625},
{"f_2564:posixunix_scm",(void*)f_2564},
{"f_2557:posixunix_scm",(void*)f_2557},
{"f_2539:posixunix_scm",(void*)f_2539},
{"f_2543:posixunix_scm",(void*)f_2543},
{"f_2554:posixunix_scm",(void*)f_2554},
{"f_2550:posixunix_scm",(void*)f_2550},
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
