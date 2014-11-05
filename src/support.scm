;;;; support.scm - Miscellaneous support code for the CHICKEN compiler
;
; Copyright (c) 2008-2014, The CHICKEN Team
; Copyright (c) 2000-2007, Felix L. Winkelmann
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


(declare (unit support)
	 (not inline ##sys#user-read-hook) ; XXX: Is this needed?
	 (uses data-structures srfi-1 files extras ports) )

(module chicken.compiler.support
    (compiler-cleanup-hook bomb collected-debugging-output debugging
     debugging-chicken with-debugging-output quit-compiling
     emit-syntax-trace-info check-signature posq posv stringify symbolify
     build-lambda-list string->c-identifier c-ify-string valid-c-identifier?
     bytes->words words->bytes
     check-and-open-input-file close-checked-input-file fold-inner
     constant? collapsable-literal? immediate? basic-literal?
     canonicalize-begin-body string->expr llist-length llist-match?
     expand-profile-lambda reset-profile-info-vector-name!
     profiling-prelude-exps db-get db-get-all db-put! collect! db-get-list
     get-line get-line-2 display-line-number-database
     make-node node? node-class node-class-set!
     node-parameters node-parameters-set!
     node-subexpressions node-subexpressions-set! varnode qnode
     build-node-graph build-expression-tree fold-boolean inline-lambda-bindings
     tree-copy copy-node! emit-global-inline-file load-inline-file
     match-node expression-has-side-effects? simple-lambda-node?
     dump-undefined-globals dump-defined-globals dump-global-refs
     make-foreign-callback-stub foreign-callback-stub?
     foreign-callback-stub-id foreign-callback-stub-name
     foreign-callback-stub-qualifiers foreign-callback-stub-return-type
     foreign-callback-stub-argument-types register-foreign-callback-stub!
     foreign-callback-stubs 		; should not be exported
     foreign-type-check foreign-type-convert-result
     foreign-type-convert-argument final-foreign-type
     register-foreign-type! lookup-foreign-type clear-foreign-type-table!
     estimate-foreign-result-size estimate-foreign-result-location-size
     finish-foreign-result foreign-type->scrutiny-type scan-used-variables
     scan-free-variables chop-separator
     make-block-variable-literal block-variable-literal?
     block-variable-literal-name make-random-name
     clear-real-name-table! get-real-name set-real-name!
     real-name real-name2 display-real-name-table
     source-info->string source-info->line call-info constant-form-eval
     dump-nodes read-info-hook read/source-info big-fixnum?
     hide-variable export-variable variable-visible?
     mark-variable variable-mark intrinsic? foldable? load-identifier-database
     print-version print-usage print-debug-options

     ;; XXX: These are evil globals that were too hairy to get rid of.
     ;; These values are set! by compiler and batch-driver, and read
     ;; in a lot of other places.
     number-type unsafe)

(import chicken scheme foreign data-structures srfi-1 files extras ports)

(include "tweaks")
(include "banner")

;; Evil globals
(define number-type 'generic)
(define unsafe #f)

;;; Debugging and error-handling stuff:

(define (compiler-cleanup-hook) #f)

(define debugging-chicken '())

(define (bomb . msg-and-args)
  (if (pair? msg-and-args)
      (apply error (string-append "[internal compiler error] " (car msg-and-args)) (cdr msg-and-args))
      (error "[internal compiler error]") ) )

(define collected-debugging-output
  (open-output-string))

(define +logged-debugging-modes+ '(o x S))

(define (debugging mode msg . args)
  (define (text)
    (with-output-to-string
      (lambda ()
	(display msg)
	(when (pair? args)
	  (display ": ")
	  (for-each
	   (lambda (x) (printf "~s " (force x))) 
	   args) )
	(newline))))
  (define (dump txt)
    (fprintf collected-debugging-output "~a|~a" mode txt))
  (cond ((memq mode debugging-chicken)
	 (let ((txt (text)))
	   (display txt)
	   (flush-output)
	   (when (memq mode +logged-debugging-modes+)
	     (dump txt))
	   #t))
	(else
	 (when (memq mode +logged-debugging-modes+)
	   (dump (text)))
	 #f)))

(define (with-debugging-output mode thunk)
  (define (collect text)
    (for-each
     (lambda (ln)
       (fprintf collected-debugging-output "~a|~a~%"
	 (if (pair? mode) (car mode) mode)
	 ln))
     (string-split text "\n")))
  (define (test-mode mode set)
    (if (symbol? mode)
	(memq mode set)
	(pair? (lset-intersection eq? mode set))))
  (cond ((test-mode mode debugging-chicken)
	 (let ((txt (with-output-to-string thunk)))
	   (display txt)
	   (flush-output)
	   (when (test-mode mode +logged-debugging-modes+)
	     (collect txt))))
	((test-mode mode +logged-debugging-modes+)
	 (collect (with-output-to-string thunk)))))

(define (quit-compiling msg . args)
  (let ([out (current-error-port)])
    (apply fprintf out (string-append "\nError: " msg) args)
    (newline out)
    (exit 1) ) )

(set! ##sys#syntax-error-hook
  (lambda (msg . args)
    (let ((out (current-error-port))
	  (loc (and (symbol? msg) 
		    (let ((loc msg))
		      (set! msg (car args))
		      (set! args (cdr args))
		      loc))))
      (if loc
	  (fprintf out "\nSyntax error (~a): ~a~%~%" loc msg) 
	  (fprintf out "\nSyntax error: ~a~%~%" msg) )
      (for-each (cut fprintf out "\t~s~%" <>) args)
      (print-call-chain out 0 ##sys#current-thread "\n\tExpansion history:\n")
      (exit 70) ) ) )

(set! syntax-error ##sys#syntax-error-hook)

;; Move to C-platform?
(define (emit-syntax-trace-info info cntr) 
  (##core#inline "C_emit_syntax_trace_info" info cntr ##sys#current-thread) )

(define (map-llist proc llist)
  (let loop ([llist llist])
    (cond [(null? llist) '()]
	  [(symbol? llist) (proc llist)]
	  [else (cons (proc (car llist)) (loop (cdr llist)))] ) ) )

;; XXX: Shouldn't this be in optimizer.scm?
(define (check-signature var args llist)
  (define (err)
    (quit-compiling
     "Arguments to inlined call of `~A' do not match parameter-list ~A" 
     (real-name var)
     (map-llist real-name (cdr llist)) ) )
  (let loop ([as args] [ll llist])
    (cond [(null? ll) (unless (null? as) (err))]
	  [(symbol? ll)]
	  [(null? as) (err)]
	  [else (loop (cdr as) (cdr ll))] ) ) )


;;; Generic utility routines:

;; XXX: Don't posq and posv belong better in library or data-structures?
(define (posq x lst)
  (let loop ([lst lst] [i 0])
    (cond [(null? lst) #f]
	  [(eq? x (car lst)) i]
	  [else (loop (cdr lst) (add1 i))] ) ) )

(define (posv x lst)
  (let loop ([lst lst] [i 0])
    (cond [(null? lst) #f]
	  [(eqv? x (car lst)) i]
	  [else (loop (cdr lst) (add1 i))] ) ) )

(define (stringify x)
  (cond ((string? x) x)
	((symbol? x) (symbol->string x))
	(else (sprintf "~a" x)) ) )

(define (symbolify x)
  (cond ((symbol? x) x)
	((string? x) (string->symbol x))
	(else (string->symbol (sprintf "~a" x))) ) )

(define (build-lambda-list vars argc rest)
  (let loop ((vars vars) (n argc))
    (cond ((or (zero? n) (null? vars)) (or rest '()))
          (else (cons (car vars) (loop (cdr vars) (sub1 n)))) ) ) )

;; XXX: This seems to belong to c-platform, but why is it defined in eval.scm?
(define string->c-identifier ##sys#string->c-identifier)

;; XXX: Put this too in c-platform or c-backend?
(define (c-ify-string str)
  (list->string
   (cons 
    #\"
    (let loop ((chars (string->list str)))
      (if (null? chars)
	  '(#\")
	  (let* ((c (car chars))
		 (code (char->integer c)) )
	    (if (or (< code 32) (>= code 127) (memq c '(#\" #\' #\\ #\? #\*)))
		(append '(#\\)
			(cond ((< code 8) '(#\0 #\0))
			      ((< code 64) '(#\0))
			      (else '()) )
			(string->list (number->string code 8))
			(loop (cdr chars)) )
		(cons c (loop (cdr chars))) ) ) ) ) ) ) )

;; XXX: This too, but it's used only in compiler.scm, WTF?
(define (valid-c-identifier? name)
  (let ([str (string->list (->string name))])
    (and (pair? str)
	 (let ([c0 (car str)])
	   (and (or (char-alphabetic? c0) (char=? #\_ c0))
		(any (lambda (c) (or (char-alphabetic? c) (char-numeric? c) (char=? #\_ c)))
		     (cdr str) ) ) ) ) ) )

(eval-when (load)
  (define bytes->words (foreign-lambda int "C_bytestowords" int)) 
  (define words->bytes (foreign-lambda int "C_wordstobytes" int)) )

(eval-when (eval)
  (define (bytes->words n)
    (let ([wordsize (##sys#fudge 7)])
      (+ (quotient n wordsize) (if (zero? (modulo n wordsize)) 0 1)) ) )
  (define (words->bytes n)
    (* n (##sys#fudge 7)) ) )

;; Used only in batch-driver; move it there?
(define (check-and-open-input-file fname . line)
  (cond ((string=? fname "-") (current-input-port))
	((file-exists? fname) (open-input-file fname))
	((or (null? line) (not (car line)))
	 (quit-compiling "Can not open file ~s" fname))
	(else (quit-compiling "(~a) can not open file ~s" (car line) fname)) ) )

(define (close-checked-input-file port fname)
  (unless (string=? fname "-") (close-input-port port)) )

(define (fold-inner proc lst)
  (if (null? (cdr lst)) 
      lst
      (let fold ((xs (reverse lst)))
	(apply
	 proc 
	 (if (null? (cddr xs))
	     (list (cadr xs) (car xs))
	     (list (fold (cdr xs)) (car xs)) ) ) ) ) )

(define (follow-without-loop seed proc abort)
  (let loop ([x seed] [done '()])
    (if (member x done)
	(abort)
	(proc x (lambda (x2) (loop x2 (cons x done)))) ) ) )

(define (sort-symbols lst)
  (sort lst (lambda (s1 s2) (string<? (symbol->string s1) (symbol->string s2)))))


;;; Predicates on expressions and literals:

(define (constant? x)
  (or (number? x)
      (char? x)
      (string? x)
      (boolean? x)
      (eof-object? x)
      (blob? x)
      (vector? x)
      (##sys#srfi-4-vector? x)
      (and (pair? x) (eq? 'quote (car x))) ) )

(define (collapsable-literal? x)
  (or (boolean? x)
      (char? x)
      (eof-object? x)
      (number? x)
      (symbol? x) ) )

(define (immediate? x)
  (or (and (fixnum? x) (not (big-fixnum? x))) ; 64-bit fixnums would result in platform-dependent .c files
      (eq? (##core#undefined) x)
      (null? x)
      (eof-object? x)
      (char? x)
      (boolean? x) ) )

(define (basic-literal? x)
  (or (null? x)
      (symbol? x)
      (constant? x)
      (and (vector? x) (every basic-literal? (vector->list x)))
      (and (pair? x) 
	   (basic-literal? (car x))
	   (basic-literal? (cdr x)) ) ) )


;;; Expression manipulation:

(define (canonicalize-begin-body body)
  (let loop ((xs body))
    (cond ((null? xs) '(##core#undefined))
	  ((null? (cdr xs)) (car xs))
	  ((let ([h (car xs)])
	     (or (equal? h '(##core#undefined))
		 (constant? h) 
		 (equal? h '(##sys#void)) ) )
	   (loop (cdr xs)) )
	  (else `(let ((,(gensym 't) ,(car xs)))
		   ,(loop (cdr xs))) ) ) ) )

;; Only used in batch-driver: move it there?
(define string->expr
  (let ([exn? (condition-predicate 'exn)]
	[exn-msg (condition-property-accessor 'exn 'message)] )
    (lambda (str)
      (handle-exceptions ex
	  (quit-compiling "cannot parse expression: ~s [~a]~%" 
			  str
			  (if (exn? ex) 
			      (exn-msg ex)
			      (->string ex) ) ) 
	(let ([xs (with-input-from-string
		      str
		    (lambda () (unfold eof-object? values (lambda (x) (read)) (read))))])
	  (cond [(null? xs) '(##core#undefined)]
		[(null? (cdr xs)) (car xs)]
		[else `(begin ,@xs)] ) ) ) ) ) )

;; Only used in optimizer; move it there?  But it's a C function call, so
;; it may be better in c-platform
(define (llist-length llist)
  (##core#inline "C_u_i_length" llist))	; stops at non-pair node

(define (llist-match? llist args)	; assumes #!optional/#!rest/#!key have been expanded
  (let loop ((llist llist) (args args))
    (cond ((null? llist) (null? args))
	  ((symbol? llist))
	  ((null? args) (atom? llist))
	  (else (loop (cdr llist) (cdr args))))))


;;; Profiling instrumentation:
(define profile-info-vector-name #f)
(define (reset-profile-info-vector-name!)
  (set! profile-info-vector-name (make-random-name 'profile-info)))

(define profile-lambda-list '())
(define profile-lambda-index 0)

(define (expand-profile-lambda name llist body)
  (let ([index profile-lambda-index] 
	[args (gensym)] )
    (set! profile-lambda-list (alist-cons index name profile-lambda-list))
    (set! profile-lambda-index (add1 index))
    `(##core#lambda ,args
       (##sys#dynamic-wind
	(##core#lambda () (##sys#profile-entry ',index ,profile-info-vector-name))
	(##core#lambda () (##sys#apply (##core#lambda ,llist ,body) ,args))
	(##core#lambda () (##sys#profile-exit ',index ,profile-info-vector-name)) ) ) ) )

;; Get expressions which initialize and populate the profiling vector
(define (profiling-prelude-exps profile-name)
  `((set! ,profile-info-vector-name 
      (##sys#register-profile-info
       ',(length profile-lambda-list)
       ',profile-name))
    ,@(map (lambda (pl)
	     `(##sys#set-profile-info-vector!
	       ,profile-info-vector-name
	       ',(car pl)
	       ',(cdr pl) ) )
	   profile-lambda-list)))

;;; Database operations:

(define (db-get db key prop)
  (let ((plist (##sys#hash-table-ref db key)))
    (and plist
	 (let ([a (assq prop plist)])
	   (and a (##sys#slot a 1)) ) ) ) )

(define (db-get-all db key . props)
  (let ((plist (##sys#hash-table-ref db key)))
    (if plist
	(filter-map (lambda (prop) (assq prop plist)) props)
	'() ) ) )

(define (db-put! db key prop val)
  (let ([plist (##sys#hash-table-ref db key)])
    (if plist
	(let ([a (assq prop plist)])
	  (cond [a (##sys#setslot a 1 val)]
		[val (##sys#setslot plist 1 (alist-cons prop val (##sys#slot plist 1)))] ) )
	(when val (##sys#hash-table-set! db key (list (cons prop val)))) ) ) )

(define (collect! db key prop val)
  (let ((plist (##sys#hash-table-ref db key)))
    (if plist
	(let ([a (assq prop plist)])
	  (cond [a (##sys#setslot a 1 (cons val (##sys#slot a 1)))]
		[else (##sys#setslot plist 1 (alist-cons prop (list val) (##sys#slot plist 1)))] ) )
	(##sys#hash-table-set! db key (list (list prop val)))) ) )

(define (db-get-list db key prop)		; returns '() if not set
  (let ((x (db-get db key prop)))
    (or x '())))


;;; Line-number database management:

(define (get-line exp)
  (db-get ##sys#line-number-database (car exp) exp) )

(define (get-line-2 exp)
  (let* ((name (car exp))
	 (lst (##sys#hash-table-ref ##sys#line-number-database name)) )
    (cond ((and lst (assq exp (cdr lst)))
	   => (lambda (a) (values (car lst) (cdr a))) )
	  (else (values name #f)) ) ) )

(define (display-line-number-database)
  (##sys#hash-table-for-each
   (lambda (key val)
     (when val (printf "~S ~S~%" key (map cdr val))) )
   ##sys#line-number-database) )


;;; Node creation and -manipulation:

;; Note: much of this stuff will be overridden by the inline-definitions in "tweaks.scm".

(define-record-type node
  (make-node class parameters subexpressions)
  node?
  (class node-class node-class-set!)	; symbol
  (parameters node-parameters node-parameters-set!) ; (value...)
  (subexpressions node-subexpressions node-subexpressions-set!)) ; (node...)

(define-record-printer (node n out)
  (fprintf out "#<node ~a ~a>" (node-class n) (node-parameters n)))

(define (make-node c p s)
  (##sys#make-structure 'node c p s) ) ; this kludge is for allowing the inlined `make-node'

(define (varnode var) (make-node '##core#variable (list var) '()))
(define (qnode const) (make-node 'quote (list const) '()))

(define (build-node-graph exp)
  (let ((count 0))
    (define (walk x)
      (cond ((symbol? x) (varnode x))
	    ((node? x) x)
	    ((not-pair? x) (bomb "bad expression" x))
	    ((symbol? (car x))
	     (case (car x)
	       ((if ##core#undefined) (make-node (car x) '() (map walk (cdr x))))
	       ((quote)
		(let ((c (cadr x)))
		  (qnode (if (and (number? c)
				  (eq? 'fixnum number-type)
				  (not (integer? c)) )
			     (begin
			       (warning
				"literal is out of range - will be truncated to integer" c)
			       (inexact->exact (truncate c)) )
			     c) ) ) )
	       ((let)
		(let ([bs (cadr x)]
		      [body (caddr x)] )
		  (if (null? bs)
		      (walk body)
		      (make-node
		       'let 
		       (map (lambda (v) 
			      ;; for temporaries introduced by specialization
			      (if (eq? '#:tmp v) (error "SHOULD NOT HAPPEN") v)) ; OBSOLETE
			    (unzip1 bs))
		       (append (map (lambda (b) (walk (cadr b))) (cadr x))
			       (list (walk body)) ) ) ) ) )
	       ((lambda ##core#lambda) 
		(make-node 'lambda (list (cadr x)) (list (walk (caddr x)))))
	       ((##core#the)
		(make-node '##core#the
			   (list (second x) (third x))
			   (list (walk (fourth x)))))
	       ((##core#typecase)
		;; clause-head is already stripped
		(let loop ((cls (cdddr x)) (types '()) (exps (list (walk (caddr x)))))
		  (cond ((null? cls) 	; no "else" clause given
			 (make-node
			  '##core#typecase 
			  (cons (cadr x) (reverse types))
			  (reverse
			   (cons (make-node '##core#undefined '() '()) exps))))
			((eq? 'else (caar cls))
			 (make-node
			  '##core#typecase
			  (cons (cadr x) (reverse (cons '* types)))
			  (reverse (cons (walk (cadar cls)) exps))))
			(else (loop (cdr cls)
				    (cons (caar cls) types)
				    (cons (walk (cadar cls)) exps))))))
	       ((##core#primitive)
		(let ((arg (cadr x)))
		  (make-node
		   (car x)
		   (list (if (and (pair? arg) (eq? 'quote (car arg))) (cadr arg) arg))
		   (map walk (cddr x)) ) ) )
	       ((##core#inline ##core#callunit) 
		(make-node (car x) (list (cadr x)) (map walk (cddr x))) )
	       ((##core#proc)
		(make-node '##core#proc (list (cadr x) #t) '()) )
	       ((set! ##core#set!)
		(make-node
		 'set! (list (cadr x))
		 (map walk (cddr x))))
	       ((##core#foreign-callback-wrapper)
		(let ([name (cadr (second x))])
		  (make-node
		   '##core#foreign-callback-wrapper
		   (list name (cadr (third x)) (cadr (fourth x)) (cadr (fifth x)))
		   (list (walk (sixth x))) ) ) )
	       ((##core#inline_allocate ##core#inline_ref ##core#inline_update
					##core#inline_loc_ref ##core#inline_loc_update)
		(make-node (first x) (second x) (map walk (cddr x))) )
	       ((##core#app)
		(make-node '##core#call (list #t) (map walk (cdr x))) )
	       (else
		(receive (name ln) (get-line-2 x)
		  (make-node
		   '##core#call
		   (list (cond [(variable-mark name '##compiler#always-bound-to-procedure)
				(set! count (add1 count))
				#t]
			       [else #f] )
			 (if ln
			     (let ([rn (real-name name)])
			       (list ln
				     (or rn (##sys#symbol->qualified-string name))) )
			     (##sys#symbol->qualified-string name) ) )
		   (map walk x) ) ) ) ) )
	    (else (make-node '##core#call (list #f) (map walk x))) ) )
    (let ([exp2 (walk exp)])
      (when (positive? count)
	(debugging 'o "eliminated procedure checks" count)) ;XXX perhaps throw this out
      exp2) ) )

(define (build-expression-tree node)
  (let walk ((n node))
    (let ((subs (node-subexpressions n))
	  (params (node-parameters n)) 
	  (class (node-class n)) )
      (case class
	((if ##core#box ##core#cond) (cons class (map walk subs)))
	((##core#closure)
	 `(##core#closure ,params ,@(map walk subs)) )
	((##core#variable) (car params))
	((quote)
	 (let ((c (car params)))
	   (if (or (boolean? c) (string? c) (number? c) (char? c))
	       c
	       `(quote ,(car params)))))
	((let)
	 `(let ,(map list params (map walk (butlast subs)))
	    ,(walk (last subs)) ) )
	((##core#lambda) 
	 (list (if (second params)
		   'lambda
		   '##core#lambda)
	       (third params)
	       (walk (car subs)) ) )
	((##core#the)
	 `(the ,(first params) ,(walk (first subs))))
	((##core#the/result)
	 (walk (first subs)))
	((##core#typecase)
	 `(compiler-typecase
	   ,(walk (first subs))
	   ,@(let loop ((types (cdr params)) (bodies (cdr subs)))
	       (if (null? types)
		   (if (null? bodies)
		       '()
		       `((else ,(walk (car bodies)))))
		   (cons (list (car types) (walk (car bodies)))
			 (loop (cdr types) (cdr bodies)))))))
	((##core#call) 
	 (map walk subs))
	((##core#callunit) (cons* '##core#callunit (car params) (map walk subs)))
	((##core#undefined) (list class))
	((##core#bind) 
	 (let loop ((n (car params)) (vals subs) (bindings '()))
	   (if (zero? n)
	       `(##core#bind ,(reverse bindings) ,(walk (car vals)))
	       (loop (- n 1) (cdr vals) (cons (walk (car vals)) bindings)) ) ) )
	((##core#unbox ##core#ref ##core#update ##core#update_i)
	 (cons* class (walk (car subs)) params (map walk (cdr subs))) ) 
	((##core#inline_allocate ##core#let_unboxed)
	 (cons* class params (map walk subs)))
	(else (cons class (append params (map walk subs)))) ) ) ) )

(define (fold-boolean proc lst)
  (let fold ([vars lst])
    (if (null? (cddr vars))
	(apply proc vars)
	(make-node 
	 '##core#inline '("C_and") 
	 (list (proc (first vars) (second vars))
	       (fold (cdr vars)) ) ) ) ) )

;; Move to optimizer.scm?
(define (inline-lambda-bindings llist args body copy? db cfk)
  (##sys#decompose-lambda-list
   llist
   (lambda (vars argc rest)
     (receive (largs rargs) (split-at args argc)
       (let* ([rlist (if copy? (map gensym vars) vars)]
	      [body (if copy? 
			(copy-node-tree-and-rename body vars rlist db cfk)
			body) ] )
	 (fold-right
	  (lambda (var val body) (make-node 'let (list var) (list val body)) )
	  (if rest
	      (make-node
	       'let (list (last rlist))
	       (list (if (null? rargs)
			 (qnode '())
			 (make-node
			  '##core#inline_allocate
			  (list "C_a_i_list" (* 3 (length rargs))) 
			  rargs) )
		     body) )
	      body)
	  (take rlist argc)
	  largs) ) ) ) ) )

;; Copy along with the above
(define (copy-node-tree-and-rename node vars aliases db cfk)
  (let ((rlist (map cons vars aliases)))
    (define (rename v rl) (alist-ref v rl eq? v))
    (define (walk n rl)
      (let ((subs (node-subexpressions n))
	    (params (node-parameters n))
	    (class (node-class n)) )
	(case class
	  ((quote)
	   (make-node class params '()))
	  ((##core#variable) 
	   (let ((var (first params)))
	     (when (db-get db var 'contractable)
	       (cfk var))
	     (varnode (rename var rl))) )
	  ((set!) 
	   (make-node
	    'set! (list (rename (first params) rl))
	    (list (walk (first subs) rl)) ) )
	  ((let) 
	   (let* ((v (first params))
		  (val1 (walk (first subs) rl))
		  (a (gensym v))
		  (rl2 (alist-cons v a rl)) )
	     (db-put! db a 'inline-transient #t)
	     (make-node 
	      'let (list a)
	      (list val1 (walk (second subs) rl2)))) )
	  ((##core#lambda)
	   (##sys#decompose-lambda-list
	    (third params)
	    (lambda (vars argc rest)
	      (let* ((as (map (lambda (v)
				(let ((a (gensym v)))
				  (db-put! db v 'inline-transient #t)
				  a))
			      vars) )
		     (rl2 (append (map cons vars as) rl)) )
		(make-node 
		 '##core#lambda
		 (list (gensym 'f) (second params) ; new function-id
		       (build-lambda-list as argc (and rest (rename rest rl2)))
		       (fourth params) )
		 (map (cut walk <> rl2) subs) ) ) ) ) )
	  (else (make-node class (tree-copy params)
			   (map (cut walk <> rl) subs))) ) ) )
    (walk node rlist) ) )

;; Maybe move to scrutinizer.  It's generic enough to keep it here though
(define (tree-copy t)
  (let rec ([t t])
    (if (pair? t)
	(cons (rec (car t)) (rec (cdr t)))
	t) ) )

(define (copy-node! from to)
  (node-class-set! to (node-class from))
  (node-parameters-set! to (node-parameters from))
  (node-subexpressions-set! to (node-subexpressions from)) 
  to)

(define (node->sexpr n)
  (let walk ((n n))
    `(,(node-class n)
      ,(node-parameters n)
      ,@(map walk (node-subexpressions n)))))

(define (sexpr->node x)
  (let walk ((x x))
    (make-node (car x) (cadr x) (map walk (cddr x)))))

;; Only used in batch-driver.scm
(define (emit-global-inline-file source-file inline-file db
				 block-compilation inline-limit)
  (let ((lst '())
	(out '()))
    (##sys#hash-table-for-each
     (lambda (sym plist)
       (when (variable-visible? sym block-compilation)
	 (and-let* ((val (assq 'local-value plist))
		    ((not (node? (variable-mark sym '##compiler#inline-global))))
		    ((let ((val (assq 'value plist)))
		       (or (not val)
			   (not (eq? 'unknown (cdr val))))))
		    ((assq 'inlinable plist))
		    (lparams (node-parameters (cdr val)))
		    ((not (db-get db sym 'hidden-refs)))
		    ((case (variable-mark sym '##compiler#inline)
		       ((yes) #t)
		       ((no) #f)
		       (else 
			(< (fourth lparams) inline-limit) ) ) ) )
	   (set! lst (cons sym lst))
	   (set! out (cons (list sym (node->sexpr (cdr val))) out)))))
     db)
    (if (null? out)
	(delete-file* inline-file)
	(with-output-to-file inline-file
	  (lambda ()
	    (print "; GENERATED BY CHICKEN " (chicken-version) " FROM "
		   source-file "\n")
	    (for-each
	     (lambda (x)
	       (pp x)
	       (newline))
	     (reverse out))
	    (print "; END OF FILE"))))
    (when (and (pair? lst)
	       (debugging 'i "the following procedures can be globally inlined:"))
      (for-each (cut print "  " <>) (sort-symbols lst)))))

;; Used only in batch-driver.scm
(define (load-inline-file fname)
  (with-input-from-file fname
    (lambda ()
      (let loop ()
	(let ((x (read)))
	  (unless (eof-object? x)
	    (mark-variable 
	     (car x)
	     '##compiler#inline-global 
	     (sexpr->node (cadr x)))
	    (loop)))))))


;;; Match node-structure with pattern:

(define (match-node node pat vars)	; Only used in optimizer.scm
  (let ((env '()))

    (define (resolve v x)
      (cond ((assq v env) => (lambda (a) (equal? x (cdr a))))
	    ((memq v vars)
	     (set! env (alist-cons v x env))
	     #t)
	    (else (eq? v x)) ) )

    (define (match1 x p)
      (cond ((not-pair? p) (resolve p x))
	    ((not-pair? x) #f)
	    ((match1 (car x) (car p)) (match1 (cdr x) (cdr p)))
	    (else #f) ) )
    
    (define (matchn n p)
      (if (not-pair? p)
	  (resolve p n)
	  (and (eq? (node-class n) (first p))
	       (match1 (node-parameters n) (second p))
	       (let loop ((ns (node-subexpressions n))
			  (ps (cddr p)) )
		 (cond ((null? ps) (null? ns))
		       ((not-pair? ps) (resolve ps ns))
		       ((null? ns) #f)
		       (else (and (matchn (car ns) (car ps))
				  (loop (cdr ns) (cdr ps)) ) ) ) ) ) ) )

    (let ((r (matchn node pat)))
      (and r
	   (begin
	     (debugging 'a "matched" (node-class node) (node-parameters node) pat)
	     env) ) ) ) )


;;; Test nodes for certain properties:

(define (expression-has-side-effects? node db)
  (let walk ([n node])
    (let ([subs (node-subexpressions n)])
      (case (node-class n)
	[(##core#variable quote ##core#undefined ##core#proc) #f]
	[(##core#lambda) 
	 (let ([id (first (node-parameters n))])
	   (find (lambda (fs)
		   (eq? id (foreign-callback-stub-id fs)))
		 foreign-callback-stubs) ) ]
	[(if let) (any walk subs)]
	[else #t] ) ) ) )

(define (simple-lambda-node? node)	; Used only in compiler.scm
  (let* ([params (node-parameters node)]
	 [llist (third params)]
	 [k (and (pair? llist) (first llist))] ) ; leaf-routine has no continuation argument
    (and k 
	 (second params)
	 (let rec ([n node])
	   (case (node-class n)
	     [(##core#call)
	      (let* ([subs (node-subexpressions n)]
		     [f (first subs)] )
		(and (eq? '##core#variable (node-class f)) 
		     (eq? k (first (node-parameters f)))
		     (every rec (cdr subs)) ) ) ]
	     [(##core#callunit) #f]
	     [else (every rec (node-subexpressions n))] ) ) ) ) )


;;; Some safety checks and database dumping:

(define (dump-undefined-globals db)	; Used only in batch-driver.scm
  (##sys#hash-table-for-each
   (lambda (sym plist)
     (when (and (not (keyword? sym))
		(assq 'global plist)
		(not (assq 'assigned plist)) )
       (write sym)
       (newline) ) )
   db) )

(define (dump-defined-globals db)	; Used only in batch-driver.scm
  (##sys#hash-table-for-each
   (lambda (sym plist)
     (when (and (not (keyword? sym))
		(assq 'global plist)
		(assq 'assigned plist))
       (write sym)
       (newline) ) )
   db) )

(define (dump-global-refs db)		; Used only in batch-driver.scm
  (##sys#hash-table-for-each
   (lambda (sym plist)
     (when (and (not (keyword? sym)) (assq 'global plist))
       (let ((a (assq 'references plist)))
	 (write (list sym (if a (length (cdr a)) 0)))
	 (newline) ) ) )
   db) )


;;; change hook function to hide non-exported module bindings

(set! ##sys#toplevel-definition-hook
  (lambda (sym mod exp val)
    (when (and (not val) (not exp))
      (debugging 'o "hiding nonexported module bindings" sym)
      (hide-variable sym))))

;;; Foreign callback stub and type tables:

(define foreign-callback-stubs '())

(define-record-type foreign-callback-stub
  (make-foreign-callback-stub id name qualifiers return-type argument-types)
  foreign-callback-stub?
  (id foreign-callback-stub-id)		; symbol
  (name foreign-callback-stub-name)	; string
  (qualifiers foreign-callback-stub-qualifiers)	; string
  (return-type foreign-callback-stub-return-type) ; type-specifier
  (argument-types foreign-callback-stub-argument-types)) ; (type-specifier ...)

(define (register-foreign-callback-stub! id params)
  (set! foreign-callback-stubs
    (cons (apply make-foreign-callback-stub id params) foreign-callback-stubs) )
  ;; mark to avoid leaf-routine optimization
  (mark-variable id '##compiler#callback-lambda))

(define-constant foreign-type-table-size 301)

(define foreign-type-table #f)

(define (clear-foreign-type-table!)
  (if foreign-type-table
      (vector-fill! foreign-type-table '())
      (set! foreign-type-table (make-vector foreign-type-table-size '())) ))

;; Register a foreign type under the given alias.  type is the foreign
;; type's name, arg and ret are the *names* of conversion procedures
;; when this type is used as argument or return value, respectively.
;; The latter two must either both be supplied, or neither.
;; TODO: Maybe create a separate record type for foreign types?
(define (register-foreign-type! alias type #!optional arg ret)
  (##sys#hash-table-set! foreign-type-table alias
			 (vector type (and ret arg) (and arg ret))))

;; Returns either #f (if t does not exist) or a vector with the type,
;; the *name* of the argument conversion procedure and the *name* of
;; the return value conversion procedure.  If no conversion procedures
;; have been supplied, the corresponding slots will be #f.
(define (lookup-foreign-type t)
  (##sys#hash-table-ref foreign-type-table t))

;;; Create foreign type checking expression:

(define foreign-type-check		; Used only in compiler.scm
  (let ((tmap '((nonnull-u8vector . u8vector) (nonnull-u16vector . u16vector)
		(nonnull-s8vector . s8vector) (nonnull-s16vector . s16vector)
		(nonnull-u32vector . u32vector) (nonnull-s32vector . s32vector)
		(nonnull-f32vector . f32vector) (nonnull-f64vector . f64vector))))
    (lambda (param type)
      (follow-without-loop
       type
       (lambda (t next)
	 (let repeat ((t t))
	   (case t
	     ((char unsigned-char) (if unsafe param `(##sys#foreign-char-argument ,param)))
	     ((int unsigned-int short unsigned-short byte unsigned-byte int32 unsigned-int32)
	      (if unsafe param `(##sys#foreign-fixnum-argument ,param)))
	     ((float double number) (if unsafe param `(##sys#foreign-flonum-argument ,param)))
	     ((blob scheme-pointer)
	      (let ((tmp (gensym)))
		`(let ((,tmp ,param))
		   (if ,tmp
		       ,(if unsafe
			    tmp
			    `(##sys#foreign-block-argument ,tmp) )
		       '#f) ) ) )
	     ((nonnull-scheme-pointer nonnull-blob)
	      (if unsafe
		  param
		  `(##sys#foreign-block-argument ,param) ) )
	     ((pointer-vector)
	      (let ((tmp (gensym)))
		`(let ((,tmp ,param))
		   (if ,tmp
		       ,(if unsafe
			    tmp
			    `(##sys#foreign-struct-wrapper-argument 'pointer-vector ,tmp) )
		       '#f) ) ) )
	     ((nonnull-pointer-vector)
	      (if unsafe
		  param
		  `(##sys#foreign-struct-wrapper-argument 'pointer-vector ,param) ) )
	     ((u8vector u16vector s8vector s16vector u32vector s32vector f32vector f64vector)
	      (let ((tmp (gensym)))
		`(let ((,tmp ,param))
		   (if ,tmp
		       ,(if unsafe
			    tmp
			    `(##sys#foreign-struct-wrapper-argument ',t ,tmp) )
		       '#f) ) ) )
	     ((nonnull-u8vector nonnull-u16vector nonnull-s8vector nonnull-s16vector nonnull-u32vector nonnull-s32vector 
				nonnull-f32vector nonnull-f64vector)
	      (if unsafe
		  param
		  `(##sys#foreign-struct-wrapper-argument 
		    ',(##sys#slot (assq t tmap) 1)
		    ,param) ) )
	     ((integer long size_t integer32)
	      (if unsafe param `(##sys#foreign-integer-argument ,param)))
	     ((integer64)
	      (if unsafe param `(##sys#foreign-integer64-argument ,param)))
	     ((unsigned-integer unsigned-integer32 unsigned-long)
	      (if unsafe
		  param
		  `(##sys#foreign-unsigned-integer-argument ,param) ) )
	     ((unsigned-integer64)
	      (if unsafe
		  param
		  `(##sys#foreign-unsigned-integer64-argument ,param) ) )
	     ((c-pointer c-string-list c-string-list*)
	      (let ((tmp (gensym)))
		`(let ((,tmp ,param))
		   (if ,tmp
		       (##sys#foreign-pointer-argument ,tmp)
		       '#f) ) ) )
	     ((nonnull-c-pointer)
	      `(##sys#foreign-pointer-argument ,param) )
	     ((c-string c-string* unsigned-c-string unsigned-c-string*)
	      (let ((tmp (gensym)))
		`(let ((,tmp ,param))
		   (if ,tmp
		       ,(if unsafe 
			    `(##sys#make-c-string ,tmp)
			    `(##sys#make-c-string (##sys#foreign-string-argument ,tmp)) )
		       '#f) ) ) )
	     ((nonnull-c-string nonnull-c-string* nonnull-unsigned-c-string*)
	      (if unsafe 
		  `(##sys#make-c-string ,param)
		  `(##sys#make-c-string (##sys#foreign-string-argument ,param)) ) )
	     ((symbol)
	      (if unsafe 
		  `(##sys#make-c-string (##sys#symbol->string ,param))
		  `(##sys#make-c-string (##sys#foreign-string-argument (##sys#symbol->string ,param))) ) )
	     (else
	      (cond ((and (symbol? t) (lookup-foreign-type t))
		     => (lambda (t) (next (vector-ref t 0)) ) )
		    ((pair? t)
		     (case (car t)
		       ((ref pointer function c-pointer)
			(let ((tmp (gensym)))
			  `(let ((,tmp ,param))
			     (if ,tmp
				 (##sys#foreign-pointer-argument ,tmp)
				 '#f) ) )  )
		       ((instance instance-ref)
			(let ((tmp (gensym)))
			  `(let ((,tmp ,param))
			     (if ,tmp
				 (slot-ref ,param 'this)
				 '#f) ) ) )
		       ((scheme-pointer)
			(let ((tmp (gensym)))
			  `(let ((,tmp ,param))
			     (if ,tmp
				 ,(if unsafe
				      tmp
				      `(##sys#foreign-block-argument ,tmp) )
				 '#f) ) ) )
		       ((nonnull-scheme-pointer)
			(if unsafe
			    param
			    `(##sys#foreign-block-argument ,param) ) )
		       ((nonnull-instance)
			`(slot-ref ,param 'this) )
		       ((const) (repeat (cadr t)))
		       ((enum)
			(if unsafe param `(##sys#foreign-integer-argument ,param)))
		       ((nonnull-pointer nonnull-c-pointer)
			`(##sys#foreign-pointer-argument ,param) )
		       (else param) ) )
		    (else param) ) ) ) ) )
       (lambda ()
	 (quit-compiling "foreign type `~S' refers to itself" type)) ) ) ) )


;;; Compute foreign-type conversions:

(define (foreign-type-convert-result r t) ; Used only in compiler.scm
  (or (and-let* (((symbol? t))
		 (ft (lookup-foreign-type t)) 
		 (retconv (vector-ref ft 2)) )
	(list retconv r) )
      r) )

(define (foreign-type-convert-argument a t) ; Used only in compiler.scm
  (or (and-let* (((symbol? t))
		 (ft (lookup-foreign-type t))
		 (argconv (vector-ref ft 1)) )
	(list argconv a) )
      a) )

(define (final-foreign-type t0)		; Used only in compiler.scm
  (follow-without-loop
   t0
   (lambda (t next)
     (cond ((and (symbol? t) (lookup-foreign-type t))
	    => (lambda (t2) (next (vector-ref t2 0)) ) )
	   (else t) ) )
   (lambda () (quit-compiling "foreign type `~S' refers to itself" t0)) ) )


;;; Compute foreign result size:

(define (estimate-foreign-result-size type)
  (follow-without-loop
   type
   (lambda (t next)
     (case t
       ((char int short bool void unsigned-short scheme-object unsigned-char unsigned-int byte unsigned-byte
	      int32 unsigned-int32) 
	0)
       ((c-string nonnull-c-string c-pointer nonnull-c-pointer symbol c-string* nonnull-c-string*
                  unsigned-c-string unsigned-c-string* nonnull-unsigned-c-string*
		  c-string-list c-string-list*)
	(words->bytes 3) )
       ((unsigned-integer long integer size_t unsigned-long integer32 unsigned-integer32)
	(words->bytes 4) )
       ((float double number integer64 unsigned-integer64) 
	(words->bytes 4) )		; possibly 8-byte aligned 64-bit double
       (else
	(cond ((and (symbol? t) (lookup-foreign-type t))
	       => (lambda (t2) (next (vector-ref t2 0)) ) )
	      ((pair? t)
	       (case (car t)
		 ((ref nonnull-pointer pointer c-pointer nonnull-c-pointer function instance instance-ref nonnull-instance) 
		  (words->bytes 3) )
		 (else 0) ) )
	      (else 0) ) ) ) )
   (lambda () (quit-compiling "foreign type `~S' refers to itself" type)) ) )

(define (estimate-foreign-result-location-size type) ; Used only in compiler.scm
  (define (err t) 
    (quit-compiling "cannot compute size of location for foreign type `~S'" t) )
  (follow-without-loop
   type
   (lambda (t next)
     (case t
       ((char int short bool unsigned-short unsigned-char unsigned-int long unsigned-long byte unsigned-byte
	      c-pointer nonnull-c-pointer unsigned-integer integer float c-string symbol
	      scheme-pointer nonnull-scheme-pointer int32 unsigned-int32 integer32 unsigned-integer32
              unsigned-c-string unsigned-c-string* nonnull-unsigned-c-string* size_t
	      nonnull-c-string c-string* nonnull-c-string* c-string-list c-string-list*)
	(words->bytes 1) )
       ((double number integer64 unsigned-integer64)
	(words->bytes 2) )
       (else
	(cond ((and (symbol? t) (lookup-foreign-type t))
	       => (lambda (t2) (next (vector-ref t2 0)) ) )
	      ((pair? t)
	       (case (car t)
		 ((ref nonnull-pointer pointer c-pointer nonnull-c-pointer function
		       scheme-pointer nonnull-scheme-pointer)
		  (words->bytes 1))
		 (else (err t)) ) )
	      (else (err t)) ) ) ) )
   (lambda () (quit-compiling "foreign type `~S' refers to itself" type)) ) )


;;; Convert result value, if a string:

(define (finish-foreign-result type body) ; Used only in compiler.scm
  (let ((type (##sys#strip-syntax type)))
    (case type
      [(c-string unsigned-c-string) `(##sys#peek-c-string ,body '0)]
      [(nonnull-c-string) `(##sys#peek-nonnull-c-string ,body '0)]
      [(c-string* unsigned-c-string*) `(##sys#peek-and-free-c-string ,body '0)]
      [(nonnull-c-string* nonnull-unsigned-c-string*) `(##sys#peek-and-free-nonnull-c-string ,body '0)]
      [(symbol) `(##sys#intern-symbol (##sys#peek-c-string ,body '0))]
      [(c-string-list) `(##sys#peek-c-string-list ,body '#f)]
      [(c-string-list*) `(##sys#peek-and-free-c-string-list ,body '#f)]
      [else
       (if (list? type)
	   (if (and (eq? (car type) 'const)
		    (= 2 (length type))
		    (memq (cadr type) '(c-string c-string* unsigned-c-string
						 unsigned-c-string* nonnull-c-string
						 nonnull-c-string*
						 nonnull-unsigned-string*)))
	       (finish-foreign-result (cadr type) body)
	       (if (= 3 (length type))
		   (case (car type)
		     ((instance instance-ref)
		      (let ((tmp (gensym)))
			`(let ((,tmp ,body))
			   (and ,tmp
				(not (##sys#null-pointer? ,tmp))
				(make ,(caddr type) 'this ,tmp) ) ) ) )
		     ((nonnull-instance)
		      `(make ,(caddr type) 'this ,body) )
		     (else body))
		   body))
	   body)])))


;;; Translate foreign-type into scrutinizer type:

;; Used only in chicken-ffi-syntax.scm; can we move it there?
(define (foreign-type->scrutiny-type t mode) ; MODE = 'arg | 'result
  (let ((ft (final-foreign-type t)))
    (case ft
      ((void) 'undefined)
      ((char unsigned-char) 'char)
      ((int unsigned-int short unsigned-short byte unsigned-byte int32 unsigned-int32)
       'fixnum)
      ((float double)
       (case mode
	 ((arg) 'number)
	 (else 'float)))
      ((scheme-pointer nonnull-scheme-pointer) '*)
      ((blob) 
       (case mode
	 ((arg) '(or boolean blob))
	 (else 'blob)))
      ((nonnull-blob) 'blob)
      ((pointer-vector) 
       (case mode
	 ((arg) '(or boolean pointer-vector))
	 (else 'pointer-vector)))
      ((nonnull-pointer-vector) 'pointer-vector)
      ((u8vector u16vector s8vector s16vector u32vector s32vector f32vector f64vector)
       (case mode
	 ((arg) `(or boolean (struct ,ft)))
	 (else `(struct ,ft))))
      ((nonnull-u8vector) '(struct u8vector))
      ((nonnull-s8vector) '(struct s8vector))
      ((nonnull-u16vector) '(struct u16vector))
      ((nonnull-s16vector) '(struct s16vector))
      ((nonnull-u32vector) '(struct u32vector))
      ((nonnull-s32vector) '(struct s32vector))
      ((nonnull-f32vector) '(struct f32vector))
      ((nonnull-f64vector) '(struct f64vector))
      ((integer long size_t integer32 unsigned-integer32 integer64 unsigned-integer64
		unsigned-long) 
       'number)
      ((c-pointer)
       '(or boolean pointer locative))
      ((nonnull-c-pointer) 'pointer)
      ((c-string c-string* unsigned-c-string unsigned-c-string*)
       '(or boolean string))
      ((c-string-list c-string-list*)
       '(list-of string))
      ((nonnull-c-string nonnull-c-string* nonnull-unsigned-c-string*) 'string)
      ((symbol) 'symbol)
      (else
       (cond ((pair? t)
	      (case (car t)
		((ref pointer function c-pointer)
		 '(or boolean pointer locative))
		((const) (foreign-type->scrutiny-type (cadr t) mode))
		((enum) 'number)
		((nonnull-pointer nonnull-c-pointer) 'pointer)
		(else '*)))
	     (else '*))))))


;;; Scan expression-node for variable usage:

(define (scan-used-variables node vars)
  (let ([used '()])
    (let walk ([n node])
      (let ([subs (node-subexpressions n)])
	(case (node-class n)
	  [(##core#variable set!) 
	   (let ([var (first (node-parameters n))])
	     (when (and (memq var vars) (not (memq var used)))
	       (set! used (cons var used)) ) 
	     (for-each walk subs) ) ]
	  [(quote ##core#undefined ##core#primitive) #f]
	  [else (for-each walk subs)] ) ) )
    used) )


;;; Scan expression-node for free variables (that are not in env):

(define (scan-free-variables node block-compilation)
  (let ((vars '())
	(hvars '()))

    (define (walk n e)
      (let ([subs (node-subexpressions n)]
	    [params (node-parameters n)] )
	(case (node-class n)
	  ((quote ##core#undefined ##core#primitive ##core#proc ##core#inline_ref) #f)
	  ((##core#variable) 
	   (let ((var (first params)))
	     (unless (memq var e)
	       (set! vars (lset-adjoin eq? vars var))
	       (unless (variable-visible? var block-compilation) 
		 (set! hvars (lset-adjoin eq? hvars var))))))
	  ((set!)
	   (let ((var (first params)))
	     (unless (memq var e) (set! vars (lset-adjoin eq? vars var)))
	     (walk (car subs) e) ) )
	  ((let) 
	   (walk (first subs) e)
	   (walk (second subs) (append params e)) )
	  ((##core#lambda)
	   (##sys#decompose-lambda-list
	    (third params)
	    (lambda (vars argc rest)
	      (walk (first subs) (append vars e)) ) ) )
	  (else (walkeach subs e)) ) ) )

    (define (walkeach ns e)
      (for-each (lambda (n) (walk n e)) ns) )

    (walk node '())
    (values vars hvars) ) )		; => freevars hiddenvars


;;; Some pathname operations:

(define (chop-separator str)		; Used only in batch-driver.scm
  (let ([len (sub1 (string-length str))])
    (if (and (> len 0) 
	     (memq (string-ref str len) '(#\\ #\/)))
	(substring str 0 len)
	str) ) )

;;; Special block-variable literal type:

(define-record-type block-variable-literal 
  (make-block-variable-literal name)
  block-variable-literal?
  (name block-variable-literal-name))	; symbol


;;; Generation of random names:

;; This one looks iffy.  It's also used only in compiler.scm
(define (make-random-name . prefix)
  (string->symbol
   (sprintf "~A-~A~A"
	    (optional prefix (gensym))
	    (current-seconds)
	    (random 1000) ) ) )


;;; Register/lookup real names:
;
; - The real-name-table contains the following mappings:
;
;     <variable-alias> -> <variable>
;     <lambda-id> -> <variable> or <variable-alias>

(define-constant real-name-table-size 997)

(define real-name-table #f)

(define (clear-real-name-table!)
  (set! real-name-table (make-vector real-name-table-size '())))

(define (set-real-name! name rname)	; Used only in compiler.scm
  (##sys#hash-table-set! real-name-table name rname) )

;; TODO: Find out why there are so many lookup functions for this and
;; reduce them to the minimum.
(define (get-real-name name)
  (##sys#hash-table-ref real-name-table name))

;; Arbitrary limit to prevent runoff into exponential behavior
(define real-name-max-depth 20)

(define (real-name var . db)
  (define (resolve n)
    (let ((n2 (##sys#hash-table-ref real-name-table n)))
      (if n2
	  (or (##sys#hash-table-ref real-name-table n2)
	      n2) 
	  n) ) )
  (let ((rn (resolve var)))
    (cond ((not rn) (##sys#symbol->qualified-string var))
	  ((pair? db)
	   (let ((db (car db)))
	     (let loop ((nesting (list (##sys#symbol->qualified-string rn)))
			(depth 0)
			(container (db-get db var 'contained-in)) )
	       (cond
		((> depth real-name-max-depth)
		 (string-intersperse (reverse (cons "..." nesting)) " in "))
		(container
		 (let ((rc (resolve container)))
		   (if (eq? rc container)
		       (string-intersperse (reverse nesting) " in ")
		       (loop (cons (symbol->string rc) nesting)
			     (fx+ depth 1)
			     (db-get db container 'contained-in) ) ) ))
		(else (string-intersperse (reverse nesting) " in "))) ) ) )
	  (else (##sys#symbol->qualified-string rn)) ) ) )

(define (real-name2 var db)		; Used only in c-backend.scm
  (and-let* ([rn (##sys#hash-table-ref real-name-table var)])
    (real-name rn db) ) )

(define (display-real-name-table)
  (##sys#hash-table-for-each
   (lambda (key val)
     (printf "~S\t~S~%" key val) )
   real-name-table) )

(define (source-info->string info)	; Used only in c-backend.scm
  (if (list? info)
      (let ((ln (car info))
	    (name (cadr info)))
	(conc ln ":" (make-string (max 0 (- 4 (string-length ln))) #\space) " " name) )
      info))

(define (source-info->line info)
  (if (list? info)
      (car info)
      (and info (->string info))))

(define (call-info params var)		; Used only in optimizer.scm
  (or (and-let* ((info (and (pair? (cdr params)) (second params))))
	(and (list? info)
	     (let ((ln (car info))
		   (name (cadr info)))
	       (conc "(" ln ") " var))))
      var))


;;; constant folding support:

(define (constant-form-eval op argnodes k)  ; Used only in optimizer.scm
  (let* ((args (map (lambda (n) (first (node-parameters n))) argnodes))
	 (form (cons op (map (lambda (arg) `(quote ,arg)) args))))
    (handle-exceptions ex 
	(begin
	  (k #f form #f (get-condition-property ex 'exn 'message)))
      ;; op must have toplevel binding, result must be single-valued
      (let ((proc (##sys#slot op 0)))
	(if (procedure? proc)
	    (let ((results (receive (apply proc args))))
	      (cond ((= 1 (length results))
		     (debugging 'o "folded constant expression" form)
		     (k #t form (car results) #f))
		    (else 
		     (bomb "attempt to constant-fold call to procedure that has multiple results" form))))
	    (bomb "attempt to constant-fold call to non-procedure" form))))))


;;; Dump node structure:

(define (dump-nodes n)			; Used only in batch-driver.scm
  (let loop ([i 0] [n n])
    (let ([class (node-class n)]
	  [params (node-parameters n)]
	  [subs (node-subexpressions n)] 
	  [ind (make-string i #\space)] 
	  [i2 (+ i 2)] )
      (printf "~%~A<~A ~S" ind class params)
      (for-each (cut loop i2 <>) subs)
      (let ([len (##sys#size n)])
	(when (fx> len 4)
	  (printf "[~S" (##sys#slot n 4))
	  (do ([i 5 (fx+ i 1)])
	      ((fx>= i len))
	    (printf " ~S" (##sys#slot n i)) )
	  (write-char #\]) ) )
      (write-char #\>) ) )
  (newline) )


;;; Hook for source information

(define (read-info-hook class data val)	; Used here and in compiler.scm
  (when (and (eq? 'list-info class) (symbol? (car data)))
    (##sys#hash-table-set!
     ##sys#line-number-database
     (car data)
     (alist-cons 
      data (conc ##sys#current-source-filename ":" val)
      (or (##sys#hash-table-ref ##sys#line-number-database (car data))
	  '() ) ) ) )
  data)

(define (read/source-info in)		; Used only in batch-driver
  (##sys#read in read-info-hook) )


;;; "#> ... <#" syntax:

(set! ##sys#user-read-hook
  (let ([old-hook ##sys#user-read-hook])
    (lambda (char port)
      (if (char=? #\> char)	       
	  (let* ((_ (read-char port))		; swallow #\>
		 (text (scan-sharp-greater-string port)))
	    `(declare (foreign-declare ,text)) )
	  (old-hook char port) ) ) ) )

(define (scan-sharp-greater-string port)
  (let ([out (open-output-string)])
    (let loop ()
      (let ((c (read-char port)))
	(cond ((eof-object? c)
	       (quit-compiling "unexpected end of `#> ... <#' sequence"))
	      ((char=? c #\newline)
	       (newline out)
	       (loop) )
	      ((char=? c #\<)
	       (let ([c (read-char port)])
		 (if (eqv? #\# c)
		     (get-output-string out)
		     (begin
		       (write-char #\< out)
		       (write-char c out) 
		       (loop) ) ) ) )
	      (else
	       (write-char c out)
	       (loop) ) ) ) ) ) )


;;; 64-bit fixnum?

(define (big-fixnum? x)	;; XXX: This should probably be in c-platform
  (and (fixnum? x)
       (##sys#fudge 3)			; 64 bit?
       (or (fx> x 1073741823)
	   (fx< x -1073741824) ) ) )


;;; symbol visibility and other global variable properties

(define (hide-variable sym)		; Used in compiler.scm and here
  (mark-variable sym '##compiler#visibility 'hidden))

(define (export-variable sym)		; Used only in compiler.scm
  (mark-variable sym '##compiler#visibility 'exported))

(define (variable-visible? sym block-compilation)
  (let ((p (##sys#get sym '##compiler#visibility)))
    (case p
      ((hidden) #f)
      ((exported) #t)
      (else (not block-compilation)))))

;; These two have somewhat confusing names.  Maybe mark-variable could
;; be renamed to "variable-mark-set!"?  Also, in some other situations,
;; put!/get are used directly.
(define (mark-variable var mark #!optional (val #t))
  (##sys#put! var mark val) )

(define (variable-mark var mark)
  (##sys#get var mark) )

(define intrinsic? (cut variable-mark <> '##compiler#intrinsic))
;; Used only in optimizer.scm
(define foldable? (cut variable-mark <> '##compiler#foldable))


;;; Load support files

(define (load-identifier-database name)	; Used only in batch-driver.scm
  (and-let* ((rp (repository-path))
	     (dbfile (file-exists? (make-pathname rp name))))
    (debugging 'p (sprintf "loading identifier database ~a ...~%" dbfile))
    (for-each
     (lambda (e)
       (let ((id (car e)))
	 (##sys#put! 
	  id '##core#db
	  (append (or (##sys#get id '##core#db) '()) (list (cdr e))) )))
     (read-file dbfile))))


;;; Print version/usage information:

(define (print-version #!optional b)	; Used only in batch-driver.scm
  (when b (print* +banner+))
  (print (chicken-version #t)) )

;; Used only in batch-driver.scm, but it seems to me this should be moved
;; to chicken.scm, as that's the only place this belongs.
(define (print-usage)
  (print-version)
  (newline)
  (display #<<EOF
Usage: chicken FILENAME OPTION ...

  `chicken' is the CHICKEN compiler.
  
  FILENAME should be a complete source file name with extension, or "-" for
  standard input. OPTION may be one of the following:

  General options:

    -help                        display this text and exit
    -version                     display compiler version and exit
    -release                     print release number and exit
    -verbose                     display information on compilation progress

  File and pathname options:

    -output-file FILENAME        specifies output-filename, default is 'out.c'
    -include-path PATHNAME       specifies alternative path for included files
    -to-stdout                   write compiled file to stdout instead of file

  Language options:

    -feature SYMBOL              register feature identifier
    -no-feature SYMBOL           disable built-in feature identifier

  Syntax related options:

    -case-insensitive            don't preserve case of read symbols
    -keyword-style STYLE         allow alternative keyword syntax
                                  (prefix, suffix or none)
    -no-parentheses-synonyms     disables list delimiter synonyms
    -no-symbol-escape            disables support for escaped symbols
    -r5rs-syntax                 disables the CHICKEN extensions to
                                  R5RS syntax
    -compile-syntax              macros are made available at run-time
    -emit-import-library MODULE  write compile-time module information into
                                  separate file
    -emit-all-import-libraries   emit import-libraries for all defined modules
    -no-module-registration      do not generate module registration code
    -no-compiler-syntax          disable expansion of compiler-macros
    -module                      wrap compiled code into implicit module

  Translation options:

    -explicit-use                do not use units 'library' and 'eval' by
                                  default
    -check-syntax                stop compilation after macro-expansion
    -analyze-only                stop compilation after first analysis pass

  Debugging options:

    -no-warnings                 disable warnings
    -debug-level NUMBER          set level of available debugging information
    -no-trace                    disable tracing information
    -profile                     executable emits profiling information 
    -profile-name FILENAME       name of the generated profile information file
    -accumulate-profile          executable emits profiling information in
                                  append mode
    -no-lambda-info              omit additional procedure-information
    -types FILENAME              load additional type database
    -emit-type-file FILENAME     write type-declaration information into file

  Optimization options:

    -optimize-level NUMBER       enable certain sets of optimization options
    -optimize-leaf-routines      enable leaf routine optimization
    -no-usual-integrations       standard procedures may be redefined
    -unsafe                      disable all safety checks
    -local                       assume globals are only modified in current
                                  file
    -block                       enable block-compilation
    -disable-interrupts          disable interrupts in compiled code
    -fixnum-arithmetic           assume all numbers are fixnums
    -disable-stack-overflow-checks  disables detection of stack-overflows
    -inline                      enable inlining
    -inline-limit LIMIT          set inlining threshold
    -inline-global               enable cross-module inlining
    -specialize                  perform type-based specialization of primitive calls
    -emit-inline-file FILENAME   generate file with globally inlinable
                                  procedures (implies -inline -local)
    -consult-inline-file FILENAME  explicitly load inline file
    -no-argc-checks              disable argument count checks
    -no-bound-checks             disable bound variable checks
    -no-procedure-checks         disable procedure call checks
    -no-procedure-checks-for-usual-bindings
                                   disable procedure call checks only for usual
                                   bindings
    -no-procedure-checks-for-toplevel-bindings
                                   disable procedure call checks for toplevel
                                   bindings
    -strict-types                assume variable do not change their type
    -clustering                  combine groups of local procedures into dispatch
                                   loop
    -lfa2                        perform additional lightweight flow-analysis pass

  Configuration options:

    -unit NAME                   compile file as a library unit
    -uses NAME                   declare library unit as used.
    -heap-size NUMBER            specifies heap-size of compiled executable
    -nursery NUMBER  -stack-size NUMBER
                                 specifies nursery size of compiled executable
    -extend FILENAME             load file before compilation commences
    -prelude EXPRESSION          add expression to front of source file
    -postlude EXPRESSION         add expression to end of source file
    -prologue FILENAME           include file before main source file
    -epilogue FILENAME           include file after main source file
    -dynamic                     compile as dynamically loadable code
    -require-extension NAME      require and import extension NAME

  Obscure options:

    -debug MODES                 display debugging output for the given modes
    -raw                         do not generate implicit init- and exit code                           
    -emit-external-prototypes-first
                                 emit prototypes for callbacks before foreign
                                  declarations
    -ignore-repository           do not refer to repository for extensions
    -setup-mode                  prefer the current directory when locating extensions

EOF
) )

;; Same as above
(define (print-debug-options)
  (display #<<EOF

Available debugging options:

     a          show node-matching during simplification
     b          show breakdown of time needed for each compiler pass
     c          print every expression before macro-expansion
     d          lists all assigned global variables
     e          show information about specializations
     h          you already figured that out
     i          show information about inlining
     m          show GC statistics during compilation
     n          print the line-number database 
     o          show performed optimizations
     p          display information about what the compiler is currently doing
     r          show invocation parameters
     s          show program-size information and other statistics
     t          show time needed for compilation
     u          lists all unassigned global variable references
     x          display information about experimental features
     D          when printing nodes, use node-tree output
     I          show inferred type information for unexported globals
     M          show syntax-/runtime-requirements
     N          show the real-name mapping table
     P          show expressions after specialization
     S          show applications of compiler syntax
     T          show expressions after converting to node tree
     1          show source expressions
     2          show canonicalized expressions
     3          show expressions converted into CPS
     4          show database after each analysis pass
     5          show expressions after each optimization pass
     6          show expressions after each inlining pass
     7          show expressions after complete optimization
     8          show database after final analysis
     9          show expressions after closure conversion


EOF
))
)