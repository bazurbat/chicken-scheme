;;;; build-version.scm
;
; Copyright (c) 2011-2014, The CHICKEN Team
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
 (unit build-version))

(foreign-declare "#include \"buildtag.h\"")

;; (read-version filename): Read line from FILENAME and return
;; as a string; return #f if non-existent file or blank line.
(define-syntax read-version
  (er-macro-transformer
   (lambda (x r c)
     (let ((fn (cadr x)))
       (and (file-exists? fn)
	    (let ((ver (with-input-from-file (cadr x) read-line)))
	      (if (or (eof-object? ver) (string=? ver ""))
		  #f
		  ver)))))))

(define (##sys#build-tag)   (foreign-value "C_BUILD_TAG" c-string))
(define ##sys#build-id      (read-version "buildid"))
(define ##sys#build-branch  (read-version "buildbranch"))
(define ##sys#build-version (read-version "buildversion"))
