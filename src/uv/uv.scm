(module uv *
(import scheme chicken foreign)

(foreign-declare "#include \"uv-ffi.h\"")

(define-foreign-type uv (c-pointer (struct "cuv_t")))
(define-foreign-type uv-timer (c-pointer (struct "uv_timer_s")))

(define uv-init
  (foreign-lambda void "cuv_init" uv))
(define uv-destroy
  (foreign-lambda void "cuv_destroy" uv))

(define uv-run-once
  (foreign-lambda int "cuv_run_once" uv))
(define uv-run-poll
  (foreign-lambda int "cuv_run_poll" uv))

(define uv-timer-new
  (foreign-lambda uv-timer "cuv_timer_new" uv int))
(define uv-timer-pop
  (foreign-lambda uv-timer "cuv_timer_pop" uv))
(define uv-timer-delete
  (foreign-lambda void "cuv_timer_delete" uv-timer))

)
