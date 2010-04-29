;;;; posix-common.scm - common code for UNIX and Windows versions of the posix unit
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


;;; Find matching files:

(define find-files
  (let ([glob glob]
	[string-match string-match]
	[make-pathname make-pathname]
	[pathname-file pathname-file]
	[directory? directory?] )
    (lambda (dir pred . action-id-limit)
      (let-optionals
	  action-id-limit
	  ([action (lambda (x y) (cons x y))] ; we want cons inlined
	   [id '()]
	   [limit #f] )
	(##sys#check-string dir 'find-files)
	(let* ([depth 0]
	       [lproc
		(cond [(not limit) (lambda _ #t)]
		      [(fixnum? limit) (lambda _ (fx< depth limit))]
		      [else limit] ) ]
	       [pproc
		(if (or (string? pred) (regexp? pred))
		    (lambda (x) (string-match pred x))
		    pred) ] )
	  (let loop ([fs (glob (make-pathname dir "*"))]
		     [r id] )
	    (if (null? fs)
		r
		(let ([f (##sys#slot fs 0)]
		      [rest (##sys#slot fs 1)] )
		  (cond [(directory? f)
			 (cond [(member (pathname-file f) '("." "..")) (loop rest r)]
			       [(lproc f)
				(loop rest
				      (fluid-let ([depth (fx+ depth 1)])
					(loop (glob (make-pathname f "*"))
					      (if (pproc f) (action f r) r)) ) ) ]
			       [else (loop rest (if (pproc f) (action f r) r))] ) ]
			[(pproc f) (loop rest (action f r))]
			[else (loop rest r)] ) ) ) ) ) ) ) ) )


;;; TODO: add more here...
