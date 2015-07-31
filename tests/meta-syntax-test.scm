;;;; meta-syntax-test.scm


(module meta-syntax-test (bar listify)
  (import scheme chicken)
  (begin-for-syntax
   (define (baz x) 
     (list (cadr x))))
  (define-syntax bar
    (er-macro-transformer
     (lambda (x r c)
       `(,(r 'list) (baz (list 1 ,(cadr x)))))))
  (begin-for-syntax
   (define-syntax call-it-123
     (syntax-rules ()
       ((_ x)
        '(x 'x 1 2 3)))))
  (define-syntax listify
    (er-macro-transformer
     (lambda (e r c)
       (call-it-123 list)))))

(module meta-syntax-test-usage (foo-user)
  (import chicken scheme)
  (begin-for-syntax (import (prefix meta-syntax-test foo:)))
  (define-syntax testing
    (er-macro-transformer
     (lambda (x r c)
       `(,(r 'quote) ,@(foo:bar 1 2)))))
  (define (foo-user)
    (testing)))
