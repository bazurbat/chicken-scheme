(module
 reexport-m4
 (baz)
 (import chicken scheme)
 (use reexport-m3)
 (reexport reexport-m3)
 (define-syntax baz
   (ir-macro-transformer
    (lambda (e i c)
      `(foo)))))
