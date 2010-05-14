;;;; sgrep.scm - grepping benchmark


(use regex extras utils posix srfi-1)


(define big-string
  (read-all (optional (command-line-arguments) "compiler.scm")))

#|
;; hack for missing safe variants of fxmod

(define-compiler-syntax fxmod
  (syntax-rules ()
    ((_ x y) (##core#inline "C_fixnum_modulo" x y))))
|#

(define-syntax bgrep
  (syntax-rules ()
    ((_ n expr)
     (time
      (do ((i n (fx- i 1)))
	  ((eq? i 0))
	(with-input-from-string big-string
	  (lambda ()
	    (let ((h 0)
		  (c 0))
	      (scan-input-lines
	       (lambda (line)
		 (set! c (fx+ c 1))
		 ;(when (zero? (fxmod c 500)) (print* "."))
		 (when (string-search expr line)
		   (set! h (fx+ h 1)))
		 #f))
	      ;(newline)
	      h))))))))

(define-syntax rx1
  (syntax-rules ()
    ((_) "\\((.*), (.*)\\)")))

(define-syntax rx2
  (syntax-rules ()
    ((_) '(: #\( (submatch (* any)) ", " (submatch (* any))))))

#|
(define the-cache)

(define-syntax (build-cache x r c)
  ;; (build-cache N ARG FAIL) 
  (let* ((n (cadr x))
	 (n2 (* n 2))
	 (arg (caddr x))
	 (fail (cadddr x))
	 (%cache (r 'cache))
	 (%index (r 'index))
	 (%arg (r 'arg))
	 (%let (r 'let))
	 (%let* (r 'let*))
	 (%if (r 'if))
	 (%fx+ (r 'fx+))
	 (%fxmod (r 'fxmod))
	 (%equal? (r 'equal?))
	 (%quote (r 'quote))
	 (%tmp (r 'tmp))
	 (%begin (r 'begin))
	 (cache (make-vector (add1 n2) #f)))
    (vector-set! cache n2 0)
    `(,%let* ((,%cache (,%quote ,cache))
	      (,%arg ,arg))
	     (set! the-cache ,%cache)	;XXX
	     ,(let fold ((i 0))
		(if (>= i n)
		    `(,%let ((,%tmp ,fail)
			     (,%index (##sys#slot ,%cache ,n2)))
			    (##sys#setslot ,%cache ,%index ,%arg)
			    (##sys#setslot ,%cache (,%fx+ ,%index 1) ,%tmp)
			    (##sys#setislot ,%cache ,n2 (,%fxmod (,%fx+ ,%index 2) ,n2))
			    ,%tmp)
		    `(,%if (,%equal? (##sys#slot ,%cache ,(* i 2)) ,%arg)
			   (##sys#slot ,%cache ,(add1 (* i 2)))
			   ,(fold (add1 i))))))))

(define (regexp2 rx)
  (build-cache 
   5 rx
   (regexp rx)))

|#

;; slow
;(print "literal")
(bgrep 1 (rx1))

#|
(print "literal (SRE)")
(bgrep 1 (rx2))

(print "precompiled")
(define rx (regexp (rx1)))
(bgrep 1 rx)
|#

#|
(print "test cache fill")
(do ((lst (list-tabulate 10 number->string) (cdr lst)))
    ((null? lst))
  (assert (string-match (regexp2 (car lst)) (car lst))))
(print the-cache)

(print "cached/literal")
(bgrep 1 (regexp2 (rx1)))

(print the-cache)

(print "cached/literal (SRE)")
(bgrep 1 (regexp2 (rx2)))

(print the-cache)

(define-compiler-syntax (string-search x r c)
  (let ((%quote (r 'quote))
	(%let (r 'let))
	(%string-search (r 'string-search))
	(%regexp (r 'regexp))
	(%or (r 'or))
	(%let* (r 'let*)))
    (let ((rx (cadr x)))
      (if (or (string? rx) 
	      (and (pair? rx) (c (car rx) %quote)))
	  (let ((cache (vector #f))
		(%cache (r 'cache))
		(%tmp (r 'tmp)))
	    `(,%let* ((,%cache (,%quote ,cache))
		      (,%tmp (##sys#slot ,%cache 0)))
		     (,%string-search
		      (,%or ,%tmp
			    (,%let ((,%tmp (,%regexp ,rx)))
				   (##sys#setslot ,%cache 0 ,%tmp)
				   ,%tmp))
		      ,@(cddr x))))
	  x))))

(print "inline cached/literal")
(bgrep 1 "\\((.*), (.*)\\)")
(print "inline cached/literal (SRE)")
(bgrep 1 '(: #\( (submatch (* any)) ", " (submatch (* any))))

|#


