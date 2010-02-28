;;; compiler-tests-2.scm - tests for lambda-lifting


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
