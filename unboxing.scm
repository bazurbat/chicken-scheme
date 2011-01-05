;;;; unboxing.scm - The CHICKEN Scheme compiler (local flow-analysis with number boxing/unboxing)
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


(declare (unit unboxing))


(include "compiler-namespace")
(include "tweaks")


(define (d fstr . args)
  (when (##sys#fudge 13)
    (printf "[debug] ~?~%" fstr args)) )

(define-syntax d (syntax-rules () ((_ . _) (void))))


(define (perform-unboxing! node)
  (let ((stats (make-vector 301 '()))
	(any-rewrites #f))

    ;; walk nodes in lambda and mark unboxed variables
    (define (walk-lambda id e body)
      (let ((ae '()))

	(define (boxed! v)		; 'boxed is sticky
	  (d "boxing ~a" v )
	  (cond ((assq v e) =>
		 (lambda (a)
		   (set-cdr! a #f) ) )
		(else (set! e (alist-cons v #f e)))))

	(define (unboxed! v t)
	  (d "unboxing ~a -> ~a" v t)
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
	    (set! any-rewrites #t)
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
				((flonum)
				 (make-node
				  '##core#inline_allocate (list "C_a_i_flonum" 4) ; hardcoded size
				  (list (make-node '##core#unboxed_ref (list tmp rtype) '()))))
				((int)
				 (make-node
				  '##core#inline_allocate (list "C_a_int_to_num" 4) ; hardcoded size
				  (list (make-node '##core#unboxed_ref (list tmp rtype) '()))))
				((pointer)
				 (make-node
				  '##core#inline_allocate (list "C_a_i_mpointer" 2) ; hardcoded size
				  (list (make-node '##core#unboxed_ref (list tmp rtype) '()))))
				((char fixnum)
				 (make-node
				   '##core#inline
				   (list (if (eq? rtype 'char) "C_make_character" "C_fix"))
				   (list (make-node
					  '##core#unboxed_ref
					  (list tmp rtype) '()))))
				((bool)
				 (make-node
				  '##core#inline '("C_mk_bool")
				  (list (make-node '##core#unboxed_ref (list tmp rtype) '()))))
				((*) (bomb "unboxed type `*' not allowed as result"))
				(else (bomb "invalid unboxed type" rtype))))))))) 
		   ((or (eq? (car atypes) '*) 
			(unboxed-value? (car args)))
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
				      ((char) "C_character_code")
				      ((fixnum) "C_unfix")
				      ((flonum) "C_flonum_magnitude")
				      ((int) "C_num_to_int")
				      ((pointer) "C_pointer_address")
				      ((bool) "C_truep")
				      ((*) "C_id")
				      (else (bomb "invalid unboxed argument type" (car atypes)))))
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
	  ;; change `(let ((<v> (let (...) <x2>))) <x>)' into 
	  ;;        `(let (...) (let ((<v> <x2>)) <x>))'
	  (let* ((subs (node-subexpressions n))
		 (bnode (first subs))
		 (bcl (node-class bnode)))
	    (when (memq bcl '(let ##core#let_unboxed))
	      (d "straighten binding: ~a -> ~a" (node-parameters n) (node-parameters bnode))
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

	(define (straighten-conditional! n)
	  ;; change `(if (let (...) <x1>) <x2> <x3>)' into 
	  ;;        `(let (...) (if <x1> <x2> <x3>))'
	  (let* ((subs (node-subexpressions n))
		 (bnode (first subs))
		 (bcl (node-class bnode)))
	    (when (memq bcl '(let ##core#let_unboxed))
	      (d "straighten conditional: ~a" (node-parameters bnode))
	      (copy-node!
	       (make-node
		bcl
		(node-parameters bnode)
		(let ((bsubs (node-subexpressions bnode)))
		  (list (first bsubs)
			(make-node
			 (node-class n)
			 (node-parameters n)
			 (cons (second bsubs) (cdr subs))))))
	       n)
	      (straighten-conditional! (second (node-subexpressions n)))
	      ;;(pp (build-expression-tree n))
	      (straighten-binding! n))))

	(define (straighten-call! n)
	  ;; change `(<proc> ... (let (...) <x>) ...)' into
	  ;;        `(let (...) (<proc> ... <x> ...))'
	  (let* ((class (node-class n))
		 (subs (node-subexpressions n))
		 (params (node-parameters n))
		 (proc (first subs))
		 (args (cdr subs)))
	    (when (any (lambda (n) (memq (node-class n) '(let ##core#let_unboxed)))
		       args)
	      (d "straighten call: ~a" (build-expression-tree proc))
	      (copy-node!
	       (let loop ((args args) (newargs '()))
		 (if (null? args)
		     (straighten-call!
		      (make-node class params (cons proc (reverse newargs))))
		     (let* ((arg (first args))
			    (aclass (node-class arg))
			    (asubs (node-subexpressions arg)))
		       (if (memq aclass '(let ##core#let_unboxed))
			   (make-node
			    aclass (node-parameters arg)
			    (list 
			     (first asubs)
			     (loop (cdr args) (cons (second asubs) newargs))))
			   (loop (cdr args) (cons arg newargs))))))
	       n))
	    n))

	(define (walk n dest udest pass2?)
	  (let ((subs (node-subexpressions n))
		(params (node-parameters n))
		(class (node-class n)) )
	    (d "walk: (~a) ~a ~a" pass2? class params)
	    (case class

	      ((##core#undefined
		##core#proc
		##core#global-ref
		##core#inline_ref
		##core#inline_loc_ref) #f)

	      ((##core#lambda ##core#direct_lambda)
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
		 (cond (pass2?
			(when (and a (cdr a))
			  (copy-node!
			   (make-node '##core#unboxed_ref (list (alias v) (cdr a)) '())
			   n)))
		       ((not a) #f)	; global
		       ((not udest) (boxed! v)))
		 a))

	      ((##core#inline ##core#inline_allocate)
	       (let* ((rw1 (##sys#get (symbolify (first params)) '##compiler#unboxed-op))
		      (rw (and rw1 
			       (or unsafe
				   (and (fourth rw1)
					unchecked-specialized-arithmetic))
			       rw1))
		      (args (map (cut walk <> #f rw pass2?) subs)))
		 (cond ((not rw) #f)
		       ((or (not pass2?)
			    (and dest (unboxed? dest))
			    (any unboxed-value? args))
			(let ((alt (first rw))
			      (atypes (second rw))
			      (rtype (third rw)))
			  ;; result or arguments are unboxed - rewrite node to alternative
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
			    (when dest
			      (unboxed! dest rtype)))
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

	      ((quote) #f)

	      ((if ##core#cond)
	       (invalidate (walk (first subs) #f #f pass2?))
	       (straighten-conditional! n)
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
		   ((null? (cdr clauses))
		    (merge r (walk (car clauses) dest udest pass2?))) ) )

	      ((##core#call ##core#direct_call)
	       (for-each (o invalidate (cut walk <> #f #f pass2?)) subs)
	       (when pass2?
		 (straighten-call! n))
	       #f)

	      (else
	       (for-each (o invalidate (cut walk <> #f #f pass2?)) subs)
	       #f))))

	(d "walk lambda: ~a" id)
	(walk body #f #f #f)
	(walk body #f #f #t)))
    
    (walk-lambda #f '() node)
    (when (and any-rewrites
	       (debugging 'o "unboxed rewrites:"))
      (##sys#hash-table-for-each
       (lambda (k v)
	 (printf "  ~a\t~a~%" k v) )
       stats))))

(define-syntax define-unboxed-ops
  (syntax-rules ()
    ((_ (name atypes rtype alt) ...)
     (begin
       (register-unboxed-op 'name 'atypes 'rtype 'alt #f) ...))))

(define-syntax define-unboxed-arithmetic-ops
  (syntax-rules ()
    ((_ (name atypes rtype alt) ...)
     (begin
       (register-unboxed-op 'name 'atypes 'rtype 'alt #t) ...))))

(define (register-unboxed-op name atypes rtype alt arithmetic)
  (##sys#put! (symbolify name) '##compiler#unboxed-op (list alt atypes rtype arithmetic)))


;; unboxed rewrites

(define-unboxed-arithmetic-ops 
  (C_a_i_flonum_plus (flonum flonum) flonum "C_ub_i_flonum_plus")
  (C_a_i_flonum_difference (flonum flonum) flonum "C_ub_i_flonum_difference")
  (C_a_i_flonum_times (flonum flonum) flonum "C_ub_i_flonum_times") 
  (C_a_i_flonum_quotient (flonum flonum) flonum "C_ub_i_flonum_quotient") 
  (C_u_i_fpintegerp (flonum) bool "C_ub_i_fpintegerp")
  (C_flonum_equalp (flonum flonum) bool "C_ub_i_flonum_equalp")
  (C_flonum_greaterp (flonum flonum) bool "C_ub_i_flonum_greaterp")
  (C_flonum_lessp (flonum flonum) bool "C_ub_i_flonum_lessp")
  (C_flonum_greater_or_equal_p (flonum flonum) bool "C_ub_i_flonum_greater_or_equal_p")
  (C_flonum_less_or_equal_p (flonum flonum) bool "C_ub_i_flonum_less_or_equal_p")
  (C_a_i_flonum_sin (flonum) flonum "C_sin")
  (C_a_i_flonum_cos (flonum) flonum "C_cos")
  (C_a_i_flonum_tan (flonum) flonum "C_tab")
  (C_a_i_flonum_asin (flonum) flonum "C_asin")
  (C_a_i_flonum_acos (flonum) flonum "C_acos")
  (C_a_i_flonum_atan (flonum) flonum "C_atan")
  (C_a_i_flonum_atan2 (flonum flonum) flonum "C_atan2")
  (C_a_i_flonum_exp (flonum) flonum "C_exp")
  (C_a_i_flonum_expt (flonum flonum) flonum "C_pow")
  (C_a_i_flonum_log (flonum) flonum "C_log")
  (C_a_i_flonum_sqrt (flonum) flonum "C_sqrt")
  (C_a_i_flonum_abs (flonum) flonum "C_fabs")
  (C_a_i_flonum_truncate (flonum) flonum "C_trunc")
  (C_a_i_flonum_ceiling (flonum) flonum "C_ceil")
  (C_a_i_flonum_floor (flonum) flonum "C_floor")
  (C_a_i_flonum_round (flonum) flonum "C_round"))

(define-unboxed-ops 
  (C_u_i_f32vector_set (* fixnum flonum) fixnum "C_ub_i_f32vector_set")
  (C_u_i_f64vector_set (* fixnum flonum) fixnum "C_ub_i_f64vector_set")
  (C_a_i_f32vector_ref (* fixnum) flonum "C_ub_i_f32vector_ref")
  (C_a_i_f64vector_ref (* fixnum) flonum "C_ub_i_f64vector_ref")
  (C_a_u_i_pointer_inc (pointer fixnum) pointer "C_ub_i_pointer_inc")
  (C_pointer_eqp (pointer pointer) bool "C_ub_i_pointer_eqp")
  (C_u_i_pointer_u8_ref (pointer) fixnum "C_ub_i_pointer_u8_ref")
  (C_u_i_pointer_s8_ref (pointer) fixnum "C_ub_i_pointer_s8_ref")
  (C_u_i_pointer_u16_ref (pointer) fixnum "C_ub_i_pointer_u16_ref")
  (C_u_i_pointer_s16_ref (pointer) fixnum "C_ub_i_pointer_s16_ref")
  (C_u_i_pointer_u32_ref (pointer) fixnum "C_ub_i_pointer_u32_ref")
  (C_u_i_pointer_s32_ref (pointer) fixnum "C_ub_i_pointer_s32_ref")
  (C_u_i_pointer_f32_ref (pointer) flonum "C_ub_i_pointer_f32_ref")
  (C_u_i_pointer_f64_ref (pointer) flonum "C_ub_i_pointer_f64_ref")
  (C_u_i_pointer_u8_set (pointer fixnum) fixnum "C_ub_i_pointer_u8_set")
  (C_u_i_pointer_s8_set (pointer fixnum) fixnum "C_ub_i_pointer_s8_set")
  (C_u_i_pointer_u16_set (pointer fixnum) fixnum "C_ub_i_pointer_u16_set")
  (C_u_i_pointer_s16_set (pointer fixnum) fixnum "C_ub_i_pointer_s16_set")
  (C_u_i_pointer_u32_set (pointer fixnum) fixnum "C_ub_i_pointer_u32_set")
  (C_u_i_pointer_s32_set (pointer fixnum) fixnum "C_ub_i_pointer_s32_set")
  (C_u_i_pointer_f32_set (pointer flonum) flonum "C_ub_i_pointer_f32_set")
  (C_u_i_pointer_f64_set (pointer flonum) flonum "C_ub_i_pointer_f64_set")
  (C_null_pointerp (pointer) bool "C_ub_i_null_pointerp"))
