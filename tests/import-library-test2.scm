(require-library import-library-test1)

(module bar (xcase)
  (import scheme chicken extras import-library-test1)
  (assert (equal? '(123) (foo)))
  (assert (= 2 (xcase 1 ((1) 2)))))

(import bar)
(assert (= 2 (xcase 1 ((1) 2))))
