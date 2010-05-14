;;;; regex.scm
;
; Copyright (c) 2008-2010, The Chicken Team
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


(declare (unit regex))

(declare
  (disable-interrupts)
;  (disable-warning var)
  (fixnum)
  (export
    regexp? regexp
    string-match string-match-positions string-search string-search-positions
    string-split-fields string-substitute string-substitute*
    glob->regexp
    grep
    regexp-escape 

    irregex string->irregex sre->irregex string->sre
    irregex? irregex-match-data?
    irregex-new-matches irregex-reset-matches!
    irregex-match-start irregex-match-end irregex-match-substring
    irregex-match-num-submatches
    irregex-search irregex-search/matches irregex-match irregex-match-string
    irregex-fold irregex-replace irregex-replace/all irregex-apply-match
    irregex-dfa irregex-dfa/search irregex-dfa/extract
    irregex-nfa irregex-flags irregex-submatches irregex-lengths irregex-names
    ))

(include "common-declarations.scm")

(register-feature! 'regex 'irregex)

(include "irregex.scm")


;;; Record `regexp'

(define-record regexp x)

(define (regexp pat #!optional caseless extended utf8)
  (if (regexp? pat)
      pat
      (make-regexp
       (apply
	irregex 
	pat 
	(let ((opts '()))
	  (when caseless (set! opts (cons 'i opts)))
	  (when extended (set! opts (cons 'x opts)))
	  (when utf8 (set! opts (cons 'utf8 opts)))
	  opts))) ) )

(define (unregexp x)
  (cond ((regexp? x) (regexp-x x))
	((irregex? x) x)
	(else (irregex x))))


;;; Basic `regexp' operations

(define (string-match rx str)
  (let ((rx (unregexp rx)))
    (and-let* ((m (irregex-match rx str)))
      (let loop ((i (irregex-match-num-submatches m))
                 (res '()))
        (if (fx<= i 0)
            (cons str res)
            (loop (fx- i 1) (cons (irregex-match-substring m i) res)))))))

(define (string-match-positions rx str)
  (let ((rx (unregexp rx)))
    (and-let* ((m (irregex-match rx str)))
      (let loop ((i (irregex-match-num-submatches m))
                 (res '()))
        (if (fx<= i 0)
            (cons (list 0 (string-length str)) res)
            (loop (fx- i 1) (cons (list (irregex-match-start-index m i)
                                        (irregex-match-end-index m i))
                                  res)))))))

(define (string-search rx str #!optional (start 0) (range (string-length str)))
  (let ((rx (unregexp rx)))
    (let ((n (string-length str)))
      (and-let* ((m (irregex-search rx str start (min n (fx+ start range)))))
	(let loop ((i (irregex-match-num-submatches m))
		   (res '()))
	  (if (fx< i 0)
	      res
	      (loop (fx- i 1) (cons (irregex-match-substring m i) res))))))))

(define (string-search-positions rx str #!optional (start 0) (range (string-length str)))
  (let ((rx (unregexp rx)))
    (let ((n (string-length str)))
      (and-let* ((m (irregex-search rx str start (min n (fx+ start range)))))
	(let loop ((i (irregex-match-num-submatches m))
		   (res '()))
	  (if (fx< i 0)
	      res
	      (loop (fx- i 1) (cons (list (irregex-match-start-index m i)
					  (irregex-match-end-index m i))
				    res))))))))


;;; Split string into fields:

(define string-split-fields
  (let ([reverse reverse]
        [substring substring]
        [string-search-positions string-search-positions] )
    (lambda (rx str . mode-and-start)
      (##sys#check-string str 'string-split-fields)
      (let* ([argc (length mode-and-start)]
             [len (##sys#size str)]
             [mode (if (fx> argc 0) (car mode-and-start) #t)]
             [start (if (fx> argc 1) (cadr mode-and-start) 0)]
             [fini (case mode
                     [(#:suffix)
                      (lambda (ms start)
                        (if (fx< start len)
                            (##sys#error 'string-split-fields
                                         "record does not end with suffix" str rx)
                            (reverse ms) ) ) ]
                     [(#:infix)
                      (lambda (ms start)
                        (if (fx>= start len)
                            (reverse (cons "" ms))
                            (reverse (cons (substring str start len) ms)) ) ) ]
                     [else (lambda (ms start) (reverse ms)) ] ) ]
             [fetch (case mode
                      [(#:infix #:suffix) (lambda (start from to) (substring str start from))]
                      [else (lambda (start from to) (substring str from to))] ) ] )
        (let loop ([ms '()] [start start])
          (let ([m (string-search-positions rx str start)])
            (if m
                (let* ([mp (car m)]
                       [from (car mp)]
                       [to (cadr mp)] )
                  (if (fx= from to)
                      (if (fx= to len)
                          (fini ms start)
                          (loop (cons (fetch start (fx+ from 1) (fx+ to 2)) ms) (fx+ to 1)) )
                      (loop (cons (fetch start from to) ms) to) ) )
                (fini ms start) ) ) ) ) ) ) )


;;; Substitute matching strings:

(define string-substitute
  (let ([substring substring]
        [reverse reverse]
        [make-string make-string]
        [string-search-positions string-search-positions] )
    (lambda (rx subst string . flag)
      (##sys#check-string subst 'string-substitute)
      (##sys#check-string string 'string-substitute)
      (let* ([which (if (pair? flag) (car flag) 1)]
             [substlen (##sys#size subst)]
	     (strlen (##sys#size string))
             [substlen-1 (fx- substlen 1)]
             [result '()]
             [total 0] )
        (define (push x)
          (set! result (cons x result))
          (set! total (fx+ total (##sys#size x))) )
        (define (substitute matches)
          (let loop ([start 0] [index 0])
            (if (fx>= index substlen-1)
                (push (if (fx= start 0) subst (substring subst start substlen)))
                (let ([c (##core#inline "C_subchar" subst index)]
                      [index+1 (fx+ index 1)] )
                  (if (char=? c #\\)
                      (let ([c2 (##core#inline "C_subchar" subst index+1)])
                        (if (and (not (char=? #\\ c2)) (char-numeric? c2))
                            (let ([mi (list-ref matches (fx- (char->integer c2) 48))])
                              (push (substring subst start index))
                              (push (substring string (car mi) (cadr mi)))
                              (loop (fx+ index 2) index+1) )
                            (loop start (fx+ index+1 1)) ) )
                      (loop start index+1) ) ) ) ) )
        (let loop ([index 0] [count 1])
          (let ((matches (and (fx< index strlen) 
			      (string-search-positions rx string index))))
            (cond [matches
                   (let* ([range (car matches)]
                          [upto (cadr range)] )
                     (cond ((fx= 0 (fx- (cadr range) (car range)))
                            (##sys#error
                             'string-substitute "empty substitution match"
                             rx) )
                           ((or (not (fixnum? which)) (fx= count which))
                            (push (substring string index (car range)))
                            (substitute matches)
                            (loop upto #f) )
                           (else
                            (push (substring string index upto))
                            (loop upto (fx+ count 1)) ) ) ) ]
                  [else
                   (push (substring string index (##sys#size string)))
                   (##sys#fragments->string total (reverse result)) ] ) ) ) ) ) ) )

(define string-substitute*
  (let ([string-substitute string-substitute])
    (lambda (str smap . mode)
      (##sys#check-string str 'string-substitute*)
      (##sys#check-list smap 'string-substitute*)
      (let ((mode (and (pair? mode) (car mode))))
        (let loop ((str str) (smap smap))
          (if (null? smap)
              str
              (let ((sm (car smap)))
                (loop (string-substitute (car sm) (cdr sm) str mode)
                      (cdr smap) ) ) ) ) ) ) ) )


;;; Glob support:

(define glob->regexp
  (let ((list->string list->string)
        (string->list string->list)
	(regexp regexp))
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
				      (error 'glob->regexp "unexpected end of character class" s))
				     ((char=? #\] (car rest))
				      `((or ,@s) ,@(loop (cdr rest) #f)))
				     ((and (pair? (cdr rest))
					   (pair? (cddr rest))
					   (char=? #\- (cadr rest)) )
				      (loop2 (cdddr rest) (cons `(/ ,(car rest) ,(caddr rest)) s)))
				     ((and (pair? (cdr rest))
					   (char=? #\- (car rest)))
				      (loop2 (cddr rest)
					     (cons `(~ ,(cadr rest)) s)))
				     (else
				      (loop2 (cdr rest) (cons (car rest) s))))))
			    (else (cons c (loop rest (memq c '(#\\ #\/))))))))))))
	(if sre? sre (regexp sre))))))


;;; Grep-like function on list:

(define grep
  (let ((string-search string-search)
	(regexp regexp))
    (lambda (rx lst #!optional (acc (lambda (x) x)))
      (##sys#check-list lst 'grep)
      (##sys#check-closure acc 'grep)
      (let ((rx (regexp rx)))
	(let loop ((lst lst))
	  (if (null? lst)
	      '()
	      (let ((x (##sys#slot lst 0))
		    (r (##sys#slot lst 1)) )
		(if (string-search rx (acc x))
		    (cons x (loop r))
		    (loop r) ) ) ) ) ) ) ) )


;;; Escape regular expression (suggested by Peter Bex):

(define regexp-escape
  (let ([open-output-string open-output-string]
        [get-output-string get-output-string] )
    (lambda (str)
      (##sys#check-string str 'regexp-escape)
      (let ([out (open-output-string)]
            [len (##sys#size str)] )
	(let loop ([i 0])
	  (cond [(fx>= i len) (get-output-string out)]
                [(memq (##core#inline "C_subchar" str i)
                       '(#\. #\\ #\? #\* #\+ #\^ #\$ #\( #\) #\[ #\] #\| #\{ #\}))
                 (##sys#write-char-0 #\\ out)
                 (##sys#write-char-0 (##core#inline "C_subchar" str i) out)
                 (loop (fx+ i 1)) ]
                [else
                 (##sys#write-char-0 (##core#inline "C_subchar" str i) out)
                 (loop (fx+ i 1)) ] ) ) ) ) ) )
