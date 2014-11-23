#include "uvffi.h"
#include <stdio.h>
#include <stdlib.h>

static uv_poll_t *current_poll_event_;
uv_poll_t *current_poll_event()
{
    return current_poll_event_;
}

static uv_timer_t *current_timer_event_;
uv_timer_t *current_timer_event()
{
    return current_timer_event_;
}

void poll_event_cb(uv_poll_t *handle, int status, int events)
{
    current_poll_event_ = handle;
}

uv_poll_t * uvpoll_start(int fd, int events)
{
    uv_poll_t *watcher = malloc(sizeof(uv_poll_t));
    uv_poll_init(uv_default_loop(), watcher,fd);
    uv_poll_start(watcher, events, poll_event_cb);
    return watcher;
}

void uvpoll_stop(uv_poll_t *p)
{
    uv_poll_stop(p);
    free(p);
}

void timer_cb(uv_timer_t *handle, int status)
{
    current_timer_event_ = handle;
    fprintf(stderr, "timer cb %p\n", handle);
}

uv_timer_t * uvtimer_start(float tm)
{
    uv_timer_t *timer = malloc(sizeof(uv_timer_t));
    uv_timer_init(uv_default_loop(), timer);
    uv_timer_start(timer, timer_cb, (int)tm, 0);
    fprintf(stderr, "timer start: %f\n", tm);
    return timer;
}

void uvtimer_stop(uv_timer_t *p)
{
    uv_timer_stop(p);
    free(p);
}

int run_uv_nowait()
{
    current_timer_event_ = 0;
    current_poll_event_ = 0;
    return uv_run(uv_default_loop(), UV_RUN_NOWAIT);
}

int run_once()
{
    fprintf(stderr, "run once\n");
    current_timer_event_ = 0;
    current_poll_event_ = 0;
    return uv_run(uv_default_loop(), UV_RUN_ONCE);
}

int run_nowait()
{
    fprintf(stderr, "run nowait\n");
    current_timer_event_ = 0;
    current_poll_event_ = 0;
    return uv_run(uv_default_loop(), UV_RUN_NOWAIT);
}
