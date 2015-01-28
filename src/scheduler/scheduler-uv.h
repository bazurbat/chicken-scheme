#ifndef SCHEDULER_UV_H
#define SCHEDULER_UV_H

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

#endif /* SCHEDULER_UV_H */
