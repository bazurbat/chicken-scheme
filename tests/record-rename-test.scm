;;;; record-rename-test.scm


(define-record foo a)

(define-record-type bar
  (make-bar x)
  bar?
  (x get-x))


(module m1 (make-foo make-bar)
(import scheme chicken)

(define-record foo a b)

(define-record-type bar
  (make-bar x y)
  bar?
  (x get-x) (y get-y))

)


(let ((f1 (make-foo 1))
      (f2 (make-bar 2)))
  (print (list f1 f2)))

(import m1)

(let ((f1 (make-foo 1 2))
      (f2 (make-bar 3 4)))
  (print (list f1 f2)))
