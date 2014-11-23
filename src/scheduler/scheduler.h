#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <common.h>

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
/* TODO: Winsock select() only works for sockets */
# include <winsock2.h>
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)     (Sleep(C_unfix(n)), C_SCHEME_TRUE)
#else
# include <sys/time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
    struct timespec ts;
    unsigned long mss = C_unfix(ms);
    ts.tv_sec = mss / 1000;
    ts.tv_nsec = (mss % 1000) * 1000000;

    if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
    return C_SCHEME_TRUE;
}
#endif

#ifdef NO_POSIX_POLL

/* Shouldn't we include <sys/select.h> here? */
static fd_set C_fdset_input, C_fdset_output;

#define C_fd_input_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_output_ready(fd,pos)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

C_inline int C_ready_fds_timeout(int to, double tm) {
    struct timeval timeout;
    timeout.tv_sec = (long)(tm / 1000);
    timeout.tv_usec = (long)(fmod(tm, 1000) * 1000);
    /* we use FD_SETSIZE, but really should use max fd */
    return select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL);
}

C_inline void C_prepare_fdset(int length) {
    FD_ZERO(&C_fdset_input);
    FD_ZERO(&C_fdset_output);
}

C_inline void C_fdset_add(int fd, int input, int output) {
    if (input) FD_SET(fd, &C_fdset_input);
    if (output) FD_SET(fd, &C_fdset_output);
}

#else
#  include <poll.h>
#  include <assert.h>

static int C_fdset_nfds;
static struct pollfd *C_fdset_set = NULL;

C_inline int C_fd_ready(int fd, int pos, int what) {
    assert(fd == C_fdset_set[pos].fd); /* Must match position in ##sys#fd-list! */
    return(C_fdset_set[pos].revents & what);
}

#define C_fd_input_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLIN|POLLERR|POLLHUP|POLLNVAL))
#define C_fd_output_ready(fd,pos)  C_mk_bool(C_fd_ready(C_unfix(fd), C_unfix(pos),POLLOUT|POLLERR|POLLHUP|POLLNVAL))

C_inline int C_ready_fds_timeout(int to, double tm) {
    return poll(C_fdset_set, C_fdset_nfds, to ? (int)tm : -1);
}

C_inline void C_prepare_fdset(int length) {
    /* TODO: Only realloc when needed? */
    C_fdset_set = realloc(C_fdset_set, sizeof(struct pollfd) * length);
    if (C_fdset_set == NULL)
        C_halt(C_SCHEME_FALSE); /* Ugly: no message */
    C_fdset_nfds = 0;
}

/* This *must* be called in order, so position will match ##sys#fd-list */
C_inline void C_fdset_add(int fd, int input, int output) {
    C_fdset_set[C_fdset_nfds].events = ((input ? POLLIN : 0) | (output ? POLLOUT : 0));
    C_fdset_set[C_fdset_nfds++].fd = fd;
}
#endif

struct scheduler_t
{
    void *pending_timers[2];
    void *pending_polls[2];
} scheduler;

void scheduler_init(struct scheduler_t *s);
void scheduler_destroy(struct scheduler_t *s);

int scheduler_poll(struct scheduler_t *s);
int scheduler_run_once(struct scheduler_t *s);

struct uv_timer_s *scheduler_timer_new(struct scheduler_t *s, float timeout);
struct uv_timer_s *scheduler_timer_next(struct scheduler_t *s);
void scheduler_timer_delete(struct uv_timer_s *timer);

struct uv_poll_s *scheduler_poll_new(struct scheduler_t *s, int fd, int events);
struct uv_poll_s *scheduler_poll_next(struct scheduler_t *s);
void scheduler_poll_delete(struct uv_poll_s *poll);

#endif /* SCHEDULER_H */
