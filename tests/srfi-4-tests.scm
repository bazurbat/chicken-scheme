;;;; srfi-4-tests.scm


(use srfi-1 srfi-4)


(define-syntax test1
  (er-macro-transformer
   (lambda (x r c)
     (let* ((t (strip-syntax (cadr x)))
	    (name (symbol->string (strip-syntax t))))
       (define (conc op)
	 (string->symbol (string-append name op)))
       `(let ((x (,(conc "vector") 100 101)))
	  (print x)
	  (assert (= 100 (,(conc "vector-ref") x 0)))
          (assert (,(conc "vector?") x))
          (assert (number-vector? x))
	  (,(conc "vector-set!") x 1 99)
	  (assert (= 99 (,(conc "vector-ref") x 1)))
	  (assert (= 2 (,(conc "vector-length") x)))
	  (assert
	   (every =
		  '(100 99)
		  (,(conc "vector->list") x))))))))

(test1 u8)
(test1 u16)
(test1 u32)
(test1 s8)
(test1 s16)
(test1 s32)
(test1 f32)
(test1 f64)

;; Test implicit quoting/self evaluation
(assert (equal? #u8(1 2 3) '#u8(1 2 3)))
(assert (equal? #s8(-1 2 3) '#s8(-1 2 3)))
(assert (equal? #u16(1 2 3) '#u16(1 2 3)))
(assert (equal? #s16(-1 2 3) '#s16(-1 2 3)))
(assert (equal? #u32(1 2 3) '#u32(1 2 3)))
(assert (equal? #s32(-1 2 3) '#s32(-1 2 3)))
(assert (equal? #f32(1 2 3) '#f32(1 2 3)))
(assert (equal? #f64(-1 2 3) '#f64(-1 2 3)))
