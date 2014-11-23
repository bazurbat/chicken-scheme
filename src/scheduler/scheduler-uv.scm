; scheduler-uv.scm - libuv based scheduler for multithreading

(declare
  (unit scheduler)
  (disable-interrupts)
  (hide ready-queue-head ready-queue-tail ##sys#timeout-list
        ##sys#update-thread-state-buffer ##sys#restore-thread-state-buffer
        remove-from-ready-queue ##sys#force-primordial
        fdset-set fdset-test create-fdset stderr
        ##sys#clear-i/o-state-for-thread! ##sys#abandon-mutexes)
  (not inline ##sys#interrupt-hook)
  (unsafe))

(foreign-declare "#include \"scheduler.h\"")

(register-feature! 'libuv-scheduler)

(include "../common-declarations.scm")

(define-foreign-type uv_timer_t* (c-pointer "uv_timer_t"))
(define-foreign-type uv_poll_t* (c-pointer "uv_poll_t"))
(define current-timer-event (foreign-lambda uv_timer_t* "current_timer_event"))
(define current-poll-event (foreign-lambda uv_poll_t* "current_poll_event"))
(define uvtimer-start (foreign-lambda c-pointer "uvtimer_start" float))
(define uvtimer-stop (foreign-lambda void "uvtimer_stop" uv_timer_t*))
(define (uvpoll-start fd i/o)
  ((foreign-lambda c-pointer "uvpoll_start" int int)
   fd (case i/o
        ((#t #:input) 1)
        ((#f #:output) 2)
        ((#:all) 3))))
(define uvpoll-stop (foreign-lambda void "uvpoll_stop" uv_poll_t*))
(define run-uv-nowait (foreign-lambda int "run_uv_nowait"))

(define run-once (foreign-lambda int "run_once"))
(define run-nowait (foreign-lambda int "run_nowait"))

(begin
  (define stderr ##sys#standard-error) ; use default stderr port
  (define (dbg . args)
    (parameterize ((##sys#print-length-limit #f))
                  (display (current-milliseconds) stderr)
                  (display ": " stderr)
                  (for-each (lambda (x) (display x stderr)) args)
                  (newline stderr))))

#;(define-syntax dbg
  (syntax-rules ()
    ((_ . _) #f)))

(define-syntax panic
  (syntax-rules ()
    ((_ msg) (##core#inline "C_halt" msg))))

(define (##sys#schedule)
  (define (switch thread)
    (dbg "switching to " thread)
    (set! ##sys#current-thread thread)
    (##sys#setslot thread 3 'running)
    (##sys#restore-thread-state-buffer thread)
    ;;XXX WRONG! this sets the t/i-period ("quantum") for the _next_ thread
    (##core#inline "C_set_initial_timer_interrupt_period" (##sys#slot thread 9))
    ((##sys#slot thread 1)) )
  (let* ([ct ##sys#current-thread]
         [eintr #f]
         [cts (##sys#slot ct 3)] )
    (dbg "==================== scheduling, current: " ct ", ready: " ready-queue-head)
    (##sys#update-thread-state-buffer ct)
    ;; Put current thread on ready-queue:
    (when (or (eq? cts 'running) (eq? cts 'ready)) ; should ct really be 'ready? - normally not.
      (##sys#setislot ct 13 #f)                    ; clear timeout-unblock flag
      (##sys#add-to-ready-queue ct) )
    (let loop ((r (run-nowait)))

      ;; Unblock threads waiting for timeout:
      (when (current-timer-event)
        (dbg "timer event: " (current-timer-event) "; "
             "timeout-list: " ##sys#timeout-list)
        (let loop ((tl ##sys#timeout-list))
          (if (null? tl)
            (set! ##sys#timeout-list '())
            (let ((timer (caar tl)) (thread (cdar tl)))
              (if (equal? timer (current-timer-event))
                (begin
                  (##sys#setislot thread 13 #t) ; mark as being unblocked by timer
                  (##sys#clear-i/o-state-for-thread! thread)
                  (##sys#thread-basic-unblock! thread)
                  (##sys#remove-from-timeout-list thread))
                (loop (cdr tl)))))))

      ;; Unblock threads blocked by I/O:
      (when (current-poll-event)
        (dbg "current-poll-event: " (current-poll-event) "; "
             "fd-list: " ##sys#fd-list)
        (if eintr
          (##sys#force-primordial) ; force it to handle user-interrupt
          (unless (null? ##sys#fd-list)
            (##sys#unblock-threads-for-i/o))))

      ;; Fetch and activate next ready thread:
      (let fetch-loop ((next-thread (remove-from-ready-queue)))
        (if next-thread
          (if (eq? (##sys#slot next-thread 3) 'ready)
            (switch next-thread)
            (fetch-loop (remove-from-ready-queue)))
          (if (and (null? ##sys#timeout-list) (null? ##sys#fd-list))
            (panic "deadlock")
            (loop (run-once))))))))

(define (##sys#force-primordial)
  (dbg "primordial thread forced due to interrupt")
  (##sys#setislot ##sys#primordial-thread 13 #f)
  (##sys#thread-unblock! ##sys#primordial-thread) )

(define ready-queue-head '())
(define ready-queue-tail '())

(define (##sys#ready-queue) ready-queue-head)

(define (##sys#add-to-ready-queue thread)
  (dbg "add-to-ready-queue: " thread)
  (##sys#setslot thread 3 'ready)
  (let ((new-pair (cons thread '())))
    (cond ((eq? '() ready-queue-head)
           (set! ready-queue-head new-pair))
          (else (set-cdr! ready-queue-tail new-pair)) )
    (set! ready-queue-tail new-pair) ) )

(define (remove-from-ready-queue)
  (let ((first-pair ready-queue-head))
    (and (not (null? first-pair))
         (let ((first-cdr (cdr first-pair)))
           (set! ready-queue-head first-cdr)
           (when (eq? '() first-cdr) (set! ready-queue-tail '()))
           (car first-pair) ) ) ) )

(define (##sys#update-thread-state-buffer thread)
  (let ([buf (##sys#slot thread 5)])
    (##sys#setslot buf 0 ##sys#dynamic-winds)
    (##sys#setslot buf 1 ##sys#standard-input)
    (##sys#setslot buf 2 ##sys#standard-output)
    (##sys#setslot buf 3 ##sys#standard-error)
    (##sys#setslot buf 4 ##sys#current-exception-handler)
    (##sys#setslot buf 5 ##sys#current-parameter-vector) ) )

(define (##sys#restore-thread-state-buffer thread)
  (let ([buf (##sys#slot thread 5)])
    (set! ##sys#dynamic-winds (##sys#slot buf 0))
    (set! ##sys#standard-input (##sys#slot buf 1))
    (set! ##sys#standard-output (##sys#slot buf 2))
    (set! ##sys#standard-error (##sys#slot buf 3))
    (set! ##sys#current-exception-handler (##sys#slot buf 4))
    (set! ##sys#current-parameter-vector (##sys#slot buf 5)) ) )

(set! ##sys#interrupt-hook
  (let ([oldhook ##sys#interrupt-hook])
    (lambda (reason state)
      (when (fx= reason 255)            ; C_TIMER_INTERRUPT_NUMBER
        (let ([ct ##sys#current-thread])
          (##sys#setslot ct 1 (lambda () (oldhook reason state)))
          (##sys#schedule) ) )          ; expected not to return!
      (oldhook reason state) ) ) )

(define ##sys#timeout-list '())

(define (##sys#remove-from-timeout-list t)
  (let loop ((l ##sys#timeout-list) (prev #f))
    (if (null? l)
      l
      (let ((h (##sys#slot l 0))
            (r (##sys#slot l 1)))
        (if (eq? (##sys#slot h 1) t)
          (begin (uvtimer-stop (##sys#slot h 0))
                 (if prev
                   (set-cdr! prev r)
                   (set! ##sys#timeout-list r)))
          (loop r l))))))

(define (##sys#thread-block-for-timeout! t tm)
  (dbg t " blocks for timeout " tm)
  (unless (flonum? tm)    ; to catch old code that uses fixnum timeouts
    (panic
      (sprintf "##sys#thread-block-for-timeout!: invalid timeout: ~S" tm)))
  (when (fp> tm 0.0)
    (set! ##sys#timeout-list (cons (cons (uvtimer-start tm) t) ##sys#timeout-list))
    (##sys#setslot t 3 'blocked)
    (##sys#setislot t 13 #f)
    (##sys#setslot t 4 tm) ) )

(define (##sys#thread-block-for-termination! t t2)
  (dbg t " blocks for " t2)
  (let ([state (##sys#slot t2 3)])
    (unless (or (eq? state 'dead) (eq? state 'terminated))
      (##sys#setslot t2 12 (cons t (##sys#slot t2 12)))
      (##sys#setslot t 3 'blocked)
      (##sys#setislot t 13 #f)
      (##sys#setslot t 11 t2) ) ) )

(define (##sys#abandon-mutexes thread)
  (let ((ms (##sys#slot thread 8)))
    (unless (null? ms)
      (##sys#for-each
       (lambda (m)
         (##sys#setislot m 2 #f)
         (##sys#setislot m 4 #t)
         (##sys#setislot m 5 #f)
         (let ((wts (##sys#slot m 3)))
           (unless (null? wts)
             (for-each
               (lambda (t2)
                 (dbg "  unblocking: " t2)
                 (##sys#thread-unblock! t2) )
               wts) ) )
         (##sys#setislot m 3 '()) )
       ms) ) ) )

(define (##sys#thread-kill! t s)
  (dbg "killing: " t " -> " s ", recipients: " (##sys#slot t 12))
  (##sys#abandon-mutexes t)
  (let ((blocked (##sys#slot t 11)))
    (cond
      ((##sys#structure? blocked 'condition-variable)
       (##sys#setslot blocked 2 (##sys#delq t (##sys#slot blocked 2))))
      ((##sys#structure? blocked 'thread)
       (##sys#setslot blocked 12 (##sys#delq t (##sys#slot blocked 12))))) )
  (##sys#remove-from-timeout-list t)
  (##sys#clear-i/o-state-for-thread! t)
  (##sys#setslot t 3 s)
  (##sys#setislot t 4 #f)
  (##sys#setislot t 11 #f)
  (##sys#setislot t 8 '())
  (let ((rs (##sys#slot t 12)))
    (unless (null? rs)
      (for-each
        (lambda (t2)
          (dbg "  checking: " t2 " (" (##sys#slot t2 3) ") -> " (##sys#slot t2 11))
          (when (eq? (##sys#slot t2 11) t)
            (##sys#thread-basic-unblock! t2) ) )
        rs) ) )
  (##sys#setislot t 12 '()) )

(define (##sys#thread-basic-unblock! t)
  (dbg "unblocking: " t)
  (##sys#setislot t 11 #f)              ; (FD . RWFLAGS) | #<MUTEX> | #<THREAD>
  (##sys#setislot t 4 #f)
  (##sys#add-to-ready-queue t) )

(define (##sys#default-exception-handler arg)
  (let ([ct ##sys#current-thread])
    (dbg "exception: " ct " -> "
         (if (##sys#structure? arg 'condition) (##sys#slot arg 2) arg))
    (cond ((foreign-value "C_abort_on_thread_exceptions" bool)
           (let* ([pt ##sys#primordial-thread]
                  [ptx (##sys#slot pt 1)] )
             (##sys#setslot
              pt 1
              (lambda ()
                (##sys#signal arg)
                (ptx) ) )
             (##sys#thread-unblock! pt) ) )
          (else
            (##sys#show-exception-warning arg "in thread" ct)))
    (##sys#setslot ct 7 arg)
    (##sys#thread-kill! ct 'terminated)
    (##sys#schedule) ) )


;;; `select()/poll()'-based blocking:

(define ##sys#fd-list '())              ; ((FD1 THREAD1 ...) ...)

(define (##sys#thread-block-for-i/o! t fd i/o)
  (dbg t " blocks for I/O " fd " in mode " i/o)
  #;(unless (memq i/o '(#:all #:input #:output))
    (panic (sprintf "##sys#thread-block-for-i/o!: invalid i/o mode: ~S" i/o)))
  (let loop ([lst ##sys#fd-list])
    (if (null? lst) 
      (set! ##sys#fd-list (cons (list fd t (uvpoll-start fd i/o)) ##sys#fd-list)) 
      (let ([a (car lst)])
        (if (fx= fd (car a)) 
          (##sys#setslot a 1 (cons t (cdr a)))
          (loop (cdr lst)) ) ) ) )
  (##sys#setslot t 3 'blocked)
  (##sys#setislot t 13 #f)
  (##sys#setslot t 11 (cons fd i/o)) )

;;; Clear I/O state for unblocked thread

(define (##sys#clear-i/o-state-for-thread! t)
  (when (pair? (##sys#slot t 11))
    (let ((fd (car (##sys#slot t 11))))
      (set! ##sys#fd-list
        (let loop ((lst ##sys#fd-list))
          (if (null? lst)
            '()
            (let* ((a (car lst))
                   (fd2 (car a)) )
              (if (eq? fd fd2)
                (let ((ts (##sys#delq t (cdr a)))) ; remove from fd-list entry
                  (cond ((null? ts) (cdr lst))
                        (else
                          (##sys#setslot a 1 ts) ; fd-list entry is list with t removed
                          lst) ) )
                (cons a (loop (cdr lst)))))))))))


;;; Get list of all threads that are ready or waiting for timeout or waiting for I/O:
;
; (contributed by Joerg Wittenberger)

(define (##sys#all-threads #!optional
         (cns (lambda (queue arg val init)
                (cons val init)))
         (init '()))
  (let loop ((l ready-queue-head) (i init))
    (if (pair? l)
      (loop (cdr l) (cns 'ready #f (car l) i))
      (let loop ((l ##sys#fd-list) (i i))
        (if (pair? l)
          (loop (cdr l)
                (let ((fd (caar l)))
                  (let loop ((l (cdar l)))
                    (if (null? l) i
                      (cns 'i/o fd (car l) (loop (cdr l)))))))
          (let loop ((l ##sys#timeout-list) (i i))
            (if (pair? l)
              (loop (cdr l) (cns 'timeout (caar l) (cdar l) i))
              i)))))))


;;; Remove all waiting threads from the relevant queues with the exception of the current thread:

(define (##sys#fetch-and-clear-threads)
  (let ([all (vector ready-queue-head ready-queue-tail ##sys#fd-list ##sys#timeout-list)])
    (set! ready-queue-head '())
    (set! ready-queue-tail '())
    (set! ##sys#fd-list '())
    (set! ##sys#timeout-list '())
    all) )


;;; Restore list of waiting threads:

(define (##sys#restore-threads vec)
  (set! ready-queue-head (##sys#slot vec 0))
  (set! ready-queue-tail (##sys#slot vec 1))
  (set! ##sys#fd-list (##sys#slot vec 2))
  (set! ##sys#timeout-list (##sys#slot vec 3)) )


;;; Unblock thread cleanly:

(define (##sys#thread-unblock! t)
  (when (or (eq? 'blocked (##sys#slot t 3))
            (eq? 'sleeping (##sys#slot t 3)))
    (##sys#remove-from-timeout-list t)
    (##sys#clear-i/o-state-for-thread! t)
    (##sys#thread-basic-unblock! t) ) )


;;; Kill all threads in fd-, io- and timeout-lists and assign one thread as the
;   new primordial one. Overrides "##sys#kill-all-threads" in library.scm.

(set! ##sys#kill-other-threads
  (let ((exit exit))
    (lambda (thunk)
      (let ((primordial ##sys#current-thread))
        (define (suspend t)
          (unless (eq? t primordial)
            (##sys#setslot t 3 'suspended))
          (##sys#setslot t 11 #f)      ; block-object (thread/mutex/fd & flags)
          (##sys#setslot t 12 '()))    ; recipients (waiting for join)
        (set! ##sys#primordial-thread primordial)
        (set! ready-queue-head (list primordial))
        (set! ready-queue-tail ready-queue-head)
        (suspend primordial)         ; clear block-obj. and recipients
        (for-each
          (lambda (a) (suspend (cdr a)))
          ##sys#timeout-list)
        (set! ##sys#timeout-list '())
        (for-each
          (lambda (a) (suspend (cdr a)))
          ##sys#fd-list)
        (thunk)
        (exit)))))
