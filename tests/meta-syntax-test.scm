;;;; meta-syntax-test.scm


(module foo (bar)
  (import scheme chicken)
  (begin-for-syntax
   (define (baz x) 
     (list (cadr x))))
  (define-syntax (bar x r c)
    `(,(r 'list) (baz (list 1 ,(cadr x))))))
