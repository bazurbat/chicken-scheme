#include "system.h"
#include <chicken.h>

#include <errno.h>
#ifdef HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif

/* TODO: Include sys/select.h? Windows doesn't seem to have it... */
#ifndef NO_POSIX_POLL
#  include <poll.h>
#endif

#ifdef _WIN32
#include <windows.h>
#endif

#ifndef EOVERFLOW
# define EOVERFLOW  0
#endif

static C_TLS C_char buffer[ STRING_BUFFER_SIZE ];

C_regparm C_word C_fcall C_i_file_exists_p(C_word name, C_word file, C_word dir)
{
    struct stat buf;
    int res;

    res = stat(C_c_string(name), &buf);

    if(res != 0) {
        switch(errno) {
        case ENOENT: return C_SCHEME_FALSE;
        case EOVERFLOW: return C_truep(dir) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
        case ENOTDIR: return C_SCHEME_FALSE;
        default: return C_fix(res);
        }
    }

    switch(buf.st_mode & S_IFMT) {
    case S_IFDIR: return C_truep(file) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
    default: return C_truep(dir) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
    }
}

C_regparm C_word C_fcall C_execute_shell_command(C_word string)
{
    int n = C_header_size(string);
    char *buf = buffer;

    /* Windows doc says to flush all output streams before calling system.
       Probably a good idea for all platforms. */
    (void)fflush(NULL);

    if(n >= STRING_BUFFER_SIZE) {
        if((buf = (char *)C_malloc(n + 1)) == NULL)
            barf(C_OUT_OF_MEMORY_ERROR, "system");
    }

    C_memcpy(buf, C_data_pointer(string), n);
    buf[ n ] = '\0';
    if (n != strlen(buf))
        barf(C_ASCIIZ_REPRESENTATION_ERROR, "get-environment-variable", string);

    n = C_system(buf);

    if(buf != buffer) C_free(buf);

    return C_fix(n);
}

void C_ccall C_open_file_port(C_word c, C_word closure, C_word k, C_word port, C_word channel, C_word mode)
{
    C_FILEPTR fp = (C_FILEPTR)NULL;
    C_char fmode[ 4 ];
    C_word n;
    char *buf;

    switch(channel) {
    case C_fix(0): fp = C_stdin; break;
    case C_fix(1): fp = C_stdout; break;
    case C_fix(2): fp = C_stderr; break;
    default:
        n = C_header_size(channel);
        buf = buffer;

        if(n >= STRING_BUFFER_SIZE) {
            if((buf = (char *)C_malloc(n + 1)) == NULL)
                barf(C_OUT_OF_MEMORY_ERROR, "open");
        }

        C_strncpy(buf, C_c_string(channel), n);
        buf[ n ] = '\0';
        if (n != strlen(buf))
            barf(C_ASCIIZ_REPRESENTATION_ERROR, "open", channel);
        n = C_header_size(mode);
        if (n >= sizeof(fmode)) n = sizeof(fmode) - 1;
        C_strncpy(fmode, C_c_string(mode), n);
        fmode[ n ] = '\0';
        if (n != strlen(fmode)) /* Shouldn't happen, but never hurts */
            barf(C_ASCIIZ_REPRESENTATION_ERROR, "open", mode);
        fp = C_fopen(buf, fmode);

        if(buf != buffer) C_free(buf);
    }

    C_set_block_item(port, 0, (C_word)fp);
    C_kontinue(k, C_mk_bool(fp != NULL));
}


/*
 * TODO: Implement something for Windows that supports selecting on
 * arbitrary fds (there, select() only works on network sockets and
 * poll() is not available at all).
 */
C_regparm int C_fcall C_check_fd_ready(int fd)
{
#ifdef NO_POSIX_POLL
    fd_set in;
    struct timeval tm;
    int rv;
    FD_ZERO(&in);
    FD_SET(fd, &in);
    tm.tv_sec = tm.tv_usec = 0;
    rv = select(fd + 1, &in, NULL, NULL, &tm);
    if(rv > 0) { rv = FD_ISSET(fd, &in) ? 1 : 0; }
    return rv;
#else
    struct pollfd ps;
    ps.fd = fd;
    ps.events = POLLIN;
    return poll(&ps, 1, 0);
#endif
}

