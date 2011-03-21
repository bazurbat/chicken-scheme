;;;; simple-functors-test.scm


(define-interface stuff (a b))

(module foo ((interface: stuff))
(import scheme)
(define a 1)
(define b 2))

(module f = foo)

(functor 
 (do-things (arg ((interface: stuff)))) (do-it)
 (import scheme arg)
 (define (do-it) (list a b)))

(module bar = (do-things f))

(import bar)
(assert (equal? '(1 2) (doit)))

