;;;; module importing from module that reexports core binding

(module foo ()
  (import scheme chicken)
  (use reexport-m1)
  (print (cons* 1 2 3)))
