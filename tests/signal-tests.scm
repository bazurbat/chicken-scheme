;;;; signal-tests.scm


#+mingw32
(begin
  (print "this test can not be run on Windows/mingw")
  (exit))


(use posix srfi-18 extras)


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
  (do () (#f) 
    (thread-sleep! 1)
    (tick #\.)))

(let ((pid (process-fork child))
      (sent1 0)
      (sent2 0))
  (sleep 1)
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
  (process-signal pid))
