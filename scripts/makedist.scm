;;;; makedist.scm - Make distribution tarballs


(use srfi-69 irregex)

(define *release* #f)

(load-relative "tools.scm")

(define *help* #f)

(set! *verbose* #t)

(define BUILDVERSION (with-input-from-file "buildversion" read))

(define *platform* 
  (let ((sv (symbol->string (software-version))))
    (cond ((irregex-match ".*bsd" sv) "bsd")
	  (else
	   (case (build-platform)
	     ((mingw32) 
	      (if (string=? (get-environment-variable "MSYSTEM") "MINGW32")
		  "mingw-msys"
		  "mingw32"))
	     ((msvc) "msvc")
	     (else sv))))))

(define *make* 
  (cond ((string=? "bsd" *platform*) "gmake")
	((string=? "mingw32" *platform*) "mingw32-make")
	(else "make")))

(define (release full?)
  (let* ((files (read-lines "distribution/manifest"))
	 (distname (conc "chicken-" BUILDVERSION)) 
	 (distfiles (map (cut prefix distname <>) files)) 
	 (tgz (conc distname ".tar.gz")))
    (run (rm -fr ,distname ,tgz))
    (create-directory distname)
    (for-each
     (lambda (d)
       (let ((d (path distname d)))
	 (unless (file-exists? d)
	   (print "creating " d)
	   (create-directory d 'with-parents))))
     (delete-duplicates (filter-map prefix files) string=?))
    (let ((missing '()))
      (for-each
       (lambda (f)
	 (if (-e f)
	     (run (cp -p ,(qs f) ,(qs (path distname f))))
	     (set! f (cons f missing))))
       files)
      (unless (null? missing)
	(warning "files missing" missing) ) )
    (run (tar cfz ,(conc distname ".tar.gz") ,distname))
    (run (rm -fr ,distname)) ) )

(define (usage . _)
  (print "usage: makedist [--release] [--make=PROGRAM] [--platform=PLATFORM] MAKEOPTION ...")
  (exit 1))

(define *makeargs*
  (simple-args
   (command-line-arguments)
   usage))

(when *help* (usage))

(run (,*make* -f ,(conc "Makefile." *platform*) distfiles ,@*makeargs*))

(release *release*)
