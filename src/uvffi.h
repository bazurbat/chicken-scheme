#ifndef CHICKEN_UVFFI_H
#define CHICKEN_UVFFI_H

typedef struct uv_poll_s uv_poll_t;
typedef struct uv_timer_s uv_timer_t;

uv_poll_t * current_poll_event();
uv_timer_t * current_timer_event();
uv_poll_t * uvpoll_start(int fd, int events);
void uvpoll_stop(uv_poll_t *p);
uv_timer_t * uvtimer_start(float tm);
void uvtimer_stop(uv_timer_t *p);
int run_uv_nowait();

#endif
