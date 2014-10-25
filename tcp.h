#ifndef _TCP_H_
#define _TCP_H_

#ifdef _WIN32
# include <winsock2.h>
# include <ws2tcpip.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t       int
static WSADATA wsa;
# ifndef SHUT_RD
#  define SHUT_RD         SD_RECEIVE
# endif
# ifndef SHUT_WR
#  define SHUT_WR         SD_SEND
# endif

# define typecorrect_getsockopt(socket, level, optname, optval, optlen) \
    getsockopt(socket, level, optname, (char *)optval, optlen)

static C_word make_socket_nonblocking (C_word sock) {
    int fd = C_unfix(sock);
    C_return(C_mk_bool(ioctlsocket(fd, FIONBIO, (void *)&fd) != SOCKET_ERROR));
}

/* This is a bit of a hack, but it keeps things simple */
static C_TLS char *last_wsa_errorstring = NULL;

static char *errormsg_from_code(int code) {
    int bufsize;
    if (last_wsa_errorstring != NULL) {
        LocalFree(last_wsa_errorstring);
        last_wsa_errorstring = NULL;
    }
    bufsize = FormatMessage(
        FORMAT_MESSAGE_ALLOCATE_BUFFER |
        FORMAT_MESSAGE_FROM_SYSTEM |
        FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL, code, MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        (LPTSTR) &last_wsa_errorstring, 0, NULL);
    if (bufsize == 0) return "ERROR WHILE FETCHING ERROR";
    return last_wsa_errorstring;
}

# define get_last_socket_error()  WSAGetLastError()
# define should_retry_call()      (WSAGetLastError() == WSAEWOULDBLOCK)
/* Not EINPROGRESS in winsock.  Nonblocking connect returns EWOULDBLOCK... */
# define call_in_progress()       (WSAGetLastError() == WSAEWOULDBLOCK)
# define call_was_interrupted()   (WSAGetLastError() == WSAEINTR) /* ? */

#else
# include <errno.h>
# include <fcntl.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define SOCKET_ERROR    -1
# define typecorrect_getsockopt getsockopt

static C_word make_socket_nonblocking (C_word sock) {
    int fd = C_unfix(sock);
    int val = fcntl(fd, F_GETFL, 0);
    if(val == -1) C_return(C_SCHEME_FALSE);
    C_return(C_mk_bool(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1));
}

# define get_last_socket_error()  errno
# define errormsg_from_code(e)    strerror(e)

# define should_retry_call()      (errno == EAGAIN || errno == EWOULDBLOCK)
# define call_was_interrupted()   (errno == EINTR)
# define call_in_progress()       (errno == EINPROGRESS)
#endif

#ifndef h_addr
# define h_addr  h_addr_list[ 0 ]
#endif

static char addr_buffer[ 20 ];

static int C_set_socket_options(int socket)
{
    int yes = 1;
    int r;

    r = setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int));

    if(r != 0) return r;

#ifdef SO_NOSIGPIPE
    /*
     * Avoid SIGPIPE (iOS uses *only* SIGPIPE otherwise, not returning EPIPE).
     * For consistency we do this everywhere the option is supported.
     */
    r = setsockopt(socket, SOL_SOCKET, SO_NOSIGPIPE, (const char *)&yes, sizeof(int));
#endif

    return r;
}

#endif
