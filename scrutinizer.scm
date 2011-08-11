;;;; scrutinizer.scm - The CHICKEN Scheme compiler (local flow analysis)
;
; Copyright (c) 2009-2011, The Chicken Team
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


(declare
  (unit scrutinizer)
  (hide match-specialization specialize-node! specialization-statistics
	procedure-type? named? procedure-result-types procedure-argument-types
	noreturn-type? rest-type procedure-name d-depth generate-type-checks!
	noreturn-procedure-type?
	compatible-types? type<=? initial-argument-types))


(include "compiler-namespace")
(include "tweaks")


(define d-depth 0)

(define (d fstr . args)
  (when (##sys#fudge 13)
    (printf "[debug|~a] ~a~?~%" d-depth (make-string d-depth #\space) fstr args)) )

(define dd d)

(define-syntax d (syntax-rules () ((_ . _) (void))))
(define-syntax dd (syntax-rules () ((_ . _) (void))))


;;; Walk node tree, keeping type and binding information
;
; result specifiers:
;
;   SPEC = * | (VAL1 ...)
;   VAL = (or VAL1 ...)
;       | (struct NAME)
;       | (procedure [NAME] (VAL1 ... [#!optional VALOPT1 ...] [#!rest [VAL | values]]) . RESULTS)
;       | BASIC
;       | deprecated
;   BASIC = * | string | symbol | char | number | boolean | list | pair | 
;           procedure | vector | null | eof | undefined | port | 
;           blob | noreturn | pointer | locative | fixnum | float |
;           pointer-vector
;   RESULTS = * 
;           | (VAL1 ...)
;
; global symbol properties:
;
;   ##compiler#type            ->  TYPESPEC
;   ##compiler#declared-type   ->  BOOL
;   ##compiler#predicate       ->  TYPESPEC
;   ##compiler#specializations ->  (SPECIALIZATION ...)
;   ##compiler#local-specializations ->  (SPECIALIZATION ...)
;   ##compiler#enforce         ->  BOOL
;   ##compiler#special-result-type -> PROCEDURE
;   ##compiler#escape          ->  #f | 'yes | 'no
;
; specialization specifiers:
;
;   SPECIALIZATION = ((MVAL ... [#!rest MVAL]) [RESULTS] TEMPLATE)
;   MVAL = VAL | (not VAL) | (or VAL ...) | (and VAL ...)
;   TEMPLATE = #(INDEX)
;            | #(-INDEX)
;            | #(SYMBOL)
;            | INTEGER | SYMBOL | STRING
;            | (quote CONSTANT)
;            | (TEMPLATE . TEMPLATE)


(define-constant +fragment-max-length+ 6)
(define-constant +fragment-max-depth+ 4)


(define specialization-statistics '())


(define (scrutinize node db complain specialize)
  (let ((blist '())
	(aliased '())
	(noreturn #f)
	(dropped-branches 0)
	(safe-calls 0))

    (define (constant-result lit)
      (cond ((string? lit) 'string)
	    ((symbol? lit) 'symbol)
	    ((fixnum? lit) 'fixnum)
	    ((flonum? lit) 'float)
	    ((number? lit) 
	     (case number-type 
	       ((fixnum) 'fixnum)
	       ((flonum) 'flonum)
	       (else 'number)))		; in case...
	    ((boolean? lit) 'boolean)
	    ((null? lit) 'null)
	    ((list? lit) 'list)
	    ((pair? lit) 'pair)
	    ((eof-object? lit) 'eof)
	    ((vector? lit) 'vector)
	    ((and (not (##sys#immediate? lit)) (##sys#generic-structure? lit))
	     `(struct ,(##sys#slot lit 0)))
	    ((char? lit) 'char)
	    (else '*)))

    (define (global-result id loc)
      (cond ((variable-mark id '##compiler#type) =>
	     (lambda (a) 
	       (cond
		#|
		((and (get db id 'assigned) ; remove assigned global from type db
		(not (variable-mark id '##compiler#declared-type)))
		(mark-variable id '##compiler#type #f)
		'(*))
		|#
		((eq? a 'deprecated)
		(report
		 loc
		 (sprintf "use of deprecated library procedure `~a'" id) )
		'(*))
	       ((and (pair? a) (eq? (car a) 'deprecated))
		(report
		 loc
		 (sprintf 
		     "use of deprecated library procedure `~a' - consider using `~a' instead"
		   id (cadr a)))
		'(*))
	       (else (list a)))))
	    (else '(*))))

    (define (blist-type id flow)
      (cond ((find (lambda (b) 
		     (and (eq? id (caar b))
			  (memq (cdar b) flow)) )
		   blist)
	     => cdr)
	    (else #f)))

    (define (variable-result id e loc flow)
      (cond ((blist-type id flow) => list)
	    ((and (not strict-variable-types)
		  (get db id 'assigned) 
		  (not (variable-mark id '##compiler#declared-type)))
	     '(*))
	    ((assq id e) =>
	     (lambda (a)
	       (cond ((eq? 'undefined (cdr a))
		      (report 
		       loc
		       (sprintf "access to variable `~a' which has an undefined value"
			 (real-name id db)))
		      '(*))
		     (else (list (cdr a))))))
	    (else (global-result id loc))))

    (define (always-true1 t)
      (cond ((and (pair? t) (eq? 'or (car t)))
	     (every always-true1 (cdr t)))
	    ((memq t '(* boolean undefined noreturn)) #f)
	    (else #t)))

    (define (always-true t loc x)
      (let ((f (always-true1 t)))
	(when f
	  (report-notice 
	   loc
	   (sprintf
	       "expected value of type boolean in conditional but were given a value of\ntype `~a' which is always true:~%~%~a"
	     t
	     (pp-fragment x))))
	f))

    (define (typename t)
      (case t
	((*) "anything")
	((char) "character")
	(else
	 (cond ((symbol? t) (symbol->string t))
	       ((pair? t)
		(case (car t)
		  ((procedure) 
		   (if (or (string? (cadr t)) (symbol? (cadr t)))
		       (->string (cadr t))
		       (sprintf "a procedure with ~a returning ~a"
			 (argument-string (cadr t))
			 (result-string (cddr t)))))
		  ((or)
		   (string-intersperse
		    (map typename (cdr t))
		    " OR "))
		  ((struct)
		   (sprintf "a structure of type ~a" (cadr t)))
		  (else (bomb "invalid type" t))))
	       (else (bomb "invalid type" t))))))

    (define (argument-string args)
      (let* ((len (length args))
	     (m (multiples len)))
	(if (zero? len)
	    "zero arguments"
	    (sprintf 
		"~a argument~a of type~a ~a"
	      len m m
	      (map typename args)))))

    (define (result-string results)
      (if (eq? '* results) 
	  "an unknown number of values"
	  (let* ((len (length results))
		 (m (multiples len)))
	    (if (zero? len)
		"zero values"
		(sprintf 
		    "~a value~a of type~a ~a"
		  len m m
		  (map typename results))))))

    (define (match t1 t2)
      (let ((m (match1 t1 t2)))
	(dd "    match ~a <-> ~a -> ~a" t1 t2 m)
	m))

    (define (match1 t1 t2)
      (cond ((eq? t1 t2))
	    ((eq? t1 '*))
	    ((eq? t2 '*))
	    ((eq? t1 'noreturn))
	    ((eq? t2 'noreturn))
	    ((and (eq? t1 'number) (memq t2 '(number fixnum float))))
	    ((and (eq? t2 'number) (memq t1 '(number fixnum float))))
	    ((eq? 'procedure t1) (and (pair? t2) (eq? 'procedure (car t2))))
	    ((eq? 'procedure t2) (and (pair? t1) (eq? 'procedure (car t1))))
	    ((and (pair? t1) (eq? 'or (car t1))) (any (cut match <> t2) (cdr t1)))
	    ((and (pair? t2) (eq? 'or (car t2))) (any (cut match t1 <>) (cdr t2)))
	    ((eq? t1 'pair) (memq t2 '(pair list)))
	    ((eq? t1 'list) (memq t2 '(pair list null)))
	    ((eq? t1 'null) (memq t2 '(null list)))
	    ((and (pair? t1) (pair? t2) (eq? (car t1) (car t2)))
	     (case (car t1)
	       ((procedure)
		(let ((args1 (if (named? t1) (third t1) (second t1)))
		      (args2 (if (named? t2) (third t2) (second t2))) 
		      (results1 (if (named? t1) (cdddr t1) (cddr t1))) 
		      (results2 (if (named? t2) (cdddr t2) (cddr t2))) )
		  (and (match-args args1 args2)
		       (match-results results1 results2))))
	       ((struct) (equal? t1 t2))
	       (else #f) ) )
	    (else #f)))

    (define (match-args args1 args2)
      (d "match-args: ~s <-> ~s" args1 args2)
      (define (match-rest rtype args opt) ;XXX currently ignores `opt'
	(let-values (((head tail) (break (cut eq? '#!rest <>) args)))
	  (and (every (cut match rtype <>) head) ; match required args
	       (match rtype (if (pair? tail) (rest-type (cdr tail)) '*)))))
      (define (optargs a)
	(memq a '(#!rest #!optional)))
      (let loop ((args1 args1) (args2 args2) (opt1 #f) (opt2 #f))
	(d "  args ~a ~a ~a ~a" args1 args2 opt1 opt2)
	(cond ((null? args1) 
	       (or opt2
		   (null? args2)
		   (optargs (car args2))))
	      ((null? args2) 
	       (or opt1
		   (optargs (car args1))))
	      ((eq? '#!optional (car args1))
	       (loop (cdr args1) args2 #t opt2))
	      ((eq? '#!optional (car args2))
	       (loop args1 (cdr args2) opt1 #t))
	      ((eq? '#!rest (car args1))
	       (match-rest (rest-type (cdr args1)) args2 opt2))
	      ((eq? '#!rest (car args2))
	       (match-rest (rest-type (cdr args2)) args1 opt1))
	      ((match (car args1) (car args2)) (loop (cdr args1) (cdr args2) opt1 opt2))
	      (else #f))))

    (define (match-results results1 results2)
      (cond ((null? results1) (atom? results2))
	    ((eq? '* results1))
	    ((eq? '* results2))
	    ((null? results2) #f)
	    ((match (car results1) (car results2)) 
	     (match-results (cdr results1) (cdr results2)))
	    (else #f)))

    (define (multiples n)
      (if (= n 1) "" "s"))

    (define (single what tv loc)
      (if (eq? '* tv)
	  '*
	  (let ((n (length tv)))
	    (cond ((= 1 n) (car tv))
		  ((zero? n)
		   (report
		    loc
		    (sprintf "expected ~a a single result, but were given zero results" what))
		   'undefined)
		  (else
		   (report
		    loc
		    (sprintf "expected ~a a single result, but were given ~a result~a"
		      what n (multiples n)))
		   (first tv))))))

    (define (report-notice loc desc #!optional (show complain))
      (when show
	(##sys#notice
	 (conc (location-name loc) desc))))

    (define (report loc desc #!optional (show complain))
      (when show
	(warning
	 (conc (location-name loc) desc))))

    (define (location-name loc)
      (define (lname loc1)
	(if loc1
	    (sprintf "procedure `~a'" (real-name loc1))
	    "unknown procedure"))
      (cond ((null? loc) "at toplevel:\n  ")
	    ((null? (cdr loc))
	     (sprintf "in toplevel ~a:\n  " (lname (car loc))))
	    (else
	     (let rec ((loc loc))
	       (if (null? (cdr loc))
		   (location-name loc)
		   (sprintf "in local ~a,\n  ~a" (lname (car loc)) (rec (cdr loc))))))))

    (define add-loc cons)

    (define (fragment x)
      (let ((x (build-expression-tree x)))
	(let walk ((x x) (d 0))
	  (cond ((atom? x) x)
		((>= d +fragment-max-depth+) '...)
		((list? x)
		 (let* ((len (length x))
			(xs (if (< +fragment-max-length+ len)
				(append (take x +fragment-max-length+) '(...))
				x)))
		   (map (cute walk <> (add1 d)) xs)))
		(else x)))))

    (define (pp-fragment x)
      (string-chomp
       (with-output-to-string
	 (lambda ()
	   (pp (fragment x))))))

    (define (get-specializations name)
      (let* ((a (variable-mark name '##compiler#specializations))
	     (b (variable-mark name '##compiler#local-specializations))
	     (c (append (or a '()) (or b '()))))
	(and (pair? c) c)))

    (define (call-result node args e loc params)
      (define (pname)
	(sprintf "~ain procedure call to `~s', " 
	  (if (and (pair? params)
		   (pair? (cdr params))
		   (pair? (cadr params))) ; sourceinfo has line-number information?
	      (let ((n (source-info->line (cadr params))))
		(if n
		    (sprintf "~a: " n)
		    ""))
	      "")
	  (fragment (first (node-subexpressions node)))))
      (d "  call-result: ~a " args)
      (let* ((ptype (car args))
	     (pptype? (procedure-type? ptype))
	     (nargs (length (cdr args)))
	     (xptype `(procedure ,(make-list nargs '*) *))
	     (op #f))
	(cond ((and (not pptype?) (not (match xptype ptype)))
	       (report
		loc
		(sprintf
		    "~aexpected a value of type `~a', but was given a value of type `~a'"
		  (pname) 
		  xptype
		  ptype))
	       (values '* #f))
	      (else
	       (let-values (((atypes values-rest) (procedure-argument-types ptype nargs)))
		 (d "  argument-types: ~a (~a)" atypes values-rest)
		 (unless (= (length atypes) nargs)
		   (let ((alen (length atypes)))
		     (report 
		      loc
		      (sprintf
			  "~aexpected ~a argument~a, but was given ~a argument~a"
			(pname) alen (multiples alen)
			nargs (multiples nargs)))))
		 (do ((args (cdr args) (cdr args))
		      (atypes atypes (cdr atypes))
		      (i 1 (add1 i)))
		     ((or (null? args) (null? atypes)))
		   (unless (match (car atypes) (car args))
		     (report
		      loc
		      (sprintf
			  "~aexpected argument #~a of type `~a', but was given an argument of type `~a'"
			(pname) i (car atypes) (car args)))))
		 (when (noreturn-procedure-type? ptype)
		   (set! noreturn #t))
		 (let ((r (procedure-result-types ptype values-rest (cdr args))))
		   ;;XXX we should check whether this is a standard- or extended binding
		   (let* ((pn (procedure-name ptype)))
		     (when pn
		       (cond ((and (fx= 1 nargs) 
				   (variable-mark pn '##compiler#predicate)) =>
				   (lambda (pt)
				     (cond ((match-specialization (list pt) (cdr args) #t)
					    (report-notice
					     loc
					     (sprintf 
						 "~athe predicate is called with an argument of type `~a' and will always return true"
					       (pname) (cadr args)))
					    (when specialize
					      (specialize-node!
					       node
					       `(let ((#(tmp) #(1))) '#t))
					      (set! op (list pn pt))))
					   ((match-specialization (list `(not ,pt)) (cdr args) #t)
					    (report-notice
					     loc
					     (sprintf 
						 "~athe predicate is called with an argument of type `~a' and will always return false"
					       (pname) (cadr args)))
					    (when specialize
					      (specialize-node!
					       node
					       `(let ((#(tmp) #(1))) '#f))
					      (set! op (list pt `(not ,pt))))))))
			     ((and specialize (get-specializations pn)) =>
			      (lambda (specs)
				(let loop ((specs specs))
				  (cond ((null? specs))
					((match-specialization (first (car specs)) (cdr args) #f)
					 (let ((spec (car specs)))
					   (set! op (cons pn (car spec)))
					   (let* ((r2 (and (pair? (cddr spec)) (second spec)))
						  (rewrite (if r2 (third spec) (second spec))))
					     (specialize-node! node rewrite)
					     (when r2 (set! r r2)))))
					(else (loop (cdr specs))))))))
		       (when op
			 (d "  specialized: `~s'" op)
			 (cond ((assoc op specialization-statistics) =>
				(lambda (a) (set-cdr! a (add1 (cdr a)))))
			       (else
				(set! specialization-statistics
				  (cons (cons op 1) 
					specialization-statistics))))))
		     (when (and specialize (not op) (procedure-type? ptype))
		       (set-car! (node-parameters node) #t)
		       (set! safe-calls (add1 safe-calls))))
		   (d  "  result-types: ~a" r)
		   (values r op)))))))

    ;; not used in the moment
    (define (self-call? node loc)
      (case (node-class node)
	((##core#call)
	 (and (pair? loc)
	      (let ((op (first (node-subexpressions node))))
		(and (eq? '##core#variable (node-class op))
		     (eq? (car loc) (first (node-parameters op)))))))
	((let)
	 (self-call? (last (node-subexpressions node)) loc))
	(else #f)))

    (define tag
      (let ((n 0))
	(lambda () 
	  (set! n (add1 n))
	  n)))

    (define (add-to-blist var flow type)
      (let loop ((var var))
	(set! blist (alist-cons (cons var flow) type blist))
	(let ((a (assq var aliased)))
	  (when a
	    (d "  applying to alias: ~a -> ~a" (cdr a) type)
	    (loop (cdr a))))))

    (define (walk n e loc dest tail flow ctags) ; returns result specifier
      (let ((subs (node-subexpressions n))
	    (params (node-parameters n)) 
	    (class (node-class n)) )
	(dd "walk: ~a ~a (loc: ~a, dest: ~a, tail: ~a, flow: ~a, blist: ~a, e: ~a)"
	    class params loc dest tail flow blist e)
	(set! d-depth (add1 d-depth))
	(let ((results
	       (case class
		 ((quote) (list (constant-result (first params))))
		 ((##core#undefined) '(*))
		 ((##core#proc) '(procedure))
		 ((##core#global-ref) (global-result (first params) loc))
		 ((##core#variable) (variable-result (first params) e loc flow))
		 ((if)
		  (let* ((tags (cons (tag) (tag)))
			 (tst (first subs))
			 (rt (single "in conditional" (walk tst e loc #f #f flow tags) loc))
			 (c (second subs))
			 (a (third subs))
			 (nor0 noreturn))
		    (when (and (always-true rt loc n) specialize)
		      (set! dropped-branches (+ dropped-branches 1))
		      (copy-node!
		       (build-node-graph
			`(let ((,(gensym) ,tst))
			   ,c))
		       n))
		    (set! noreturn #f)
		    (let* ((r1 (walk c e loc dest tail (cons (car tags) flow) #f))
			   (nor1 noreturn))
		      (set! noreturn #f)
		      (let* ((r2 (walk a e loc dest tail (cons (cdr tags) flow) #f))
			     (nor2 noreturn))
			(set! noreturn 
			  (if nor1
			      (if nor2 
				  (if nor0 #t 'some)
				  'some)
			      (if nor2 
				  'some
				  nor0)))
			;; when only one branch is noreturn, add blist entries for
			;; all in other branch:
			(when (or (and (eq? #t nor1) (not nor2))
				  (and (eq? #t nor2) (not nor1)))
			  (let ((yestag (if nor1 (cdr tags) (car tags))))
			    (for-each
			     (lambda (ble)
			       (when (eq? (cdar ble) yestag)
				 (d "adding blist entry ~a for single returning conditional branch"
				    ble)
				 (add-to-blist (caar ble) (car flow) (cdr ble))))
			     blist)))
			(cond ((and (not (eq? '* r1)) (not (eq? '* r2)))
			       (when (and (not nor1) (not nor2)
					  (not (= (length r1) (length r2))))
				 (report 
				  loc
				  (sprintf
				      "branches in conditional expression differ in the number of results:~%~%~a"
				    (pp-fragment n))))
			       (map (lambda (t1 t2) (simplify-type `(or ,t1 ,t2)))
				    r1 r2))
			      (else '*))))))
		 ((let)
		  ;; before CPS-conversion, `let'-nodes may have multiple bindings
		  (let loop ((vars params) (body subs) (e2 '()))
		    (if (null? vars)
			(walk (car body) (append e2 e) loc dest tail flow ctags)
			(let* ((var (car vars))
			       (val (car body))
			       (t (single 
				   (sprintf "in `let' binding of `~a'" (real-name var))
				   (walk val e loc var #f flow #f) 
				   loc)))
			  (when (and (eq? (node-class val) '##core#variable)
				     (not (get db var 'assigned)))
			    (let ((var2 (first (node-parameters val))))
			      (unless (get db var2 'assigned) ;XXX too conservative?
				(set! aliased (alist-cons var var2 aliased)))))
			  (loop (cdr vars) (cdr body) (alist-cons (car vars) t e2))))))
		 ((##core#lambda lambda)
		  (decompose-lambda-list
		   (first params)
		   (lambda (vars argc rest)
		     (let* ((namelst (if dest (list dest) '()))
			    (inits (initial-argument-types dest vars argc))
			    (args (append inits (if rest '(#!rest) '())))
			    (e2 (append (map (lambda (v i) (cons v i))
					     (if rest (butlast vars) vars)
					     inits)
					e)))
		       (when dest 
			 (d "~a: initial-argument types: ~a" dest inits))
		       (fluid-let ((blist '())
				   (aliased '()))
			 (let* ((initial-tag (tag))
				(r (walk (first subs)
					 (if rest (alist-cons rest 'list e2) e2)
					 (add-loc dest loc)
					 #f #t (list initial-tag) #f)))
			   ;; Disabled
			   #;(when (and specialize
				      dest
				      (not 
				       (eq? 'no
					    (variable-mark dest '##compiler#escape)))
				      (variable-mark dest '##compiler#declared-type)
				      escaping-procedures
				      (not unsafe))
			     (debugging 'x "checks argument-types" dest) ;XXX
			     ;; [1] this is subtle: we don't want argtype-checks to be 
			     ;; generated for toplevel defs other than user-declared ones. 
			     ;; But since the ##compiler#declared-type mark is set AFTER 
			     ;; the lambda has been walked (see below, [2]), nothing is added.
			     (generate-type-checks! n dest vars inits))
			   (list
			    (append
			     '(procedure) 
			     namelst
			     (list
			      (let loop ((argc argc) (vars vars) (args args))
				(cond ((zero? argc) args)
				      ((and (not (get db (car vars) 'assigned))
					    (assoc (cons (car vars) initial-tag) blist))
				       =>
				       (lambda (a)
					 (cons
					  (cond ((eq? (cdr a) '*) '*)
						(else
						 (d "adjusting procedure argument type for `~a' to: ~a"
						    (car vars) (cdr a))
						 (cdr a) ))
					  (loop (sub1 argc) (cdr vars) (cdr args)))))
				      (else 
				       (cons 
					(car args)
					(loop (sub1 argc) (cdr vars) (cdr args)))))))
			     r))))))))
		 ((set! ##core#set!)
		  (let* ((var (first params))
			 (type (variable-mark var '##compiler#type))
			 (rt (single 
			      (sprintf "in assignment to `~a'" var)
			      (walk (first subs) e loc var #f flow #f)
			      loc))
			 (b (assq var e)) )
		    (when (and type (not b)
			       (not (eq? type 'deprecated))
			       (not (match type rt)))
		      ;;XXX make this an error with strict-types?
		      (report
		       loc
		       (sprintf 
			   "assignment of value of type `~a' to toplevel variable `~a' does not match declared type `~a'"
			 rt var type)
		       #t))
		    (when (and (not type)
			       (not b)
			       (not (eq? '* rt))
			       (not (get db var 'unknown)))
		      (and-let* ((val (or (get db var 'value)
					  (get db var 'local-value))))
			(when (eq? val (first subs))
			  (debugging '|I| (sprintf "(: ~s ~s)" var rt))
			  ;; [2] sets property, but lambda has already been walked,
			  ;; so no type-checks are generated (see also [1], above)
			  ;; note that implicit declarations are not enforcing
			  (mark-variable var '##compiler#declared-type)
			  (mark-variable var '##compiler#type rt))))
		    (when b
		      (cond ((eq? 'undefined (cdr b)) (set-cdr! b rt))
			    #;(strict-variable-types
			     (let ((ot (or (blist-type var flow) (cdr b))))
			       ;;XXX compiler-syntax for "map" will introduce
			       ;;    assignments that trigger this warning, so this
			       ;;    is currently disabled
			       (unless (compatible-types? ot rt)
				 (report
				  loc
				  (sprintf 
				      "variable `~a' of type `~a' was modified to a value of type `~a'"
				    var ot rt)
				  #t)))))
		      (when strict-variable-types
			;; don't use "add-to-blist" since this does not affect aliases
			(set! blist (alist-cons (cons var (car flow)) rt blist))))
		    '(undefined)))
		 ((##core#primitive ##core#inline_ref) '*)
		 ((##core#call)
		  (let* ((f (fragment n))
			 (len (length subs))
			 (args (map (lambda (n i)
				      (single 
				       (sprintf 
					   "in ~a of procedure call `~s'"
					 (if (zero? i)
					     "operator position"
					     (sprintf "argument #~a" i))
					 f)
				       (walk n e loc #f #f flow #f) loc))
				    subs 
				    (iota len)))
			 (fn (car args))
			 (pn (procedure-name fn))
			 (enforces
			  (and pn (variable-mark pn '##compiler#enforce)))
			 (pt (and pn (variable-mark pn '##compiler#predicate))))
		    (let-values (((r specialized?) (call-result n args e loc params)))
		      (cond (specialized?
			     (walk n e loc dest tail flow ctags)
			     ;; keep type, as the specialization may contain icky stuff
			     ;; like "##core#inline", etc.
			     r)
			    (else
			     (for-each
			      (lambda (arg argr)
				(when (eq? '##core#variable (node-class arg))
				  (let* ((var (first (node-parameters arg)))
					 (a (assq var e))
					 (oparg? (eq? arg (first subs)))
					 (pred (and pt
						    ctags
						    (not (get db var 'assigned)) 
						    (not oparg?))))
				    (cond (pred
					   ;;XXX we could add a blist entry for var in the other
					   ;;    branch by subtracting pt from the current type
					   ;;    of var, at least in the simple case of
					   ;;    "(or ... <PT> ...)" -> "(or ... ...)"
					   (d "  predicate `~a' indicates `~a' is ~a in flow ~a"
					      pn var pt (car ctags))
					   (add-to-blist 
					    var (car ctags)
					    (if (and a (type<=? (cdr a) pt)) (cdr a) pt)))
					  (a
					   (when enforces
					     (let ((ar (cond ((blist-type var flow) =>
							      (lambda (t)
								(if (type<=? t argr)
								    t
								    argr)))
							     ((get db var 'assigned) '*)
							     ((type<=? (cdr a) argr) (cdr a))
							     (else argr))))
					       (d "  assuming: ~a -> ~a (flow: ~a)" 
						  var ar (car flow))
					       (add-to-blist var (car flow) ar)
					       (when ctags
						 (add-to-blist var (car ctags) ar)
						 (add-to-blist var (cdr ctags) ar)))))
					  ((and oparg?
						(variable-mark 
						 var
						 '##compiler#special-result-type))
					   => (lambda (srt)
						(dd "  hardcoded special case: ~a" var)
						(set! r (srt n r))))))))
			      subs
			      (cons 
			       fn
			       (nth-value 0 (procedure-argument-types fn (sub1 len)))))
			     r)))))
		 ((##core#the)
		  (let-values (((t _) (validate-type (first params) #f)))
		    (let ((rt (walk (first subs) e loc dest tail flow ctags)))
		      (cond ((eq? rt '*))
			    ((null? rt)
			     (report
			      loc
			      (sprintf
				  "expression returns zero values but is declared to have a single result of type `~a'"
				t)))
			    (else
			     (when (> (length rt) 1)
			       (report
				loc
				(sprintf 
				    "expression returns ~a values but is declared to have a single result"
				  (length rt)))
			       (set! rt (list (first rt))))
			     (unless (type<=? t (first rt))
			       (report-notice
				loc
				(sprintf
				    "expression returns a result of type `~a', but is declared to return `~a', which is not a subtype"
				  (first rt) t)))))
		      (list t))))
		 ((##core#switch ##core#cond)
		  (bomb "unexpected node class" class))
		 (else
		  (for-each (lambda (n) (walk n e loc #f #f flow #f)) subs)
		  '*))))
	  (set! d-depth (sub1 d-depth))
	  (dd "  -> ~a" results)
	  results)))

    (let ((rn (walk (first (node-subexpressions node)) '() '() #f #f (list (tag)) #f)))
      (when (and (pair? specialization-statistics)
		 (debugging 'x "specializations:")) ;XXX
	(for-each 
	 (lambda (ss)
	   (printf "  ~a ~s~%" (cdr ss) (car ss)))
	 specialization-statistics))
      (when (positive? safe-calls)
	(debugging 'x "safe calls" safe-calls)) ;XXX
      (when (positive? dropped-branches)
	(debugging 'x "dropped branches" dropped-branches)) ;XXX
      rn)))


(define (simplify-type t)
  (define (simplify t)
    (let ((t2 (simplify1 t)))
      (dd "simplify: ~a -> ~a" t t2)
      t2))
  (define (simplify1 t)
    (call/cc 
     (lambda (return)
       (if (pair? t)
	   (case (car t)
	     ((or)
	      (cond ((= 2 (length t)) (simplify (second t)))
		    ((every procedure-type? (cdr t))
		     (if (any (cut eq? 'procedure <>) (cdr t))
			 'procedure
			 (reduce
			  (lambda (t pt)
			    (let* ((name1 (and (named? t) (cadr t)))
				   (atypes1 (if name1 (third t) (second t)))
				   (rtypes1 (if name1 (cdddr t) (cddr t)))
				   (name2 (and (named? pt) (cadr pt)))
				   (atypes2 (if name2 (third pt) (second pt)))
				   (rtypes2 (if name2 (cdddr pt) (cddr pt))))
			      (append
			       '(procedure)
			       (if (and name1 name2 (eq? name1 name2)) (list name1) '())
			       (list (merge-argument-types atypes1 atypes2))
			       (merge-result-types rtypes1 rtypes2))))
			  #f
			  (cdr t))))
		    (else
		     (let* ((ts (append-map
				 (lambda (t)
				   (let ((t (simplify t)))
				     (cond ((and (pair? t) (eq? 'or (car t)))
					    (cdr t))
					   ((eq? t 'undefined) (return 'undefined))
					   ((eq? t 'noreturn) '())
					   (else (list t)))))
				 (cdr t)))
			    (ts2 (let loop ((ts ts) (done '()))
				   (cond ((null? ts) (reverse done))
					 ((eq? '* (car ts)) (return '*))
					 ((any (cut type<=? (car ts) <>) (cdr ts))
					  (loop (cdr ts) done))
					 ((any (cut type<=? (car ts) <>) done)
					  (loop (cdr ts) done))
					 (else (loop (cdr ts) (cons (car ts) done)))))))
		       (cond ((equal? ts2 (cdr t)) t)
			     (else
			      (dd "  or-simplify: ~a" ts2)
			      (simplify 
			       `(or ,@(if (any (cut eq? <> '*) ts2) '(*) ts2)))))))) )
	     ((procedure)
	      (let* ((name (and (named? t) (cadr t)))
		     (rtypes (if name (cdddr t) (cddr t))))
		(append
		 '(procedure)
		 (if name (list name) '())
		 (list (map simplify (if name (third t) (second t))))
		 (if (eq? '* rtypes)
		     '*
		     (map simplify rtypes)))))
	     (else t))
	   t))))
  (simplify t))

;;XXX this could be better done by combining non-matching arguments/llists
;;    into "(or (procedure ...) (procedure ...))"
(define (merge-argument-types ts1 ts2) 
  (cond ((null? ts1) 
	 (cond ((null? ts2) '())
	       ((memq (car ts2) '(#!rest #!optional)) ts2)
	       (else '(#!rest))))
	((null? ts2) '(#!rest))		;XXX giving up
	((eq? '#!rest (car ts1))
	 (cond ((and (pair? ts2) (eq? '#!rest (car ts2)))
		`(#!rest
		  ,(simplify-type
		    `(or ,(rest-type (cdr ts1))
			 ,(rest-type (cdr ts2))))))
	       (else '(#!rest))))	;XXX giving up
	((eq? '#!optional (car ts1))
	 (cond ((and (pair? ts2) (eq? '#!optional (car ts2)))
		`(#!optional 
		  ,(simplify-type `(or ,(cadr ts1) ,(cadr ts2)))
		  ,@(merge-argument-types (cddr ts1) (cddr ts2))))
	       (else '(#!rest))))	;XXX
	(else (cons (simplify-type `(or ,(car ts1) ,(car ts2)))
		    (merge-argument-types (cdr ts1) (cdr ts2))))))

(define (merge-result-types ts11 ts21) ;XXX possibly overly conservative
  (call/cc
   (lambda (return)
     (let loop ((ts1 ts11) (ts2 ts21))
       (cond ((null? ts1) ts2)
	     ((null? ts2) ts1)
	     ((or (atom? ts1) (atom? ts2)) (return '*))
	     ((eq? 'noreturn (car ts1)) (loop (cdr ts1) ts2))
	     ((eq? 'noreturn (car ts2)) (loop ts1 (cdr ts2)))
	     (else (cons (simplify-type `(or ,(car ts1) ,(car ts2)))
			 (loop (cdr ts1) (cdr ts2)))))))))


(define (compatible-types? t1 t2)
  (or (type<=? t1 t2)
      (type<=? t2 t1)))

(define (type<=? t1 t2)
  (or (eq? t1 t2)
      (memq t2 '(* undefined))
      (case t2
	((list) (memq t1 '(null pair)))
	((procedure) (and (pair? t1) (eq? 'procedure (car t1))))
	((number) (memq t1 '(fixnum float)))
	(else
	 (and (pair? t1) (pair? t2)
	      (case (car t1)
		((or) (every (cut type<=? <> t2) (cdr t1)))
		((procedure)
		 (let ((args1 (if (named? t1) (caddr t1) (cadr t1)))
		       (args2 (if (named? t2) (caddr t2) (cadr t2)))
		       (res1 (if (named? t1) (cdddr t1) (cddr t1)))
		       (res2 (if (named? t2) (cdddr t2) (cddr t2))) )
		   (let loop1 ((args1 args1)
			       (args2 args2)
			       (rtype1 #f)
			       (rtype2 #f)
			       (m1 0) 
			       (m2 0))
		     (cond ((null? args1)
			    (and (cond ((null? args2)
					(if rtype1
					    (if rtype2
						(type<=? rtype1 rtype2)
						#f)
					    #t))
				       ((eq? '#!optional (car args2))
					(not rtype1))
				       ((eq? '#!rest (car args2))
					(or (null? (cdr args2))
					    rtype1
					    (type<=? rtype1 (cadr args2))))
				       (else (>= m2 m1)))
				 (let loop2 ((res1 res1) (res2 res2))
				   (cond ((eq? '* res2) #t)
					 ((null? res2) (null? res1))
					 ((eq? '* res1) #f)
					 ((type<=? (car res1) (car res2))
					  (loop2 (cdr res1) (cdr res2)))
					 (else #f)))))
			   ((eq? (car args1) '#!optional)
			    (loop1 (cdr args1) args2 #f rtype2 1 m2))
			   ((eq? (car args1) '#!rest)
			     (if (null? (cdr args1))
				 (loop1 '() args2 '* rtype2 2 m2)
				 (loop1 '() args2 (cadr args1) rtype2 2 m2)))
			   ((null? args2) 
			    (and rtype2
				 (type<=? (car args1) rtype2)
				 (loop1 (cdr args1) '() rtype1 rtype2 m1 m2)))
			   ((eq? (car args2) '#!optional)
			    (loop1 args1 (cdr args2) rtype1 #f m1 1))
			   ((eq? (car args2) '#!rest)
			    (if (null? (cdr args2))
				(loop1 args1 '() rtype1 '* m1 2)
				(loop1 args1 '() rtype1 (cadr args2) m1 2)))
			   ((type<=?
			     (or rtype1 (car args1))
			     (or rtype2 (car args2)))
			    (loop1 (cdr args1) (cdr args2) rtype1 rtype2 m1 m2))
			   (else #f)))))))))))

(define (procedure-type? t)
  (or (eq? 'procedure t)
      (and (pair? t) 
	   (or (eq? 'procedure (car t))
	       (and (eq? 'or (car t))
		    (every procedure-type? (cdr t)))))))

(define (procedure-name t)
  (and (pair? t)
       (eq? 'procedure (car t))
       (let ((n (cadr t)))
	 (cond ((string? n) (string->symbol n))
	       ((symbol? n) n)
	       (else #f)))))

(define (procedure-argument-types t n #!optional norest)
  (cond ((and (pair? t) (eq? 'procedure (car t)))
	 (let* ((vf #f)
		(llist
		 (let loop ((at (if (or (string? (second t)) (symbol? (second t)))
				    (third t)
				    (second t)))
			    (m n)
			    (opt #f))
		   (cond ((null? at) '())
			 ((eq? '#!optional (car at))
			  (if norest
			      '()
			      (loop (cdr at) m #t) ))
			 ((eq? '#!rest (car at))
			  (cond (norest '())
				(else
				 (set! vf (and (pair? (cdr at)) (eq? 'values (cadr at))))
				 (make-list m (rest-type (cdr at))))))
			 ((and opt (<= m 0)) '())
			 (else (cons (car at) (loop (cdr at) (sub1 m) opt)))))))
	   (values llist vf)))
	(else (values (make-list n '*) #f))))

(define (procedure-result-types t values-rest? args)
  (cond (values-rest? args)
	((and (pair? t) (eq? 'procedure (car t)))
	 (call/cc
	  (lambda (return)
	    (let loop ((rt (if (or (string? (second t)) (symbol? (second t)))
			       (cdddr t)
			       (cddr t))))
	      (cond ((null? rt) '())
		    ((memq rt '(* noreturn)) (return '*))
		    (else (cons (car rt) (loop (cdr rt)))))))))
	(else '*)))

(define (named? t)
  (and (pair? t) 
       (eq? 'procedure (car t))
       (not (or (null? (cadr t)) (pair? (cadr t))))))

(define (rest-type r)
  (cond ((null? r) '*)
	((eq? 'values (car r)) '*)
	(else (car r))))

(define (noreturn-type? t)
  (or (eq? 'noreturn t)
      (and (pair? t)
	   (eq? 'or (car t))
	   (any noreturn-type? (cdr t)))))

(define (noreturn-procedure-type? ptype)
  (and (pair? ptype)
       (eq? 'procedure (car ptype))
       (list? ptype)
       (eq? 'noreturn 
	    (if (symbol? (second ptype)) 
		(fourth ptype)
		(third ptype)))))

(define (load-type-database name #!optional (path (repository-path)))
  (and-let* ((dbfile (file-exists? (make-pathname path name))))
    (debugging 'p (sprintf "loading type database ~a ...~%" dbfile))
    (for-each
     (lambda (e)
       (let* ((name (car e))
	      (old (variable-mark name '##compiler#type))
	      (new (cadr e))
	      (specs (and (pair? (cddr e)) (cddr e))))
	 (when (pair? new)
	   (case (car new)
	     ((procedure!)
	      (mark-variable name '##compiler#enforce #t)
	      (set-car! new 'procedure))
	     ((procedure!? procedure?!)
	      (mark-variable name '##compiler#enforce #t)
	      (mark-variable name '##compiler#predicate (cadr new))
	      (set! new (cons 'procedure (cddr new))))
	     ((procedure?)
	      (mark-variable name '##compiler#predicate (cadr new))
	      (set! new (cons 'procedure (cddr new))))))
	 (cond-expand
	   (debugbuild
	    (let-values (((t _) (validate-type new name)))
	      (unless t
		(warning "invalid type specification" name new))))
	   (else))
	 (when (and old (not (compatible-types? old new)))
	   (warning
	    (sprintf
		"type-definition `~a' for toplevel binding `~a' conflicts with previously loaded type `~a'"
	      name new old)))
	 (mark-variable name '##compiler#type new)
	 (when specs
	   ;;XXX validate types in specs
	   (mark-variable name '##compiler#specializations specs))))
     (read-file dbfile))))

(define (emit-type-file filename db)
  (with-output-to-file filename
    (lambda ()
      (print "; GENERATED BY CHICKEN " (chicken-version) " FROM "
	     source-filename "\n")
      (##sys#hash-table-for-each
       (lambda (sym plist)
	 (when (variable-visible? sym)
	   (when (variable-mark sym '##compiler#declared-type)
	     (let ((specs (or (variable-mark sym '##compiler#specializations) '()))
		   (type (variable-mark sym '##compiler#type))
		   (pred (variable-mark sym '##compiler#predicate))
		   (enforce (variable-mark sym '##compiler#enforce)))
	       (pp (cons*
		    sym
		    (if (and (pair? type) (eq? 'procedure (car type)))
			`(,(cond ((and enforce pred) 'procedure!?)
				 (pred 'procedure?)
				 (enforce 'procedure!)
				 (else 'procedure))
			  ,@(if pred (list pred) '())
			  ,@(cdr type))
			type)
		    specs))))))
       db)
      (print "; END OF FILE"))))

(define (match-specialization typelist atypes exact)
  ;; - does not accept complex procedure types in typelist!
  ;; - "exact" means: "or"-type in atypes is not allowed
  (define (match st t)
    (cond ((eq? st t))
	  ((pair? st)
	   (case (car st)
	     ((not) (matchnot (cadr st) t))
	     ((or) (any (cut match <> t) (cdr st)))
	     ((and) (every (cut match <> t) (cdr st)))
	     ((procedure) (bomb "match-specialization: invalid complex procedure type" st))
	     (else (equal? st t))))
	  ((eq? st '*))
	  ;; "list" different from "number": a pair is not necessarily a list:
	  ((eq? st 'list) (eq? t 'list))
	  ((eq? st 'number) (match '(or fixnum float) t))
	  ((pair? t)
	   (case (car t)
	     ((or) ((if exact every any) (cut match st <>) (cdr t)))
	     ((and) (every (cut match st <>) (cdr t)))
	     ((procedure) (match st 'procedure))
	     ;; (not ...) should not occur
	     (else (equal? st t))))
	  (else (equal? st t))))
  (define (matchnot st t)
    (cond ((eq? st t) #f)
	  ((eq? 'list t) (matchnot st '(or null pair)))
	  ((eq? 'number t) (matchnot st '(or fixnum float)))
	  ((eq? '* t) #f)
	  ((eq? 'list st) (not (match '(or null pair) t)))
	  ((eq? 'number st) (not (match '(or fixnum float) t)))
	  ((pair? t)
	   (case (car t)
	     ((or) (every (cut matchnot st <>) (cdr t)))
	     ((and) (any (cut matchnot st <>) (cdr t))) ;XXX test for "exact" here, too?
	     (else (not (match st t)))))
	  (else (not (match st t)))))
  (let loop ((tl typelist) (atypes atypes))
    (cond ((null? tl) (null? atypes))
	  ((null? atypes) #f)
	  ((eq? (car tl) '#!rest)
	   (every (cute match (cadr tl) <>) atypes))
	  ((match (car tl) (car atypes)) (loop (cdr tl) (cdr atypes)))
	  (else #f))))

(define (specialize-node! node template)
  (let ((args (cdr (node-subexpressions node)))
	(env '()))
    (define (subst x)
      (cond ((and (vector? x)
		  (= 1 (vector-length x)) )
	     (let ((y (vector-ref x 0)))
	       (cond ((integer? y)
		      (if (negative? y)
			  (list-tail args (sub1 (- y)))
			  (list-ref args (sub1 y))))
		     ((symbol? y)
		      (cond ((assq y env) => cdr)
			    (else
			     (let ((var (gensym y)))
			       (set! env (alist-cons y var env))
			       var)))))))
	    ((and (vector? x)
		  (= 2 (vector-length x))
		  (integer? (vector-ref x 0))
		  (eq? '... (vector-ref x 1)))
	     (list-tail args (sub1 (vector-ref x 0))))
	    ((not (pair? x)) x)
	    ((eq? 'quote (car x)) x)	; to handle numeric constants
	    (else (cons (subst (car x)) (subst (cdr x))))))
    (let ((spec (subst template)))
      (copy-node! (build-node-graph spec) node))))

(define (validate-type type name)
  ;; - returns converted type or #f
  ;; - also converts "(... -> ...)" types
  ;; - drops "#!key ..." args by converting to #!rest
  ;; - handles "(T1 -> T2 : T3)" (predicate) 
  ;; - simplifies result
  (let ((ptype #f))			; (T . PT) | #f
    (define (upto lst p)
      (let loop ((lst lst))
	(cond ((eq? lst p) '())
	      (else (cons (car lst) (loop (cdr lst)))))))
    (define (validate-llist llist)
      (cond ((null? llist) '())
	    ((symbol? llist) '(#!rest *))
	    ((not (pair? llist)) #f)
	    ((eq? '#!optional (car llist))
	     (let ((l1 (validate-llist (cdr llist))))
	       (and l1 (cons '#!optional l1))))
	    ((eq? '#!rest (car llist))
	     (cond ((null? (cdr llist)) '(#!rest *))
		   ((not (pair? (cdr llist))) #f)
		   (else
		    (let ((l1 (validate (cadr llist))))
		      (and l1 `(#!rest ,l1))))))
	    ((eq? '#!key (car llist)) '(#!rest *))
	    (else
	     (let* ((l1 (validate (car llist)))
		    (l2 (validate-llist (cdr llist))))
	       (and l1 l2 (cons l1 l2))))))
    (define (validate t #!optional (rec #t))
      (cond ((memq t '(* string symbol char number boolean list pair
			 procedure vector null eof undefined port blob
			 pointer locative fixnum float pointer-vector
			 deprecated noreturn values))
	     t)
	    ((not (pair? t)) #f)
	    ((eq? 'or (car t)) 
	     (and (list? t)
		  (let ((ts (map validate (cdr t))))
		    (and (every identity ts)
			 `(or ,@ts)))))
	    ((eq? 'struct (car t))
	     (and (= 2 (length t))
		  (symbol? (cadr t))
		  t))
	    ((eq? 'procedure (car t))
	     (and (pair? (cdr t))
		  (let* ((name (if (symbol? (cadr t))
				   (cadr t)
				   name))
			 (t2 (if (symbol? (cadr t)) (cddr t) (cdr t))))
		    (and (pair? t2)
			 (list? (car t2))
			 (let ((ts (validate-llist (car t2))))
			   (and ts
				(every identity ts)
				(let* ((rt2 (cdr t2))
				       (rt (if (eq? '* rt2) 
					       rt2
					       (and (list? rt2)
						    (let ((rts (map validate rt2)))
						      (and (every identity rts)
							   rts))))))
				  (and rt
				       `(procedure 
					 ,@(if (and name (not rec)) (list name) '())
					 ,ts
					 ,@rt)))))))))
	    ((and (pair? (cdr t)) (memq '-> t)) =>
	     (lambda (p)
	       (let ((cp (memq ': (cdr t))))
		 (cond ((not cp) 
			(validate
			 `(procedure ,(upto t p) ,@(cdr p))
			 rec))
		       ((and (= 5 (length t))
			     (eq? p (cdr t))
			     (eq? cp (cdddr t)))
			(set! t (validate `(procedure (,(first t)) ,(third t)) rec))
			;; we do it this way to distinguish the "outermost" predicate
			;; procedure type
			(set! ptype (cons t (validate (cadr cp))))
			t)
		       (else #f)))))
	    (else #f)))
    (let ((type (simplify-type (validate type #f))))
      (values type (and ptype (eq? (car ptype) type) (cdr ptype))))))

(define (initial-argument-types dest vars argc)
  (if (and dest 
	   strict-variable-types
	   (variable-mark dest '##compiler#declared-type))
      (let ((ptype (variable-mark dest '##compiler#type)))
	(if (procedure-type? ptype)
	    (nth-value 0 (procedure-argument-types ptype argc #t))
	    (make-list argc '*)))
      (make-list argc '*)))


;;; generate type-checks for formal variables

#;(define (generate-type-checks! node loc vars inits)
  ;; assumes type is validated
  (define (test t v)
    (case t
      ((null) `(##core#inline "C_eqp" ,v '()))
      ((eof) `(##core#inline "C_eofp" ,v))
      ((string) `(if (##core#inline "C_blockp" ,v)
		     (##core#inline "C_stringp" ,v)
		     '#f))
      ((float) `(if (##core#inline "C_blockp" ,v)
		    (##core#inline "C_flonump" ,v)
		    '#f))
      ((char) `(##core#inline "C_charp" ,v))
      ((fixnum) `(##core#inline "C_fixnump" ,v))
      ((number) `(##core#inline "C_i_numberp" ,v))
      ((list) `(##core#inline "C_i_listp" ,v))
      ((symbol) `(if (##core#inline "C_blockp" ,v)
		     (##core#inline "C_symbolp" ,v)
		     '#f))
      ((pair) `(if (##core#inline "C_blockp" ,v)
		   (##core#inline "C_pairp" ,v)
		   '#f))
      ((boolean) `(##core#inline "C_booleanp" ,v))
      ((procedure) `(if (##core#inline "C_blockp" ,v)
			(##core#inline "C_closurep" ,v)
			'#f))
      ((vector) `(if (##core#inline "C_blockp" ,v)
		     (##core#inline "C_vectorp" ,v)
		     '#f))
      ((pointer) `(if (##core#inline "C_blockp" ,v)
		      (##core#inline "C_pointerp" ,v)
		      '#f))
      ((blob) `(if (##core#inline "C_blockp" ,v)
		   (##core#inline "C_byteblockp" ,v)
		   '#f))
      ((pointer-vector) `(##core#inline "C_i_structurep" ,v 'pointer-vector))
      ((port) `(if (##core#inline "C_blockp" ,v)
		   (##core#inline "C_portp" ,v)
		   '#f))
      ((locative) `(if (##core#inline "C_blockp" ,v)
		       (##core#inline "C_locativep" ,v)
		       '#f))
      (else
       (case (car t)
	 ((procedure) `(if (##core#inline "C_blockp" ,v)
			   (##core#inline "C_closurep" ,v)
			   '#f))
	 ((or) 
	  (cond ((null? (cdr t)) '(##core#undefined))
		((null? (cddr t)) (test (cadr t) v))
		(else 
		 `(if ,(test (cadr t) v)
		      '#t
		      ,(test `(or ,@(cddr t)) v)))))
	 ((and)
	  (cond ((null? (cdr t)) '(##core#undefined))
		((null? (cddr t)) (test (cadr t) v))
		(else
		 `(if ,(test (cadr t) v)
		      ,(test `(and ,@(cddr t)) v)
		      '#f))))
	 ((not)
	  `(not ,(test (cadr t) v)))
	 (else (bomb "invalid type" t v))))))
  (let ((body (first (node-subexpressions node))))
    (let loop ((vars (reverse vars)) (inits (reverse inits)) (b body))
      (cond ((null? inits)
	     (if (eq? b body)
		 body
		 (copy-node!
		  (make-node 
		   (node-class node)	; lambda
		   (node-parameters node)
		   (list b))
		  node)))
	    ((eq? '* (car inits))
	     (loop (cdr vars) (cdr inits) b))
	    (else
	     (loop
	      (cdr vars) (cdr inits)
	      (make-node
	       'let (list (gensym))
	       (list
		(build-node-graph
		 (let ((t (car inits))
		       (v (car vars)))
		   `(if ,(test t v)
			(##core#undefined)
			(##core#app 
			 ##sys#error ',loc 
			 ',(sprintf "expected argument `~a' to be of type `~s'"
			     v t)
			 ,v))))
		b))))))))


;;; hardcoded result types for certain primitives

(define-syntax define-special-case
  (syntax-rules ()
    ((_ name handler)
     (##sys#put! 'name '##compiler#special-result-type handler))))

(define-special-case ##sys#make-structure
  (lambda (node rtypes)
    (or (let ((subs (node-subexpressions node)))
	  (and (>= (length subs) 2)
	       (let ((arg1 (second subs)))
		 (and (eq? 'quote (node-class arg1))
		      (let ((val (first (node-parameters arg1))))
			(and (symbol? val)
			     ;;XXX a bit of a hack - we should remove the distinct
			     ;;    "pointer-vector" type.
			     (if (eq? 'pointer-vector val)
				 '(pointer-vector)
				 `((struct ,val)))))))))
	rtypes)))
