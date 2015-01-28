#include "scheduler-uv.h"
#include <common.h>
#include <queue.h>
#include <uv.h>
#include <stdio.h>
#include <stdlib.h>

struct timer_t
{
    uv_timer_t handle;
    QUEUE queue;
};

struct poll_t
{
    uv_poll_t handle;
    QUEUE queue;
};

static void close_cb(uv_handle_t *handle)
{
    free(handle);
}

static void timer_cb(uv_timer_t *handle)
{
    struct scheduler_t *s = handle->data;
    struct timer_t *t = container_of(handle, struct timer_t, handle);

    uv_timer_stop(&t->handle);
    QUEUE_INSERT_TAIL(&s->pending_timers, &t->queue);
}

static void poll_cb(uv_poll_t *handle, int status, int events)
{
    struct scheduler_t *s = handle->data;
    struct poll_t *p = container_of(handle, struct poll_t, handle);

    uv_poll_stop(&p->handle);
    QUEUE_INSERT_TAIL(&s->pending_polls, &p->queue);
}

void scheduler_init(struct scheduler_t *s)
{
    QUEUE_INIT(&s->pending_timers);
    QUEUE_INIT(&s->pending_polls);
}

void scheduler_destroy(struct scheduler_t *scheduler)
{
}

int scheduler_poll(struct scheduler_t *s)
{
    return uv_run(uv_default_loop(), UV_RUN_NOWAIT);
}

int scheduler_run_once(struct scheduler_t *s)
{
    return uv_run(uv_default_loop(), UV_RUN_ONCE);
}

uv_timer_t *scheduler_timer_new(struct scheduler_t *s, float timeout)
{
    struct timer_t *timer = malloc(sizeof(struct timer_t));
    if (!timer) return 0;

    uv_timer_t *handle = &timer->handle;
    uv_timer_init(uv_default_loop(), handle);
    uv_timer_start(handle, timer_cb, (int)timeout, 0);
    handle->data = s;

    return handle;
}

uv_timer_t *scheduler_timer_next(struct scheduler_t *s)
{
    if (QUEUE_EMPTY(&s->pending_timers))
        return 0;

    QUEUE *q = QUEUE_HEAD(&s->pending_timers);
    struct timer_t *t = QUEUE_DATA(q, struct timer_t, queue);

    QUEUE_REMOVE(q);

    return &t->handle;
}

void scheduler_timer_delete(uv_timer_t *handle)
{
    uv_close((uv_handle_t *)handle, close_cb);
}

uv_poll_t *scheduler_poll_new(struct scheduler_t *s, int fd, int events)
{
    struct poll_t *poll = malloc(sizeof(struct poll_t));
    if (!poll) return 0;

    uv_poll_t *handle = &poll->handle;
    uv_poll_init(uv_default_loop(), handle, fd);
    uv_poll_start(handle, events, poll_cb);
    handle->data = s;

    return handle;
}

uv_poll_t *scheduler_poll_next(struct scheduler_t *s)
{
    if (QUEUE_EMPTY(&s->pending_polls))
        return 0;

    QUEUE *q = QUEUE_HEAD(&s->pending_polls);
    struct poll_t *p = QUEUE_DATA(q, struct poll_t, queue);

    QUEUE_REMOVE(q);

    return &p->handle;
}

void scheduler_poll_delete(uv_poll_t *handle)
{
    uv_close((uv_handle_t *)handle, close_cb);
}
