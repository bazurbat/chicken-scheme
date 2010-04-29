;;;; chicken-install.scm
;
; Copyright (c) 2008-2010, The Chicken Team
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


(require-library setup-download setup-api)
(require-library srfi-1 posix data-structures utils regex ports extras srfi-13 files)
(require-library chicken-syntax)	; in case an import library reexports chicken syntax
(require-library chicken-ffi-syntax)	; same reason, also for filling modules.db

(module main ()

  (import scheme chicken srfi-1 posix data-structures utils regex ports extras
          srfi-13 files)
  (import setup-download setup-api)

  (import foreign)

  (define +default-repository-files+
    '("setup-api.so" "setup-api.import.so"
      "setup-download.so" "setup-download.import.so"
      "chicken.import.so"
      "lolevel.import.so"
      "srfi-1.import.so"
      "srfi-4.import.so"
      "data-structures.import.so"
      "ports.import.so"
      "files.import.so"
      "posix.import.so"
      "srfi-13.import.so"
      "srfi-69.import.so"
      "extras.import.so"
      "regex.import.so"
      "srfi-14.import.so"
      "tcp.import.so"
      "foreign.import.so"
      "scheme.import.so"
      "srfi-18.import.so"
      "utils.import.so"
      "csi.import.so"
      "irregex.import.so"
      "types.db"))

  (define *program-path*
    (or (and-let* ((p (get-environment-variable "CHICKEN_PREFIX")))
          (make-pathname p "bin") )
        (foreign-value "C_INSTALL_BIN_HOME" c-string) ) )

  (define *keep* #f)
  (define *force* #f)
  (define *host-extension* #f)
  (define *run-tests* #f)
  (define *retrieve-only* #f)
  (define *no-install* #f)
  (define *username* #f)
  (define *password* #f)
  (define *default-sources* '())
  (define *default-location* #f)
  (define *default-transport* 'http)
  (define *windows-shell* (foreign-value "C_WINDOWS_SHELL" bool))
  (define *proxy-host* #f)
  (define *proxy-port* #f)
  (define *running-test* #f)
  (define *mappings* '())
  (define *deploy* #f)
  (define *trunk* #f)
  (define *csc-features* '())

  (define *prefix* 
    (let ((p (foreign-value "C_TARGET_DESTDIR" c-string)))
      (and (not (string=? p ""))
	   p)))

  (define-constant +module-db+ "modules.db")
  (define-constant +defaults-file+ "setup.defaults")

  (define (load-defaults)
    (let ((deff (make-pathname (chicken-home) +defaults-file+)))
      (define (broken x)
	(error "invalid entry in defaults file" deff x))
      (cond ((not (file-exists? deff)) '())
            (else
	     (for-each
	      (lambda (x)
		(unless (and (list? x) (positive? (length x)))
		  (broken x))
		(case (car x)
		  ((server)
		   (set! *default-sources* 
		     (append *default-sources* (list (cdr x)))))
		  ((map)
		   (set! *mappings*
		     (append
		      *mappings*
		      (map (lambda (m)
			     (let ((p (list-index (cut eq? '-> <>) m)))
			       (unless p (broken x))
			       (let-values (((from to) (split-at m p)))
				 (cons from (cdr to)))))
			   (cdr x)))))
		  (else (broken x))))
	      (read-file deff))))
      (pair? *default-sources*) ))

  (define (known-default-sources)
    (if (and *default-location* *default-transport*)
        `(((location 
	    ,(if (and (eq? *default-transport* 'local)
		      (not (absolute-pathname? *default-location*) ))
		 (make-pathname (current-directory) *default-location*)
		 *default-location*))
           (transport ,*default-transport*)))
        *default-sources* ) )

  (define (invalidate-default-source! def)
    (set! *default-sources* (delete def *default-sources* eq?)) )

  (define (deps key meta)
    (or (and-let* ((d (assq key meta)))
          (cdr d))
        '()))

  (define (init-repository dir)
    (let ((src (repository-path))
          (copy (if *windows-shell*
                    "copy"
                    "cp -r")))
      (print "copying required files to " dir " ...")
      (for-each
       (lambda (f)
         (command "~a ~a ~a" copy (shellpath (make-pathname src f)) (shellpath dir)))
       +default-repository-files+)))

  (define (ext-version x)
    (cond ((or (eq? x 'chicken)
               (equal? x "chicken")
               (member (->string x) ##sys#core-library-modules))
           (chicken-version) )
          ((extension-information x) =>
           (lambda (info)
             (let ((a (assq 'version info)))
               (if a
                   (->string (cadr a))
                   "0.0.0"))))
          (else #f)))

  (define (meta-dependencies meta)
    (append
     (deps 'depends meta)
     (deps 'needs meta)
     (if *run-tests* (deps 'test-depends meta) '())))

  (define (outdated-dependencies meta)
    (let ((ds (meta-dependencies meta)))
      (let loop ((deps ds) (missing '()) (upgrade '()))
        (if (null? deps)
            (values (reverse missing) (reverse upgrade))
            (let ((dep (car deps))
                  (rest (cdr deps)))
              (cond ((or (symbol? dep) (string? dep))
                     (loop rest
                           (if (ext-version dep)
                               missing
                               (cons (->string dep) missing))
                           upgrade))
                    ((and (list? dep) (= 2 (length dep))
                          (or (string? (car dep)) (symbol? (car dep))))
                     (let ((v (ext-version (car dep))))
                       (cond ((not v)
                              (loop rest (cons (->string (car dep)) missing) upgrade))
                             ((not (version>=? v (->string (cadr dep))))
			      (when (and (string=? "chicken" (->string (car dep)))
					 (not *force*))
				(error
				 (string-append 
				  "Your CHICKEN version is not recent enough to use this extension - version "
				  (cadr dep) 
				  " or newer is required")))
                              (loop rest missing
                                    (alist-cons
                                     (->string (car dep)) (->string (cadr dep))
                                     upgrade)))
                             (else (loop rest missing upgrade)))))
                    (else
                     (warning
                      "invalid dependency syntax in extension meta information"
                      dep)
                     (loop rest missing upgrade))))))))

  (define *eggs+dirs+vers* '())
  (define *dependencies* '())
  (define *checked* '())

  (define *csi* 
    (shellpath (make-pathname *program-path* (foreign-value "C_CSI_PROGRAM" c-string))))

  (define (try-extension name version trans locn)
    (condition-case
        (retrieve-extension
         name trans locn
         version: version
         destination: (and *retrieve-only* (current-directory))
         tests: *run-tests*
         username: *username*
         password: *password*
	 trunk: *trunk*
	 proxy-host: *proxy-host*
	 proxy-port: *proxy-port*)
      [(exn net)
       (print "TCP connect timeout")
       (values #f "") ]
      [(exn http-fetch)
       (print "HTTP protocol error")
       (values #f "") ]
      [e (exn setup-download-error)
	 (print "Server error:")
	 (print-error-message e) 
	 (values #f "")]
      [e ()
       (abort e) ] ) )

  (define (try-default-sources name version)
    (let trying-sources ([defs (known-default-sources)])
      (if (null? defs)
          (values #f "")
          (let* ([def (car defs)]
                 [locn (cadr (or (assq 'location def)
                                 (error "missing location entry" def)))]
                 [trans (cadr (or (assq 'transport def)
                                  (error "missing transport entry" def)))])
            (let-values ([(dir ver) (try-extension name version trans locn)])
              (if dir
                  (values dir ver)
                  (begin
                    (invalidate-default-source! def)
                    (trying-sources (cdr defs)) ) ) ) ) ) ) )

  (define (make-replace-extension-question e+d+v upgrade)
    (string-concatenate
     (append
      (list "The following installed extensions are outdated, because `"
            (car e+d+v)
            "' requires later versions:\n")
      (map
       (lambda (e)
         (conc
          "  " (car e)
          " (" (let ([v (assq 'version (extension-information (car e)))]) (if v (cadr v) "???"))
               " -> " (cdr e) ")"
          #\newline) )
       upgrade)
      '("\nDo you want to replace the existing extensions?"))) )

  (define (retrieve eggs)
    (print "retrieving ...")
    (for-each
     (lambda (egg)
       (cond [(assoc egg *eggs+dirs+vers*) =>
              (lambda (a)
                ;; push to front
                (set! *eggs+dirs+vers* (cons a (delete a *eggs+dirs+vers* eq?))) ) ]
             [else
              (let ([name (if (pair? egg) (car egg) egg)]
                    [version (and (pair? egg) (cdr egg))])
                (let-values ([(dir ver) (try-default-sources name version)])
                  (unless dir (error "extension or version not found"))
                  (print " " name " located at " dir)
                  (set! *eggs+dirs+vers* (cons (list name dir ver) *eggs+dirs+vers*)) ) ) ] ) )
     eggs)
    (unless *retrieve-only*
      (for-each
       (lambda (e+d+v)
         (unless (member (car e+d+v) *checked*)
           (set! *checked* (cons (car e+d+v) *checked*))
           (let ([mfile (make-pathname (cadr e+d+v) (car e+d+v) "meta")])
             (cond [(file-exists? mfile)
                    (let ([meta (with-input-from-file mfile read)])
		      (print "checking platform for `" (car e+d+v) "' ...")
		      (check-platform (car e+d+v) meta)
                      (print "checking dependencies for `" (car e+d+v) "' ...")
                      (let-values ([(missing upgrade) (outdated-dependencies meta)])
			(set! missing (apply-mappings missing)) ;XXX only missing - wrong?
			(set! *dependencies*
			  (cons
			   (cons (car e+d+v)
				 (map (lambda (mu)
					(if (pair? mu)
					    (car mu)
					    mu))
				      (append missing upgrade)))
			   *dependencies*))
                        (when (pair? missing)
                          (print " missing: " (string-intersperse missing ", "))
                          (retrieve missing))
                        (when (and (pair? upgrade)
                                   (or *force*
                                       (yes-or-no?
                                        (make-replace-extension-question e+d+v upgrade)
                                        "no") ) )
                          (let ([ueggs (unzip1 upgrade)])
                            (print " upgrade: " (string-intersperse ueggs ", "))
                            (for-each
                             (lambda (e)
                               (print "removing previously installed extension `" e "' ...")
                               (remove-extension e) )
                             ueggs)
                            (retrieve ueggs) ) ) ) ) ]
                   [else
                    (warning
                     (string-append
                      "extension `" (car e+d+v) "' has no .meta file "
                      "- assuming it has no dependencies")) ] ) ) ) )
       *eggs+dirs+vers*) ) )

  (define (check-platform name meta)
    (define (fail)
      (error "extension is not targeted for this system" name))
    (unless (feature? #:cross-chicken)
      (and-let* ((platform (assq 'platform meta)))
	(let loop ((p (cadr platform)))
	  (cond ((symbol? p) 
		 (or (feature? p) (fail)))
		((not (list? p))
		 (error "invalid `platform' property" name (cadr platform)))
		((and (eq? 'not (car p)) (pair? (cdr p)))
		 (and (not (loop (cadr p))) (fail)))
		((eq? 'and (car p))
		 (and (every loop (cdr p)) (fail)))
		((eq? 'or (car p))
		 (and (not (any loop (cdr p))) (fail)))
		(else (error "invalid `platform' property" name (cadr platform))))))))

  (define (make-install-command e+d+v dep?)
    (conc
     *csi*
     " -bnq "
     (if (and (feature? #:cross-chicken) ; disable -setup-mode when cross-compiling,
	      (not *host-extension*)) ; host-repo must always take precedence
	 ""				
	 "-setup-mode ")
     "-e \"(require-library setup-api)\" -e \"(import setup-api)\""
     (sprintf " -e \"(extension-name-and-version '(\\\"~a\\\" \\\"~a\\\"))\"" (car e+d+v) (caddr e+d+v))
     (if (sudo-install) " -e \"(sudo-install #t)\"" "")
     (if *keep* " -e \"(keep-intermediates #t)\"" "")
     (if (and *no-install* (not dep?)) " -e \"(setup-install-mode #f)\"" "")
     (if *host-extension* " -e \"(host-extension #t)\"" "")
     (if *prefix* 
	 (sprintf " -e \"(destination-prefix \\\"~a\\\")\"" 
	   (normalize-pathname *prefix* 'unix))
	 "")
     (sprintf " -e \"(extra-features '~s)\"" *csc-features*)
     (if *deploy* " -e \"(deployment-mode #t)\"" "")
     #\space
     (shellpath (make-pathname (cadr e+d+v) (car e+d+v) "setup"))) )

  (define (install eggs)
    (retrieve eggs)
    (unless *retrieve-only*
      (let* ((dag (reverse (topological-sort *dependencies* string=?)))
	     (num (length dag))
	     (depinstall-ok *force*))
	(print "install order:")
	(pp dag)
	(for-each
	 (lambda (e+d+v i)
	   (let ((isdep (> i 1)))
	     (when (and (not depinstall-ok)
			isdep
			(= i num))
	       (when (and *no-install*
			   (not (yes-or-no?
				 (string-append
				  "You specified `-no-install', but this extension has dependencies"
				  " that are required for building. Do you still want to install them?"))))
		 (print "aborting installation.")
		 (cleanup)
		 (exit 1)))
	     (print "installing " (car e+d+v) #\: (caddr e+d+v) " ...")
	     (print "changing current directory to " (cadr e+d+v))
	     (parameterize ((current-directory (cadr e+d+v)))
	       (let ((cmd (make-install-command e+d+v (> i 1))))
		 (print "  " cmd)
		 ($system cmd))
	       (when (and *run-tests*
			  (not isdep)
			  (file-exists? "tests")
			  (directory? "tests")
			  (file-exists? "tests/run.scm") )
		 (set! *running-test* #t)
		 (current-directory "tests")
		 (command "~a -s run.scm ~a" *csi* (car e+d+v))
		 (set! *running-test* #f)))))
	 (map (cut assoc <> *eggs+dirs+vers*) dag)
	 (iota num num -1)))))

  (define (cleanup)
    (unless *keep*
      (and-let* ((tmpdir (temporary-directory)))
        (remove-directory tmpdir))))

  (define (update-db)
    (let* ((files (glob (make-pathname (repository-path) "*.import.*")))
           (tmpdir (create-temporary-directory))
           (dbfile (make-pathname tmpdir +module-db+))
           (rx (regexp ".*/([^/]+)\\.import\\.(scm|so)")))
      (print "loading import libraries ...")
      (fluid-let ((##sys#warnings-enabled #f))
        (for-each
         (lambda (f)
           (let ((m (string-match rx f)))
	     (handle-exceptions ex
		 (print-error-message 
		  ex (current-error-port) 
		  (sprintf "Failed to import from `~a'" f))
	       (eval `(import ,(string->symbol (cadr m)))))))
         files))
      (print "generating database")
      (let ((db
             (sort
              (append-map
               (lambda (m)
                 (let* ((mod (cdr m))
                        (mname (##sys#module-name mod)))
                   (print* " " mname)
                   (let-values (((_ ve se) (##sys#module-exports mod)))
                     (append
                      (map (lambda (se) (list (car se) 'syntax mname)) se)
                      (map (lambda (ve) (list (car ve) 'value mname)) ve)))))
               ##sys#module-table)
              (lambda (e1 e2)
                (string<? (symbol->string (car e1)) (symbol->string (car e2)))))))
        (newline)
        (with-output-to-file dbfile
          (lambda ()
            (for-each (lambda (x) (write x) (newline)) db)))
        (copy-file dbfile (make-pathname (repository-path) +module-db+))
        (remove-directory tmpdir))))

  (define (apply-mappings eggs)
    (define (same? e1 e2)
      (string=? (->string e1) (->string e2)))
    (let ((eggs2
	   (delete-duplicates
	    (append-map
	     (lambda (egg)
	       (cond ((find (lambda (m) (find (cut same? egg <>) (car m)))
			    *mappings*) => 
			    (lambda (m) (map ->string (cdr m))))
		     (else (list egg))))
	     eggs)
	    string=?)))
      (unless (lset= same? eggs eggs2)
	(print "mapped " eggs " to " eggs2))
      eggs2))

  (define ($system str)
    (let ((r (system
              (if *windows-shell*
                  (string-append "\"" str "\"")
                  str))))
      (unless (zero? r)
        (error "shell command terminated with nonzero exit code" r str))))

  (define (command fstr . args)
    (let ((cmd (apply sprintf fstr args)))
      (print "  " cmd)
      ($system cmd)))

  (define (usage code)
    (print #<<EOF
usage: chicken-install [OPTION | EXTENSION[:VERSION]] ...

  -h   -help                    show this message and exit
  -v   -version                 show version and exit
       -force                   don't ask, install even if versions don't match
  -k   -keep                    keep temporary files
  -l   -location LOCATION       install from given location instead of default
  -t   -transport TRANSPORT     use given transport instead of default
       -proxy HOST[:PORT]       download via HTTP proxy
  -s   -sudo                    use sudo(1) for filesystem operations
  -r   -retrieve                only retrieve egg into current directory, don't install
  -n   -no-install              do not install, just build (implies `-keep')
  -p   -prefix PREFIX           change installation prefix to PREFIX
       -host                    when cross-compiling, compile extension for host
       -test                    run included test-cases, if available
       -username USER           set username for transports that require this
       -password PASS           set password for transports that require this
  -i   -init DIRECTORY          initialize empty alternative repository
  -u   -update-db               update export database
       -repository              print path used for egg installation
       -deploy                  build extensions for deployment
       -trunk                   build trunk instead of tagged version (only local)
  -D   -feature FEATURE         features to pass to sub-invocations of `csc'
EOF
);|
    (exit code))

  (define *short-options* '(#\h #\k #\l #\t #\s #\p #\r #\n #\v #\i #\u #\D))

  (define (main args)
    (let ((defaults (load-defaults))
          (update #f)
          (rx (regexp "([^:]+):(.+)")))
      (let loop ((args args) (eggs '()))
        (cond ((null? args)
               (cond (update (update-db))
                     (else
                      (when (null? eggs)
                        (let ((setups (glob "*.setup")))
                          (cond ((pair? setups)
                                 (set! *eggs+dirs+vers*
				   (append
				    (map
				     (lambda (s) (cons (pathname-file s) (list "." "")))
				     setups)
				    *eggs+dirs+vers*)))
                                (else
                                 (print "no setup-scripts to process")
                                 (exit 1))) ) )
                      (unless defaults
                        (unless *default-transport*
                          (error "no default transport defined - please use `-transport' option"))
                        (unless *default-location*
                          (error "no default location defined - please use `-location' option")))
                      (install (apply-mappings (reverse eggs))))))
              (else
               (let ((arg (car args)))
                 (cond ((or (string=? arg "-help")
                            (string=? arg "-h")
                            (string=? arg "--help"))
                        (usage 0))
                       ((string=? arg "-repository")
                        (print (repository-path))
                        (exit 0))
                       ((string=? arg "-force")
                        (set! *force* #t)
                        (loop (cdr args) eggs))
                       ((or (string=? arg "-k") (string=? arg "-keep"))
                        (set! *keep* #t)
                        (loop (cdr args) eggs))
                       ((or (string=? arg "-s") (string=? arg "-sudo"))
                        (sudo-install #t)
                        (loop (cdr args) eggs))
                       ((or (string=? arg "-r") (string=? arg "-retrieve"))
                        (set! *retrieve-only* #t)
                        (loop (cdr args) eggs))
                       ((or (string=? arg "-l") (string=? arg "-location"))
                        (unless (pair? (cdr args)) (usage 1))
                        (set! *default-location* (cadr args))
                        (loop (cddr args) eggs))
                       ((or (string=? arg "-t") (string=? arg "-transport"))
                        (unless (pair? (cdr args)) (usage 1))
                        (set! *default-transport* (string->symbol (cadr args)))
                        (loop (cddr args) eggs))
                       ((or (string=? arg "-p") (string=? arg "-prefix"))
                        (unless (pair? (cdr args)) (usage 1))
                        (set! *prefix* 
			  (let ((p (cadr args)))
			    (if (absolute-pathname? p)
				p
				(normalize-pathname 
				 (make-pathname (current-directory) p) ) ) ) )
                        (loop (cddr args) eggs))
                       ((or (string=? arg "-n") (string=? arg "-no-install"))
                        (set! *keep* #t)
                        (set! *no-install* #t)
                        (loop (cdr args) eggs))
                       ((or (string=? arg "-v") (string=? arg "-version"))
                        (print (chicken-version))
                        (exit 0))
                       ((or (string=? arg "-u") (string=? arg "-update-db"))
                        (set! update #t)
                        (loop (cdr args) eggs))
                       ((or (string=? arg "-i") (string=? arg "-init"))
                        (unless (pair? (cdr args)) (usage 1))
                        (init-repository (cadr args))
                        (exit 0))
		       ((string=? "-proxy" arg)
                        (unless (pair? (cdr args)) (usage 1))
			(cond ((string-match "(.+)\\:([0-9]+)" (cadr args)) =>
			       (lambda (m)
				 (set! *proxy-host* (cadr m))
				 (set! *proxy-port* (string->number (caddr m)))))
			      (else
			       (set! *proxy-host* (cadr args))
			       (set! *proxy-port* 80)))
			(loop (cddr args) eggs))
		       ((or (string=? "-D" arg) (string=? "-feature" arg))
                        (unless (pair? (cdr args)) (usage 1))
			(set! *csc-features* 
			  (cons (string->symbol (cadr args)) *csc-features*))
			(loop (cddr args) eggs))
                       ((string=? "-test" arg)
                        (set! *run-tests* #t)
                        (loop (cdr args) eggs))
                       ((string=? "-host" arg)
                        (set! *host-extension* #t)
                        (loop (cdr args) eggs))
		       ((string=? "-deploy" arg)
			(set! *deploy* #t)
			(loop (cdr args) eggs))
                       ((string=? "-username" arg)
                        (unless (pair? (cdr args)) (usage 1))
                        (set! *username* (cadr args))
                        (loop (cddr args) eggs))
		       ((string=? "-trunk" arg)
			(set! *trunk* #t)
			(loop (cdr args) eggs))
                       ((string=? "-password" arg)
                        (unless (pair? (cdr args)) (usage 1))
                        (set! *password* (cadr args))
                        (loop (cddr args) eggs))
                       ((and (positive? (string-length arg))
                             (char=? #\- (string-ref arg 0)))
                        (if (> (string-length arg) 2)
                            (let ((sos (string->list (substring arg 1))))
                              (if (every (cut memq <> *short-options*) sos)
                                  (loop (append 
					 (map (cut string #\- <>) sos)
					 (cdr args)) 
					eggs)
                                  (usage 1)))
                            (usage 1)))
                       ((equal? "setup" (pathname-extension arg))
                        (let ((egg (pathname-file arg)))
                          (set! *eggs+dirs+vers*
                            (alist-cons
                             egg
                             (list
                              (let ((dir (pathname-directory arg)))
                                (if dir
                                    (if (absolute-pathname? dir)
                                        dir
                                        (make-pathname (current-directory) dir) )
                                    (current-directory)))
                              "")
                             *eggs+dirs+vers*))
                          (loop (cdr args) (cons egg eggs))))
                       ((string-match rx arg) =>
                        (lambda (m)
                          (loop (cdr args) (alist-cons (cadr m) (caddr m) eggs))))
                       (else (loop (cdr args) (cons arg eggs))))))))))

  (register-feature! 'chicken-install)

  (handle-exceptions ex
      (begin
	(newline (current-error-port))
        (print-error-message ex (current-error-port))
        (cleanup)
        (exit (if *running-test* 2 1)))
    (main (command-line-arguments))
    (cleanup))

) ;module main
