;;;; scrutiny-tests-3.scm - scrutinizer-tests, compiled in block mode and executed


;;; ensure implicit global type-declarations are "smashed" (i.e. have
;;; their component types invalidated, due to possible mutation)

(define vec (make-vector 10 #f))
(vector-set! vec 0 99)
(assert
 (compiler-typecase vec
   ((vector-of boolean) #f)
   (vector #t)))
