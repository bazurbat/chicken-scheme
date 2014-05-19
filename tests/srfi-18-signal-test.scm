#+mingw32
(begin
  (print "this test can not be run on Windows/mingw unless we find a way to send signals")
  (exit))

(use srfi-18 posix utils)

(define done #f)

; set done = true on timer expiration
(set-signal-handler! signal/alrm (lambda (signal) (set! done #t)))

(define (work-loop count)
  (cond ((> count 100) (error "Loop limit exceeded"))
        ((not done)
         (display ".")
         (thread-sleep! 0.25)
         (work-loop (add1 count)))))

(define (new-thread)
  (set! done #f)
  (make-thread (lambda () (work-loop 0))))

;; Needs external signal (not from another thread) it seems,
;; so let the OS deliver it to us when we're ready:
(foreign-declare "#include <sys/time.h>")
((foreign-lambda* void ()
   "#ifndef __MINGW32__ \n"
   "struct itimerval timer;"
   "timer.it_value.tv_sec = 1;"
   "timer.it_value.tv_usec = 0;"
   "timer.it_interval.tv_sec = 0;"
   "timer.it_interval.tv_usec = 0;"
   "setitimer(ITIMER_REAL, &timer, NULL);\n"
   "#endif"))

(display "Testing correct handling of thread-join! with external signals:")
(flush-output)
(let ((t (new-thread)))
  (thread-start! t)
  (thread-join! t))

(print " thread terminated gracefully, this is good")

(display "thread-join with timeout: ")
(flush-output)
(let ((t (new-thread)))
  (condition-case (begin (thread-start! t)
                         (thread-join! t 1))
    ((join-timeout-exception)
     (print "timeout exception as expected")
     (thread-terminate! t))
    (exn ()
         (thread-terminate! t)
         (signal exn))))


(display "thread-join with return value:")
(flush-output)
(let ((t (new-thread)))
  (assert (condition-case (begin (thread-start! t)
                                 (thread-join! t 1 'bla))
           ((join-timeout-exception)
            (print " timeout exception as expected")
            (thread-terminate! t))
           (exn ()
                (thread-terminate! t)
                (signal exn)))
          'bla))

(print " done.")
