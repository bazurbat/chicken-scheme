;;;; chicken-status.scm
;
; Copyright (c) 2008-2014, The CHICKEN Team
; All rights reserved.
;
; Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following
; conditions are met:
;
;   Redistributions of source code must retain the above copyright notice, this list of conditions and the following
;     disclaimer. 
;   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
;     disclaimer in the documentation and/or other materials provided with the distribution. 
;   Neither the name of the author nor the names of its contributors may be used to endorse or promote
;     products derived from this software without specific prior written permission. 
;
; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
; OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
; AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR
; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
; CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
; SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
; THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
; POSSIBILITY OF SUCH DAMAGE.


(require-library setup-api srfi-1 posix data-structures utils ports irregex files)


(module main ()
  
  (import scheme chicken foreign)
  (import srfi-1 posix data-structures utils ports irregex
	  files setup-api extras)

  (define-foreign-variable C_TARGET_LIB_HOME c-string)
  (define-foreign-variable C_BINARY_VERSION int)

  (define *cross-chicken* (feature? #:cross-chicken))
  (define *host-extensions* *cross-chicken*)
  (define *target-extensions* *cross-chicken*)

  (define (repo-path)
    (if (and *cross-chicken* (not *host-extensions*))
	(make-pathname C_TARGET_LIB_HOME (sprintf "chicken/~a" C_BINARY_VERSION))
	(repository-path)))

  (define (grep rx lst)
    (filter (cut irregex-search rx <>) lst))

  (define (gather-extensions patterns)
    (let ((extensions (gather-all-extensions)))
      (delete-duplicates
       (concatenate (map (cut grep <> extensions) patterns))
       string=?)))

  (define (gather-eggs patterns)
    (define (egg-name extension)
      (and-let* ((egg (assq 'egg-name (read-info extension (repo-path)))))
        (cadr egg)))
    (let loop ((eggs '())
               (extensions (gather-extensions patterns)))
      (if (null? extensions)
          eggs
          (let ((egg (egg-name (car extensions))))
            (loop (if (and egg (not (member egg eggs)))
                      (cons egg eggs)
                      eggs)
                  (cdr extensions))))))

  (define (gather-all-extensions)
    (map pathname-file (glob (make-pathname (repo-path) "*" "setup-info"))))

  (define (format-string str cols #!optional right (padc #\space))
    (let* ((len (string-length str))
	   (pad (make-string (fxmax 0 (fx- cols len)) padc)) )
      (if right
	  (string-append pad str)
	  (string-append str pad) ) ) )

  (define get-terminal-width
    (let ((default-width 80))	     ; Standard default terminal width
      (lambda ()
	(let ((cop (current-output-port)))
	  (if (terminal-port? cop)
	      (let ((w (nth-value 1 (terminal-size cop))))
		(if (zero? w) 
		    default-width 
		    (min default-width w)))
	      default-width)))))

  (define (list-installed-extensions extensions)
    (let ((w (quotient (- (get-terminal-width) 2) 2)))
      (for-each
       (lambda (extension)
	 (let ((version (assq 'version (read-info extension (repo-path)))))
	   (if version
	       (print
		(format-string (string-append extension " ") w #f #\.)
		(format-string 
		 (string-append " version: " (->string (cadr version)))
		 w #t #\.))
	       (print extension))))
       (sort extensions string<?))))

  (define (list-installed-eggs eggs)
    (for-each print eggs))

  (define (list-installed-files extensions)
    (for-each
     print
     (sort
      (append-map
       (lambda (extension)
	 (let ((files (assq 'files (read-info extension (repo-path)))))
	   (if files
	       (cdr files)
	       '())))
       extensions)
      string<?)))

  (define (dump-installed-versions)
    (for-each
     (lambda (extension)
       (let ((version (assq 'version (read-info extension (repo-path)))))
	 (pp (list (string->symbol extension) (->string (and version (cadr version)))))))
     (gather-all-extensions)))

  (define (usage code)
    (print #<<EOF
usage: chicken-status [OPTION | PATTERN] ...

  -h   -help                    show this message
       -version                 show version and exit
  -f   -files                   list installed files
       -exact                   treat PATTERN as exact match (not a pattern)
       -host                    when cross-compiling, show status of host extensions only
       -target                  when cross-compiling, show status of target extensions only
       -list                    dump installed extensions and their versions in "override" format
  -e   -eggs                    list installed eggs
EOF
);|
    (exit code))

  (define *short-options* '(#\h #\f))

  (define (main args)
    (let ((files #f)
          (eggs #f)
	  (dump #f)
	  (exact #f))
      (let loop ((args args) (pats '()))
	(if (null? args)
            (if (and eggs (or dump files))
                (begin
                  (with-output-to-port (current-error-port)
                    (cut print "-eggs cannot be used with -list."))
                  (exit 1))
                (let ((status
                       (lambda ()
                         (let* ((patterns
                                 (map
                                  irregex
                                  (cond ((null? pats) '(".*"))
                                        (exact (map (lambda (p)
                                                      (string-append "^" (irregex-quote p) "$"))
                                                    pats))
                                        (else (map ##sys#glob->regexp pats)))))
                                (eggs/exts ((if eggs gather-eggs gather-extensions) patterns)))
                           (if (null? eggs/exts)
                               (print "(none)")
                               ((cond (eggs list-installed-eggs)
                                      (files list-installed-files)
                                      (else list-installed-extensions))
                                eggs/exts))))))
                  (cond (dump (dump-installed-versions))
                        ((and *host-extensions* *target-extensions*)
                         (print "host at " (repo-path) ":\n")
                         (status)
                         (fluid-let ((*host-extensions* #f))
                           (print "\ntarget at " (repo-path) ":\n")
                           (status)))
                        (else (status)))))
	    (let ((arg (car args)))
	      (cond ((or (string=? arg "-help") 
			 (string=? arg "-h")
			 (string=? arg "--help"))
		     (usage 0))
		    ((string=? arg "-host")
		     (set! *target-extensions* #f)
		     (loop (cdr args) pats))
		    ((string=? arg "-target")
		     (set! *host-extensions* #f)
		     (loop (cdr args) pats))
		    ((string=? arg "-exact")
		     (set! exact #t)
		     (loop (cdr args) pats))
		    ((string=? arg "-list")
		     (set! dump #t)
		     (loop (cdr args) pats))
		    ((or (string=? arg "-f") (string=? arg "-files"))
		     (set! files #t)
		     (loop (cdr args) pats))
		    ((or (string=? arg "-e") (string=? arg "-eggs"))
		     (set! eggs #t)
		     (loop (cdr args) pats))
		    ((string=? arg "-version")
		     (print (chicken-version))
		     (exit 0))
		    ((and (positive? (string-length arg))
			  (char=? #\- (string-ref arg 0)))
		     (if (> (string-length arg) 2)
			 (let ((sos (string->list (substring arg 1))))
			   (if (every (cut memq <> *short-options*) sos)
			       (loop (append (map (cut string #\- <>) sos) (cdr args)) pats)
			       (usage 1)))
			 (usage 1)))
		    (else (loop (cdr args) (cons arg pats)))))))))

  (main (command-line-arguments))
  
 )
