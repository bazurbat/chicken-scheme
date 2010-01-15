;;;; mini-salmonella.scm - very simple tool to build all eggs
;
; usage: csi -s mini-salmonella.scm EGGDIR [PREFIX]


(module mini-salmonella ()

(import scheme chicken)
(use posix files extras data-structures srfi-1 setup-api srfi-13 utils)

(define (usage code)
  (print "usage: mini-salmonella [-h] [-t] [-d] [-f] EGGDIR [PREFIX]")
  (exit code) )

(define *eggdir* #f)
(define *debug* #f)
(define *prefix* (pathname-directory (pathname-directory (repository-path))))
(define *run-tests* #f)
(define *download* #f)

(let loop ((args (command-line-arguments)))
  (when (pair? args)
    (let ((arg (car args)))
      (cond ((string=? "-h" arg) (usage 0))
	    ((string=? "-t" arg) (set! *run-tests* #t))
	    ((string=? "-d" arg) (set! *debug* #t))
	    ((string=? "-f" arg) (set! *download* #t))
	    (*eggdir* (set! *prefix* arg))
	    (else (set! *eggdir* arg)))
      (loop (cdr args)))))

(unless *eggdir* (usage 1))

(define *binary-version* (##sys#fudge 42))
(define *repository* (make-pathname *prefix* (conc "lib/chicken/" *binary-version*)))
(define *snapshot* (directory *repository*))

(define (cleanup-repository)
  (for-each 
   (lambda (f)
     (let ((f2 (make-pathname *repository* f)))
       (if (directory? f2)
	   (remove-directory f2)
	   (delete-file f2))))
   (lset-difference string=? (directory *repository*) *snapshot*)))

(define *chicken-install*
  (normalize-pathname (make-pathname *prefix* "bin/chicken-install")))

(define *eggs* (directory *eggdir*))

(define (find-newest egg)
  (let* ((ed (make-pathname *eggdir* egg))
	 (tagsdir (directory-exists? (make-pathname ed "tags")))
	 (trunkdir (directory-exists? (make-pathname ed "trunk"))))
    (if tagsdir
	(let ((tags (sort (directory tagsdir) version>=?)))
	  (if (null? tags)
	      (or trunkdir ed)
	      (make-pathname ed (string-append "tags/" (first tags)))))
	(or trunkdir ed))))

(define (report egg msg . args)
  (printf "~a..~?~%" (make-string (max 2 (- 32 (string-length egg))) #\.)
	  msg args) )

(define *errlogfile* "mini-salmonella.errors.log")
(define *logfile* "mini-salmonella.log")
(define *tmplogfile* "mini-salmonella.tmp.log")

(on-exit (lambda () (delete-file* *tmplogfile*)))

(define (copy-log egg file)
  (let ((log (read-all file)))
    (with-output-to-file *errlogfile*
      (lambda ()
	(print #\newline egg #\:)
	(display log))
      #:append)))

(define *failed* 0)
(define *succeeded* 0)

(define (install-egg egg dir)
  (let ((command
	 (sprintf "~a ~a ~a ~a ~a"
		  *chicken-install*
		  (if *run-tests* "-test" "")
		  (if *download* 
		      ""
		      (string-append "-l " (normalize-pathname *eggdir*)))
		  egg
		  (if (not *debug*)
		      (sprintf "2>~a >>~a.out" *tmplogfile* *logfile*)
		      ""))))
    (when *debug*
      (print "  " command))
    (let ((status (system command)))
      (cond ((zero? status)
	     (report egg "OK")
	     (set! *succeeded* (add1 *succeeded*)))
	    (else
	     (report egg "FAILED")
	     (set! *failed* (add1 *failed*))
	     (copy-log egg *tmplogfile*))))))

(delete-file* *errlogfile*)
(delete-file* *logfile*)

(for-each
 (lambda (egg)
   (and-let* ((dir (find-newest egg)))
     (print* egg)
     (cleanup-repository)
     (let ((meta (file-exists? (make-pathname dir egg "meta"))))
       (if meta
	   (let ((setup (file-exists? (make-pathname dir egg "setup"))))
	     (if setup
		 (install-egg egg dir)
		 (report egg "<no .setup script>")) )
	   (report egg "<no .meta file>")))))
 (directory *eggdir*))

(print "\nSucceeded: " *succeeded* ", failed: " *failed* ", total: "
       (+ *succeeded* *failed*))

)
