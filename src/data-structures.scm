;;; data-structures.scm - Optional data structures extensions
;
; Copyright (c) 2008-2014, The CHICKEN Team
; All rights reserved.
;
; Redistribution and use in source and binary forms, with or without
; modification, are permitted provided that the following conditions
; are met:
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
 (unit data-structures))

(include "common-declarations.scm")

(register-feature! 'data-structures)



;;; Combinators:

(define (identity x) x)

(define (conjoin . preds)
  (lambda (x)
    (let loop ([preds preds])
      (or (null? preds)
	  (and ((##sys#slot preds 0) x)
	       (loop (##sys#slot preds 1)) ) ) ) ) )

(define (disjoin . preds)
  (lambda (x)
    (let loop ([preds preds])
      (and (not (null? preds))
	   (or ((##sys#slot preds 0) x)
	       (loop (##sys#slot preds 1)) ) ) ) ) )

(define (constantly . xs)
  (if (eq? 1 (length xs))
      (let ([x (car xs)])
	(lambda _ x) )
      (lambda _ (apply values xs)) ) )

(define (flip proc) (lambda (x y) (proc y x)))

(define complement
  (lambda (p)
    (lambda args (not (apply p args))) ) )

(define (compose . fns)
  (define (rec f0 . fns)
    (if (null? fns)
	f0
	(lambda args
	  (call-with-values
	      (lambda () (apply (apply rec fns) args))
	    f0) ) ) )
  (if (null? fns)
      values
      (apply rec fns) ) )

(define (o . fns)
  (if (null? fns)
      identity
      (let loop ((fns fns))
	(let ((h (##sys#slot fns 0))
	      (t (##sys#slot fns 1)) )
	  (if (null? t)
	      h
	      (lambda (x) (h ((loop t) x))))))))

(define (list-of? pred)
  (lambda (lst)
    (let loop ([lst lst])
      (cond [(null? lst) #t]
	    [(not-pair? lst) #f]
	    [(pred (##sys#slot lst 0)) (loop (##sys#slot lst 1))]
	    [else #f] ) ) ) )

(define (each . procs)
  (cond ((null? procs) (lambda _ (void)))
	((null? (##sys#slot procs 1)) (##sys#slot procs 0))
	(else
	 (lambda args
	   (let loop ((procs procs))
	     (let ((h (##sys#slot procs 0))
		   (t (##sys#slot procs 1)) )
	       (if (null? t)
		   (apply h args)
		   (begin
		     (apply h args)
		     (loop t) ) ) ) ) ) ) ) )

(define (any? x) #t)


;;; List operators:

(define (atom? x) (##core#inline "C_i_not_pair_p" x))

(define (tail? x y)
  (##sys#check-list y 'tail?)
  (or (##core#inline "C_eqp" x '())
      (let loop ((y y))
	(cond ((##core#inline "C_eqp" y '()) #f)
	      ((##core#inline "C_eqp" x y) #t)
	      (else (loop (##sys#slot y 1))) ) ) ) )

(define intersperse 
  (lambda (lst x)
    (let loop ((ns lst))
      (if (##core#inline "C_eqp" ns '())
	  ns
	  (let ((tail (cdr ns)))
	    (if (##core#inline "C_eqp" tail '())
		ns
		(cons (##sys#slot ns 0) (cons x (loop tail))) ) ) ) ) ) )

(define (butlast lst)
  (##sys#check-pair lst 'butlast)
  (let loop ((lst lst))
    (let ((next (##sys#slot lst 1)))
      (if (and (##core#inline "C_blockp" next) (##core#inline "C_pairp" next))
	  (cons (##sys#slot lst 0) (loop next))
	  '() ) ) ) )

(define (flatten . lists0)
  (let loop ([lists lists0] [rest '()])
    (cond [(null? lists) rest]
	  [else
	   (let ([head (##sys#slot lists 0)]
		 [tail (##sys#slot lists 1)] )
	     (if (list? head)
		 (loop head (loop tail rest))
		 (cons head (loop tail rest)) ) ) ] ) ) )

(define chop
  (lambda (lst n)
    (##sys#check-exact n 'chop)
    (when (fx<= n 0) (##sys#error 'chop "invalid numeric argument" n))
    (let ([len (length lst)])
      (let loop ([lst lst] [i len])
	(cond [(null? lst) '()]
	      [(fx< i n) (list lst)]
	      [else
	       (do ([hd '() (cons (##sys#slot tl 0) hd)]
		    [tl lst (##sys#slot tl 1)] 
		    [c n (fx- c 1)] )
		   ((fx= c 0)
		    (cons (reverse hd) (loop tl (fx- i n))) ) ) ] ) ) ) ) )

(define (join lsts . lst)
  (let ([lst (if (pair? lst) (car lst) '())])
    (##sys#check-list lst 'join)
    (let loop ([lsts lsts])
      (cond [(null? lsts) '()]
	    [(not (pair? lsts))
	     (##sys#error-not-a-proper-list lsts) ]
	    [else
	     (let ([l (##sys#slot lsts 0)]
		   [r (##sys#slot lsts 1)] )
	       (if (null? r)
		   l
		   (##sys#append l lst (loop r)) ) ) ] ) ) ) )

(define compress
  (lambda (blst lst)
    (let ([msg "bad argument type - not a proper list"])
      (##sys#check-list lst 'compress)
      (let loop ([blst blst] [lst lst])
	(cond [(null? blst) '()]
	      [(not (pair? blst))
	       (##sys#signal-hook #:type-error 'compress msg blst) ]
	      [(not (pair? lst))
	       (##sys#signal-hook #:type-error 'compress msg lst) ]
	      [(##sys#slot blst 0)
	       (cons (##sys#slot lst 0) (loop (##sys#slot blst 1) (##sys#slot lst 1)))]
	      [else (loop (##sys#slot blst 1) (##sys#slot lst 1))] ) ) ) ) )


;;; Alists:

(define (alist-update! x y lst #!optional (cmp eqv?))
  (let* ([aq (cond [(eq? eq? cmp) assq]
		   [(eq? eqv? cmp) assv]
		   [(eq? equal? cmp) assoc]
		   [else 
		    (lambda (x lst)
		      (let loop ([lst lst])
			(and (pair? lst)
			     (let ([a (##sys#slot lst 0)])
			       (if (and (pair? a) (cmp (##sys#slot a 0) x))
				   a
				   (loop (##sys#slot lst 1)) ) ) ) ) ) ] ) ] 
	 [item (aq x lst)] )
    (if item
	(begin
	  (##sys#setslot item 1 y)
	  lst)
	(cons (cons x y) lst) ) ) )

(define (alist-update k v lst #!optional (cmp eqv?))
  (let loop ((lst lst))
    (cond ((null? lst)
           (list (cons k v)))
          ((not (pair? lst))
           (error 'alist-update "bad argument type" lst))
          (else
           (let ((a (##sys#slot lst 0)))
             (cond ((not (pair? a))
                    (error 'alist-update "bad argument type" a))
                   ((cmp (##sys#slot a 0) k)
                    (cons (cons k v) (##sys#slot lst 1)))
                   (else
                    (cons (cons (##sys#slot a 0) (##sys#slot a 1))
                          (loop (##sys#slot lst 1))))))))))

(define (alist-ref x lst #!optional (cmp eqv?) (default #f))
  (let* ((aq (cond ((eq? eq? cmp) assq)
		   ((eq? eqv? cmp) assv)
		   ((eq? equal? cmp) assoc)
		   (else
		    (lambda (x lst)
		      (let loop ((lst lst))
			(cond
			 ((null? lst) #f)
			 ((pair? lst)
			  (let ((a (##sys#slot lst 0)))
			    (##sys#check-pair a 'alist-ref)
			    (if (cmp (##sys#slot a 0) x)
				a
				(loop (##sys#slot lst 1)) ) ))
			 (else (error 'alist-ref "bad argument type" lst)) )  ) ) ) ) )
	 (item (aq x lst)) )
    (if item
	(##sys#slot item 1)
	default) ) )

(define (rassoc x lst . tst)
  (##sys#check-list lst 'rassoc)
  (let ([tst (if (pair? tst) (car tst) eqv?)])
    (let loop ([l lst])
      (and (pair? l)
	   (let ([a (##sys#slot l 0)])
	     (##sys#check-pair a 'rassoc)
	     (if (tst x (##sys#slot a 1))
		 a
		 (loop (##sys#slot l 1)) ) ) ) ) ) )



; (reverse-string-append l) = (apply string-append (reverse l))

(define (reverse-string-append l)
  (define (rev-string-append l i)
    (if (pair? l)
      (let* ((str (car l))
	     (len (string-length str))
	     (result (rev-string-append (cdr l) (fx+ i len))))
	(let loop ((j 0) (k (fx- (fx- (string-length result) i) len)))
	  (if (fx< j len)
	    (begin
	      (string-set! result k (string-ref str j))
	      (loop (fx+ j 1) (fx+ k 1)))
	    result)))
      (make-string i)))
  (rev-string-append l 0))

;;; Anything->string conversion:

(define ->string 
  (lambda (x)
    (cond [(string? x) x]
	  [(symbol? x) (symbol->string x)]
	  [(char? x) (string x)]
	  [(number? x) (##sys#number->string x)]
	  [else 
	   (let ([o (open-output-string)])
	     (display x o)
	     (get-output-string o) ) ] ) ) )

(define conc
  (lambda args
    (apply string-append (map ->string args)) ) )


;;; Search one string inside another:

(let ()
  (define (traverse which where start test loc)
    (##sys#check-string which loc)
    (##sys#check-string where loc)
    (let ([wherelen (##sys#size where)]
	  [whichlen (##sys#size which)] )
      (##sys#check-exact start loc)
      (let loop ([istart start] [iend whichlen])
	(cond [(fx> iend wherelen) #f]
	      [(test istart whichlen) istart]
	      [else 
	       (loop (fx+ istart 1)
		     (fx+ iend 1) ) ] ) ) ) )
  (set! ##sys#substring-index 
    (lambda (which where start)
      (traverse 
       which where start
       (lambda (i l) (##core#inline "C_substring_compare" which where 0 i l))
       'substring-index) ) )
  (set! ##sys#substring-index-ci 
    (lambda (which where start)
      (traverse
       which where start
       (lambda (i l) (##core#inline "C_substring_compare_case_insensitive" which where 0 i l)) 
       'substring-index-ci) ) ) )

(define (substring-index which where #!optional (start 0))
  (##sys#substring-index which where start) )

(define (substring-index-ci which where #!optional (start 0))
  (##sys#substring-index-ci which where start) )


;;; 3-Way string comparison:

(define (string-compare3 s1 s2)
  (##sys#check-string s1 'string-compare3)
  (##sys#check-string s2 'string-compare3)
  (let ((len1 (##sys#size s1))
	(len2 (##sys#size s2)) )
    (let* ((len-diff (fx- len1 len2)) 
	   (cmp (##core#inline "C_string_compare" s1 s2 (if (fx< len-diff 0) len1 len2))))
      (if (fx= cmp 0) 
	  len-diff 
	  cmp))))

(define (string-compare3-ci s1 s2)
  (##sys#check-string s1 'string-compare3-ci)
  (##sys#check-string s2 'string-compare3-ci)
  (let ((len1 (##sys#size s1))
	(len2 (##sys#size s2)) )
    (let* ((len-diff (fx- len1 len2)) 
	   (cmp (##core#inline "C_string_compare_case_insensitive" s1 s2 (if (fx< len-diff 0) len1 len2))))
      (if (fx= cmp 0) 
	  len-diff 
	  cmp))))


;;; Substring comparison:

(define (##sys#substring=? s1 s2 start1 start2 n)
  (##sys#check-string s1 'substring=?)
  (##sys#check-string s2 'substring=?)
  (let ((len (or n
		 (fxmin (fx- (##sys#size s1) start1)
			(fx- (##sys#size s2) start2) ) ) ) )
    (##sys#check-exact start1 'substring=?)
    (##sys#check-exact start2 'substring=?)
    (##core#inline "C_substring_compare" s1 s2 start1 start2 len) ) )

(define (substring=? s1 s2 #!optional (start1 0) (start2 0) len)
  (##sys#substring=? s1 s2 start1 start2 len) )

(define (##sys#substring-ci=? s1 s2 start1 start2 n)
  (##sys#check-string s1 'substring-ci=?)
  (##sys#check-string s2 'substring-ci=?)
  (let ((len (or n
		 (fxmin (fx- (##sys#size s1) start1)
			(fx- (##sys#size s2) start2) ) ) ) )
    (##sys#check-exact start1 'substring-ci=?)
    (##sys#check-exact start2 'substring-ci=?)
    (##core#inline "C_substring_compare_case_insensitive"
		   s1 s2 start1 start2 len) ) )

(define (substring-ci=? s1 s2 #!optional (start1 0) (start2 0) len)
  (##sys#substring-ci=? s1 s2 start1 start2 len) )


;;; Split string into substrings:

(define string-split
  (lambda (str . delstr-and-flag)
    (##sys#check-string str 'string-split)
    (let* ([del (if (null? delstr-and-flag) "\t\n " (car delstr-and-flag))]
	   [flag (if (fx= (length delstr-and-flag) 2) (cadr delstr-and-flag) #f)]
	   [strlen (##sys#size str)] )
      (##sys#check-string del 'string-split)
      (let ([dellen (##sys#size del)] 
	    [first #f] )
	(define (add from to last)
	  (let ([node (cons (##sys#substring str from to) '())])
	    (if first
		(##sys#setslot last 1 node)
		(set! first node) ) 
	    node) )
	(let loop ([i 0] [last #f] [from 0])
	  (cond [(fx>= i strlen)
		 (when (or (fx> i from) flag) (add from i last))
		 (or first '()) ]
		[else
		 (let ([c (##core#inline "C_subchar" str i)])
		   (let scan ([j 0])
		     (cond [(fx>= j dellen) (loop (fx+ i 1) last from)]
			   [(eq? c (##core#inline "C_subchar" del j))
			    (let ([i2 (fx+ i 1)])
			      (if (or (fx> i from) flag)
				  (loop i2 (add from i last) i2)
				  (loop i2 last i2) ) ) ]
			   [else (scan (fx+ j 1))] ) ) ) ] ) ) ) ) ) )


;;; Concatenate list of strings:

(define (string-intersperse strs #!optional (ds " "))
  (##sys#check-list strs 'string-intersperse)
  (##sys#check-string ds 'string-intersperse)
  (let ((dslen (##sys#size ds)))
    (let loop1 ((ss strs) (n 0))
      (cond ((##core#inline "C_eqp" ss '())
	     (if (##core#inline "C_eqp" strs '())
		 ""
		 (let ((str2 (##sys#allocate-vector (fx- n dslen) #t #\space #f)))
		   (let loop2 ((ss2 strs) (n2 0))
		     (let* ((stri (##sys#slot ss2 0))
			    (next (##sys#slot ss2 1)) 
			    (strilen (##sys#size stri)) )
		       (##core#inline "C_substring_copy" stri str2 0 strilen n2)
		       (let ((n3 (fx+ n2 strilen)))
			 (if (##core#inline "C_eqp" next '())
			     str2
			     (begin
			       (##core#inline "C_substring_copy" ds str2 0 dslen n3)
			       (loop2 next (fx+ n3 dslen)) ) ) ) ) ) ) ) )
	    ((and (##core#inline "C_blockp" ss) (##core#inline "C_pairp" ss))
	     (let ((stri (##sys#slot ss 0)))
	       (##sys#check-string stri 'string-intersperse)
	       (loop1 (##sys#slot ss 1)
		      (fx+ (##sys#size stri) (fx+ dslen n)) ) ) )
	    (else (##sys#error-not-a-proper-list strs)) ) ) ) )


;;; Translate elements of a string:

(define string-translate 
  (lambda (str from . to)

    (define (instring s)
      (let ([len (##sys#size s)])
	(lambda (c)
	  (let loop ([i 0])
	    (cond [(fx>= i len) #f]
		  [(eq? c (##core#inline "C_subchar" s i)) i]
		  [else (loop (fx+ i 1))] ) ) ) ) )

    (let* ([from
	    (cond [(char? from) (lambda (c) (eq? c from))]
		  [(pair? from) (instring (list->string from))]
		  [else
		   (##sys#check-string from 'string-translate)
		   (instring from) ] ) ]
	   [to
	    (and (pair? to)
		 (let ([tx (##sys#slot to 0)])
		   (cond [(char? tx) tx]
			 [(pair? tx) (list->string tx)]
			 [else
			  (##sys#check-string tx 'string-translate)
			  tx] ) ) ) ] 
	   [tlen (and (string? to) (##sys#size to))] )
      (##sys#check-string str 'string-translate)
      (let* ([slen (##sys#size str)]
	     [str2 (make-string slen)] )
	(let loop ([i 0] [j 0])
	  (if (fx>= i slen)
	      (if (fx< j i)
		  (##sys#substring str2 0 j)
		  str2)
	      (let* ([ci (##core#inline "C_subchar" str i)]
		     [found (from ci)] )
		(cond [(not found)
		       (##core#inline "C_setsubchar" str2 j ci)
		       (loop (fx+ i 1) (fx+ j 1)) ]
		      [(not to) (loop (fx+ i 1) j)]
		      [(char? to)
		       (##core#inline "C_setsubchar" str2 j to)
		       (loop (fx+ i 1) (fx+ j 1)) ]
		      [(fx>= found tlen)
		       (##sys#error 'string-translate "invalid translation destination" i to) ]
		      [else 
		       (##core#inline "C_setsubchar" str2 j (##core#inline "C_subchar" to found))
		       (loop (fx+ i 1) (fx+ j 1)) ] ) ) ) ) ) ) ) )

(define (string-translate* str smap)
  (##sys#check-string str 'string-translate*)
  (##sys#check-list smap 'string-translate*)
  (let ([len (##sys#size str)])
    (define (collect i from total fs)
      (if (fx>= i len)
	  (##sys#fragments->string
	   total
	   (##sys#fast-reverse 
	    (if (fx> i from) 
		(cons (##sys#substring str from i) fs)
		fs) ) )
	  (let loop ([smap smap])
	    (if (null? smap) 
		(collect (fx+ i 1) from (fx+ total 1) fs)
		(let* ([p (car smap)]
		       [sm (car p)]
		       [smlen (string-length sm)]
		       [st (cdr p)] )
		  (if (##core#inline "C_substring_compare" str sm i 0 smlen)
		      (let ([i2 (fx+ i smlen)])
			(when (fx> i from)
			  (set! fs (cons (##sys#substring str from i) fs)) )
			(collect 
			 i2 i2
			 (fx+ total (string-length st))
			 (cons st fs) ) ) 
		      (loop (cdr smap)) ) ) ) ) ) )
    (collect 0 0 0 '()) ) )


;;; Chop string into substrings:

(define (string-chop str len)
  (##sys#check-string str 'string-chop)
  (##sys#check-exact len 'string-chop)
  (let ([total (##sys#size str)])
    (let loop ([total total] [pos 0])
      (cond [(fx<= total 0) '()]
	    [(fx<= total len) (list (##sys#substring str pos (fx+ pos total)))]
	    [else (cons (##sys#substring str pos (fx+ pos len)) (loop (fx- total len) (fx+ pos len)))] ) ) ) )
	   

;;; Remove suffix

(define (string-chomp str #!optional (suffix "\n"))
  (##sys#check-string str 'string-chomp)
  (##sys#check-string suffix 'string-chomp)
  (let* ((len (##sys#size str))
	 (slen (##sys#size suffix)) 
	 (diff (fx- len slen)) )
    (if (and (fx>= len slen)
	     (##core#inline "C_substring_compare" str suffix diff 0 slen) )
	(##sys#substring str 0 diff)
	str) ) )



;;; Defines: sorted?, merge, merge!, sort, sort!
;;; Author : Richard A. O'Keefe (based on Prolog code by D.H.D.Warren)
;;;
;;; This code is in the public domain.

;;; Updated: 11 June 1991
;;; Modified for scheme library: Aubrey Jaffer 19 Sept. 1991
;;; Updated: 19 June 1995

;;; (sorted? sequence less?)
;;; is true when sequence is a list (x0 x1 ... xm) or a vector #(x0 ... xm)
;;; such that for all 1 <= i <= m,
;;;	(not (less? (list-ref list i) (list-ref list (- i 1)))).

; Modified by flw for use with CHICKEN:
;


(define (sorted? seq less?)
    (cond
	((null? seq)
	    #t)
	((vector? seq)
	    (let ((n (vector-length seq)))
		(if (<= n 1)
		    #t
		    (do ((i 1 (+ i 1)))
			((or (= i n)
			     (less? (vector-ref seq i)
				    (vector-ref seq (- i 1))))
			    (= i n)) )) ))
	(else
	    (let loop ((last (car seq)) (next (cdr seq)))
		(or (null? next)
		    (and (not (less? (car next) last))
			 (loop (car next) (cdr next)) )) )) ))


;;; (merge a b less?)
;;; takes two lists a and b such that (sorted? a less?) and (sorted? b less?)
;;; and returns a new list in which the elements of a and b have been stably
;;; interleaved so that (sorted? (merge a b less?) less?).
;;; Note:  this does _not_ accept vectors.  See below.

(define (merge a b less?)
    (cond
	((null? a) b)
	((null? b) a)
	(else (let loop ((x (car a)) (a (cdr a)) (y (car b)) (b (cdr b)))
	    ;; The loop handles the merging of non-empty lists.	 It has
	    ;; been written this way to save testing and car/cdring.
	    (if (less? y x)
		(if (null? b)
		    (cons y (cons x a))
		    (cons y (loop x a (car b) (cdr b)) ))
		;; x <= y
		(if (null? a)
		    (cons x (cons y b))
		    (cons x (loop (car a) (cdr a) y b)) )) )) ))


;;; (merge! a b less?)
;;; takes two sorted lists a and b and smashes their cdr fields to form a
;;; single sorted list including the elements of both.
;;; Note:  this does _not_ accept vectors.

(define (merge! a b less?)
    (define (loop r a b)
	(if (less? (car b) (car a))
	    (begin
		(set-cdr! r b)
		(if (null? (cdr b))
		    (set-cdr! b a)
		    (loop b a (cdr b)) ))
	    ;; (car a) <= (car b)
	    (begin
		(set-cdr! r a)
		(if (null? (cdr a))
		    (set-cdr! a b)
		    (loop a (cdr a) b)) )) )
    (cond
	((null? a) b)
	((null? b) a)
	((less? (car b) (car a))
	    (if (null? (cdr b))
		(set-cdr! b a)
		(loop b a (cdr b)))
	    b)
	(else ; (car a) <= (car b)
	    (if (null? (cdr a))
		(set-cdr! a b)
		(loop a (cdr a) b))
	    a)))


;;; (sort! sequence less?)
;;; sorts the list or vector sequence destructively.  It uses a version
;;; of merge-sort invented, to the best of my knowledge, by David H. D.
;;; Warren, and first used in the DEC-10 Prolog system.	 R. A. O'Keefe
;;; adapted it to work destructively in Scheme.

(define (sort! seq less?)
    (define (step n)
	(cond
	    ((> n 2)
		(let* ((j (quotient n 2))
		       (a (step j))
		       (k (- n j))
		       (b (step k)))
		    (merge! a b less?)))
	    ((= n 2)
		(let ((x (car seq))
		      (y (cadr seq))
		      (p seq))
		    (set! seq (cddr seq))
		    (if (less? y x) (begin
			(set-car! p y)
			(set-car! (cdr p) x)))
		    (set-cdr! (cdr p) '())
		    p))
	    ((= n 1)
		(let ((p seq))
		    (set! seq (cdr seq))
		    (set-cdr! p '())
		    p))
	    (else
		'()) ))
    (if (vector? seq)
	(let ((n (vector-length seq))
	      (vec seq))
	  (set! seq (vector->list seq))
	  (do ((p (step n) (cdr p))
	       (i 0 (+ i 1)))
	      ((null? p) vec)
	    (vector-set! vec i (car p)) ))
	;; otherwise, assume it is a list
	(step (length seq)) ))

;;; (sort sequence less?)
;;; sorts a vector or list non-destructively.  It does this by sorting a
;;; copy of the sequence.  My understanding is that the Standard says
;;; that the result of append is always "newly allocated" except for
;;; sharing structure with "the last argument", so (append x '()) ought
;;; to be a standard way of copying a list x.

(define (sort seq less?)
    (if (vector? seq)
	(list->vector (sort! (vector->list seq) less?))
	(sort! (append seq '()) less?)))


;;; Topological sort with cycle detection:
;;
;; A functional implementation of the algorithm described in Cormen,
;; et al. (2009), Introduction to Algorithms (3rd ed.), pp. 612-615.

(define (topological-sort dag pred)
  (define (visit dag node edges path state)
    (case (alist-ref node (car state) pred)
      ((grey)
       (##sys#abort
        (##sys#make-structure
         'condition
         '(exn runtime cycle)
         `((exn . message) "cycle detected"
           (exn . arguments) ,(list (cons node (reverse path)))
           (exn . call-chain) ,(##sys#get-call-chain)
           (exn . location) topological-sort))))
      ((black)
       state)
      (else
       (let walk ((edges (or edges (alist-ref node dag pred '())))
                  (state (cons (cons (cons node 'grey) (car state))
                               (cdr state))))
         (if (null? edges)
             (cons (alist-update! node 'black (car state) pred)
                   (cons node (cdr state)))
             (let ((edge (car edges)))
               (walk (cdr edges)
                     (visit dag
                            edge
                            #f
                            (cons edge path)
                            state))))))))
  (let loop ((dag dag)
             (state (cons (list) (list))))
    (if (null? dag)
        (cdr state)
        (loop (cdr dag)
              (visit dag
                     (caar dag)
                     (cdar dag)
                     '()
                     state)))))
