;;;; scrutiny-tests.scm


(pp (current-environment))		; deprecated

(define (a)
  (define (b)
    (define (c)
      (let ((x (+ 3 4)))
	(if x 1 2)))))			; expected boolean but got number in conditional

(define (foo x)
  (if x 				; branches return differing number of results
      (values 1 2)
      (values 1 2 (+ (+ (+ (+  3)))))))

(let ((bar +))
  (bar 3 'a))				; expected number, got symbol

(pp)					; expected 1 argument, got 0

(print (cpu-time))			; expected 1 result, got 2
(print (values))			; expected 1 result, got 0

(let ((x 100))
  (x))					; expected procedure, got fixnum

(print (+ 'a 'b))			; expected 2 numbers, but got symbols

(set! car 33)				; 33 does not match type of car

((values 1 2))				; expected procedure, got fixnum (canonicalizes to 1 result)

; this should *not* signal a warning:

(define (test-values x)
  (define (fail) (error "failed"))
  (if x
      (values 42 43)
      (fail)))

(define (foo)
  (define (bar) (if foo 1))		; should not warn (local)
  (for-each void '(1 2 3))		; should not warn (self-call)
  (if foo 2)				; not in tail position
  (if bar 3))				; should warn

