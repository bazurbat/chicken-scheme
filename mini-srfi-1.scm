;;;; minimal implementation of SRFI-1 primitives
;
;
; Copyright (c) 2015, The CHICKEN Team
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
  (hide take split-at! append-map every any))


(define (take lst n)
  (if (fx<= n 0)
      lst
      (cons (car lst) (take lst (fx- n 1)))))

(define (split-at! lst n)
  (let loop ((n n) (prev #f) (node lst))
    (if (fx<= n 0)
	(cond (prev
	       (set-cdr! prev '())
	       (values lst node))
	      (else values '() lst))
	(loop (fx- n 1) node (cdr node)))))

(define (append-map proc lst1 . lsts)
  (if (null? lsts)
      (foldr (lambda (x r) (append (proc x) r)) '() lst1)
      (let loop ((lsts (cons lst1 lsts)))
	(if (any null? lsts)
	    '()
	    (append (apply proc (map (lambda (x) (car x)) lsts))
		    (loop (map (lambda (x) (cdr x)) lsts)))))))

(define (every pred lst)
  (let loop ((lst lst))
    (cond ((null? lst))
	  ((not (pred (car lst))) #f)
	  (else (loop (cdr lst))))))

(define (any pred lst)
  (let loop ((lst lst))
    (cond ((null? lst) #f)
	  ((pred (car lst)))
	  (else (loop (cdr lst))))))
