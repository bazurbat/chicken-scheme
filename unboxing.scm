;;;; unboxing.scm - The CHICKEN Scheme compiler (local flow-analysis with number boxing/unboxing)
;
; Copyright (c) 2009, The Chicken Team
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


(declare (unit unboxing))


(include "compiler-namespace")
(include "tweaks")


(define (d fstr . args)
  (when (##sys#fudge 13)
    (printf "[debug] ~?~%" fstr args)) )

;(define-syntax d (syntax-rules () ((_ . _) (void))))


(define (perform-unboxing! node)
  (let ((stats (make-vector 301 '())))

    ;; walk nodes in lambda and mark unboxed variables
    (define (walk-lambda id e body)
      (let ((ae '()))

	(define (boxed! v)		; 'boxed is sticky
	  (cond ((assq v e) =>
		 (lambda (a)
		   (set-cdr! a #f) ) )
		(else (set! e (alist-cons v #f e)))))

	(define (unboxed! v t)
	  (cond ((assq v e) =>
		 (lambda (a)
		   (if (cdr a)
		       (let ((t2 (and (eq? (cdr a) t) t)))
			 (if t2
			     (set-cdr! a t2)
			     (set! e (alist-cons v #f e))))
		       (set-cdr! e (alist-cons v #f e)))))
		(else
		 (set! ae (alist-cons v (gensym "tu") ae))
		 (set! e (alist-cons v t e)))))

	(define (unboxed? v)
	  (and-let* ((a (assq v e)))
	    (cdr a)))

	(define (unboxed-value? x)
	  (and x (cdr x)))

	(define (invalidate r) ; if result is variable, mark it 'boxed
	  (when (and (pair? r) (car r))
	    (boxed! (car r))))

	(define (alias v)
	  (alist-ref v ae eq? v) )

	(define (merge r1 r2)
	  (cond ((or (not r1) (not (cdr r1)))
		 (invalidate r2)
		 #f)
		((or (not r2) (not (cdr r2)))
		 (invalidate r1)
		 #f)
		((equal? r1 r2) r1)
		((eq? (cdr r1) (cdr r2))
		 (cons #f (cdr r1)))
		(else #f)))

	(define (rewrite! n alt anodes avals atypes0 rtype dest)
	  (d "rewrite: ~a -> ~a  (dest: ~a)" (first (node-parameters n)) alt dest)
	  (let ((s (symbolify alt)))
	    (##sys#hash-table-set! 
	     stats s (add1 (or (##sys#hash-table-ref stats s) 0))))
	  (copy-node!
	   (let loop ((args avals) (anodes anodes) (atypes atypes0) (iargs '()))
	     (cond ((null? args) 
		    (let ((n2 (make-node
			       '##core#inline_unboxed (list alt)
			       (reverse iargs))))
		      (if (and dest (cdr dest))
			  n2
			  (let ((tmp (gensym "tu")))
			    (make-node
			     '##core#let_unboxed (list tmp rtype)
			     (list
			      n2
			      (case rtype
				((flo)
				 (make-node
				  '##core#inline_allocate (list "C_a_i_flonum" 4) ; hardcoded size
				  (list (make-node '##core#unboxed_ref (list tmp rtype) '()))))
				((ptr)
				 (make-node
				  '##core#inline_allocate (list "C_a_i_mpointer" 2) ; hardcoded size
				  (list (make-node '##core#unboxed_ref (list tmp rtype) '()))))
				((chr)
				 (make-node
				   '##core#inline
				   (list (if (eq? rtype 'chr) "C_make_character" "C_fix"))
				   (list (make-node
					  '##core#unboxed_ref
					  (list tmp rtype) '()))))
				(else (bomb "invalid unboxed type" rtype))))))))) 
		   ((unboxed-value? (car args))
		    (loop (cdr args)
			  (cdr anodes)
			  (cdr atypes)
			  (cons (car anodes) iargs)))
		   (else
		    ;; introduce unboxed temporary
		    (let ((tmp (gensym "tu")))
		      (make-node
		       '##core#let_unboxed (list tmp (car atypes))
		       (list (make-node
			      '##core#inline 
			      (list (case (car atypes)
				      ((chr) "C_character_code")
				      ((fix) "C_unfix")
				      ((flo) "C_flonum_magnitude")
				      ((ptr) "C_pointer_address")
				      (else (bomb "invalid unboxed type" (car atypes)))))
			      (list (car anodes)))
			     (loop (cdr args)
				   (cdr anodes)
				   (cdr atypes)
				   (cons (make-node '##core#unboxed_ref (list tmp) '())
					 iargs))))))))
	   n)
	  (straighten-binding! n))

	(define (rebind-unboxed! n t)
	  (let ((var (alias (first (node-parameters n)))))
	    (node-class-set! n '##core#let_unboxed)
	    (node-parameters-set! n (list var t))
	    (straighten-binding! n) ))

	(define (straighten-binding! n)
	  ;; change `(let ((v (let (b) x2))) x)' into `(let (b) (let ((v x2)) x))'
	  (let* ((subs (node-subexpressions n))
		 (bnode (first subs))
		 (bcl (node-class bnode)))
	    (when (memq bcl '(let ##core#let_unboxed))
	      (d "straighten: ~a -> ~a" (node-parameters n) (node-parameters bnode))
	      (copy-node!
	       (make-node
		bcl
		(node-parameters bnode)
		(let ((bsubs (node-subexpressions bnode)))
		  (list (first bsubs)
			(make-node
			 (node-class n)
			 (node-parameters n)
			 (list (second bsubs)
			       (second subs))))))
	       n)
	      ;;(pp (build-expression-tree n))
	      (straighten-binding! n)
	      (straighten-binding! (second (node-subexpressions n))))))

	(define (walk n dest udest pass2?)
	  (let ((subs (node-subexpressions n))
		(params (node-parameters n))
		(class (node-class n)) )
	    ;;(d "walk: (~a) ~a ~a" pass2? class params)
	    (case class

	      ((##core#undefined
		##core#proc
		##core#global-ref
		##core#inline_ref
		##core#inline_loc_ref) #f)

	      ((##core#lambda
		##core#direct_lambda)
	       (decompose-lambda-list
		(third params)
		(lambda (vars argc rest)
		  (unless pass2?
		    (walk-lambda
		     (first params) 
		     (map (cut cons <> #f) vars)
		     (first subs)) )
		  #f)))

	      ((##core#variable)
	       (let* ((v (first params))
		      (a (assq v e)))
		 (if pass2?
		     (when (and a (cdr a))
		       (copy-node!
			(make-node '##core#unboxed_ref (list (alias v) (cdr a)) '())
			n))
		     (unless udest (boxed! v)))
		 a))

	      ((##core#inline ##core#inline_allocate)
	       (let* ((rw (##sys#get (symbolify (first params)) '##compiler#unboxed-op))
		      (args (map (cut walk <> #f rw pass2?) subs)))
		 (cond ((not rw) #f)
		       ((or (not pass2?)
			    (and dest (unboxed? dest))
			    (any unboxed-value? args))
			(let ((alt (first rw))
			      (atypes (second rw))
			      (rtype (third rw)))
			  ;; if result or arguments are unboxed, rewrite node to alternative
			  (when pass2?
			    (rewrite! 
			     n alt subs args atypes rtype 
			     (and dest (assq dest e))))
			  (cons #f rtype)) )
		       (else
			(let ((rtype (third rw)))
			  ;; mark argument-vars and dest as unboxed if alternative exists
			  (unless pass2?
			    (for-each
			     (lambda (a)
			       (when (and a (car a) (cdr a))
				 (unboxed! (car a) (cdr a))))
			     args)
			    (when dest (unboxed! dest rtype)))
			  (cons #f rtype))))))

	      ((let)
	       (let* ((v (first params))
		      (r1 (walk (first subs) v #t pass2?)))
		 (when (and (not pass2?) r1 (cdr r1))
		   (unboxed! (first params) (cdr r1)))
		 (let ((r (walk (second subs) dest udest pass2?)))
		   (when pass2?
		     (let ((a (assq v e)))
		       (if (and a (cdr a))
			   (rebind-unboxed! n (cdr a))
			   (straighten-binding! n))) )
		   r)))

	      ((set!)
	       (let* ((var (first params))
		      (a (assq var e))
		      (val (walk (first subs) var (and a (cdr a)) pass2?)))
		 (cond (pass2?
			(when (and a (cdr a)) ; may have mutated
			  (copy-node!
			   (make-node
			    '##core#unboxed_set! (list (alias var) (cdr a)) subs)
			   n)))
		       ((and val (cdr val))
			(unboxed! var (cdr val)))
		       (else 
			(boxed! var)
			(invalidate val) ) )
		 #f))

	      ((quote)
	       (let ((val (first params)))
		 (cond ((flonum? val) '(#f . flo))
		       ((fixnum? val) '(#f . fix))
		       ((char? val) '(#f . chr))
		       (else #f))))

	      ((if ##core#cond)
	       (invalidate (walk (first subs) #f #f pass2?))
	       (let ((r1 (walk (second subs) dest udest pass2?))
		     (r2 (walk (third subs) dest udest pass2?)))
		 (merge r1 r2)))

	      ((##core#switch)
	       (invalidate (walk (first subs) #f #f pass2?))
	       (do ((clauses (cdr subs) (cddr clauses))
		    (r 'none 
		       (if (eq? r 'none)
			   (walk (second clauses) dest udest pass2?)
			   (merge r (walk (second clauses) dest udest pass2?)))))
		   ((null? (cddr clauses)) 
		    (merge r (walk (car clauses) dest udest pass2?))) ) )

	      (else
	       (for-each (o invalidate (cut walk <> #f #f pass2?)) subs)
	       #f))))

	;(d "walk lambda: ~a" id)
	(walk body #f #f #f)
	(walk body #f #f #t)))
    
    (walk-lambda #f '() node)
    (when (debugging 'x #;'o "unboxed rewrites:") ;XXX
      (##sys#hash-table-for-each
       (lambda (k v)
	 (printf "  ~a\t~a~%" k v) )
       stats))))

(define-syntax define-unboxed-ops
  (syntax-rules ()
    ((_ (name atypes rtype alt) ...)
     (begin
       (register-op 'name 'atypes 'rtype 'alt) ...))))

(define (register-op name atypes rtype alt)
  (##sys#put! (symbolify name) '##compiler#unboxed-op (list alt atypes rtype)))


;; unboxed rewrites

(define-unboxed-ops 
  (C_a_i_flonum_plus (flo flo) flo "C_ub_i_flonum_plus")
  (C_a_i_flonum_difference (flo flo) flo "C_ub_i_flonum_difference")
  (C_a_i_flonum_times (flo flo) flo "C_ub_i_flonum_times") 
  (C_a_i_flonum_quotient (flo flo) flo "C_ub_i_flonum_quotient") 
  ;...
  )


;;XXX still broken:
;
; - literals that are passed to unboxed operations
;   (these must be bound via ##core#let_unboxed)
