;;; export syntax with implicit value export (reexport-test-2.scm)
(module
 reexport-m3
 ((foo bar))
 (import chicken scheme)
 (define (bar) 1)
 (define-syntax foo
   (ir-macro-transformer
    (lambda (e i c)
      `(bar)))))
