;;;; make-egg-index.scm - create index page for extension release directory

(load-relative "tools.scm")

(use setup-download matchable sxml-transforms data-structures irregex)


(define *help* #f)
(define *major-version* (##sys#fudge 41))

(define +link-regexp+
  (irregex '(: #\[ #\[ (submatch (* (~ #\] #\|))) #\] #\])))

(define +categories+
  '((lang-exts "Language extensions")
    (graphics "Graphics")
    (debugging "Debugging tools")
    (logic "Logic programming")
    (net "Networking")
    (io "Input/Output")
    (db "Databases")
    (os "OS interface")
    (ffi "Interfacing to other languages")
    (web "Web programming")
    (xml "XML processing")
    (doc-tools "Documentation tools")
    (egg-tools "Egg tools")
    (math "Mathematical libraries")
    (oop "Object-oriented programming")
    (data "Algorithms and data-structures")
    (parsing "Data formats and parsing")
    (tools "Tools")
    (sound "Sound")
    (testing "Unit-testing")
    (crypt "Cryptography")
    (ui "User interface toolkits")
    (code-generation "Code generation")
    (macros "Macros and meta-syntax")
    (misc "Miscellaneous")
    (hell "Concurrency and parallelism")
    (uncategorized "Uncategorized")
    (obsolete "Unsupported or redundant") ) )

(define (d fstr . args)
  (fprintf (current-error-port) "~?~%" fstr args))

(define (usage code)
  (print "make-egg-index.scm [--help] [--major-version=MAJOR] [DIR]")
  (exit code))

(define (sxml->html doc)
  (SRV:send-reply
   (pre-post-order
    doc
    ;; LITERAL tag contents are used as raw HTML.
    `((literal *preorder* . ,(lambda (tag . body) (map ->string body)))
      ,@universal-conversion-rules))))

(define (make-egg-index dir)
  (let ((title (sprintf "Eggs Unlimited (release branch ~a)" *major-version*))
	(eggs (gather-egg-information dir)))
    (sxml->html
     `((literal "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">")
       (html (@ (xmlns "http://www.w3.org/1999/xhtml"))
        ,(header title)
        (body
         ,(menu)
         ,(content (prelude title)
                   (emit-egg-information eggs))
         ,(trailer)))))))

(define (wiki-link path desc)
  `(a (@ (href "http://wiki.call-cc.org/" ,path)) ,desc))

(define (menu)
  `(div (@ (id "menu"))
	(ul (li ,(wiki-link "" "Home"))
	    (li (a (@ (href "http://code.call-cc.org")) "Download"))
	    (li ,(wiki-link "manual/index" "Manual"))
	    (li ,(wiki-link "eggs" "Eggs"))
	    (li (a (@ (href "http://chickadee.call-cc.org")) "API Browser"))
	    (li (a (@ (href "http://bugs.call-cc.org")) "Bugs"))
	    )))

(define (content . body)
  `(div (@ (id "content"))
             ,body))

(define (header title)
  `(head
;;     (style (@ (type "text/css")) 
;;       ,+stylesheet+)
    (link (@ (rel "stylesheet")
             (type "text/css")
             (href "http://wiki.call-cc.org/chicken.css")))
    (title ,title)))

(define (prelude title)
  `((h2 "Eggs Unlimited (release branch 4)")
    (p (b "Last updated: " ,(seconds->string (current-seconds))))
    (p "A library of extensions for the Chicken Scheme system.")
    (h2 "Installation")
    (p "Just enter")
    (pre "  chicken-install EXTENSIONNAME\n")
    (p "This will download anything needed to compile and install the library. "
       "If your " (i "extension repository") " is placed at a location for which "
       "you don't have write permissions, then run " (tt "chicken-install") 
       " with the " (tt "-sudo") " option or run it as root (not recommended).")
    (p "You can obtain the repository location by running")
    (pre "  csi -p \"(repository-path)\"\n")
    (p "If you only want to download the extension and install it later, pass the "
       (tt "-retrieve") " option to " (tt "chicken-install") ":")
    (pre "  chicken-install -retrieve EXTENSIONNAME\n")
    (p "By default the archive will be unpacked into a temporary directory (named "
       (tt "EXTENSIONNAME.egg-dir") ") and the directory will be removed if the "
       "installation completed successfully. To keep the extracted files add "
       (tt "-keep") " to the options passed to " (tt "chicken-install") ".")
    (p "For more information, enter")
    (pre "  chicken-install -help\n")
    (p "If you would like to access the subversion repository, see the "
       (a (@ (href "http://wiki.call-cc.org/eggs tutorial"))
          "Egg tutorial") ".")
    (p "If you are looking for 3rd party libraries used by one of the extensions, "
       "check out the CHICKEN "
       (a (@ (href "http://www.call-with-current-continuation.org/tarballs/") )
          "tarball repository") ".")
    (h2 "List of available eggs")
    (a (@ (name "category-list")))
    (h3 "Categories")
    ,(category-link-list)
    ))

;; information on empty categories not available yet; link all possible categories
(define (category-link-list)
  `(ul (@ (style "list-style-type: none; padding-left: 2em;"))
       ,@(map
          (match-lambda
           ((cat catname)
            `(li (a (@ (href "#" ,cat))
                    ,catname))))
          +categories+)))

(define (trailer)
  `(div (@ (id "credits"))
        (p "Generated with Chicken " ,(chicken-version))))

(define (emit-egg-information eggs)
  (append-map
   (match-lambda
     ((cat catname)
      (let ((eggs (append-map
		   make-egg-entry
		   (sort
		    (filter (lambda (info) 
			      (and (eq? cat (cadr (or (assq 'category (cdr info))
						      '(#f uncategorized))))
				   (not (assq 'hidden (cdr info)))))
			    eggs) 
		    (lambda (e1 e2)
		      (string<? (symbol->string (car e1)) (symbol->string (car e2))))))))
	(if (null? eggs)
	    '()
	    (begin
	      (d "category: ~a" catname)
	      `((a (@ (name ,cat)))
                (h3 (a (@ (href "#category-list"))
                       ,catname))
		(table
		 (tr (th "Name") (th "Description") (th "License") (th "Author") (th "Maintainer") (th "Version"))
		 ,@eggs)))))))
   +categories+))

(define (make-egg-entry egg)
  (call/cc 
   (lambda (return)
     (define (prop name def pred)
       (cond ((assq name (cdr egg)) => (o (cut check pred <> name) cadr))
	     (else def)))
     (define (check pred x p)
       (cond ((pred x) x)
	     (else
	      (warning "extension has .meta entry of incorrect type and will not be listed" (car egg) p x)
	      (return '()))))
     (d "  ~a   ~a" (car egg) (prop 'version "HEAD" any?))
     `((tr (td (a (@ (href ,(sprintf "http://wiki.call-cc.org/eggref/~a/~a" *major-version* (car egg))))
		  ,(symbol->string (car egg))))
	   (td ,(prop 'synopsis "unknown" string?))
	   (td ,(prop 'license "unknown" name?))
	   (td ,(linkify-names (prop 'author "unknown" name?)))
	   (td ,(linkify-names (prop 'maintainer "" name?)))
	   (td ,(prop 'version "" version?)))))))

;; Names are either raw HTML, or [[user name]] denoting a wiki link.
(define (linkify-names str)
  ;; Call MATCHED on (sub)matches and DID-NOT-MATCH on non-matches in STR,
  ;; and collect into a list.
  (define (transform irx str matched did-not-match)
    ;; IRREGEX-FOLD is exported for SVN trunk >= r14283, delete this if
    ;; installed Chicken is new enough.
    (define (irregex-fold irx kons knil str . o)
      (let* ((irx (irregex irx))
             (finish (if (pair? o) (car o) (lambda (i acc) acc)))
             (start (if (and (pair? o) (pair? (cdr o))) (cadr o) 0))
             (end (if (and (pair? o) (pair? (cdr o)) (pair? (cddr o)))
                      (caddr o)
                      (string-length str))))
        (let lp ((i start) (acc knil))
          (if (>= i end)
              (finish i acc)
              (let ((m (irregex-search irx str i end)))
                (if (not m)
                    (finish i acc)
                    (let* ((end (irregex-match-end m 0))
                           (acc (kons i m acc)))
                      (lp end acc))))))))
    (let ((irregex-match-start-index irregex-match-start)) ;; upcoming API change in irregex 0.7
      (irregex-fold irx
                    (lambda (i m s)
                      (cons (matched (irregex-match-substring m 1))
                            (cons (did-not-match
                                   (substring str i (irregex-match-start-index m 0)))
                                  s)))
                    '()
                    str
                    (lambda (i s)
                      (reverse (cons (did-not-match (substring str i))
                                     s))))))
  (transform
   +link-regexp+
   str
   (lambda (name)  ;; wiki username
     `(a (@ (href ,(string-append "http://wiki.call-cc.org/users/"
                                  (string-substitute " " "-" name 'global))))
         ,name))
   (lambda (x)     ;; raw HTML chunk
     `(literal ,x))))

(define name?
  (disjoin string? symbol?))

(define version?
  (disjoin string? number?))

(define (main args)
  (when *help* (usage 0))
  (match args
    ((dir)
     (make-egg-index dir))
    (() (make-egg-index "."))
    (_ (usage 1))))

(main (simple-args (command-line-arguments)))

