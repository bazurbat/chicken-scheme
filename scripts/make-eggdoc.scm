;;;; make-eggdoc.scm - create HTML files for eggs that use eggdoc.

(include "tools.scm")

(use setup-download matchable data-structures regex)

(import foreign)

(define csi (foreign-value "C_CSI_PROGRAM" c-string))

(define *help* #f)
(define *docroot* ".")

(define *major-version* (##sys#fudge 41))

(define (d fstr . args)
  (fprintf (current-error-port) "~?~%" fstr args))

(define (usage code)
  (print "make-eggdoc.scm [--help] [--major-version=MAJOR] [DIR]")
  (exit code))


(define (make-eggdoc dir)
  (let ((title (sprintf "Eggs Unlimited (release branch ~a)" *major-version*))
	(eggs (gather-egg-information dir)))

    (for-each 
     (lambda (egg)
       (let ((meta (cdr egg)))
	(d "processing meta ~s" meta)
	 (cond 
	  ((assq 'eggdoc meta) =>
	   (lambda (edoc)
	     (d "edoc is ~a" edoc)
	     (let ((eggname (->string (car egg))))
	     (d "creating HTML from eggdoc file ~a" (cadr edoc))
	     (let* ((egg-dir     (locate-egg/local eggname dir))
		    (eggref-dir  (sprintf "~s/eggref/~a" *docroot* *major-version* ))
		    (cmd         (sprintf "~a -I ~a -s ~a > ~a" 
					 csi
                                         egg-dir
                                         (make-pathname egg-dir (->string (cadr edoc)))
					 (make-pathname eggref-dir eggname "html"))))
	       (d "~s" cmd)
	       (system* cmd) )))))))
     eggs)

    ))

(define (main args)
  (when *help* (usage 0))
  (match args
    ((dir)  (make-eggdoc dir))
    (()     (make-eggdoc "."))
    (_ (usage 1))))

(main (simple-args (command-line-arguments)))

