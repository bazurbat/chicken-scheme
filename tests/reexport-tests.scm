;;;; reexport-tests.scm


(module r4rs ()
  (import scheme chicken)
  (reexport 
    (except scheme 
      dynamic-wind values call-with-values eval scheme-report-environment
      null-environment interaction-environment)))

(module m1 ()
  (import r4rs)
  (display (+ 3 4))
  (newline))

(assert 
 (not
  (handle-exceptions ex #f
    (eval '(module m2 ()
	     (import r4rs)
	     (values 123))))))

(define-syntax compound-module
  (syntax-rules ()
    ((_ name imp ...)
     (module name ()
       (import scheme)
       (reexport imp ...)))))

(compound-module 
 big-chicken
 chicken ports files extras data-structures)

(require-library extras data-structures)

(module m3 ()
  (import scheme big-chicken)
  (pp (string-intersperse '("abc" "def" "ghi") "-")))
