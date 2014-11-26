#include "uv-ffi.h"
#include <common.h>
#include <queue.h>
#include <uv.h>
#include <stdlib.h>

struct timer_t
{
    uv_timer_t handle;
    QUEUE queue;
};

static void close_cb(uv_handle_t *handle)
{
    free(handle);
}

static void timer_cb(uv_timer_t *handle)
{
    struct cuv_t *cuv = handle->data;
    struct timer_t *t = container_of(handle, struct timer_t, handle);

    uv_timer_stop(&t->handle);
    QUEUE_INSERT_TAIL(&cuv->pending_timers, &t->queue);
}

void cuv_init(struct cuv_t *cuv)
{
    cuv->loop = uv_default_loop();

    QUEUE_INIT(&cuv->pending_timers);
}

void cuv_destroy(struct cuv_t *cuv)
{
}

int cuv_run_once(struct cuv_t *cuv)
{
    return uv_run(cuv->loop, UV_RUN_ONCE);
}

int cuv_run_poll(struct cuv_t *cuv)
{
    return uv_run(cuv->loop, UV_RUN_NOWAIT);
}

uv_timer_t *cuv_timer_new(struct cuv_t *cuv, uint64_t timeout)
{
    struct timer_t *timer = malloc(sizeof(struct timer_t));
    if (!timer) return 0;

    uv_timer_t *handle = &timer->handle;
    uv_timer_init(cuv->loop, handle);
    uv_timer_start(handle, timer_cb, timeout, 0);
    handle->data = cuv;

    return handle;
}

uv_timer_t *cuv_timer_pop(struct cuv_t *cuv)
{
    if (QUEUE_EMPTY(&cuv->pending_timers))
        return 0;

    QUEUE *q = QUEUE_HEAD(&cuv->pending_timers);
    struct timer_t *t = QUEUE_DATA(q, struct timer_t, queue);

    QUEUE_REMOVE(q);

    return &t->handle;
}

void cuv_timer_delete(uv_timer_t *handle)
{
    uv_close((uv_handle_t *)handle, close_cb);
}
