;;;; mini-salmonella.scm - very simple tool to build all eggs
;
; usage: csi -s mini-salmonella.scm EGGDIR [PREFIX]


(module mini-salmonella ()

(import scheme chicken)
(use posix files extras data-structures srfi-1 setup-api srfi-13 utils)

(define (usage code)
  (print "usage: mini-salmonella EGGDIR [PREFIX]")
  (exit code) )

(define-values (*eggdir* *prefix*)
  (let-optionals (command-line-arguments) 
      ((eggdir (usage 1))
       (prefix (pathname-directory (pathname-directory (repository-path)))))
    (values eggdir prefix)))

(define *binary-version* (##sys#fudge 42))
(define *repository* (make-pathname *prefix* (conc "lib/chicken/" *binary-version*)))
(define *snapshot* (directory *repository*))

(define (cleanup-repository)
  (for-each 
   (lambda (f)
     (delete-file (make-pathname *repository* f)))
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

(define *logfile* "mini-salmonella.log")
(define *tmplogfile* "mini-salmonella.tmp.log")

(on-exit (lambda () (delete-file* *tmplogfile*)))

(define (copy-log file)
  (let ((log (read-all file)))
    (with-output-to-file *logfile*
      (cut display log)
      #:append)))

(define (install-egg egg dir)
  (let ((status
	 (system
	  (sprintf "~a -t local -l ~a ~a ";2>~a >nul:"
		   *chicken-install*
		   (normalize-pathname *eggdir*)
		   egg
		   *tmplogfile*))))
    (cond ((zero? status) (report egg "OK"))
	  (else
	   (report egg "FAILED")
	   (copy-log *tmplogfile*)))))

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

)
