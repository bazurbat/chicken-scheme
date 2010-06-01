;;;; sgrep.scm - grepping benchmark


(use regex extras utils posix srfi-1)


(define big-string
  (read-all (optional (command-line-arguments) "compiler.scm")))

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


