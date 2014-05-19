;;;; signal-tests.scm


#+mingw32
(begin
  (print "this test can not be run on Windows/mingw")
  (exit))


(use posix srfi-18 extras)

(define all-go? (make-parameter #f))

;; This is set before starting the child to avoid the race condition
;; from #877.  The child itself overwrites these signal handlers
;; before sending the "all go" signal (usr1) to the parent.
(set-signal-handler! signal/usr1 (lambda (sig) (all-go? #t)))

(define received1 0)
(define received2 0)

(define (tick c)
  (write-char c)
  (flush-output))

(define (handler sig)
  (select sig
    ((signal/usr1)
     (tick #\1)
     (set! received1 (add1 received1)))
    ((signal/usr2)
     (tick #\2)
     (set! received2 (add1 received2)))))

(define (fini _)
  (printf "~%child terminating, received: ~a USR1, ~a USR2~%"
    received1 received2)
  (thread-sleep! 0.5)
  (process-signal (parent-process-id) signal/usr1)
  (exit))

(define (child)
  (print "child started")
  (thread-start!
   (lambda ()
     (do () (#f)
       (thread-sleep! 0.5)
       (tick #\_))))
  (set-signal-handler! signal/usr1 handler)
  (set-signal-handler! signal/usr2 handler)
  (set-signal-handler! signal/term fini)
  (process-signal (parent-process-id) signal/usr1)
  (do () (#f)
    (thread-sleep! 1)
    (tick #\.)))

(let ((pid (process-fork child))
      (sent1 0)
      (sent2 0))
  (print "Sleeping until child wakes us up") ; signal *should* interrupt the sleep
  (print "would have slept for " (sleep 5) " more seconds")
  (cond ((all-go?)
	 (print "sending signals to " pid)
	 (do ((i 1000 (sub1 i)))
	     ((zero? i))
	   (thread-sleep! (/ (random 10) 1000))
	   (do ((j (random 4) (sub1 j)))
	       ((zero? j))
	     (case (random 2)
	       ((0)
		(tick #\A)
		(set! sent1 (add1 sent1))
		(process-signal pid signal/usr1))
	       ((1)
		(tick #\B)
		(set! sent2 (add1 sent2))
		(process-signal pid signal/usr2)))))
	 (printf "~%signals sent: ~a USR1, ~a USR2~%" sent1 sent2)
	 (print "terminating child process ...")
	 (all-go? #f)
	 (print "Sending signal and waiting for acknowledgement from child")
	 (process-signal pid signal/term)
	 (unless (all-go?) ; There's a bit of a race condition here, but that's okay
	   (print "Would've slept for " (sleep 5) " more seconds"))
	 (cond ((all-go?)
		(print "Everything is ok!")
		(exit 0))
	       (else
		(print "ERROR! Did not receive acknowledgement of child shutdown within 5 seconds, or another process awoke us")
		(print "Attempting to kill child forcefully via SIGKILL")
		(process-signal pid signal/kill)
		(exit 1))))
	(else (print "ERROR! Did not receive a signal from child within 10 seconds, or another process awoke us")
	      (print "terminating child process ...")
	      (exit 1))))
