;;;; irregex.scm - container for irregex-core.scm
;
; Copyright (c) 2010, The Chicken Team
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



(declare (unit irregex))

(declare
  (no-procedure-checks)
  (fixnum)
  (export
   ##sys#glob->regexp
   irregex
   irregex-apply-match
   irregex-dfa
   irregex-dfa/extract
   irregex-dfa/search
   irregex-extract
   irregex-flags
   irregex-fold
   irregex-fold/chunked
   irregex-lengths
   irregex-match
   irregex-match?
   irregex-match-data?
   irregex-match-end
   irregex-match-end-chunk
   irregex-match-end-index
   irregex-match-names
   irregex-match-num-submatches
   irregex-match-start
   irregex-match-start-chunk
   irregex-match-start-index
   irregex-match-string
   irregex-match-subchunk
   irregex-match-substring
   irregex-match/chunked
   irregex-names
   irregex-new-matches
   irregex-nfa
   irregex-num-submatches
   irregex-opt
   irregex-quote
   irregex-replace
   irregex-replace/all
   irregex-reset-matches!
   irregex-search
   irregex-search/chunked
   irregex-search/matches
   irregex-split
   irregex-submatches
   irregex? 
   make-irregex-chunker
   maybe-string->sre
   irregex-search/chunked
   sre->irregex
   string->irregex
   string->sre
   ))

(include "common-declarations.scm")

(register-feature! 'irregex)

(define-syntax (build-cache x r c)
  ;; (build-cache N ARG FAIL) 
  (let* ((n (cadr x))
	 (n2 (* n 2))
	 (arg (caddr x))
	 (fail (cadddr x))
	 (%cache (r 'cache))
	 (%index (r 'index))
	 (%arg (r 'arg))
	 (%let (r 'let))
	 (%let* (r 'let*))
	 (%if (r 'if))
	 (%fx+ (r 'fx+))
	 (%fxmod (r 'fxmod))
	 (%equal? (r 'equal?))
	 (%quote (r 'quote))
	 (%tmp (r 'tmp))
	 (%begin (r 'begin))
	 (cache (make-vector (add1 n2) #f)))
    (##sys#setslot cache n2 0)		; last slot: current index
    `(,%let* ((,%cache (,%quote ,cache)) ; we mutate a literal vector
	      (,%arg ,arg))
	     ,(let fold ((i 0))
		(if (fx>= i n)
		    ;; this should be thread-safe: a context-switch can only
		    ;; happen before this code and in the call to FAIL.
		    `(,%let ((,%tmp ,fail)
			     (,%index (##sys#slot ,%cache ,n2)))
			    (##sys#setslot ,%cache ,%index ,%arg)
			    (##sys#setslot ,%cache (,%fx+ ,%index 1) ,%tmp)
			    (##sys#setislot 
			     ,%cache ,n2
			     (##core#inline "C_u_fixnum_modulo" (,%fx+ ,%index 2) ,n2))
			    ,%tmp)
		    `(,%if (,%equal? (##sys#slot ,%cache ,(* i 2)) ,%arg)
			   (##sys#slot ,%cache ,(add1 (* i 2)))
			   ,(fold (add1 i))))))))

(define-inline (fast-string-copy! to tstart from fstart fend)
  (##core#inline "C_substring_copy" from to fstart fend tstart))

(define-inline (fast-substring=? a b start1 start2 len)
  (##core#inline "C_substring_compare" a b start1 start2 len))

(include "irregex-core.scm")

(define ##sys#glob->regexp
  (let ((list->string list->string)
        (string->list string->list))
    (lambda (s #!optional sre?)
      (##sys#check-string s 'glob->regexp)
      (let ((sre
	     (cons 
	      ':
	      (let loop ((cs (string->list s)) (dir #t))
		(if (null? cs)
		    '()
		    (let ((c (car cs))
			  (rest (cdr cs)) )
		      (cond ((char=? c #\*) 
			     (if dir
				 `((or (: (~ ("./\\"))
					  (* (~ ("/\\"))))
				       (* (~ ("./\\"))))
				   ,@(loop rest #f))
				 `((* (~ ("/\\"))) ,@(loop rest #f))))
			    ((char=? c #\?)  (cons 'any (loop rest #f)))
			    ((char=? c #\[)
			     (let loop2 ((rest rest) (s '()))
			       (cond ((not (pair? rest))
				      (error 'glob->regexp
					     "unexpected end of character class" s))
				     ((char=? #\] (car rest))
				      `((or ,@s) ,@(loop (cdr rest) #f)))
				     ((and (pair? (cdr rest))
					   (pair? (cddr rest))
					   (char=? #\- (cadr rest)) )
				      (loop2 (cdddr rest)
					     (cons `(/ ,(car rest) ,(caddr rest)) s)))
				     ((and (pair? (cdr rest))
					   (char=? #\- (car rest)))
				      (loop2 (cddr rest)
					     (cons `(~ ,(cadr rest)) s)))
				     (else
				      (loop2 (cdr rest) (cons (car rest) s))))))
			    (else (cons c (loop rest (memq c '(#\\ #\/))))))))))))
	(if sre? sre (irregex sre))))))
