#ifndef UV_FFI_H
#define UV_FFI_H

#include <stdint.h>

struct cuv_t
{
    struct uv_loop_s *loop;
    void *pending_timers[2];
};

void cuv_init(struct cuv_t *cuv);
void cuv_destroy(struct cuv_t *cuv);

int cuv_run_once(struct cuv_t *cuv);
int cuv_run_poll(struct cuv_t *cuv);

struct uv_timer_s *cuv_timer_new(struct cuv_t *cuv, uint64_t timeout);
struct uv_timer_s *cuv_timer_pop(struct cuv_t *cuv);
void cuv_timer_delete(struct uv_timer_s *handle);

#endif /* UV_FFI_H */
