;;;; sgrep.scm - grepping benchmark


(use irregex extras utils posix srfi-1)


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
		 (when (irregex-search expr line)
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

(bgrep 1 (rx1))
