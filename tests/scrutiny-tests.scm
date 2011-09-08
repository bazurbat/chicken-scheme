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

; same case, but nested
(define (test-values2 x y)
  (define (fail) (error "failed"))
  (if x
      (values 42 43)
      (if y (values 99 100) (fail))))

(define (foo)
  (define (bar) (if foo 1))		; should not warn (local)
  (for-each void '(1 2 3))		; should not warn (self-call)
  (if foo 2)				; not in tail position
  (if bar 3))				; should warn

;; noreturn conditional branch enforces "number" on x
(define (foo2 x)
  (if (string? x) (error "foo") (+ x 3))
  (string-append x "abc"))

;; implicit declaration of foo3
(declare (hide foo3))

(define (foo3 x)
  (string-append x "abc"))

(foo3 99)

;; predicate
(define (foo4 x)
  (if (string? x)
      (+ x 1)
      (+ x 2)))				; ok

;; enforcement
(define (foo5 x)
  (string-append x "abc")
  (+ x 3))

;; aliasing
(define (foo6 x)
  (let ((y x))
    (string-append x "abc")
    (+ x 3)))				;XXX (+ y 3) does not work yet

;; user-defined predicate
(: foo7 (* -> boolean : string))
(define (foo7 x) (string? x))

(when (foo7 x)
  (+ x 1))				; will warn about "x" being a string

;; trigger warnings for incompatible types in "the" forms
(define (foo10 x)
  (string-append (the pair (substring x 0 10))) ; 1
  (the * (values 1 2))				; 1 + 2
  (the * (values))				; 3
  (the fixnum (* x y)))				; nothing (but warns about "x" being string)
