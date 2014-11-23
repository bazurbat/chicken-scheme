#ifndef CHICKEN_UVFFI_H
#define CHICKEN_UVFFI_H

#include <uv.h>

struct uv_poll_s * current_poll_event();
struct uv_timer_s * current_timer_event();
struct uv_poll_s * uvpoll_start(int fd, int events);
void uvpoll_stop(struct uv_poll_s *p);
struct uv_timer_s * uvtimer_start(float tm);
void uvtimer_stop(struct uv_timer_s *p);
int run_uv_nowait();

int run_once();
int run_nowait();

#endif
