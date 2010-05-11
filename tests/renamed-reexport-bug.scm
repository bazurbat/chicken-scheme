;;;; this-works.scm


;; when using import-libraries, then this fails:
;; 
;; (import foo2)
;; (fbar)           ; <- expansion refers to `bar'


(module foo (bar baz)
(import scheme)

(define-syntax bar
  (syntax-rules () ((_) (baz))))

(define-syntax baz
  (syntax-rules () ((_) (display "baz.\n")))))

(module foo2 ()
(import scheme)
(reexport (rename foo (bar fbar) (baz fbaz))))

