;;; compiler-tests-2.scm - tests for particular compiler optimizations


;;; rev. 12113 - lambda-lifting breakage, because lambda-bound variables
;                were incorrectly marked as global (analysis didn't walk
;                "lambda" nodes correctly, due t incorrect assumption 
;                that "lambda" doesn't occur. Major stupidity.
;                Test case by Joerg Wittenberger

(define (plus1 a)
 (define (plus b)
   (+ a b))
 (plus 1))

(assert (= 2 (plus1 1)))

(define (len lst)
 (define (len n)
   (if (pair? lst)
       (begin
         (set! lst (cdr lst))
         (len (+ n 1)))
       n))
 (len 0))

(assert (= 3 (len '(1 2 3))))


;;; compiler-syntax for map/for-each must be careful when the
;   operator may have side-effects (currently only lambda exprs and symbols
;   are allowed)

(let ((x #f))
  (define (f1 x) (print* x " "))
  (map f1 '(1 2 3))
  (newline)
  (map (begin (assert (not x)) 
	      (set! x #t)
	      f1)
       '(1 2 3))
  (map (lambda (x) (print* ":" x)) '(1 2 3))
  (newline))

(let ((x #f))
  (define (f1 x) (print* x " "))
  (let-syntax ((f1 (syntax-rules ()
		     ((_ y) 
		      (begin
			(assert (not x))
			(set! x #t)
			f1)))))
    (for-each f1 '(1 2 3))))
