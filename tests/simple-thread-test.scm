;;;; simple-thread-test.scm


(use srfi-18 extras)


(define (spin)
  (do ((i 0 (add1 i)))
      ((>= i 10))
    (print (current-thread) " sleeps ...")
    (thread-sleep! (random 3)))
  (print (current-thread) " finished."))

(thread-start! spin)
(thread-start! spin)
(spin)
(print (current-thread) " waits ...")
(thread-sleep! 3)
(print "end.")
