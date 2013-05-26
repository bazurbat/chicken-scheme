;; R7RS Tests

;; Copied from R4RS tests
(define cur-section '())(define errs '())
(define SECTION (lambda args
		  (display "SECTION") (write args) (newline)
		  (set! cur-section args) #t))
(define record-error (lambda (e) (set! errs (cons (list cur-section e) errs))))

(define test
  (lambda (expect fun . args)
    (write (cons fun args))
    (display "  ==> ")
    ((lambda (res)
      (write res)
      (newline)
      (cond ((not (equal? expect res))
	     (record-error (list res expect (cons fun args)))
	     (display " BUT EXPECTED ")
	     (write expect)
	     (newline)
	     #f)
	    (else #t)))
     (if (procedure? fun) (apply fun args) (car args)))))
(define (report-errs)
  (newline)
  (if (null? errs) (display "Passed all tests")
      (begin
	(display "errors were:")
	(newline)
	(display "(SECTION (got expected (call)))")
	(newline)
	(for-each (lambda (l) (write l) (newline))
		  errs)))
  (newline))

(SECTION 4 2 5)


;; make-promise test
(test #t promise? (make-promise 1))
(test #t promise? (make-promise (lambda _ 'foo)))
(test #t promise? (make-promise (make-promise 1)))

(test 1 force (make-promise 1))
(test 1 force (make-promise (lambda _ 1)))
(test 1 force (make-promise (make-promise 1)))



(SECTION 6 8)

;; Symbols are implicitly quoted inside self-evaluating vectors.
;; This is not as clear from draft 9 as it could be.
(test '#(0 (2 2 2 2) "Anna") #(0 (2 2 2 2) "Anna"))
(test #t vector? '#(0 (a b) c))
(test #t vector? #(0 (a b) c))
(test '#(0 (a b) c d #(1 2 (e) f) g) #(0 (a b) c d #(1 2 (e) f) g))

(report-errs)
