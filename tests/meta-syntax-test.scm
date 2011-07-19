;;;; meta-syntax-test.scm


(module foo (bar listify)
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

