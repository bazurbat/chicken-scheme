(module
 reexport-m3
 ((foo bar))
 (import chicken scheme)
 (define (bar) 1)
 (define-syntax foo
   (ir-macro-transformer
    (lambda (e i c)
      `(bar)))))
