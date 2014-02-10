(module import-library-test1-m (foo xcase)
  (import (rename scheme (case xcase)))
  (define-syntax foo 
    (syntax-rules ()
      ((_) (bar))))
  (define-syntax bar
    (syntax-rules ()
      ((_) (list 123)))))

