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


(declare 
  (foreign-declare #<<EOF

#define C_curdir(buf)       (getcwd(C_c_string(buf), 1024) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

EOF
))


;;; File properties

(define (file-size f) (##sys#stat f #f 'file-size) _stat_st_size)

(define file-modification-time
  (getter-with-setter 
   (lambda (f)
     (##sys#stat f #f 'file-modification-time) _stat_st_mtime)
   (lambda (f t)
     (##sys#check-number t 'set-file-modification-time)
     (let ((r ((foreign-lambda int "set_file_mtime" c-string scheme-object)
	       (##sys#expand-home-path f) t)))
       (when (fx< r 0)
	 (posix-error 
	  #:file-error 'set-file-modification-time
	  "cannot set file modification-time" f t))))))

(define (file-access-time f) (##sys#stat f #f 'file-access-time) _stat_st_atime)
(define (file-change-time f) (##sys#stat f #f 'file-change-time) _stat_st_ctime)
(define (file-owner f) (##sys#stat f #f 'file-owner) _stat_st_uid)
(define (file-permissions f) (##sys#stat f #f 'file-permissions) _stat_st_mode)

(define (regular-file? fname)
  (##sys#check-string fname 'regular-file?)
  (let ((info (##sys#file-info (##sys#expand-home-path fname))))
    (and info (fx= 0 (##sys#slot info 4))) ) )


;;; Set or get current directory:

(define current-directory
  (let ((make-string make-string))
    (lambda (#!optional dir)
      (if dir
	  (change-directory dir)
	  (let* ((buffer (make-string 1024))
		 (len (##core#inline "C_curdir" buffer)) )
	    #+(or unix cygwin)
	    (##sys#update-errno)
	    (if len
		(##sys#substring buffer 0 len)
		(##sys#signal-hook #:file-error 'current-directory "cannot retrieve current directory") ) ) ) ) ) )


;;; Filename globbing:

(define glob
  (let ((regexp regexp)
        (string-match string-match)
        (glob->regexp glob->regexp)
        (directory directory)
        (make-pathname make-pathname)
        (decompose-pathname decompose-pathname) )
    (lambda paths
      (let conc-loop ((paths paths))
        (if (null? paths)
            '()
            (let ((path (car paths)))
              (let-values (((dir fil ext) (decompose-pathname path)))
                (let* ((patt (glob->regexp (make-pathname #f (or fil "*") ext)))
                       (rx (regexp patt)))
                  (let loop ((fns (directory (or dir ".") #t)))
                    (cond ((null? fns) (conc-loop (cdr paths)))
                          ((string-match rx (car fns))
                           => (lambda (m) (cons (make-pathname dir (car m)) (loop (cdr fns)))) )
                          (else (loop (cdr fns))) ) ) ) ) ) ) ) ) ) )


;;; Find matching files:

(define find-files
  (let ((glob glob)
	(string-match string-match)
	(make-pathname make-pathname)
	(pathname-file pathname-file)
	(directory? directory?) )
    (lambda (dir #!optional
		 (pred (lambda _ #t))
		 (action (lambda (x y) (cons x y))) ; we want cons inlined
		 (id '())
		 (limit #f) )
	(##sys#check-string dir 'find-files)
	(let* ((depth 0)
	       (lproc
		(cond ((not limit) (lambda _ #t))
		      ((fixnum? limit) (lambda _ (fx< depth limit)))
		      (else limit) ) )
	       (pproc
		(if (or (string? pred) (regexp? pred))
		    (lambda (x) (string-match pred x))
		    pred) ) )
	  (let loop ((fs (glob (make-pathname dir "*")))
		     (r id) )
	    (if (null? fs)
		r
		(let ((f (##sys#slot fs 0))
		      (rest (##sys#slot fs 1)) )
		  (cond ((directory? f)
			 (cond ((member (pathname-file f) '("." "..")) (loop rest r))
			       ((lproc f)
				(loop rest
				      (fluid-let ((depth (fx+ depth 1)))
					(loop (glob (make-pathname f "*"))
					      (if (pproc f) (action f r) r)) ) ) )
			       (else (loop rest (if (pproc f) (action f r) r))) ) )
			((pproc f) (loop rest (action f r)))
			(else (loop rest r)) ) ) ) ) ) ) ) )


;;; TODO: add more here...
