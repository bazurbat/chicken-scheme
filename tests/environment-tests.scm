;;;; environment-tests.scm


(load-relative "test.scm")


(test-begin "evaluation environment tests")

(test-equal (eval 123) 123)
(test-equal (eval 123 (interaction-environment)) 123)
(test-equal (eval 'car (interaction-environment)) car)
(test-error (eval 'foo (interaction-environment)))
(test-equal (eval '(begin (set! foo 99) foo) (interaction-environment)) 99)

(test-equal (eval 123) 123)
(test-equal (eval 123 (scheme-report-environment 5)) 123)
(test-equal (eval 'car (scheme-report-environment 5)) car)
(test-error (eval 'foo (scheme-report-environment 5)))
(test-error (eval 'values (scheme-report-environment 4)))
(test-equal (eval 'values (scheme-report-environment 5)) values)
(test-error (eval '(set! foo 99) (scheme-report-environment 5)))

(test-error (eval '(define-syntax foo (syntax-rules () ((_) 1)))
		  (scheme-report-environment 5)))

(test-error (eval 'car (null-environment 5)))
(test-equal (eval '((lambda (x) x) 123) (null-environment 5)) 123)

(test-end)
