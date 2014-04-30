;;;; library.scm - R5RS library for the CHICKEN compiler
;
; Copyright (c) 2008-2014, The Chicken Team
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


(declare
  (unit library)
  (uses build-version)
  (disable-interrupts)
  (hide ##sys#dynamic-unwind
	##sys#vector-resize ##sys#default-parameter-vector 
	current-print-length setter-tag read-marks
	##sys#print-exit
	##sys#format-here-doc-warning
	exit-in-progress
        maximal-string-length)
  (not inline ##sys#user-read-hook ##sys#error-hook ##sys#signal-hook ##sys#schedule
       ##sys#default-read-info-hook ##sys#infix-list-hook ##sys#sharp-number-hook
       ##sys#user-print-hook ##sys#user-interrupt-hook ##sys#step-hook)
  (foreign-declare #<<EOF
#include <errno.h>
#include <float.h>

#ifdef HAVE_SYSEXITS_H
# include <sysexits.h>
#endif

#ifndef EX_SOFTWARE
# define EX_SOFTWARE	70
#endif

#define C_close_file(p)	      (C_fclose((C_FILEPTR)(C_port_file(p))), C_SCHEME_UNDEFINED)
#define C_a_f64peek(ptr, c, b, i)  C_flonum(ptr, ((double *)C_data_pointer(b))[ C_unfix(i) ])
#define C_fetch_c_strlen(b, i) C_fix(strlen((C_char *)C_block_item(b, C_unfix(i))))
#define C_asciiz_strlen(str) C_fix(strlen(C_c_string(str)))
#define C_peek_c_string(b, i, to, len) (C_memcpy(C_data_pointer(to), (C_char *)C_block_item(b, C_unfix(i)), C_unfix(len)), C_SCHEME_UNDEFINED)
#define C_free_mptr(p, i)     (C_free((void *)C_block_item(p, C_unfix(i))), C_SCHEME_UNDEFINED)
#define C_free_sptr(p, i)     (C_free((void *)(((C_char **)C_block_item(p, 0))[ C_unfix(i) ])), C_SCHEME_UNDEFINED)

#define C_direct_continuation(dummy)  t1

#define C_a_get_current_seconds(ptr, c, dummy)  C_flonum(ptr, time(NULL))
#define C_peek_c_string_at(ptr, i)    ((C_char *)(((C_char **)ptr)[ i ]))

static C_word
fast_read_line_from_file(C_word str, C_word port, C_word size) {
  int n = C_unfix(size);
  int i;
  int c;
  char *buf = C_c_string(str);
  C_FILEPTR fp = C_port_file(port);

  if ((c = C_getc(fp)) == EOF) {
    if (ferror(fp)) {
      clearerr(fp);
      return C_fix(-1);
    } else { /* feof (fp) */
      return C_SCHEME_END_OF_FILE;
    }
  }

  C_ungetc(c, fp);

  for (i = 0; i < n; i++) {
    c = C_getc(fp);

    if(c == EOF && ferror(fp)) {
      clearerr(fp);
      return C_fix(-(i + 1));
    }

    switch (c) {
    case '\r':	if ((c = C_getc(fp)) != '\n') C_ungetc(c, fp);
    case EOF:	clearerr(fp);
    case '\n':	return C_fix(i);
    }
    buf[i] = c;
  }
  return C_SCHEME_FALSE;
}

static C_word
fast_read_string_from_file(C_word dest, C_word port, C_word len, C_word pos)
{
  size_t m;
  int n = C_unfix (len);
  char * buf = ((char *)C_data_pointer (dest) + C_unfix (pos));
  C_FILEPTR fp = C_port_file (port);

  if(feof(fp)) return C_SCHEME_END_OF_FILE;

  m = fread (buf, sizeof (char), n, fp);

  if (m < n) {
    if (ferror(fp)) /* Report to Scheme, which may retry, so clear errors */
      clearerr(fp);
    else if (feof(fp) && 0 == m) /* eof but m > 0? Return data first, below */
      return C_SCHEME_END_OF_FILE; /* Calling again will get us here */
  }

  return C_fix (m);
}

static C_word
shallow_equal(C_word x, C_word y)
{
  /* assumes x and y are non-immediate */
  int i, len = C_header_size(x);

  if(C_header_size(y) != len) return C_SCHEME_FALSE;      
  else return C_mk_bool(!C_memcmp((void *)x, (void *)y, len * sizeof(C_word)));
}
EOF
) )


(include "common-declarations.scm")
(include "banner.scm")

(define-constant namespace-max-id-len 31)
(define-constant char-name-table-size 37)
(define-constant output-string-initial-size 256)
(define-constant read-line-buffer-initial-size 1024)
(define-constant default-parameter-vector-size 16)
(define maximal-string-length (foreign-value "C_HEADER_SIZE_MASK" unsigned-long))


;;; System routines:

(define (exit #!optional (code 0)) ((##sys#exit-handler) code))
(define (reset) ((##sys#reset-handler)))
(define (##sys#quit-hook result) ((##sys#exit-handler) 0))
(define (quit #!optional result) (##sys#quit-hook result))

(define (##sys#error . args)
  (if (pair? args)
      (apply ##sys#signal-hook #:error args)
      (##sys#signal-hook #:error #f)))

(define ##sys#warnings-enabled #t)
(define ##sys#notices-enabled (##sys#fudge 13))

(define (##sys#warn msg . args)
  (when ##sys#warnings-enabled
    (apply ##sys#signal-hook #:warning msg args) ) )

(define (##sys#notice msg . args)
  (when (and ##sys#notices-enabled
	     ##sys#warnings-enabled)
    (apply ##sys#signal-hook #:notice msg args) ) )

(define (enable-warnings . bool)
  (if (pair? bool) 
      (set! ##sys#warnings-enabled (car bool))
      ##sys#warnings-enabled) )

(define error ##sys#error)
(define warning ##sys#warn)

(define-foreign-variable main_argc int "C_main_argc")
(define-foreign-variable main_argv c-pointer "C_main_argv")
(define-foreign-variable strerror c-string "strerror(errno)")

(define (set-gc-report! flag) (##core#inline "C_set_gc_report" flag))
(define ##sys#gc (##core#primitive "C_gc"))
(define (##sys#setslot x i y) (##core#inline "C_i_setslot" x i y))
(define (##sys#setislot x i y) (##core#inline "C_i_set_i_slot" x i y))
(define ##sys#allocate-vector (##core#primitive "C_allocate_vector"))
(define (argc+argv) (##sys#values main_argc main_argv))
(define ##sys#make-structure (##core#primitive "C_make_structure"))
(define ##sys#ensure-heap-reserve (##core#primitive "C_ensure_heap_reserve"))
(define (##sys#fudge index) (##core#inline "C_fudge" index))
(define ##sys#call-host (##core#primitive "C_return_to_host"))
(define return-to-host ##sys#call-host)
(define ##sys#symbol-table-info (##core#primitive "C_get_symbol_table_info"))
(define ##sys#memory-info (##core#primitive "C_get_memory_info"))
(define (current-milliseconds) (##core#inline_allocate ("C_a_i_current_milliseconds" 4) #f))
(define (current-gc-milliseconds) (##sys#fudge 31))
(define ##sys#decode-seconds (##core#primitive "C_decode_seconds"))
(define get-environment-variable (foreign-lambda c-string "C_getenv" c-string))

(define (##sys#start-timer)
  (##sys#gc #t)
  (##core#inline "C_start_timer"))

(define ##sys#stop-timer (##core#primitive "C_stop_timer"))
(define (##sys#immediate? x) (not (##core#inline "C_blockp" x)))
(define (##sys#message str) (##core#inline "C_message" str))
(define (##sys#byte x i) (##core#inline "C_subbyte" x i))
(define (##sys#setbyte x i n) (##core#inline "C_setbyte" x i n))
(define (##sys#void . _) (##core#undefined))
(define void ##sys#void)
(define ##sys#undefined-value (##core#undefined))
(define (##sys#halt msg) (##core#inline "C_halt" msg))
(define (##sys#flo2fix n) (##core#inline "C_quickflonumtruncate" n))
(define ##sys#become! (##core#primitive "C_become"))
(define (##sys#block-ref x i) (##core#inline "C_i_block_ref" x i))
(define ##sys#apply-values (##core#primitive "C_apply_values"))
(define ##sys#copy-closure (##core#primitive "C_copy_closure"))
(define ##sys#apply-argument-limit (##sys#fudge 34))

(define (##sys#block-set! x i y)
  (when (or (not (##core#inline "C_blockp" x)) 
	    (and (##core#inline "C_specialp" x) (fx= i 0))
	    (##core#inline "C_byteblockp" x) ) 
    (##sys#signal-hook '#:type-error '##sys#block-set! "slot not accessible" x) )
  (##sys#check-range i 0 (##sys#size x) '##sys#block-set!)
  (##sys#setslot x i y) )

(define (current-seconds) 
  (##core#inline_allocate ("C_a_get_current_seconds" 4) #f))

(define cpu-time
  (let ((buf (vector #f #f)))
    (lambda ()
      ;; should be thread-safe as no context-switch will occur after
      ;; function entry and `buf' contents will have been extracted
      ;; before `values' gets called.
      (##core#inline_allocate ("C_a_i_cpu_time" 8) buf)
      (values (##sys#slot buf 0) (##sys#slot buf 1)))))

(define (##sys#check-structure x y . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_structure_2" x y (car loc))
      (##core#inline "C_i_check_structure" x y) ) )

(define (##sys#check-blob x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_bytevector_2" x (car loc))
      (##core#inline "C_i_check_bytevector" x) ) )

(define ##sys#check-byte-vector ##sys#check-blob)

(define (##sys#check-pair x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_pair_2" x (car loc))
      (##core#inline "C_i_check_pair" x) ) )

(define (##sys#check-list x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_list_2" x (car loc))
      (##core#inline "C_i_check_list" x) ) )

(define (##sys#check-string x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_string_2" x (car loc))
      (##core#inline "C_i_check_string" x) ) )

(define (##sys#check-number x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_number_2" x (car loc))
      (##core#inline "C_i_check_number" x) ) )

(define (##sys#check-exact x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_exact_2" x (car loc))
      (##core#inline "C_i_check_exact" x) ) )

(define (##sys#check-inexact x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_inexact_2" x (car loc))
      (##core#inline "C_i_check_inexact" x) ) )

(define (##sys#check-symbol x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_symbol_2" x (car loc))
      (##core#inline "C_i_check_symbol" x) ) )

(define (##sys#check-vector x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_vector_2" x (car loc))
      (##core#inline "C_i_check_vector" x) ) )

(define (##sys#check-char x . loc) 
  (if (pair? loc)
      (##core#inline "C_i_check_char_2" x (car loc))
      (##core#inline "C_i_check_char" x) ) )

(define (##sys#check-boolean x . loc)
  (If (pair? loc)
      (##core#inline "C_i_check_boolean_2" x (car loc))
      (##core#inline "C_i_check_boolean" x) ) )

(define (##sys#check-locative x . loc)
  (If (pair? loc)
      (##core#inline "C_i_check_locative_2" x (car loc))
      (##core#inline "C_i_check_locative" x) ) )

(define (##sys#check-integer x . loc)
  (unless (##core#inline "C_i_integerp" x) 
    (##sys#error-hook
     (foreign-value "C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR" int)
     (and (pair? loc) (car loc)) x) ) )

(define (##sys#check-range i from to . loc)
  (##sys#check-exact i loc)
  (unless (and (fx<= from i) (fx< i to))
    (##sys#error-hook
     (foreign-value "C_OUT_OF_RANGE_ERROR" int)
     (and (pair? loc) (car loc)) i from to) ) )

(define (##sys#check-special ptr . loc)
  (unless (and (##core#inline "C_blockp" ptr) (##core#inline "C_specialp" ptr))
    (##sys#signal-hook #:type-error (and (pair? loc) (car loc)) "bad argument type - not a pointer-like object" ptr) ) )

(define (##sys#check-closure x . loc)
  (if (pair? loc)
      (##core#inline "C_i_check_closure_2" x (car loc))
      (##core#inline "C_i_check_closure" x) ) )

(define (##sys#force obj)
  (if (##sys#structure? obj 'promise)
      (let lp ((promise obj)
	       (forward #f))
	(let ((val (##sys#slot promise 1)))
	  (cond ((null? val) (##sys#values))
		((pair? val) (apply ##sys#values val))
		((procedure? val)
		 (when forward (##sys#setslot forward 1 promise))
		 (let ((results (##sys#call-with-values val ##sys#list)))
		   (cond ((not (procedure? (##sys#slot promise 1)))
			  (lp promise forward)) ; in case of reentrance
			 ((and (not (null? results)) (null? (cdr results))
			       (##sys#structure? (##sys#slot results 0) 'promise))
			  (let ((result0 (##sys#slot results 0)))
			    (##sys#setslot promise 1 (##sys#slot result0 1))
			    (lp promise result0)))
			 (else
			  (##sys#setslot promise 1 results)
			  (apply ##sys#values results)))))
		((##sys#structure? val 'promise)
		 (lp val forward)))))
      obj))

(define force ##sys#force)

(define (system cmd)
  (##sys#check-string cmd 'system)
  (let ((r (##core#inline "C_execute_shell_command" cmd)))
    (cond ((fx< r 0)
	   (##sys#update-errno)
	   (##sys#signal-hook #:process-error 'system "`system' invocation failed" cmd) )
	  (else r) ) ) )


;;; Dynamic Load

(define ##sys#dload (##core#primitive "C_dload"))
(define ##sys#set-dlopen-flags! (##core#primitive "C_set_dlopen_flags"))


;;; Operations on booleans:

(define (not x) (##core#inline "C_i_not" x))
(define (boolean? x) (##core#inline "C_booleanp" x))


;;; Equivalence predicates:

(define (eq? x y) (##core#inline "C_eqp" x y))
(define (eqv? x y) (##core#inline "C_i_eqvp" x y))
(define (equal? x y) (##core#inline "C_i_equalp" x y))


;;; Pairs and lists:

(define (pair? x) (##core#inline "C_i_pairp" x))
(define (cons x y) (##core#inline_allocate ("C_a_i_cons" 3) x y))
(define (car x) (##core#inline "C_i_car" x))
(define (cdr x) (##core#inline "C_i_cdr" x))

(define (set-car! x y) (##core#inline "C_i_set_car" x y))
(define (set-cdr! x y) (##core#inline "C_i_set_cdr" x y))
(define (cadr x) (##core#inline "C_i_cadr" x))
(define (caddr x) (##core#inline "C_i_caddr" x))
(define (cadddr x) (##core#inline "C_i_cadddr" x))
(define (cddddr x) (##core#inline "C_i_cddddr" x))

(define (caar x) (##core#inline "C_i_caar" x))
(define (cdar x) (##core#inline "C_i_cdar" x))
(define (cddr x) (##core#inline "C_i_cddr" x))
(define (caaar x) (car (car (car x))))
(define (caadr x) (car (##core#inline "C_i_cadr" x)))
(define (cadar x) (##core#inline "C_i_cadr" (car x)))
(define (cdaar x) (cdr (car (car x))))
(define (cdadr x) (cdr (##core#inline "C_i_cadr" x)))
(define (cddar x) (cdr (cdr (car x))))
(define (cdddr x) (cdr (cdr (cdr x))))
(define (caaaar x) (car (car (car (car x)))))
(define (caaadr x) (car (car (##core#inline "C_i_cadr" x))))
(define (caadar x) (car (##core#inline "C_i_cadr" (car x))))
(define (caaddr x) (car (##core#inline "C_i_caddr" x)))
(define (cadaar x) (##core#inline "C_i_cadr" (car (car x))))
(define (cadadr x) (##core#inline "C_i_cadr" (##core#inline "C_i_cadr" x)))
(define (caddar x) (##core#inline "C_i_caddr" (car x)))
(define (cdaaar x) (cdr (car (car (car x)))))
(define (cdaadr x) (cdr (car (##core#inline "C_i_cadr" x))))
(define (cdadar x) (cdr (##core#inline "C_i_cadr" (car x))))
(define (cdaddr x) (cdr (##core#inline "C_i_caddr" x)))
(define (cddaar x) (cdr (cdr (car (car x)))))
(define (cddadr x) (cdr (cdr (##core#inline "C_i_cadr" x))))
(define (cdddar x) (cdr (cdr (cdr (car x)))))

(define (null? x) (eq? x '()))
(define (list . lst) lst)
(define (length lst) (##core#inline "C_i_length" lst))
(define (list-tail lst i) (##core#inline "C_i_list_tail" lst i))
(define (list-ref lst i) (##core#inline "C_i_list_ref" lst i))

(define (##sys#delq x lst)
  (let loop ([lst lst])
    (cond ((null? lst) lst)
	  ((eq? x (##sys#slot lst 0)) (##sys#slot lst 1))
	  (else (cons (##sys#slot lst 0) (loop (##sys#slot lst 1)))) ) ) )

(define (##sys#error-not-a-proper-list arg #!optional loc)
  (##sys#error-hook
   (foreign-value "C_NOT_A_PROPER_LIST_ERROR" int) 
   loc arg))

(define (append . lsts)
  (if (eq? lsts '())
      lsts
      (let loop ((lsts lsts))
	(if (eq? (##sys#slot lsts 1) '())
	    (##sys#slot lsts 0)
	    (let copy ((node (##sys#slot lsts 0)))
	      (cond ((eq? node '()) (loop (##sys#slot lsts 1)))
		    ((pair? node)
		     (cons (##sys#slot node 0) (copy (##sys#slot node 1))) )
		    (else
		     (##sys#error-not-a-proper-list
		      (##sys#slot lsts 0) 'append)) ) )))))

(define (reverse lst0)
  (let loop ((lst lst0) (rest '()))
    (cond ((eq? lst '()) rest)
	  ((pair? lst)
	   (loop (##sys#slot lst 1) (cons (##sys#slot lst 0) rest)) )
	  (else (##sys#error-not-a-proper-list lst0 'reverse)) ) ))

(define (##sys#fast-reverse lst0)
  (let loop ((lst lst0) (rest '()))
    (if (pair? lst)
	(loop (##sys#slot lst 1) (cons (##sys#slot lst 0) rest))
	rest)))

(define (memq x lst) (##core#inline "C_i_memq" x lst))
(define (memv x lst) (##core#inline "C_i_memv" x lst))
(define (member x lst) (##core#inline "C_i_member" x lst))
(define (assq x lst) (##core#inline "C_i_assq" x lst))
(define (assv x lst) (##core#inline "C_i_assv" x lst))
(define (assoc x lst) (##core#inline "C_i_assoc" x lst))

(define (list? x) (##core#inline "C_i_listp" x))


;;; Strings:

(define (string? x) (##core#inline "C_i_stringp" x))
(define (string-length s) (##core#inline "C_i_string_length" s))
(define (string-ref s i) (##core#inline "C_i_string_ref" s i))
(define (string-set! s i c) (##core#inline "C_i_string_set" s i c))

(define-inline (%make-string size fill)
  (##sys#allocate-vector size #t fill #f) )

(define (##sys#make-string size #!optional (fill #\space))
  (%make-string size fill))

(define (make-string size . fill)
  (##sys#check-exact size 'make-string)
  (when (fx< size 0)
    (##sys#signal-hook #:bounds-error 'make-string "size is negative" size))
  (%make-string
   size
   (if (null? fill)
       #\space
       (let ((c (car fill)))
	 (##sys#check-char c 'make-string)
	 c ) ) ) )

(define ##sys#string->list 
  (lambda (s)
    (##sys#check-string s 'string->list)
    (let ((len (##core#inline "C_block_size" s)))
      (let loop ((i 0))
	(if (fx>= i len)
	    '()
	    (cons (##core#inline "C_subchar" s i)
		  (loop (fx+ i 1)) ) ) ) ) ) )

(define string->list ##sys#string->list)

(define (##sys#list->string lst0)
  (if (not (list? lst0))
      (##sys#error-not-a-proper-list lst0 'list->string)
      (let* ([len (length lst0)]
	     [s (##sys#make-string len)] )
	(do ([i 0 (fx+ i 1)]
	     [lst lst0 (##sys#slot lst 1)] )
	    ((fx>= i len) s)
	  (let ([c (##sys#slot lst 0)])
	    (##sys#check-char c 'list->string)
	    (##core#inline "C_setsubchar" s i c) ) ) ) ))

(define list->string ##sys#list->string)

;;; By Sven Hartrumpf:

(define (##sys#reverse-list->string l)
  (if (list? l)
      (let* ((n (length l))
	     (s (##sys#make-string n)))
	(let iter ((l2 l) (n2 (fx- n 1)))
	  (cond ((fx>= n2 0)
		 (let ((c (##sys#slot l2 0)))
		   (##sys#check-char c 'reverse-list->string)
		   (##core#inline "C_setsubchar" s n2 c) )
		 (iter (##sys#slot l2 1) (fx- n2 1)) ) ) )
	s )
      (##sys#error-not-a-proper-list l 'reverse-list->string) ) )

(define reverse-list->string ##sys#reverse-list->string)

(define (string-fill! s c)
  (##sys#check-string s 'string-fill!)
  (##sys#check-char c 'string-fill!)
  (##core#inline "C_set_memory" s c (##sys#size s))
  (##core#undefined) )

(define string-copy
  (lambda (s)
    (##sys#check-string s 'string-copy)
    (let* ([len (##sys#size s)]
	   [s2 (##sys#make-string len)] )
      (##core#inline "C_copy_memory" s2 s len)
      s2) ) )

(define (substring s start . end)
  (##sys#check-string s 'substring)
  (##sys#check-exact start 'substring)
  (let ([end (if (pair? end) 
		 (let ([end (car end)])
		   (##sys#check-exact end 'substring)
		   end) 
		 (##sys#size s) ) ] )
    (let ([len (##sys#size s)])
      (if (and (fx<= start end)
	       (fx>= start 0)
	       (fx<= end len) )
	  (##sys#substring s start end)
	  (##sys#error-hook
	   (foreign-value "C_OUT_OF_RANGE_ERROR" int)
	   'substring start end) ) ) ))

(define (##sys#substring s start end)
  (let ([s2 (##sys#make-string (fx- end start))])
    (##core#inline "C_substring_copy" s s2 start end 0)
    s2 ) )

(define (string=? x y)
  (##core#inline "C_i_string_equal_p" x y))

(define (string-ci=? x y) (##core#inline "C_i_string_ci_equal_p" x y))

(letrec ((compare 
	  (lambda (s1 s2 loc k)
	    (##sys#check-string s1 loc)
	    (##sys#check-string s2 loc)
	    (let ((len1 (##core#inline "C_block_size" s1))
		  (len2 (##core#inline "C_block_size" s2)) )
	      (k len1 len2
		 (##core#inline "C_string_compare"
			    s1
			    s2
			    (if (fx< len1 len2)
				len1
				len2) ) ) ) ) ) )
  (set! string<? (lambda (s1 s2)
		   (compare 
		    s1 s2 'string<?
		    (lambda (len1 len2 cmp)
		      (or (fx< cmp 0)
			  (and (fx< len1 len2)
			       (eq? cmp 0) ) ) ) ) ) )
  (set! string>? (lambda (s1 s2)
		   (compare 
		    s1 s2 'string>?
		    (lambda (len1 len2 cmp)
		      (or (fx> cmp 0)
			  (and (fx< len2 len1)
			       (eq? cmp 0) ) ) ) ) ) )
  (set! string<=? (lambda (s1 s2)
		    (compare 
		     s1 s2 'string<=?
		     (lambda (len1 len2 cmp)
		       (if (eq? cmp 0)
			   (fx<= len1 len2)
			   (fx< cmp 0) ) ) ) ) )
  (set! string>=? (lambda (s1 s2)
		    (compare 
		     s1 s2 'string>=?
		     (lambda (len1 len2 cmp)
		       (if (eq? cmp 0)
			   (fx>= len1 len2)
			   (fx> cmp 0) ) ) ) ) ) )

(letrec ((compare 
	  (lambda (s1 s2 loc k)
	    (##sys#check-string s1 loc)
	    (##sys#check-string s2 loc)
	    (let ((len1 (##core#inline "C_block_size" s1))
		  (len2 (##core#inline "C_block_size" s2)) )
	      (k len1 len2
		 (##core#inline "C_string_compare_case_insensitive"
				s1
				s2
				(if (fx< len1 len2)
				    len1
				    len2) ) ) ) ) ) )
  (set! string-ci<? (lambda (s1 s2)
		      (compare 
		       s1 s2 'string-ci<?
		       (lambda (len1 len2 cmp)
			 (or (fx< cmp 0)
			     (and (fx< len1 len2)
				  (eq? cmp 0) ) ) ) ) ) )
  (set! string-ci>? (lambda (s1 s2)
		      (compare 
		       s1 s2 'string-ci>?
		       (lambda (len1 len2 cmp)
			 (or (fx> cmp 0)
			     (and (fx< len2 len1)
				  (eq? cmp 0) ) ) ) ) ) )
  (set! string-ci<=? (lambda (s1 s2)
		       (compare 
			s1 s2 'string-ci<=?
			(lambda (len1 len2 cmp)
			  (if (eq? cmp 0)
			      (fx>= len1 len2)
			      (fx< cmp 0) ) ) ) ) )
  (set! string-ci>=? (lambda (s1 s2)
		       (compare 
			s1 s2 'string-ci>=?
			(lambda (len1 len2 cmp)
			  (if (eq? cmp 0)
			      (fx<= len1 len2)
			      (fx> cmp 0) ) ) ) ) ) )

(define (##sys#string-append x y)
  (let* ([s1 (##sys#size x)]
	 [s2 (##sys#size y)] 
	 [z (##sys#make-string (fx+ s1 s2))] )
    (##core#inline "C_substring_copy" x z 0 s1 0)
    (##core#inline "C_substring_copy" y z 0 s2 s1)
    z) )

(define (string-append .  all)
  (let ([snew #f])
    (let loop ([strs all] [n 0])
      (if (eq? strs '())
	  (set! snew (##sys#make-string n))
	  (let ([s (##sys#slot strs 0)])
	    (##sys#check-string s 'string-append)
	    (let ([len (##sys#size s)])
	      (loop (##sys#slot strs 1) (fx+ n len))
	      (##core#inline "C_substring_copy" s snew 0 len n) ) ) ) )
    snew ) )

(define string
  (let ([list->string list->string])
    (lambda chars (list->string chars)) ) )

(define (##sys#fragments->string total fs)
  (let ([dest (##sys#make-string total)])
    (let loop ([fs fs] [pos 0])
      (if (null? fs)
	  dest
	  (let* ([f (##sys#slot fs 0)]
		 [flen (##sys#size f)] )
	    (##core#inline "C_substring_copy" f dest 0 flen pos)
	    (loop (##sys#slot fs 1) (fx+ pos flen)) ) ) ) ) )


;;; Numeric routines:

(define most-positive-fixnum (foreign-value "C_MOST_POSITIVE_FIXNUM" int))
(define most-negative-fixnum (foreign-value "C_MOST_NEGATIVE_FIXNUM" int))
(define fixnum-bits (foreign-value "(C_WORD_SIZE - 1)" int))
(define fixnum-precision (foreign-value "(C_WORD_SIZE - (1 + 1))" int))

(define (fixnum? x) (##core#inline "C_fixnump" x))
(define (fx+ x y) (##core#inline "C_fixnum_plus" x y))
(define (fx- x y) (##core#inline "C_fixnum_difference" x y))
(define (fx* x y) (##core#inline "C_fixnum_times" x y))
(define (fx= x y) (eq? x y))
(define (fx> x y) (##core#inline "C_fixnum_greaterp" x y))
(define (fx< x y) (##core#inline "C_fixnum_lessp" x y))
(define (fx>= x y) (##core#inline "C_fixnum_greater_or_equal_p" x y))
(define (fx<= x y) (##core#inline "C_fixnum_less_or_equal_p" x y))
(define (fxmin x y) (##core#inline "C_i_fixnum_min" x y))
(define (fxmax x y) (##core#inline "C_i_fixnum_max" x y))
(define (fxneg x) (##core#inline "C_fixnum_negate" x))
(define (fxand x y) (##core#inline "C_fixnum_and" x y))
(define (fxior x y) (##core#inline "C_fixnum_or" x y))
(define (fxxor x y) (##core#inline "C_fixnum_xor" x y))
(define (fxnot x) (##core#inline "C_fixnum_not" x))
(define (fxshl x y) (##core#inline "C_fixnum_shift_left" x y))
(define (fxshr x y) (##core#inline "C_fixnum_shift_right" x y))
(define (fxodd? x) (##core#inline "C_i_fixnumoddp" x))
(define (fxeven? x) (##core#inline "C_i_fixnumevenp" x))
(define (fx/ x y) (##core#inline "C_fixnum_divide" x y) )
(define (fxmod x y) (##core#inline "C_fixnum_modulo" x y) )

;; these are currently undocumented
(define (fx+? x y) (##core#inline "C_i_o_fixnum_plus" x y) )
(define (fx-? x y) (##core#inline "C_i_o_fixnum_difference" x y) )
(define (fx*? x y) (##core#inline "C_i_o_fixnum_times" x y) )
(define (fx/? x y) (##core#inline "C_i_o_fixnum_quotient" x y) )

(define maximum-flonum (foreign-value "DBL_MAX" double))
(define minimum-flonum (foreign-value "DBL_MIN" double))
(define flonum-radix (foreign-value "FLT_RADIX" int))
(define flonum-epsilon (foreign-value "DBL_EPSILON" double))
(define flonum-precision (foreign-value "DBL_MANT_DIG" int))
(define flonum-decimal-precision (foreign-value "DBL_DIG" int))
(define flonum-maximum-exponent (foreign-value "DBL_MAX_EXP" int))
(define flonum-minimum-exponent (foreign-value "DBL_MIN_EXP" int))
(define flonum-maximum-decimal-exponent (foreign-value "DBL_MAX_10_EXP" int))
(define flonum-minimum-decimal-exponent (foreign-value "DBL_MIN_10_EXP" int))

(define (flonum? x) (##core#inline "C_i_flonump" x))

(define (finite? x) 
  (##sys#check-number x 'finite?)
  (##core#inline "C_i_finitep" x) )

(define-inline (fp-check-flonum x loc)
  (unless (flonum? x)
    (##sys#error-hook (foreign-value "C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR" int) loc x) ) )

(define-inline (fp-check-flonums x y loc)
  (unless (and (flonum? x) (flonum? y))
    (##sys#error-hook (foreign-value "C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR" int) loc x y) ) )

(define (fp+ x y) 
  (fp-check-flonums x y 'fp+)
  (##core#inline_allocate ("C_a_i_flonum_plus" 4) x y) )

(define (fp- x y) 
  (fp-check-flonums x y 'fp-)
  (##core#inline_allocate ("C_a_i_flonum_difference" 4) x y) )

(define (fp* x y) 
  (fp-check-flonums x y 'fp*)
  (##core#inline_allocate ("C_a_i_flonum_times" 4) x y) )

(define (fp/ x y)
  (fp-check-flonums x y 'fp/)
  (##core#inline_allocate ("C_a_i_flonum_quotient" 4) x y) )

(define (fp/? x y)			; undocumented
  (fp-check-flonums x y 'fp/?)
  (##core#inline_allocate ("C_a_i_flonum_quotient_checked" 4) x y) )

(define (fp= x y) 
  (fp-check-flonums x y 'fp=)
  (##core#inline "C_flonum_equalp" x y) )

(define (fp> x y) 
  (fp-check-flonums x y 'fp>)
  (##core#inline "C_flonum_greaterp" x y) )

(define (fp< x y) 
  (fp-check-flonums x y 'fp<)
  (##core#inline "C_flonum_lessp" x y) )

(define (fp>= x y) 
  (fp-check-flonums x y 'fp>=)
  (##core#inline "C_flonum_greater_or_equal_p" x y) )

(define (fp<= x y) 
  (fp-check-flonums x y 'fp<=)
  (##core#inline "C_flonum_less_or_equal_p" x y) )

(define (fpneg x) 
  (fp-check-flonum x 'fpneg)
  (##core#inline_allocate ("C_a_i_flonum_negate" 4) x) )

(define (fpmax x y) 
  (fp-check-flonums x y 'fpmax)
  (##core#inline "C_i_flonum_max" x y) )

(define (fpmin x y) 
  (fp-check-flonums x y 'fpmin)
  (##core#inline "C_i_flonum_min" x y) )

(define (fpfloor x)
  (fp-check-flonum x 'fpfloor)
  (##core#inline_allocate ("C_a_i_flonum_floor" 4) x))

(define (fptruncate x)
  (fp-check-flonum x 'fptruncate)
  (##core#inline_allocate ("C_a_i_flonum_truncate" 4) x))

(define (fpround x)
  (fp-check-flonum x 'fpround)
  (##core#inline_allocate ("C_a_i_flonum_round" 4) x))

(define (fpceiling x)
  (fp-check-flonum x 'fpceiling)
  (##core#inline_allocate ("C_a_i_flonum_ceiling" 4) x))

(define ##sys#floor fpfloor) ;XXX needed for backwards compatibility with "numbers" egg (really?)
(define ##sys#truncate fptruncate)
(define ##sys#ceiling fpceiling)

(define (fpsin x)
  (fp-check-flonum x 'fpsin)
  (##core#inline_allocate ("C_a_i_flonum_sin" 4) x))

(define (fpcos x)
  (fp-check-flonum x 'fpcos)
  (##core#inline_allocate ("C_a_i_flonum_cos" 4) x))

(define (fptan x)
  (fp-check-flonum x 'fptan)
  (##core#inline_allocate ("C_a_i_flonum_tan" 4) x))

(define (fpasin x)
  (fp-check-flonum x 'fpasin)
  (##core#inline_allocate ("C_a_i_flonum_asin" 4) x))

(define (fpacos x)
  (fp-check-flonum x 'fpacos)
  (##core#inline_allocate ("C_a_i_flonum_acos" 4) x))

(define (fpatan x)
  (fp-check-flonum x 'fpatan)
  (##core#inline_allocate ("C_a_i_flonum_atan" 4) x))

(define (fpatan2 x y)
  (fp-check-flonums x y 'fpatan2)
  (##core#inline_allocate ("C_a_i_flonum_atan2" 4) x y))

(define (fpexp x)
  (fp-check-flonum x 'fpexp)
  (##core#inline_allocate ("C_a_i_flonum_exp" 4) x))

(define (fpexpt x y)
  (fp-check-flonums x y 'fpexpt)
  (##core#inline_allocate ("C_a_i_flonum_expt" 4) x y))

(define (fplog x)
  (fp-check-flonum x 'fplog)
  (##core#inline_allocate ("C_a_i_flonum_log" 4) x))

(define (fpsqrt x)
  (fp-check-flonum x 'fpsqrt)
  (##core#inline_allocate ("C_a_i_flonum_sqrt" 4) x))

(define (fpabs x)
  (fp-check-flonum x 'fpabs)
  (##core#inline_allocate ("C_a_i_flonum_abs" 4) x))

(define (fpinteger? x)
  (fp-check-flonum x 'fpinteger?)
  (##core#inline "C_u_i_fpintegerp" x))

(define * (##core#primitive "C_times"))
(define - (##core#primitive "C_minus"))
(define + (##core#primitive "C_plus"))
(define / (##core#primitive "C_divide"))
(define = (##core#primitive "C_nequalp"))
(define > (##core#primitive "C_greaterp"))
(define < (##core#primitive "C_lessp"))
(define >= (##core#primitive "C_greater_or_equal_p"))
(define <= (##core#primitive "C_less_or_equal_p"))

(define add1 (lambda (n) (+ n 1)))
(define sub1 (lambda (n) (- n 1)))

(define quotient (##core#primitive "C_quotient"))
(define (##sys#number? x) (##core#inline "C_i_numberp" x))
(define number? ##sys#number?)
(define complex? number?)
(define real? number?)
(define (rational? n) (##core#inline "C_i_rationalp" n))
(define ##sys#flonum-fraction (##core#primitive "C_flonum_fraction"))
(define ##sys#fprat (##core#primitive "C_flonum_rat"))
(define (##sys#integer? x) (##core#inline "C_i_integerp" x))
(define integer? ##sys#integer?)
(define (##sys#exact? x) (##core#inline "C_i_exactp" x))
(define (##sys#inexact? x) (##core#inline "C_i_inexactp" x))
(define exact? ##sys#exact?)
(define inexact? ##sys#inexact?)
(define expt (##core#primitive "C_expt"))
(define (##sys#fits-in-int? n) (##core#inline "C_fits_in_int_p" n))
(define (##sys#fits-in-unsigned-int? n) (##core#inline "C_fits_in_unsigned_int_p" n))
(define (##sys#flonum-in-fixnum-range? n) (##core#inline "C_flonum_in_fixnum_range_p" n))
(define (zero? n) (##core#inline "C_i_zerop" n))
(define (positive? n) (##core#inline "C_i_positivep" n))
(define (negative? n) (##core#inline "C_i_negativep" n))
(define (abs n) (##core#inline_allocate ("C_a_i_abs" 4) n))	; 4 => words-per-flonum

(define (angle n)
  (##sys#check-number n 'angle)
  (if (< n 0) (fp* 2.0 (acos 0.0)) 0.0) )

(define (real-part n)
  (##sys#check-number n 'real-part)
  n)

(define (imag-part n)
  (##sys#check-number n 'imag-part)
  0)

(define (numerator n)
  (##sys#check-number n 'numerator)
  (cond
   ((##core#inline "C_u_i_exactp" n) n)
   ((##core#inline "C_i_finitep" n)
    (receive (num denom) (##sys#fprat n) num))
   (else
    (##sys#signal-hook
     #:type-error 'numerator "bad argument type - not a rational number" n)) ) )

(define (denominator n)
  (##sys#check-number n 'denominator)
  (cond
   ((##core#inline "C_u_i_exactp" n) 1)
   ((##core#inline "C_i_finitep" n)
    (receive (num denom) (##sys#fprat n) denom))
   (else
    (##sys#signal-hook
     #:type-error 'denominator "bad argument type - not a rational number" n)) ) )

(define magnitude abs)

(define (signum n)
  (cond ((> n 0) (if (##sys#exact? n) 1 1.0))
	((< n 0) (if (##sys#exact? n) -1 -1.0))
	(else (if (##sys#exact? n) 0 0.0) ) ) )

;; hooks for numbers
(define (##sys#exact->inexact n) (##core#inline_allocate ("C_a_i_exact_to_inexact" 4) n))
(define (##sys#inexact->exact n) (##core#inline "C_i_inexact_to_exact" n))

(define exact->inexact ##sys#exact->inexact)
(define inexact->exact ##sys#inexact->exact)

(define (floor x)
  (##sys#check-number x 'floor)
  (if (##core#inline "C_fixnump" x) 
      x
      (fpfloor x) ) )

(define (ceiling x)
  (##sys#check-number x 'ceiling)
  (if (##core#inline "C_fixnump" x) 
      x
      (fpceiling x) ) )

(define (truncate x)
  (##sys#check-number x 'truncate)
  (if (##core#inline "C_fixnump" x) 
      x
      (fptruncate x) ) )

(define (round x)
  (##sys#check-number x 'round)
  (if (##core#inline "C_fixnump" x) 
      x
      (##core#inline_allocate ("C_a_i_flonum_round_proper" 4) x)))

(define ##sys#round round)		; this is obsolete and is used by the "numbers" egg (gmp version)

(define remainder 
  (lambda (x y) (- x (* (quotient x y) y))) )

(define (modulo a b)			   ; copied from chibi scheme without asking Alex
  (let ((res (- a (* (quotient a b) b))) ) ; remainder
    (if (< b 0)
        (if (<= res 0) res (+ res b))
        (if (>= res 0) res (+ res b)))))

(define (even? n) (##core#inline "C_i_evenp" n))
(define (odd? n) (##core#inline "C_i_oddp" n))

(define max)
(define min)

(letrec ((maxmin
	  (lambda (n1 ns pred)
	    (let loop ((nbest n1) (inexact (##core#inline "C_blockp" n1)) (ns ns))
	      (if (eq? ns '())
		  (if (and inexact (not (##core#inline "C_blockp" nbest)))
		      (##core#inline_allocate ("C_a_i_fix_to_flo" 4) nbest)
		      nbest)
		  (let ([ni (##sys#slot ns 0)])
		    (loop (if (pred ni nbest)
			      ni
			      nbest)
                          (or inexact (##core#inline "C_blockp" ni))
			  (##sys#slot ns 1) ) ) ) ) ) ) )
  (set! max (lambda (n1 . ns) (##sys#check-number n1 'max) (maxmin n1 ns >)))
  (set! min (lambda (n1 . ns) (##sys#check-number n1 'min) (maxmin n1 ns <))) )

(define (exp n)
  (##core#inline_allocate ("C_a_i_exp" 4) n) )

(define (log n)
  (##core#inline_allocate ("C_a_i_log" 4) n) )

(define (sin n)
  (##core#inline_allocate ("C_a_i_sin" 4) n) )

(define (cos n)
  (##core#inline_allocate ("C_a_i_cos" 4) n) )

(define (tan n)
  (##core#inline_allocate ("C_a_i_tan" 4) n) )

(define (asin n)
  (##core#inline_allocate ("C_a_i_asin" 4) n) )

(define (acos n)
  (##core#inline_allocate ("C_a_i_acos" 4) n) )

(define (sqrt n)
  (##core#inline_allocate ("C_a_i_sqrt" 4) n) )

(define (atan n1 . n2)
  (if (null? n2) 
      (##core#inline_allocate ("C_a_i_atan" 4) n1)
      (let ([n2 (car n2)])
	(##core#inline_allocate ("C_a_i_atan2" 4) n1 n2) ) ) )

(define ##sys#gcd
  (let ((remainder remainder))
    (lambda (x y)
      (let loop ((x x) (y y))
	(if (zero? y)
	    (abs x)
	    (loop y (remainder x y)) ) ) ) ) )

(define (gcd . ns)
  (if (eq? ns '())
      0
      (let loop ([ns ns] [f #t])
	(let ([head (##sys#slot ns 0)]
	      [next (##sys#slot ns 1)] )
	  (when f (##sys#check-integer head 'gcd))
	  (if (null? next)
	      (abs head)
	      (let ([n2 (##sys#slot next 0)])
		(##sys#check-integer n2 'gcd)
		(loop (cons (##sys#gcd head n2) (##sys#slot next 1)) #f) ) ) ) ) ) )

(define (##sys#lcm x y)
  (quotient (* x y) (##sys#gcd x y)) )

(define (lcm . ns)
  (if (null? ns)
      1
      (let loop ([ns ns] [f #t])
	(let ([head (##sys#slot ns 0)]
	      [next (##sys#slot ns 1)] )
	  (when f (##sys#check-integer head 'lcm))
	  (if (null? next)
	      (abs head)
	      (let ([n2 (##sys#slot next 0)])
		(##sys#check-integer n2 'lcm)
		(loop
		 (cons
		  (##sys#lcm head n2)
		  (##sys#slot next 1)) #f) ) ) ) ) ) )

(define (##sys#string->number str #!optional (radix 10) exactness)
  (let ((num (##core#inline_allocate ("C_a_i_string_to_number" 4) str radix)))
    (case exactness
      ((i) (##core#inline_allocate ("C_a_i_exact_to_inexact" 4) num))
      ;; If inf/nan, don't error but just return #f
      ((e) (and num
                (##core#inline "C_i_finitep" num)
                (##core#inline "C_i_inexact_to_exact" num)))
      (else num))))

(define string->number ##sys#string->number)
(define ##sys#number->string (##core#primitive "C_number_to_string"))
(define ##sys#fixnum->string (##core#primitive "C_fixnum_to_string"))
(define number->string ##sys#number->string)

(define (flonum-print-precision #!optional prec)
  (let ([prev (##core#inline "C_get_print_precision")])
    (when prec
      (##sys#check-exact prec 'flonum-print-precision)
      (##core#inline "C_set_print_precision" prec) )
    prev ) )

(define (equal=? x y)
  (define (compare-slots x y start)
    (let ((l1 (##sys#size x))
	  (l2 (##sys#size y)))
      (and (eq? l1 l2)
	   (or (fx<= l1 start)
	       (let ((l1n (fx- l1 1)))
		 (let loop ((i start))
		   (if (fx= i l1n)
		       (walk (##sys#slot x i) (##sys#slot y i)) ; tailcall
		       (and (walk (##sys#slot x i) (##sys#slot y i))
			    (loop (fx+ i 1))))))))))
  (define (walk x y)
    (cond ((eq? x y))
	  ((fixnum? x) 
	   (if (flonum? y)
	       (= x y)
	       (eq? x y)))
	  ((flonum? x)
	   (and (or (fixnum? y) (flonum? y))
		(= x y)))
	  ((not (##core#inline "C_blockp" x)) #f)
	  ((not (##core#inline "C_blockp" y)) #f)
	  ((not (##core#inline "C_sametypep" x y)) #f)
	  ((##core#inline "C_specialp" x)
	   (and (##core#inline "C_specialp" y)
		(if (##core#inline "C_closurep" x)
		    (##core#inline "shallow_equal" x y)
		    (compare-slots x y 1))))
	  ((##core#inline "C_byteblockp" x)
	   (and (##core#inline "C_byteblockp" y)
		(let ((s1 (##sys#size x)))
		  (and (eq? s1 (##sys#size y))
		       (##core#inline "C_substring_compare" x y 0 0 s1)))))
	  (else
	   (let ((s1 (##sys#size x)))
	     (and (eq? s1 (##sys#size y))
		  (compare-slots x y 0))))))
  (walk x y))


;;; Symbols:

(define ##sys#make-symbol (##core#primitive "C_make_symbol"))
(define (symbol? x) (##core#inline "C_i_symbolp" x))
(define ##sys#snafu '##sys#fnord)
(define ##sys#intern-symbol (##core#primitive "C_string_to_symbol"))
(define (##sys#interned-symbol? x) (##core#inline "C_lookup_symbol" x))

(define (##sys#string->symbol str)
  (##sys#check-string str)
  (##sys#intern-symbol str) )

(define ##sys#symbol->string)
(define ##sys#symbol->qualified-string)
(define ##sys#qualified-symbol-prefix)

(let ([string-append string-append]
      [string-copy string-copy] )

  (define (split str len)
    (let ([b0 (##sys#byte str 0)])	; we fetch the byte, wether len is 0 or not
      (if (and (fx> len 0) (fx< b0 len) (fx<= b0 namespace-max-id-len))
	  (fx+ b0 1)
	  #f) ) )

  (set! ##sys#symbol->string
    (lambda (s)
      (let* ([str (##sys#slot s 1)]
	     [len (##sys#size str)]
	     [i (split str len)] )
	(if i (##sys#substring str i len) str) ) ) )

  (set! ##sys#symbol->qualified-string 
    (lambda (s)
      (let* ([str (##sys#slot s 1)]
	     [len (##sys#size str)] 
	     [i (split str len)] )
	(if i
	    (string-append "##" (##sys#substring str 1 i) "#" (##sys#substring str i len))
	    str) ) ) )

  (set! ##sys#qualified-symbol-prefix 
    (lambda (s)
      (let* ([str (##sys#slot s 1)]
	     [len (##sys#size str)]
	     [i (split str len)] )
	(and i (##sys#substring str 0 i)) ) ) ) )

(define (##sys#qualified-symbol? s)
  (let ((str (##sys#slot s 1)))
    (and (fx> (##sys#size str) 0)
	 (fx<= (##sys#byte str 0) namespace-max-id-len))))

(define ##sys#string->qualified-symbol
  (lambda (prefix str)
    (##sys#string->symbol
     (if prefix
	 (##sys#string-append prefix str)
	 str) ) ) )

(define (symbol->string s)
  (##sys#check-symbol s 'symbol->string)
  (string-copy (##sys#symbol->string s) ) )

(define string->symbol
  (let ([string-copy string-copy])
    (lambda (str)
      (##sys#check-string str 'string->symbol)
      (##sys#intern-symbol (string-copy str)) ) ) )

(define string->uninterned-symbol
  (let ([string-copy string-copy])
    (lambda (str)
      (##sys#check-string str 'string->uninterned-symbol)
      (##sys#make-symbol (string-copy str)) ) ) )

(define gensym
  (let ([counter -1])
    (lambda str-or-sym
      (let ([err (lambda (prefix) (##sys#signal-hook #:type-error 'gensym "argument is not a string or symbol" prefix))])
	(set! counter (fx+ counter 1))
	(##sys#make-symbol
	 (##sys#string-append
	  (if (eq? str-or-sym '())
	      "g"
	      (let ([prefix (car str-or-sym)])
		(or (and (##core#inline "C_blockp" prefix)
			 (cond [(##core#inline "C_stringp" prefix) prefix]
			       [(##core#inline "C_symbolp" prefix) (##sys#symbol->string prefix)]
			       [else (err prefix)] ) )
		    (err prefix) ) ) )
	  (##sys#number->string counter) ) ) ) ) ) )

(define symbol-append
  (let ((string-append string-append))
    (lambda ss
      (##sys#intern-symbol
       (apply
	string-append 
	(map (lambda (s)
	       (##sys#check-symbol s 'symbol-append)
	       (##sys#symbol->string s))
	     ss))))))

;;; Keywords:

(define (keyword? x)
  (and (symbol? x) (fx= 0 (##sys#byte (##sys#slot x 1) 0))) )

(define string->keyword
  (let ([string string] )
    (lambda (s)
      (##sys#check-string s 'string->keyword)
      (##sys#intern-symbol (##sys#string-append (string (integer->char 0)) s)) ) ) )

(define keyword->string
  (let ([keyword? keyword?])
    (lambda (kw)
      (if (keyword? kw)
	  (##sys#symbol->string kw)
	  (##sys#signal-hook #:type-error 'keyword->string "bad argument type - not a keyword" kw) ) ) ) )

(define ##sys#get-keyword
  (let ((tag (list 'tag)))
    (lambda (key args #!optional thunk)
      (##sys#check-list args 'get-keyword)
      (let ((r (##core#inline "C_i_get_keyword" key args tag)))
	(if (eq? r tag)			; not found
	    (and thunk (thunk))
	    r)))))

(define get-keyword ##sys#get-keyword)


;;; Blob:

(define (##sys#make-blob size)
  (let ([bv (##sys#allocate-vector size #t #f #t)])
    (##core#inline "C_string_to_bytevector" bv)
    bv) )

(define (make-blob size)
  (##sys#check-exact size 'make-blob)
  (##sys#make-blob size) )

(define (blob? x)
  (and (##core#inline "C_blockp" x)
       (##core#inline "C_bytevectorp" x) ) )

(define (blob-size bv)
  (##sys#check-blob bv 'blob-size)
  (##sys#size bv) )

(define (string->blob s)
  (##sys#check-string s 'string->blob)
  (let* ([n (##sys#size s)]
	 [bv (##sys#make-blob n)] )
    (##core#inline "C_copy_memory" bv s n) 
    bv) )

(define (blob->string bv)
  (##sys#check-blob bv 'blob->string)
  (let* ([n (##sys#size bv)]
	 [s (##sys#make-string n)] )
    (##core#inline "C_copy_memory" s bv n) 
    s) )

(define (blob=? b1 b2)
  (##sys#check-blob b1 'blob=?)
  (##sys#check-blob b2 'blob=?)
  (let ((n (##sys#size b1)))
    (and (eq? (##sys#size b2) n)
	 (zero? (##core#inline "C_string_compare" b1 b2 n)))))


;;; Vectors:

(define (vector? x) (##core#inline "C_i_vectorp" x))
(define (vector-length v) (##core#inline "C_i_vector_length" v))
(define (vector-ref v i) (##core#inline "C_i_vector_ref" v i))
(define (vector-set! v i x) (##core#inline "C_i_vector_set" v i x))

(define (##sys#make-vector size . fill)
  (##sys#check-exact size 'make-vector)
  (when (fx< size 0) (##sys#error 'make-vector "size is negative" size))
  (##sys#allocate-vector
   size #f
   (if (null? fill)
       (##core#undefined)
       (car fill) )
   #f) )

(define make-vector ##sys#make-vector)

(define (list->vector lst0)
  (if (not (list? lst0))
      (##sys#error-not-a-proper-list lst0 'list->vector)
      (let* ([len (length lst0)]
	     [v (##sys#make-vector len)] )
	(let loop ([lst lst0]
		   [i 0])
	  (if (null? lst)
	    v
	    (begin
	      (##sys#setslot v i (##sys#slot lst 0))
	      (loop (##sys#slot lst 1) (fx+ i 1)) ) ) ) ) ))

(define (vector->list v)
  (##sys#check-vector v 'vector->list)
  (let ((len (##core#inline "C_block_size" v)))
    (let loop ((i 0))
      (if (fx>= i len)
	  '()
	  (cons (##sys#slot v i)
		(loop (fx+ i 1)) ) ) ) ) )

(define (vector . xs)
  (##sys#list->vector xs) )

(define (vector-fill! v x)
  (##sys#check-vector v 'vector-fill!)
  (let ((len (##core#inline "C_block_size" v)))
    (do ((i 0 (fx+ i 1)))
	((fx>= i len))
      (##sys#setslot v i x) ) ) )

(define (vector-copy! from to . n)
  (##sys#check-vector from 'vector-copy!)
  (##sys#check-vector to 'vector-copy!)
  (let* ((len-from (##sys#size from))
	 (len-to (##sys#size to))
	 (n (if (pair? n) (car n) (fxmin len-to len-from))) )
    (##sys#check-exact n 'vector-copy!)
    (when (or (fx> n len-to) (fx> n len-from))
      (##sys#signal-hook 
       #:bounds-error 'vector-copy!
       "cannot copy vector - count exceeds length" from to n) )
    (do ((i 0 (fx+ i 1)))
	((fx>= i n))
      (##sys#setslot to i (##sys#slot from i)) ) ) )

(define (subvector v i #!optional j)
  (##sys#check-vector v 'subvector)
  (let* ((len (##sys#size v))
	 (j (or j len))
	 (len2 (fx- j i)))
    (##sys#check-range i 0 (fx+ len 1) 'subvector)
    (##sys#check-range j 0 (fx+ len 1) 'subvector)
    (let ((v2 (make-vector len2)))
      (do ((k 0 (fx+ k 1)))
	  ((fx>= k len2) v2)
	(##sys#setslot v2 k (##sys#slot v (fx+ k i)))))))

(define (vector-resize v n #!optional init)
  (##sys#check-vector v 'vector-resize)
  (##sys#check-exact n 'vector-resize)
  (##sys#vector-resize v n init) )

(define (##sys#vector-resize v n init)
  (let ((v2 (##sys#make-vector n init))
	(len (min (##sys#size v) n)) )
    (do ((i 0 (fx+ i 1)))
	((fx>= i len) v2)
      (##sys#setslot v2 i (##sys#slot v i)) ) ) )

;;; Characters:

(define (char? x) (##core#inline "C_charp" x))

(define (char->integer c)
  (##sys#check-char c 'char->integer)
  (##core#inline "C_fix" (##core#inline "C_character_code" c)) )

(define (integer->char n)
  (##sys#check-exact n 'integer->char)
  (##core#inline "C_make_character" (##core#inline "C_unfix" n)) )

(define (char=? c1 c2)
  (##sys#check-char c1 'char=?)
  (##sys#check-char c2 'char=?)
  (##core#inline "C_i_char_equalp" c1 c2) )

(define (char>? c1 c2)
  (##sys#check-char c1 'char>?)
  (##sys#check-char c2 'char>?)
  (##core#inline "C_i_char_greaterp" c1 c2) )

(define (char<? c1 c2)
  (##sys#check-char c1 'char<?)
  (##sys#check-char c2 'char<?)
  (##core#inline "C_i_char_lessp" c1 c2) )

(define (char>=? c1 c2)
  (##sys#check-char c1 'char>=?)
  (##sys#check-char c2 'char>=?)
  (##core#inline "C_i_char_greater_or_equal_p" c1 c2) )

(define (char<=? c1 c2)
  (##sys#check-char c1 'char<=?)
  (##sys#check-char c2 'char<=?)
  (##core#inline "C_i_char_less_or_equal_p" c1 c2) )

(define (char-upcase c)
  (##sys#check-char c 'char-upcase)
  (##core#inline "C_u_i_char_upcase" c))

(define (char-downcase c)
  (##sys#check-char c 'char-downcase)
  (##core#inline "C_u_i_char_downcase" c))

(define char-ci=?)
(define char-ci>?)
(define char-ci<?)
(define char-ci>=?)
(define char-ci<=?)

(let ((char-downcase char-downcase))
  (set! char-ci=? (lambda (x y) (eq? (char-downcase x) (char-downcase y))))
  (set! char-ci>? (lambda (x y)
		    (##core#inline "C_i_char_greaterp"
				   (char-downcase x) (char-downcase y))))
  (set! char-ci<? (lambda (x y)
		    (##core#inline "C_i_char_lessp"
				   (char-downcase x) (char-downcase y))))
  (set! char-ci>=? (lambda (x y)
		     (##core#inline "C_i_char_greater_or_equal_p"
				    (char-downcase x) (char-downcase y))))
  (set! char-ci<=? (lambda (x y)
		     (##core#inline "C_i_char_less_or_equal_p"
				    (char-downcase x) (char-downcase y)))) )

(define (char-upper-case? c)
  (##sys#check-char c 'char-upper-case?)
  (##core#inline "C_u_i_char_upper_casep" c) )

(define (char-lower-case? c)
  (##sys#check-char c 'char-lower-case?)
  (##core#inline "C_u_i_char_lower_casep" c) )

(define (char-numeric? c)
  (##sys#check-char c 'char-numeric?)
  (##core#inline "C_u_i_char_numericp" c) )

(define (char-whitespace? c)
  (##sys#check-char c 'char-whitespace?)
  (##core#inline "C_u_i_char_whitespacep" c) )

(define (char-alphabetic? c)
  (##sys#check-char c 'char-alphabetic?)
  (##core#inline "C_u_i_char_alphabeticp" c) )

(define char-name
  (let ([chars-to-names (make-vector char-name-table-size '())]
	[names-to-chars '()] )
    (define (lookup-char c)
      (let* ([code (char->integer c)]
	     [key (##core#inline "C_fixnum_modulo" code char-name-table-size)] )
	(let loop ([b (##sys#slot chars-to-names key)])
	  (and (pair? b)
	       (let ([a (##sys#slot b 0)])
		 (if (eq? (##sys#slot a 0) c)
		     a
		     (loop (##sys#slot b 1)) ) ) ) ) ) )
    (lambda (x . y)
      (let ([chr (if (pair? y) (car y) #f)])
	(cond [(char? x)
	       (and-let* ([a (lookup-char x)])
		 (##sys#slot a 1) ) ]
	      [chr
	       (##sys#check-symbol x 'char-name)
	       (##sys#check-char chr 'char-name)
	       (when (fx< (##sys#size (##sys#slot x 1)) 2)
		 (##sys#signal-hook #:type-error 'char-name "invalid character name" x) )
	       (let ([a (lookup-char chr)])
		 (if a 
		     (let ([b (assq x names-to-chars)])
		       (##sys#setslot a 1 x)
		       (if b
			   (##sys#setislot b 1 chr)
			   (set! names-to-chars (cons (cons x chr) names-to-chars)) ) )
		     (let ([key (##core#inline "C_fixnum_modulo" (char->integer chr) char-name-table-size)])
		       (set! names-to-chars (cons (cons x chr) names-to-chars))
		       (##sys#setslot 
			chars-to-names key
			(cons (cons chr x) (##sys#slot chars-to-names key))) ) ) ) ]
	      [else
	       (##sys#check-symbol x 'char-name)
	       (and-let* ([a (assq x names-to-chars)])
		 (##sys#slot a 1) ) ] ) ) ) ) )

;; TODO: Use the character names here in the next release?  Or just
;; use the numbers everywhere, for clarity?
(char-name 'space #\space)
(char-name 'tab #\tab)
(char-name 'linefeed #\linefeed)
(char-name 'newline #\newline)
(char-name 'vtab (integer->char 11))
(char-name 'delete (integer->char 127))
(char-name 'esc (integer->char 27))
(char-name 'escape (integer->char 27))
(char-name 'alarm (integer->char 7))
(char-name 'nul (integer->char 0))
(char-name 'null (integer->char 0))
(char-name 'return #\return)
(char-name 'page (integer->char 12))
(char-name 'backspace (integer->char 8))


;;; Procedures:

(define (procedure? x) (##core#inline "C_i_closurep" x))
(define apply (##core#primitive "C_apply"))
(define ##sys#call-with-current-continuation (##core#primitive "C_call_cc"))
(define (##sys#call-with-direct-continuation k) (##core#app k (##core#inline "C_direct_continuation" #f)))
(define ##sys#call-with-cthulhu (##core#primitive "C_call_with_cthulhu"))
(define (##sys#direct-return dk x) (##core#inline "C_direct_return" dk x))
(define values (##core#primitive "C_values"))
(define ##sys#call-with-values (##core#primitive "C_call_with_values"))
(define call-with-values ##sys#call-with-values)

(define (##sys#for-each p lst0)
  (let loop ((lst lst0))
    (cond ((eq? lst '()) (##core#undefined))
	  ((pair? lst)
	   (p (##sys#slot lst 0))
	   (loop (##sys#slot lst 1)) )
	  (else (##sys#error-not-a-proper-list lst0 'for-each)) ) ))

(define (##sys#map p lst0)
  (let loop ((lst lst0))
    (cond ((eq? lst '()) lst)
	  ((pair? lst)
	   (cons (p (##sys#slot lst 0)) (loop (##sys#slot lst 1))) )
	  (else (##sys#error-not-a-proper-list lst0 'map)) ) ))

(define for-each)
(define map)

(letrec ((mapsafe
	  (lambda (p lsts start loc)
	    (if (eq? lsts '())
		lsts
		(let ((item (##sys#slot lsts 0)))
		  (cond ((eq? item '())
			 (check lsts start loc))
			((pair? item)
			 (cons (p item) (mapsafe p (##sys#slot lsts 1) #f loc)) )
			(else (##sys#error-not-a-proper-list item loc)) ) ) ) ) )
	 (check 
	  (lambda (lsts start loc)
	    (if (or (not start)
		    (let loop ((lsts lsts))
		      (and (not (eq? lsts '()))
			   (not (eq? (##sys#slot lsts 0) '()))
			   (loop (##sys#slot lsts 1)) ) ) )
		(##sys#error loc "lists are not of same length" lsts) ) ) ) )

  (set! for-each
    (lambda (fn lst1 . lsts)
      (if (null? lsts)
	  (##sys#for-each fn lst1)
	  (let loop ((all (cons lst1 lsts)))
	    (let ((first (##sys#slot all 0)))
	      (cond ((pair? first)
		     (apply fn (mapsafe (lambda (x) (car x)) all #t 'for-each)) ; ensure inlining
		     (loop (mapsafe (lambda (x) (cdr x)) all #t 'for-each)) )
		    (else (check all #t 'for-each)) ) ) ) ) ) )

  (set! map
    (lambda (fn lst1 . lsts)
      (if (null? lsts)
	  (##sys#map fn lst1)
	  (let loop ((all (cons lst1 lsts)))
	    (let ((first (##sys#slot all 0)))
	      (cond ((pair? first)
		     (cons (apply fn (mapsafe (lambda (x) (car x)) all #t 'map))
			   (loop (mapsafe (lambda (x) (cdr x)) all #t 'map)) ) )
		    (else (check (##core#inline "C_i_cdr" all) #t 'map)
			  '() ) ) ) ) ) ) ) )


;;; dynamic-wind:
;
; (taken more or less directly from SLIB)
;
; This implementation is relatively costly: we have to shadow call/cc
; with a new version that unwinds suspended thunks, but for this to
; happen the return-values of the escaping procedure have to be saved
; temporarily in a list. Since call/cc is very efficient under this
; implementation, and because allocation of memory that is to be
; garbage soon has also quite low overhead, the performance-penalty
; might be acceptable (ctak needs about 4 times longer).

(define ##sys#dynamic-winds '())

(define (dynamic-wind before thunk after)
  (before)
  (set! ##sys#dynamic-winds (cons (cons before after) ##sys#dynamic-winds))
  (##sys#call-with-values
   thunk
   (lambda results
     (set! ##sys#dynamic-winds (##sys#slot ##sys#dynamic-winds 1))
     (after)
     (apply ##sys#values results) ) ) )

(define ##sys#dynamic-wind dynamic-wind)

(define (call-with-current-continuation proc)
  (let ((winds ##sys#dynamic-winds))
    (##sys#call-with-current-continuation
     (lambda (cont)
       (define (continuation . results)
	 (unless (eq? ##sys#dynamic-winds winds)
	   (##sys#dynamic-unwind winds (fx- (length ##sys#dynamic-winds) (length winds))) )
	 (apply cont results) )
       (proc continuation)))))

(define call/cc call-with-current-continuation)

(define (##sys#dynamic-unwind winds n)
  (cond [(eq? ##sys#dynamic-winds winds)]
	[(fx< n 0)
	 (##sys#dynamic-unwind (##sys#slot winds 1) (fx+ n 1))
	 ((##sys#slot (##sys#slot winds 0) 0))
	 (set! ##sys#dynamic-winds winds) ]
	[else
	 (let ([after (##sys#slot (##sys#slot ##sys#dynamic-winds 0) 1)])
	   (set! ##sys#dynamic-winds (##sys#slot ##sys#dynamic-winds 1))
	   (after)
	   (##sys#dynamic-unwind winds (fx- n 1)) ) ] ) )

(define (continuation-capture proc)
  (let ([winds ##sys#dynamic-winds]
	[k (##core#inline "C_direct_continuation" #f)] )
    (proc (##sys#make-structure 'continuation k winds))) )

(define (continuation? x)
  (##sys#structure? x 'continuation) )

(define ##sys#continuation-graft (##core#primitive "C_continuation_graft"))

(define (continuation-graft k thunk)
  (##sys#check-structure k 'continuation 'continuation-graft)
  (let ([winds (##sys#slot k 2)])
    (unless (eq? ##sys#dynamic-winds winds)
      (##sys#dynamic-unwind winds (fx- (length ##sys#dynamic-winds) (length winds))) )
    (##sys#continuation-graft k thunk) ) )

(define continuation-return
  (lambda (k . vals)
    (##sys#check-structure k 'continuation 'continuation-return)
    (continuation-graft k (lambda () (apply values vals))) ) )


;;; Ports:

(define (port? x) (##core#inline "C_i_portp" x))

(define-inline (%port? x)
  (and (##core#inline "C_blockp" x)
       (##core#inline "C_portp" x)) )

(define (input-port? x)
  (and (%port? x)
       (##sys#slot x 1) ) )

(define (output-port? x)
  (and (%port? x)
       (not (##sys#slot x 1)) ) )

(define (port-closed? p)
  (##sys#check-port p 'port-closed?)
  (##sys#slot p 8))


;;; Port layout:
;
; 0:  FP (special)
; 1:  input/output (bool)
; 2:  class (vector of procedures)
; 3:  name (string)
; 4:  row (fixnum)
; 5:  col (fixnum)
; 6:  EOF (bool)
; 7:  type ('stream | 'custom | 'string | 'socket)
; 8:  closed (bool)
; 9:  data
; 10-15: reserved, port class specific
;
; Port-class:
;
; 0:  (read-char PORT) -> CHAR | EOF
; 1:  (peek-char PORT) -> CHAR | EOF
; 2:  (write-char PORT CHAR)
; 3:  (write-string PORT STRING)
; 4:  (close PORT)
; 5:  (flush-output PORT)
; 6:  (char-ready? PORT) -> BOOL
; 7:  (read-string! PORT COUNT STRING START) -> COUNT'
; 8:  (read-line PORT LIMIT) -> STRING | EOF
; 9:  (read-buffered PORT) -> STRING

(define (##sys#make-port i/o class name type)
  (let ([port (##core#inline_allocate ("C_a_i_port" 17))])
    (##sys#setislot port 1 i/o)
    (##sys#setslot port 2 class)
    (##sys#setslot port 3 name)
    (##sys#setislot port 4 1)
    (##sys#setislot port 5 0)
    (##sys#setslot port 7 type)
    port) )

;;; Stream ports:
; Input port slots:
;   12: Static buffer for read-line, allocated on-demand

(define ##sys#stream-port-class
  (vector (lambda (p)			; read-char
	    (let loop ()
	      (let ((c (##core#inline "C_read_char" p)))
		(cond
		 ((eq? -1 c)
		  (##sys#update-errno)
		  (if (eq? (errno) (foreign-value "EINTR" int))
		      (##sys#dispatch-interrupt loop)
		      (##sys#signal-hook
		       #:file-error 'read-char
		       (##sys#string-append "cannot read from port - " strerror)
		       p)))
		 (else c)))))
	  (lambda (p)			; peek-char
	    (let loop ()
	      (let ((c (##core#inline "C_peek_char" p)))
		(cond
		 ((eq? -1 c)
		  (##sys#update-errno)
		  (if (eq? (errno) (foreign-value "EINTR" int))
		      (##sys#dispatch-interrupt loop)
		      (##sys#signal-hook
		       #:file-error 'peek-char
		       (##sys#string-append "cannot read from port - " strerror)
		       p)))
		 (else c)))))
	  (lambda (p c)			; write-char
	    (##core#inline "C_display_char" p c) )
	  (lambda (p s)			; write-string
	    (##core#inline "C_display_string" p s) )
	  (lambda (p)			; close
	    (##core#inline "C_close_file" p)
	    (##sys#update-errno) )
	  (lambda (p)			; flush-output
	    (##core#inline "C_flush_output" p) )
	  (lambda (p)			; char-ready?
	    (##core#inline "C_char_ready_p" p) )
	  (lambda (p n dest start)		; read-string!
	    (let loop ([rem (or n (fx- (##sys#size dest) start))] [act 0] [start start])
	      (let ([len (##core#inline "fast_read_string_from_file" dest p rem start)])
		(cond ((eof-object? len) ; EOF returns 0 bytes read
		       act)
		      ((fx< len 0)
		       (##sys#update-errno)
		       (if (eq? (errno) (foreign-value "EINTR" int))
			   (##sys#dispatch-interrupt
			    (lambda ()
			      (loop (fx- rem len) (fx+ act len) (fx+ start len))))
			   (##sys#signal-hook
			    #:file-error 'read-string!
			    (##sys#string-append "cannot read from port - " strerror)
			    p n dest start)))
		      ((fx< len rem)
		       (loop (fx- rem len) (fx+ act len) (fx+ start len)))
		      (else
		       (fx+ act len) ) ) )))
	  (lambda (p rlimit)		; read-line
	    (if rlimit (##sys#check-exact rlimit 'read-line))
	    (let ((sblen read-line-buffer-initial-size))
	      (unless (##sys#slot p 12)
		(##sys#setslot p 12 (##sys#make-string sblen)))
	      (let loop ([len sblen]
			 [limit (or rlimit maximal-string-length)]   ; guaranteed fixnum?
			 [buffer (##sys#slot p 12)]
			 [result ""]
			 [f #f])
		(let ([n (##core#inline "fast_read_line_from_file" buffer p
					(fxmin limit len))])
		  (cond [(eof-object? n) (if f result #!eof)]
			[(not n)
			 (if (fx< limit len)
			     (##sys#string-append result (##sys#substring buffer 0 limit))
			     (loop (fx* len 2)
				   (fx- limit len)
				   (##sys#make-string (fx* len 2))
				   (##sys#string-append result buffer)
				   #t)) ]
			((fx< n 0)
			 (##sys#update-errno)
			 (if (eq? (errno) (foreign-value "EINTR" int))
			     (let ((n (fx- (fxneg n) 1)))
			       (##sys#dispatch-interrupt
				(lambda ()
				  (loop len limit buffer
					(##sys#string-append
					 result (##sys#substring buffer 0 n))
					#t))))
			     (##sys#signal-hook
			      #:file-error 'read-line
			      (##sys#string-append "cannot read from port - " strerror)
			      p rlimit)))
			[f (##sys#setislot p 4 (fx+ (##sys#slot p 4) 1))
			   (##sys#string-append result (##sys#substring buffer 0 n))]
			[else
			 (##sys#setislot p 4 (fx+ (##sys#slot p 4) 1))
			 (##sys#substring buffer 0 n)] ) ) ) ) )
	  #f	; read-buffered
	  ) )

(define ##sys#open-file-port (##core#primitive "C_open_file_port"))

(define ##sys#standard-input (##sys#make-port #t ##sys#stream-port-class "(stdin)" 'stream))
(define ##sys#standard-output (##sys#make-port #f ##sys#stream-port-class "(stdout)" 'stream))
(define ##sys#standard-error (##sys#make-port #f ##sys#stream-port-class "(stderr)" 'stream))

(##sys#open-file-port ##sys#standard-input 0 #f)
(##sys#open-file-port ##sys#standard-output 1 #f)
(##sys#open-file-port ##sys#standard-error 2 #f)

(define (##sys#check-input-port x open . loc)
  (if (pair? loc)
      (##core#inline "C_i_check_port_2" x #t open (car loc))
      (##core#inline "C_i_check_port" x #t open) ) )

(define (##sys#check-output-port x open . loc)
  (if (pair? loc)
      (##core#inline "C_i_check_port_2" x #f open (car loc))
      (##core#inline "C_i_check_port" x #f open) ) )

(define (##sys#check-port x . loc)
  (if (pair? loc)
      (##core#inline "C_i_check_port_2" x 0 #f (car loc))
      (##core#inline "C_i_check_port" x 0 #f) ) )

(define (##sys#check-open-port x . loc)
  (if (pair? loc)
      (##core#inline "C_i_check_port_2" x 0 #t (car loc))
      (##core#inline "C_i_check_port" x 0 #t) ) )

(define (##sys#check-port-mode port mode . loc) ; OBSOLETE
  (unless (eq? mode (##sys#slot port 1))
    (##sys#signal-hook
     #:type-error (and (pair? loc) (car loc))
     (if mode "port is not an input port" "port is not an output-port") port) ) )

(define (##sys#check-port* p loc)	; OBSOLETE
  (##sys#check-port p)
  (when (##sys#slot p 8)
    (##sys#signal-hook #:file-error loc "port already closed" p) )
  p )

(define (current-input-port . arg)
  (when (pair? arg)
    (let ([p (car arg)])
      (##sys#check-port p 'current-input-port)
      (set! ##sys#standard-input p) ))
  ##sys#standard-input)

(define (current-output-port . arg)
  (when (pair? arg)
    (let ([p (car arg)])
      (##sys#check-port p 'current-output-port)
      (set! ##sys#standard-output p) ) )
  ##sys#standard-output)

(define (current-error-port . arg)
  (when (pair? arg)
    (let ([p (car arg)])
      (##sys#check-port p 'current-error-port)
      (set! ##sys#standard-error p) ) )
  ##sys#standard-error)

(define (##sys#tty-port? port)
  (and (not (zero? (##sys#peek-unsigned-integer port 0)))
       (##core#inline "C_tty_portp" port) ) )

(define (##sys#port-data port) (##sys#slot port 9))
(define (##sys#set-port-data! port data) (##sys#setslot port 9 data))

(define ##sys#platform-fixup-pathname
  (let* ([bp (string->symbol ((##core#primitive "C_build_platform")))]
	 [fixsuffix (eq? bp 'mingw32)])
    (lambda (name)
      (if fixsuffix
	  (let ([end (fx- (##sys#size name) 1)])
	    (if (fx>= end 0)
		(let ([c (##core#inline "C_subchar" name end)])
		  (if (or (eq? c #\\) (eq? c #\/))
		      (##sys#substring name 0 end)
		      name) )
		name) )
	  name) ) ) )

(define (##sys#pathname-resolution name thunk . _)
  (thunk (##sys#expand-home-path name)) )

;; DEPRECATED: implicit $VAR- and ~-expansion will be removed in
;; future versions.  See ticket #1001
(define ##sys#expand-home-path
  (lambda (path)
    (let ((len (##sys#size path)))
      (if (fx> len 0)
	  (case (##core#inline "C_subchar" path 0)
	    ((#\~) 
	     (let ((rest (##sys#substring path 1 len)))
	       (##sys#string-append (or (get-environment-variable "HOME") "") rest) ) )
	    ((#\$) 
	     (let loop ((i 1))
	       (if (fx>= i len)
		   path
		   (let ((c (##core#inline "C_subchar" path i)))
		     (if (or (eq? c #\/) (eq? c #\\))
			 (##sys#string-append
			  (or (get-environment-variable (##sys#substring path 1 i)) "")
			  (##sys#substring path i len))
			 (loop (fx+ i 1)) ) ) ) ) )
	    (else path) )
	  "") ) ) )

(define open-input-file)
(define open-output-file)
(define close-input-port)
(define close-output-port)

(let ()
 
  (define (open name inp modes loc)
    (##sys#check-string name loc)
    (##sys#pathname-resolution
     name
     (lambda (name)
       (let ([fmode (if inp "r" "w")]
	     [bmode ""] )
	 (do ([modes modes (##sys#slot modes 1)])
	     ((null? modes))
	   (let ([o (##sys#slot modes 0)])
	     (case o
	       [(#:binary) (set! bmode "b")]
	       [(#:text) (set! bmode "")]
	       [(#:append) 
		(if inp
		    (##sys#error loc "cannot use append mode with input file")
		    (set! fmode "a") ) ]
	       [else (##sys#error loc "invalid file option" o)] ) ) )
	 (let ([port (##sys#make-port inp ##sys#stream-port-class name 'stream)])
	   (unless (##sys#open-file-port port name (##sys#string-append fmode bmode))
	     (##sys#update-errno)
	     (##sys#signal-hook #:file-error loc (##sys#string-append "cannot open file - " strerror) name) )
	   port) ) )
     #:open (not inp) modes) )

  (define (close port loc)
    (##sys#check-port port loc)
    ;; repeated closing is ignored
    (unless (##sys#slot port 8)		; closed?
      ((##sys#slot (##sys#slot port 2) 4) port) ; close
      (##sys#setislot port 8 #t) )
    (##core#undefined) )

  (set! open-input-file (lambda (name . mode) (open name #t mode 'open-input-file)))
  (set! open-output-file (lambda (name . mode) (open name #f mode 'open-output-file)))
  (set! close-input-port (lambda (port) (close port 'close-input-port)))
  (set! close-output-port (lambda (port) (close port 'close-output-port))) )

(define call-with-input-file
  (let ([open-input-file open-input-file]
	[close-input-port close-input-port] )
    (lambda (name p . mode)
      (let ([f (apply open-input-file name mode)])
	(##sys#call-with-values
	 (lambda () (p f))
	 (lambda results
	   (close-input-port f)
	   (apply ##sys#values results) ) ) ) ) ) )

(define call-with-output-file
  (let ([open-output-file open-output-file]
	[close-output-port close-output-port] )
    (lambda (name p . mode)
      (let ([f (apply open-output-file name mode)])
	(##sys#call-with-values
	 (lambda () (p f))
	 (lambda results
	   (close-output-port f)
	   (apply ##sys#values results) ) ) ) ) ) )

(define with-input-from-file 
  (let ((open-input-file open-input-file)
	(close-input-port close-input-port) )
    (lambda (str thunk . mode)
      (let ((file (apply open-input-file str mode)))
	(fluid-let ((##sys#standard-input file))
	  (##sys#call-with-values thunk
	    (lambda results
	      (close-input-port file)
	      (apply ##sys#values results) ) ) ) ) ) ) )

(define with-output-to-file 
  (let ((open-output-file open-output-file)
	(close-output-port close-output-port) ) 
    (lambda (str thunk . mode)
      (let ((file (apply open-output-file str mode)))
	(fluid-let ((##sys#standard-output file))
	  (##sys#call-with-values thunk
	    (lambda results
	      (close-output-port file)
	      (apply ##sys#values results) ) ) ) ) ) ) )

(define (##sys#file-exists? name file? dir? loc)
  (case (##core#inline "C_i_file_exists_p" (##sys#make-c-string name loc) file? dir?)
    ((#f) #f)
    ((#t) #t)
    (else 
     (##sys#signal-hook 
      #:file-error loc "system error while trying to access file" 
      name))))

(define (file-exists? name)
  (##sys#check-string name 'file-exists?)
  (##sys#pathname-resolution
    name
    (lambda (name)
      (and (##sys#file-exists? 
	    (##sys#platform-fixup-pathname name) 
	    #f #f 'file-exists?) 
	   name) )
    #:exists?) )

(define (directory-exists? name)
  (##sys#check-string name 'directory-exists?)
  (##sys#pathname-resolution
   name
   (lambda (name)
     (and (##sys#file-exists?
	   (##sys#platform-fixup-pathname name)
	   #f #t 'directory-exists?)
	  name) )
   #:exists?) )

(define (##sys#flush-output port)
  ((##sys#slot (##sys#slot port 2) 5) port) ; flush-output
  (##core#undefined) )

(define (flush-output #!optional (port ##sys#standard-output))
  (##sys#check-output-port port #t 'flush-output)
  (##sys#flush-output port) )

(define (port-name #!optional (port ##sys#standard-input))
  (##sys#check-port port 'port-name)
  (##sys#slot port 3) )

(define (set-port-name! port name)
  (##sys#check-port port 'set-port-name!)
  (##sys#check-string name 'set-port-name!)
  (##sys#setslot port 3 name) )

(define (##sys#port-line port)
  (and (##sys#slot port 1) 
       (##sys#slot port 4) ) )

(define (port-position #!optional (port ##sys#standard-input))
  (##sys#check-port port 'port-position)
  (if (##sys#slot port 1) 
      (##sys#values (##sys#slot port 4) (##sys#slot port 5))
      (##sys#error 'port-position "cannot compute position of port" port) ) )

(define (delete-file filename)
  (##sys#check-string filename 'delete-file)
  (##sys#pathname-resolution
   filename
   (lambda (filename)
     (unless (eq? 0 (##core#inline "C_delete_file" (##sys#make-c-string filename 'delete-file)))
       (##sys#update-errno)
       (##sys#signal-hook
	#:file-error 'delete-file
	(##sys#string-append "cannot delete file - " strerror) filename) )
     filename)
   #:delete) )

(define (rename-file old new)
  (##sys#check-string old 'rename-file)
  (##sys#check-string new 'rename-file)
  (##sys#pathname-resolution
   old
   (lambda (old)
     (##sys#pathname-resolution
      new
      (lambda (new)
	(unless (eq? 0 (##core#inline "C_rename_file" (##sys#make-c-string old 'rename-file) (##sys#make-c-string new)))
	  (##sys#update-errno)
	  (##sys#signal-hook
	   #:file-error 'rename-file
	   (##sys#string-append "cannot rename file - " strerror) old new) )
	new)))
   #:rename new) )


;;; Decorate procedure with arbitrary data
;
; warning: may modify proc, if it already has a suitable decoration!

(define (##sys#decorate-lambda proc pred decorator)
  (let ((len (##sys#size proc)))
    (let loop ((i (fx- len 1)))
      (cond ((zero? i)
	     (let ((p2 (make-vector (fx+ len 1))))
	       (do ((i 1 (fx+ i 1)))
		   ((fx>= i len)
		    (##core#inline "C_vector_to_closure" p2)
		    (##core#inline "C_copy_pointer" proc p2)
		    (decorator p2 i) )
		 (##sys#setslot p2 i (##sys#slot proc i)) ) ) )
	    (else
	     (let ((x (##sys#slot proc i)))
	       (if (pred x)
		   (decorator proc i)
		   (loop (fx- i 1)) ) ) ) ) ) ) )

(define (##sys#lambda-decoration proc pred)
  (let loop ((i (fx- (##sys#size proc) 1)))
    (and (fx> i 0)
	 (let ((x (##sys#slot proc i)))
	   (if (pred x)
	       x
	       (loop (fx- i 1)) ) ) ) ) )


;;; Create lambda-info object

(define (##sys#make-lambda-info str)
  (let* ((sz (##sys#size str))
	 (info (##sys#make-string sz)) )
    (##core#inline "C_copy_memory" info str sz)
    (##core#inline "C_string_to_lambdainfo" info)
    info) )


;;; Function debug info:

(define (##sys#lambda-info? x)
  (and (not (##sys#immediate? x)) (##core#inline "C_lambdainfop" x)))

(define (##sys#lambda-info proc)
  (##sys#lambda-decoration proc ##sys#lambda-info?))

(define (##sys#lambda-info->string info)
  (let* ((sz (##sys#size info))
	 (s (##sys#make-string sz)) )
    (##core#inline "C_copy_memory" s info sz)
    s) )

(define procedure-information
  (lambda (x)
    (##sys#check-closure x 'procedure-information)
    (and-let* ((info (##sys#lambda-info x)))
      (##sys#read (open-input-string (##sys#lambda-info->string info)) #f) ) ) )


;;; SRFI-17

(define setter-tag (vector 'setter))

(define-inline (setter? x) 
  (and (pair? x) (eq? setter-tag (##sys#slot x 0))) )

(define ##sys#setter
  (##sys#decorate-lambda 
   (lambda (proc)
     (or (and-let* (((procedure? proc))
		    (d (##sys#lambda-decoration proc setter?)) )
	   (##sys#slot d 1) )
	 (##sys#error 'setter "no setter defined" proc) ) )
   setter?
   (lambda (proc i)
     (##sys#setslot 
      proc i
      (cons 
       setter-tag
       (lambda (get set)
	 (if (procedure? get)
	     (let ((get2 (##sys#decorate-lambda
			  get
			  setter?
			  (lambda (proc i) (##sys#setslot proc i (cons setter-tag set)) proc))))
	       (if (eq? get get2)
		   get
		   (##sys#become! (list (cons get get2))) ) )
	     (error "can't set setter of non-procedure" get) ) ) ) )
     proc) ) )

(define setter ##sys#setter)

(define (getter-with-setter get set #!optional info)
  (##sys#check-closure get 'getter-with-setter)
  (##sys#check-closure set 'getter-with-setter)
  (let ((getdec (cond (info
		       (##sys#check-string info 'getter-with-setter)
		       (##sys#make-lambda-info info))
		      (else (##sys#lambda-info get))))
	(p1 (##sys#decorate-lambda
	     (##sys#copy-closure get)
	     setter?
	     (lambda (proc i)
	       (##sys#setslot proc i (cons setter-tag set))
	       proc) )))
    (if getdec
	(##sys#decorate-lambda
	 p1
	 ##sys#lambda-info?
	 (lambda (p i)
	   (##sys#setslot p i getdec)
	   p))
	p1)))

(set! car (getter-with-setter car set-car! "(car p)"))
(set! cdr (getter-with-setter cdr set-cdr! "(cdr p)"))
(set! caar (getter-with-setter caar (lambda (x y) (set-car! (car x) y)) "(caar p)"))
(set! cadr (getter-with-setter cadr (lambda (x y) (set-car! (cdr x) y)) "(cadr p)"))
(set! cdar (getter-with-setter cdar (lambda (x y) (set-cdr! (car x) y)) "(cdar p)"))
(set! cddr (getter-with-setter cddr (lambda (x y) (set-cdr! (cdr x) y)) "(cddr p)"))
(set! caaar (getter-with-setter caaar (lambda (x y) (set-car! (caar x) y)) "(caaar p)"))
(set! caadr (getter-with-setter caadr (lambda (x y) (set-car! (cadr x) y)) "(caadr p)"))
(set! cadar (getter-with-setter cadar (lambda (x y) (set-car! (cdar x) y)) "(cadar p)"))
(set! caddr (getter-with-setter caddr (lambda (x y) (set-car! (cddr x) y)) "(caddr p)"))
(set! cdaar (getter-with-setter cdaar (lambda (x y) (set-cdr! (caar x) y)) "(cdaar p)"))
(set! cdadr (getter-with-setter cdadr (lambda (x y) (set-cdr! (cadr x) y)) "(cdadr p)"))
(set! cddar (getter-with-setter cddar (lambda (x y) (set-cdr! (cdar x) y)) "(cddar p)"))
(set! cdddr (getter-with-setter cdddr (lambda (x y) (set-cdr! (cddr x) y)) "(cdddr p)"))
(set! string-ref (getter-with-setter string-ref string-set! "(string-ref str i)"))
(set! vector-ref (getter-with-setter vector-ref vector-set! "(vector-ref vec i)"))

(set! list-ref 
  (getter-with-setter 
   list-ref
   (lambda (x i y) (set-car! (list-tail x i) y))
   "(list-ref lst i)"))


;;; Parameters:

(define ##sys#default-parameter-vector (##sys#make-vector default-parameter-vector-size))
(define ##sys#current-parameter-vector '#())

(define make-parameter
  (let ((count 0))
    (lambda (init #!optional (guard (lambda (x) x)))
      (let ((val (guard init))
	    (i count))
	(set! count (fx+ count 1))
	(when (fx>= i (##sys#size ##sys#default-parameter-vector))
	  (set! ##sys#default-parameter-vector 
	    (##sys#vector-resize
	     ##sys#default-parameter-vector
	     (fx+ i 1)
	     (##core#undefined)) ) )
	(##sys#setslot ##sys#default-parameter-vector i val)
	(let ((assign 
	       (lambda (val n mode)
		 (when (fx>= i n)
		   (set! ##sys#current-parameter-vector
		     (##sys#vector-resize
		      ##sys#current-parameter-vector
		      (fx+ i 1)
		      ##sys#snafu) ) )
		 (let ((val (if mode val (guard val))))
		   (##sys#setslot ##sys#current-parameter-vector i val)
		   val))))
	  (getter-with-setter
	   (lambda args
	     (let ((n (##sys#size ##sys#current-parameter-vector)))
	       (cond ((pair? args)
		      (assign (car args) n (optional (cdr args) #f)))
		     ((fx>= i n)
		      (##sys#slot ##sys#default-parameter-vector i) )
		     (else
		      (let ((val (##sys#slot ##sys#current-parameter-vector i)))
			(if (eq? val ##sys#snafu)
			    (##sys#slot ##sys#default-parameter-vector i) 
			    val) ) ) ) ) )
	   (lambda (val)
	     (let ((n (##sys#size ##sys#current-parameter-vector)))
	       (assign val n #f)))))))))
  

;;; Input:

(define (eof-object? x) (##core#inline "C_eofp" x))

(define (char-ready? #!optional (port ##sys#standard-input))
  (##sys#check-input-port port #t 'char-ready?)
  ((##sys#slot (##sys#slot port 2) 6) port) ) ; char-ready?

(define (read-char #!optional (port ##sys#standard-input))
  (##sys#read-char/port port) )

(define (##sys#read-char-0 p)
  (let ([c (if (##sys#slot p 6)
	       (begin
		 (##sys#setislot p 6 #f)
		 #!eof)
	       ((##sys#slot (##sys#slot p 2) 0) p) ) ] ) ; read-char
    (cond [(eq? c #\newline)
	   (##sys#setislot p 4 (fx+ (##sys#slot p 4) 1))
	   (##sys#setislot p 5 0) ]
	  [(not (##core#inline "C_eofp" c))
	   (##sys#setislot p 5 (fx+ (##sys#slot p 5) 1)) ] )
    c) )

(define (##sys#read-char/port port)
  (##sys#check-input-port port #t 'read-char)
  (##sys#read-char-0 port) )

(define (##sys#peek-char-0 p)
  (if (##sys#slot p 6)
      #!eof
      (let ([c ((##sys#slot (##sys#slot p 2) 1) p)]) ; peek-char
	(when (##core#inline "C_eofp" c)
	  (##sys#setislot p 6 #t) )
	c) ) )

(define (peek-char #!optional (port ##sys#standard-input))
  (##sys#check-input-port port #t 'peek-char)
  (##sys#peek-char-0 port) )

(define (read #!optional (port ##sys#standard-input))
  (##sys#check-input-port port #t 'read)
  (##sys#read port ##sys#default-read-info-hook) )

(define ##sys#default-read-info-hook #f)
(define ##sys#read-error-with-line-number #f)
(define ##sys#enable-qualifiers #t)
(define (##sys#read-prompt-hook) #f)	; just here so that srfi-18 works without eval
(define (##sys#infix-list-hook lst) lst)

(define (##sys#sharp-number-hook port n)
  (##sys#read-error port "invalid `#...' read syntax" n) )

(define case-sensitive (make-parameter #t))
(define keyword-style (make-parameter #:suffix))
(define parentheses-synonyms (make-parameter #t))
(define symbol-escape (make-parameter #t))
(define current-read-table (make-parameter (##sys#make-structure 'read-table #f #f #f)))

(define ##sys#read-warning
  (let ([string-append string-append])
    (lambda (port msg . args)
      (apply
       ##sys#warn
       (let ((ln (##sys#port-line port)))
	 (if (and ##sys#read-error-with-line-number ln)
	     (string-append "(line " (##sys#number->string ln) ") " msg)
	     msg) )
       args) ) ) )

(define ##sys#read-error
  (let ([string-append string-append] )
    (lambda (port msg . args)
      (apply
       ##sys#signal-hook
       #:syntax-error
       (let ((ln (##sys#port-line port)))
	 (if (and ##sys#read-error-with-line-number ln)
	     (string-append "(line " (##sys#number->string ln) ") " msg)
	     msg) )
       args) ) ) )

(define ##sys#read
  (let ((string-append string-append)
	(keyword-style keyword-style)
	(case-sensitive case-sensitive)
	(parentheses-synonyms parentheses-synonyms)
	(symbol-escape symbol-escape)
	(current-read-table current-read-table)
	(kwprefix (string (integer->char 0))))
    (lambda (port infohandler)
      (let ([csp (case-sensitive)]
	    [ksp (keyword-style)]
	    [psp (parentheses-synonyms)]
	    [sep (symbol-escape)]
	    [crt (current-read-table)]
	    [rat-flag #f]
	    ; set below - needs more state to make a decision
	    (terminating-characters '(#\, #\; #\( #\) #\' #\" #\[ #\] #\{ #\}))
	    [reserved-characters #f] )

	(define (container c)
	  (##sys#read-error port "unexpected list terminator" c) )

	(define (info class data val)
	  (if infohandler
	      (infohandler class data val)
	      data) )

	(define (skip-to-eol)
	  (let skip ((c (##sys#read-char-0 port)))
	    (if (and (not (##core#inline "C_eofp" c)) (not (eq? #\newline c)))
		(skip (##sys#read-char-0 port)) ) ) )

        (define (reserved-character c)
          (##sys#read-char-0 port)
          (##sys#read-error port "reserved character" c) )

        (define (read-unreserved-char-0 port)
          (let ((c (##sys#read-char-0 port)))
            (if (memq c reserved-characters)
                (reserved-character c)
                c) ) )

	(define (readrec)

	  (define (r-spaces)
	    (let loop ([c (##sys#peek-char-0 port)])
	      (cond ((##core#inline "C_eofp" c))
		    ((eq? #\; c) 
		     (skip-to-eol)
		     (loop (##sys#peek-char-0 port)) )
		    ((char-whitespace? c)
		     (##sys#read-char-0 port)
		     (loop (##sys#peek-char-0 port)) ) ) ) )

	  (define (r-usequence u n base)
	    (let loop ((seq '()) (n n))
	      (if (eq? n 0)
		  (let* ((str (##sys#reverse-list->string seq))
			 (n (string->number str base)))
		    (or n
			(##sys#read-error
			 port
			 (string-append
			  "invalid escape-sequence '\\" u str "\'")) ) )
		  (let ((x (##sys#read-char-0 port)))
		    (if (or (eof-object? x) (char=? #\" x))
			(##sys#read-error port "unterminated string constant") 
			(loop (cons x seq) (fx- n 1)) ) ) ) ) )

	  (define (r-cons-codepoint cp lst)
	    (let* ((s (##sys#char->utf8-string (integer->char cp)))
		   (len (##sys#size s)))
	      (let lp ((i 0) (lst lst))
		(if (fx>= i len)
		  lst
		  (lp (fx+ i 1) (cons (##core#inline "C_subchar" s i) lst))))))

	  (define (r-string term)
	    (let loop ((c (##sys#read-char-0 port)) (lst '()))
	      (cond ((##core#inline "C_eofp" c) 
		     (##sys#read-error port "unterminated string") )
		    ((eq? #\\ c)
		     (set! c (##sys#read-char-0 port))
		     (case c
		       ((#\t) (loop (##sys#read-char-0 port) (cons #\tab lst)))
		       ((#\r) (loop (##sys#read-char-0 port) (cons #\return lst)))
		       ((#\b) (loop (##sys#read-char-0 port) (cons #\backspace lst)))
		       ((#\n) (loop (##sys#read-char-0 port) (cons #\newline lst)))
		       ((#\a) (loop (##sys#read-char-0 port) (cons (integer->char 7) lst)))
		       ((#\v) (loop (##sys#read-char-0 port) (cons (integer->char 11) lst)))
		       ((#\f) (loop (##sys#read-char-0 port) (cons (integer->char 12) lst)))
		       ((#\x) 
			(let ([ch (integer->char (r-usequence "x" 2 16))])
			  (loop (##sys#read-char-0 port) (cons ch lst)) ) )
		       ((#\u)
			(let ([n (r-usequence "u" 4 16)])
			  (if (##sys#unicode-surrogate? n)
			      (if (and (eqv? #\\ (##sys#read-char-0 port))
				       (eqv? #\u (##sys#read-char-0 port)))
				  (let* ((m (r-usequence "u" 4 16))
					 (cp (##sys#surrogates->codepoint n m)))
				    (if cp
					(loop (##sys#read-char-0 port)
					      (r-cons-codepoint cp lst))
					(##sys#read-error port "bad surrogate pair" n m)))
				  (##sys#read-error port "unpaired escaped surrogate" n))
			      (loop (##sys#read-char-0 port) (r-cons-codepoint n lst)) ) ))
		       ((#\U)
			(let ([n (r-usequence "U" 8 16)])
			  (if (##sys#unicode-surrogate? n)
			      (##sys#read-error port "invalid escape (surrogate)" n)
			      (loop (##sys#read-char-0 port) (r-cons-codepoint n lst)) )))
		       ((#\\ #\' #\" #\|)
			(loop (##sys#read-char-0 port) (cons c lst)))
		       ((#\newline #\return #\space #\tab)
			;; Read "escaped" <intraline ws>* <nl> <intraline ws>*
			(let eat-ws ((c c) (nl? #f))
			  (case c
			    ((#\space #\tab)
			     (eat-ws (##sys#read-char-0 port) nl?))
			    ((#\return)
			     (if nl?
				 (loop c lst)
			         (let ((nc (##sys#read-char-0 port)))
			           (if (eq? nc #\newline) ; collapse \r\n
				       (eat-ws (##sys#read-char-0 port) #t)
				       (eat-ws nc #t)))))
			    ((#\newline)
			     (if nl?
				 (loop c lst)
				 (eat-ws (##sys#read-char-0 port) #t)))
			    (else
                             (unless nl?
                               (##sys#read-warning 
				port 
				"escaped whitespace, but no newline - collapsing anyway"))
                             (loop c lst)))))
		       (else
			(cond ((##core#inline "C_eofp" c)
			       (##sys#read-error port "unterminated string"))
			      ((and (char-numeric? c)
				    (char>=? c #\0)
				    (char<=? c #\7))
			       (let ((ch (integer->char 
					  (fx+ (fx* (fx- (char->integer c) 48) 64)
					       (r-usequence "" 2 8)))))
				 (loop (##sys#read-char-0 port) (cons ch lst)) ))
			      (else
			       (##sys#read-warning 
				port 
				"undefined escape sequence in string - probably forgot backslash"
				c)
			       (loop (##sys#read-char-0 port) (cons c lst))) ) )))
		    ((eq? term c) (##sys#reverse-list->string lst))
		    (else (loop (##sys#read-char-0 port) (cons c lst))) ) ))
		    
	  (define (r-list start end)
	    (if (eq? (##sys#read-char-0 port) start)
		(let ((first #f)
		      (ln0 #f)
		      (outer-container container) )
		  (define (starting-line msg)
		    (if (and ln0 ##sys#read-error-with-line-number)
			(string-append 
			 msg ", starting in line "
			 (##sys#number->string ln0))
			msg))
		  (##sys#call-with-current-continuation
		   (lambda (return)
		     (set! container
		       (lambda (c)
			 (if (eq? c end)
			     (return #f)
			     (##sys#read-error
			      port
			      (starting-line "list-terminator mismatch")
			      c end) ) ) )
		     (let loop ([last '()])
		       (r-spaces)
		       (unless first (set! ln0 (##sys#port-line port)))
		       (let ([c (##sys#peek-char-0 port)])
			 (cond ((##core#inline "C_eofp" c)
				(##sys#read-error 
				 port
				 (starting-line "unterminated list") ) )
			       ((eq? c end)
				(##sys#read-char-0 port) )
			       ((eq? c #\.)
				(##sys#read-char-0 port)
				(let ([c2 (##sys#peek-char-0 port)])
				  (cond [(or (char-whitespace? c2)
					     (eq? c2 #\()
					     (eq? c2 #\))
					     (eq? c2 #\")
					     (eq? c2 #\;) )
					 (unless (pair? last)
					   (##sys#read-error port "invalid use of `.'") )
					 (r-spaces)
					 (##sys#setslot last 1 (readrec))
					 (r-spaces)
					 (unless (eq? (##sys#read-char-0 port) end)
					   (##sys#read-error
					    port
					    (starting-line "missing list terminator")
					    end) ) ]
					[else
					 (r-xtoken
					  (lambda (tok kw)
					    (let* ((tok (##sys#string-append "." tok))
						   (val
						    (if kw
							(build-keyword tok)
							(or (and (char-numeric? c2) 
								 (##sys#string->number tok))
							    (build-symbol tok))))
						   (node (cons val '())) )
					      (if first 
						  (##sys#setslot last 1 node)
						  (set! first node) )
					      (loop node) ))) ] ) ) )
			       (else
				(let ([node (cons (readrec) '())])
				  (if first
				      (##sys#setslot last 1 node)
				      (set! first node) )
				  (loop node) ) ) ) ) ) ) )
		  (set! container outer-container)
		  (if first
		      (info 'list-info (##sys#infix-list-hook first) ln0)
		      '() ) )
		(##sys#read-error port "missing token" start) ) )
	  
	  (define (r-vector)
	    (let ((lst (r-list #\( #\))))
	      (if (list? lst)
		  (##sys#list->vector lst)
		  (##sys#read-error port "invalid vector syntax" lst) ) ) )
	  
	  (define (r-number radix exactness)
	    (set! rat-flag #f)
	    (r-xtoken
	     (lambda (tok kw)
	       (cond (kw
		      (let ((s (build-keyword tok)))
			(info 'symbol-info s (##sys#port-line port)) ))
		     ((string=? tok ".")
		      (##sys#read-error port "invalid use of `.'"))
		     ((and (fx> (##sys#size tok) 0) (char=? (string-ref tok 0) #\#))
		      (##sys#read-error port "unexpected prefix in number syntax" tok))
		     (else
		      (let ((val (##sys#string->number tok (or radix 10) exactness)) )
			(cond (val
			       (when (and (##sys#inexact? val) (not (eq? exactness 'i)) rat-flag)
				 (##sys#read-warning
				  port
				  "cannot represent exact fraction - coerced to flonum" tok) )
			       val)
			      (radix (##sys#read-error port "illegal number syntax" tok))
			      (else (build-symbol tok)) ) ) ) ) ) ))

	  (define (r-number-with-exactness radix)
	    (cond [(eq? #\# (##sys#peek-char-0 port))
		   (##sys#read-char-0 port)
		   (let ([c2 (##sys#read-char-0 port)])
		     (cond [(eof-object? c2) 
			    (##sys#read-error port "unexpected end of numeric literal")]
			   [(char=? c2 #\i) (r-number radix 'i)]
			   [(char=? c2 #\e) (r-number radix 'e)]
			   [else
			    (##sys#read-error
			     port
			     "illegal number syntax - invalid exactness prefix" c2)] ) ) ]
		  [else (r-number radix #f)] ) )
	  
	  (define (r-number-with-radix exactness)
	    (cond [(eq? #\# (##sys#peek-char-0 port))
		   (##sys#read-char-0 port)
		   (let ([c2 (##sys#read-char-0 port)])
		     (cond [(eof-object? c2) (##sys#read-error port "unexpected end of numeric literal")]
			   [(char=? c2 #\x) (r-number 16 exactness)]
			   [(char=? c2 #\d) (r-number 10 exactness)]
			   [(char=? c2 #\o) (r-number 8 exactness)]
			   [(char=? c2 #\b) (r-number 2 exactness)]
			   [else (##sys#read-error port "illegal number syntax - invalid radix" c2)] ) ) ]
		  [else (r-number 10 exactness)] ) )
	
	  (define (r-token)
	    (let loop ((c (##sys#peek-char-0 port)) (lst '()))
	      (cond ((or (eof-object? c)
			 (char-whitespace? c)
			 (memq c terminating-characters) )
		     (##sys#reverse-list->string lst) )
		    ((char=? c #\x00)
		     (##sys#read-error port "attempt to read expression from something that looks like binary data"))
		    (else
		     (when (char=? c #\/) (set! rat-flag #t))
		     (read-unreserved-char-0 port)
		     (loop (##sys#peek-char-0 port) 
		           (cons (if csp c (char-downcase c)) lst) ) ) ) ) )

	  (define (r-digits)
	    (let loop ((c (##sys#peek-char-0 port)) (lst '()))
	      (cond ((or (eof-object? c) (not (char-numeric? c)))
		     (##sys#reverse-list->string lst) )
		    (else
		     (##sys#read-char-0 port)
		     (loop (##sys#peek-char-0 port) (cons c lst)) ) ) ) )

	  (define (r-next-token)
	    (r-spaces)
	    (r-token) )
	  
	  (define (r-symbol)
	    (r-xtoken
	     (lambda (str kw)
	       (let ((s (if kw (build-keyword str) (build-symbol str))))
		 (info 'symbol-info s (##sys#port-line port)) ) )))

	  (define (r-xtoken k)
	    (let ((pkw #f))
	      (let loop ((lst '()) (skw #f))
		(let ((c (##sys#peek-char-0 port)))
		  (cond ((or (eof-object? c) 
			     (char-whitespace? c)
			     (memq c terminating-characters))
			 (if (and skw (eq? ksp #:suffix))
			     (k (##sys#reverse-list->string (cdr lst)) #t)
			     (k (##sys#reverse-list->string lst) pkw)))
                        ((memq c reserved-characters)
			  (reserved-character c))
			(else
			 (let ((c (##sys#read-char-0 port)))
			   (case c
			     ((#\|) 
			      (let ((part (r-string #\|)))
				(loop (append (##sys#fast-reverse (##sys#string->list part)) lst)
				      #f)))
			     ((#\newline)
			      (##sys#read-warning
			       port "escaped symbol syntax spans multiple lines"
			       (##sys#reverse-list->string lst))
			      (loop (cons #\newline lst) #f))
			     ((#\:)
			      (cond ((and (null? lst) (eq? ksp #:prefix))
				     (set! pkw #t)
				     (loop '() #f))
				    (else (loop (cons #\: lst) #t))))
			     ((#\\)
			      (let ((c (##sys#read-char-0 port)))
				(if (eof-object? c)
				    (##sys#read-error
				     port
				     "unexpected end of file while reading escaped character")
				    (loop (cons c lst) #f))))
			     (else 
			      (loop 
			       (cons (if csp c (char-downcase c)) lst)
			       #f))))))))))
	  
	  (define (r-char)
	    ;; Code contributed by Alex Shinn
	    (let* ([c (##sys#peek-char-0 port)]
		   [tk (r-token)]
		   [len (##sys#size tk)])
	      (cond [(fx> len 1)
		     (cond [(and (or (char=? #\x c) (char=? #\u c) (char=? #\U c))
				 (##sys#string->number (##sys#substring tk 1 len) 16) )
			    => (lambda (n) (integer->char n)) ]
			   [(and-let* ((c0 (char->integer (##core#inline "C_subchar" tk 0)))
				       ((fx<= #xC0 c0)) ((fx<= c0 #xF7))
				       (n0 (fxand (fxshr c0 4) 3))
				       (n (fx+ 2 (fxand (fxior n0 (fxshr n0 1)) (fx- n0 1))))
				       ((fx= len n))
				       (res (fx+ (fxshl (fxand c0 (fx- (fxshl 1 (fx- 8 n)) 1))
							6)
						 (fxand (char->integer 
							 (##core#inline "C_subchar" tk 1)) 
							#b111111))))
			      (cond ((fx>= n 3)
				     (set! res (fx+ (fxshl res 6)
						    (fxand 
						     (char->integer
						      (##core#inline "C_subchar" tk 2)) 
						     #b111111)))
				     (if (fx= n 4)
					 (set! res (fx+ (fxshl res 6)
							(fxand (char->integer
								(##core#inline "C_subchar" tk 3)) 
							       #b111111))))))
			      (integer->char res))]
			   [(char-name (##sys#intern-symbol tk))]
			   [else (##sys#read-error port "unknown named character" tk)] ) ]
		    [(memq c terminating-characters) (##sys#read-char-0 port)]
		    [else c] ) ) )

	  (define (r-comment)
	    (let loop ((i 0))
	      (let ((c (##sys#read-char-0 port)))
		(case c
		  ((#\|) (if (eq? #\# (##sys#read-char-0 port))
			     (if (not (eq? i 0))
				 (loop (fx- i 1)) )
			     (loop i) ) )
		  ((#\#) (loop (if (eq? #\| (##sys#read-char-0 port))
				   (fx+ i 1)
				   i) ) )
		  (else (if (eof-object? c)
			    (##sys#read-error port "unterminated block-comment")
			    (loop i) ) ) ) ) ) )

	  (define (r-ext-symbol)
	    (let* ([p (##sys#make-string 1)]
		   [tok (r-token)] 
		   [toklen (##sys#size tok)] )
	      (unless ##sys#enable-qualifiers 
		(##sys#read-error port "qualified symbol syntax is not allowed" tok) )
	      (let loop ([i 0])
		(cond [(fx>= i toklen)
		       (##sys#read-error port "invalid qualified symbol syntax" tok) ]
		      [(fx= (##sys#byte tok i) (char->integer #\#))
		       (when (fx> i namespace-max-id-len)
			 (set! tok (##sys#substring tok 0 namespace-max-id-len)) )
		       (##sys#setbyte p 0 i)
		       (##sys#intern-symbol
			(string-append
			 p 
			 (##sys#substring tok 0 i)
			 (##sys#substring tok (fx+ i 1) toklen)) ) ]
		      [else (loop (fx+ i 1))] ) ) ) )

	  (define (build-symbol tok)
	    (##sys#intern-symbol tok) )
	  
	  (define (build-keyword tok)
	    (##sys#intern-symbol
	     (if (eq? 0 (##sys#size tok))
		 ":"
		 (##sys#string-append kwprefix tok)) ))

          ;; now have the state to make a decision.
          (set! reserved-characters
                (append (if (not psp) '(#\[ #\] #\{ #\}) '())
                        (if (not sep) '(#\|) '())))

	  (r-spaces)
	  (let* ((c (##sys#peek-char-0 port))
		 (srst (##sys#slot crt 1))
		 (h (and (not (eof-object? c)) srst
			 (##sys#slot srst (char->integer c)) ) ) )
	    (if h
                ;; then handled by read-table entry
		(##sys#call-with-values
		 (lambda () (h c port))
		 (lambda xs (if (null? xs) (readrec) (car xs))))
		;; otherwise chicken extended r5rs syntax
		(case c
		  ((#\')
		   (##sys#read-char-0 port)
		   (list 'quote (readrec)) )
		  ((#\`)
		   (##sys#read-char-0 port)
		   (list 'quasiquote (readrec)) )
		  ((#\,)
		   (##sys#read-char-0 port)
		   (cond ((eq? (##sys#peek-char-0 port) #\@)
			  (##sys#read-char-0 port)
			  (list 'unquote-splicing (readrec)) )
			 (else (list 'unquote (readrec))) ) )
		  ((#\#)
		   (##sys#read-char-0 port)
		   (let ((dchar (##sys#peek-char-0 port)))
		     (cond
		      ((eof-object? dchar)
		       (##sys#read-error
			port "unexpected end of input after reading #-sign"))
		      ((char-numeric? dchar)
		       (let* ((n (string->number (r-digits)))
			      (dchar2 (##sys#peek-char-0 port))
			      (spdrst (##sys#slot crt 3))
			      (h (and (char? dchar2) spdrst
				      (##sys#slot spdrst (char->integer dchar2)) ) ) )
			 ;; #<num> handled by parameterized # read-table entry?
			 (cond ((eof-object? dchar2)
                                (##sys#read-error
                                 port "unexpected end of input after reading"
                                 c n))
                               (h (##sys#call-with-values
				   (lambda () (h dchar2 port n))
				   (lambda xs (if (null? xs) (readrec) (car xs)))))
                               ;; #<num>?
			       ((or (eq? dchar2 #\)) (char-whitespace? dchar2))
				(##sys#sharp-number-hook port n))
			       (else (##sys#read-char-0 port) ; Consume it first
				     (##sys#read-error
				      port
				      "invalid parameterized read syntax"
				      c n dchar2) ) ) ))
		      (else (let* ((sdrst (##sys#slot crt 2))
				   (h (and sdrst (##sys#slot sdrst (char->integer dchar)) ) ) )
			      (if h
                                  ;; then handled by # read-table entry
				  (##sys#call-with-values
				   (lambda () (h dchar port))
				   (lambda xs (if (null? xs) (readrec) (car xs))))
                                  ;; otherwise chicken extended r5rs syntax
				  (case (char-downcase dchar)
				    ((#\x) (##sys#read-char-0 port) (r-number-with-exactness 16))
				    ((#\d) (##sys#read-char-0 port) (r-number-with-exactness 10))
				    ((#\o) (##sys#read-char-0 port) (r-number-with-exactness 8))
				    ((#\b) (##sys#read-char-0 port) (r-number-with-exactness 2))
				    ((#\i) (##sys#read-char-0 port) (r-number-with-radix 'i))
				    ((#\e) (##sys#read-char-0 port) (r-number-with-radix 'e))
				    ((#\c)
				     (##sys#read-char-0 port)
				     (let ([c (##sys#read-char-0 port)])
				       (fluid-let ([csp
						    (cond [(eof-object? c)
							   (##sys#read-error port "unexpected end of input while reading `#c...' sequence")]
							  [(eq? c #\i) #f]
							  [(eq? c #\s) #t]
							  [else (##sys#read-error port "invalid case specifier in `#c...' sequence" c)] ) ] )
					 (readrec) ) ) )
				    ((#\() (r-vector))
				    ((#\\) (##sys#read-char-0 port) (r-char))
				    ((#\|)
				     (##sys#read-char-0 port)
				     (r-comment) (readrec) )
				    ((#\#)
				     (##sys#read-char-0 port)
				     (r-ext-symbol) )
				    ((#\;)
				     (##sys#read-char-0 port)
				     (readrec) (readrec) )
				    ((#\`)
				     (##sys#read-char-0 port)
				     (list 'quasisyntax (readrec)) )
				    ((#\$)
				     (##sys#read-char-0 port)
				     (let ((c (##sys#peek-char-0 port)))
				       (cond ((char=? c #\{)
					      (##sys#read-char-0 port)
					      (##sys#read-bytevector-literal port))
					     (else (list 'location (readrec)) ))))
				    ((#\:)
				     (##sys#read-char-0 port)
				     (let ((tok (r-token)))
				       (if (eq? 0 (##sys#size tok))
					   (##sys#read-error port "empty keyword")
					   (build-keyword tok))))
				    ((#\%)
				     (build-symbol (##sys#string-append "#" (r-token))) )
				    ((#\+)
				     (##sys#read-char-0 port)
				     (let ((tst (readrec)))
				       (list 'cond-expand (list tst (readrec)) '(else)) ) )
				    ((#\!)
				     (##sys#read-char-0 port)
				     (let ((c (##sys#peek-char-0 port)))
				       (cond ((and (char? c)
						   (or (char-whitespace? c) (char=? #\/ c)))
					      (skip-to-eol)
					      (readrec) )
					     (else
					      (let ([tok (r-token)])
						(cond [(string=? "eof" tok) #!eof]
						      [(member tok '("optional" "rest" "key"))
						       (build-symbol (##sys#string-append "#!" tok)) ]
						      [else
						       (let ((a (assq (string->symbol tok) read-marks)))
							 (if a
							     ((##sys#slot a 1) port)
							     (##sys#read-error
							      port
							      "invalid `#!' token" tok) ) ) ] ) ) ) ) ) )
				    (else
				     (##sys#call-with-values (lambda () (##sys#user-read-hook dchar port))
							     (lambda xs (if (null? xs) (readrec) (car xs)))) ) ) ) )) ) ) )
		  ((#\() (r-list #\( #\)))
		  ((#\)) (##sys#read-char-0 port) (container c))
		  ((#\") (##sys#read-char-0 port) (r-string #\"))
		  ((#\.) (r-number #f #f))
		  ((#\- #\+) (r-number #f #f))
		  (else
		   (cond [(eof-object? c) c]
			 [(char-numeric? c) (r-number #f #f)]
			 ((memq c reserved-characters)
			  (reserved-character c))
			 (else
			  (case c
			    ((#\[) (r-list #\[ #\]))
			    ((#\{) (r-list #\{ #\}))
			    ((#\] #\}) (##sys#read-char-0 port) (container c))
			    (else (r-symbol) ) ) ) ) ) ) ) ) )
	
	(readrec) ) ) ) )


;;; This is taken from Alex Shinn's UTF8 egg:

(define (##sys#char->utf8-string c)
  (let ([i (char->integer c)])
    (cond [(fx<= i #x7F)
           (string c) ]
          [(fx<= i #x7FF)
           (string (integer->char (fxior #b11000000 (fxshr i 6)))
	           (integer->char (fxior #b10000000 (fxand i #b111111)))) ]
          [(fx<= i #xFFFF)
           (string (integer->char (fxior #b11100000 (fxshr i 12)))
	           (integer->char (fxior #b10000000 (fxand (fxshr i 6) #b111111)))
	           (integer->char (fxior #b10000000 (fxand i #b111111)))) ]
          [(fx<= i #x1FFFFF)
           (string (integer->char (fxior #b11110000 (fxshr i 18)))
	           (integer->char (fxior #b10000000 (fxand (fxshr i 12) #b111111)))
	           (integer->char (fxior #b10000000 (fxand (fxshr i 6) #b111111)))
	           (integer->char (fxior #b10000000 (fxand i #b111111)))) ]
          [else
           (error "UTF-8 codepoint out of range:" i) ] ) ) )

(define (##sys#unicode-surrogate? n)
  (and (fx<= #xD800 n) (fx<= n #xDFFF)) )

;; returns #f if the inputs are not a valid surrogate pair (hi followed by lo)
(define (##sys#surrogates->codepoint hi lo)
  (and (fx<= #xD800 hi) (fx<= hi #xDBFF)
       (fx<= #xDC00 lo) (fx<= lo #xDFFF)
       (fxior (fxshl (fx+ 1 (fxand (fxshr hi 6) #b11111)) 16)
	      (fxior (fxshl (fxand hi #b111111) 10)
		     (fxand lo #b1111111111)))) )

(define (##sys#read-bytevector-literal port)
  (define (hex c)
    (let ((c (char-downcase c)))
      (cond ((and (char>=? c #\a) (char<=? c #\f))
	     (fx- (char->integer c) 87)	) ; - #\a + 10
	    ((and (char>=? c #\0) (char<=? c #\9))
	     (fx- (char->integer c) 48))
	    (else (##sys#read-error port "invalid hex-code in blob-literal")))))
  (let loop ((lst '()) (h #f))
    (let ((c (##sys#read-char-0 port)))
      (cond ((eof-object? c)
	     (##sys#read-error port "unexpected end of blob literal"))
	    ((char=? #\} c)
	     (let ((str (##sys#reverse-list->string
			 (if h
			     (cons (integer->char (fxshr h 4)) lst)
			     lst))))
	       (##core#inline "C_string_to_bytevector" str)
	       str))
	    ((char-whitespace? c) 
	     (if h
		 (loop (cons (integer->char (fxshr h 4)) lst) #f)
		 (loop lst h)))
	    (h (loop (cons (integer->char (fxior h (hex c))) lst) #f))
	    (else (loop lst (fxshl (hex c) 4)))))))
	      

;;; Hooks for user-defined read-syntax:
;
; - Redefine this to handle new read-syntaxes. If 'char' doesn't match
;   your character then call the previous handler.
; - Don't forget to read 'char', it's only peeked at this point.

(define (##sys#user-read-hook char port)
  (case char
    ;; I put it here, so the SRFI-4 unit can intercept '#f...'
    ((#\f #\F) (##sys#read-char-0 port) #f)
    ((#\t #\T) (##sys#read-char-0 port) #t)
    (else (##sys#read-error port "invalid sharp-sign read syntax" char) ) ) )


;;; Table for specially handled read-syntax:
;
; - should be either #f or a 256-element vector containing procedures
; - the procedure is called with two arguments, a char (peeked) and a port and should return an expression

(define read-marks '())

(define (##sys#set-read-mark! sym proc)
  (let ((a (assq sym read-marks)))
    (if a
	(##sys#setslot a 1 proc)
	(set! read-marks (cons (cons sym proc) read-marks)) ) ) )

(define set-read-syntax!)
(define set-sharp-read-syntax!)
(define set-parameterized-read-syntax!)

(let ((crt current-read-table))
 
 (define ((syntax-setter loc slot wrap) chr proc)
    (cond ((symbol? chr) (##sys#set-read-mark! chr proc))
	  (else
	   (let ((crt (crt)))
	     (unless (##sys#slot crt slot)
	       (##sys#setslot crt slot (##sys#make-vector 256 #f)) )
	     (##sys#check-char chr loc)
	     (let ((i (char->integer chr)))
	       (##sys#check-range i 0 256 loc)
              (cond (proc
                     (##sys#check-closure proc loc)
                     (##sys#setslot (##sys#slot crt slot) i (wrap proc)))
                    (else
                     (##sys#setslot (##sys#slot crt slot) i #f))))))))
 
  (set! set-read-syntax!
    (syntax-setter
     'set-read-syntax! 1 
     (lambda (proc)
       (lambda (_ port) 
	 (##sys#read-char-0 port)
	 (proc port) ) ) ) )

  (set! set-sharp-read-syntax!
    (syntax-setter
     'set-sharp-read-syntax! 2
     (lambda (proc)
       (lambda (_ port) 
	 (##sys#read-char-0 port)
	 (proc port) ) ) ) )

  (set! set-parameterized-read-syntax!
    (syntax-setter
     'set-parameterized-read-syntax! 3
     (lambda (proc)
       (lambda (_ port num)
	 (##sys#read-char-0 port)
	 (proc port num) ) ) ) ) )


;;; Read-table operations:

(define (copy-read-table rt)
  (##sys#check-structure rt 'read-table 'copy-read-table)
  (##sys#make-structure 
   'read-table
   (let ((t1 (##sys#slot rt 1)))
     (and t1 (##sys#vector-resize t1 (##sys#size t1) #f) ) )
   (let ((t2 (##sys#slot rt 2)))
     (and t2 (##sys#vector-resize t2 (##sys#size t2) #f) ) )
   (let ((t3 (##sys#slot rt 3)))
     (and t3 (##sys#vector-resize t3 (##sys#size t3) #f) ) ) ))


;;; Output:

(define (##sys#write-char-0 c p)
  ((##sys#slot (##sys#slot p 2) 2) p c) 
  (##sys#void))

(define (##sys#write-char/port c port)
  (##sys#check-output-port port #t 'write-char)
  (##sys#check-char c 'write-char)
  (##sys#write-char-0 c port) )

(define (write-char c #!optional (port ##sys#standard-output))
  (##sys#check-char c 'write-char)
  (##sys#check-output-port port #t 'write-char)
  (##sys#write-char-0 c port) )

(define (newline #!optional (port ##sys#standard-output))
  (##sys#write-char/port #\newline port) )

(define (write x #!optional (port ##sys#standard-output))
  (##sys#check-output-port port #t 'write)
  (##sys#print x #t port) )

(define (display x #!optional (port ##sys#standard-output))
  (##sys#check-output-port port #t 'display)
  (##sys#print x #f port) )

(define-inline (*print-each lst)
  (for-each (cut ##sys#print <> #f ##sys#standard-output) lst) )
 
(define (print . args)
  (##sys#check-output-port ##sys#standard-output #t 'print)
  (*print-each args)
  (##sys#write-char-0 #\newline ##sys#standard-output) 
  (void) )

(define (print* . args)
  (##sys#check-output-port ##sys#standard-output #t 'print)
  (*print-each args)
  (##sys#flush-output ##sys#standard-output)
  (void) )

(define current-print-length (make-parameter 0))
(define ##sys#print-length-limit (make-parameter #f))
(define ##sys#print-exit (make-parameter #f))

(define ##sys#print
  (let ((string-append string-append)
	(case-sensitive case-sensitive)
	(keyword-style keyword-style))
    (lambda (x readable port)
      (##sys#check-output-port port #t #f)
      (let ([csp (case-sensitive)]
	    [ksp (keyword-style)]
	    [length-limit (##sys#print-length-limit)]
	    [special-characters '(#\( #\) #\, #\[ #\] #\{ #\} #\' #\" #\; #\ #\` #\| #\\)] )

	(define (outstr port str)
	  (if length-limit
	      (let* ((len (##sys#size str))
		     (cpp0 (current-print-length))
		     (cpl (fx+ cpp0 len)) )
		(if (fx>= cpl length-limit)
		    (cond ((fx> len 3)
			   (let ((n (fx- length-limit cpp0)))
			     (when (fx> n 0) (outstr0 port (##sys#substring str 0 n)))
			     (outstr0 port "...") ) )
			  (else (outstr0 port str)) )
		    (outstr0 port str) )
		(current-print-length cpl) )
	      (outstr0 port str) ) )
	       
	(define (outstr0 port str)
	  ((##sys#slot (##sys#slot port 2) 3) port str) )

	(define (outchr port chr)
	  (when length-limit
	    (let ((cpp0 (current-print-length)))
	      (current-print-length (fx+ cpp0 1))
	      (when (fx>= cpp0 length-limit)
		(outstr0 port "...")
		((##sys#print-exit) #t) )))
	  ((##sys#slot (##sys#slot port 2) 2) port chr))

	(define (specialchar? chr)
	  (let ([c (char->integer chr)])
	    (or (fx<= c 32)
		(memq chr special-characters) ) ) )

	(define (outreadablesym port str)
	  (let ((len (##sys#size str)))
	    (outchr port #\|)
	    (let loop ((i 0))
	      (if (fx>= i len)
		  (outchr port #\|)
		  (let ((c (##core#inline "C_subchar" str i)))
		    (cond ((or (char<? c #\space) (char>? c #\~))
			   (outstr port "\\x")
			   (let ((n (char->integer c)))
			     (when (fx< n 16) (outchr port #\0))
			     (outstr port (##sys#number->string n 16))
			     (loop (fx+ i 1))))
			  (else
			   (when (or (eq? c #\|) (eq? c #\\)) (outchr port #\\))
			   (outchr port c)
			   (loop (fx+ i 1)) ) ) ) ) )))

	(define (sym-is-readable? str)
	  (let ((len (##sys#size str)))
	    (cond ((eq? len 0) #f)
		  ((eq? len 1)
		   (let ((c (##core#inline "C_subchar" str 0)))
		     (cond ((or (eq? #\# c) (eq? #\. c)) #f)
			   ((specialchar? c) #f)
			   ((char-numeric? c) #f)
			   (else #t))))
		  (else
		   (let loop ((i (fx- len 1)))
		     (if (eq? i 0)
			 (let ((c (##core#inline "C_subchar" str 0)))
			   (cond ((or (char-numeric? c)
				      (eq? c #\+)
				      (eq? c #\.)
				      (eq? c #\-) )
				  (not (##sys#string->number str)) )
				 ((eq? c #\:) (not (eq? ksp #:prefix)))
				 ((and (eq? c #\#)
				       (not (eq? #\% (##core#inline "C_subchar" str 1))))
				  #f)
				 ((specialchar? c) #f)
				 (else #t) ) )
			 (let ((c (##core#inline "C_subchar" str i)))
			   (and (or csp (not (char-upper-case? c)))
				(not (specialchar? c))
				(or (not (eq? c #\:))
				    (fx< i (fx- len 1))
				    (not (eq? ksp #:suffix)))
				(loop (fx- i 1)) ) ) ) ) ) ) ) )

	(let out ([x x])
	  (cond ((eq? x '()) (outstr port "()"))
		((eq? x #t) (outstr port "#t"))
		((eq? x #f) (outstr port "#f"))
		((##core#inline "C_eofp" x) (outstr port "#!eof"))
		((##core#inline "C_undefinedp" x) (outstr port "#<unspecified>"))
		((##core#inline "C_charp" x)
		 (cond [readable
			(outstr port "#\\")
			(let ([code (char->integer x)])
			  (cond [(char-name x) 
				 => (lambda (cn) 
				      (outstr port (##sys#slot cn 1)) ) ]
				[(or (fx< code 32) (fx> code 255))
				 (outchr port #\x)
				 (outstr port (##sys#number->string code 16)) ]
				[else (outchr port x)] ) ) ] 
		       [else (outchr port x)] ) )
		((##core#inline "C_fixnump" x) (outstr port (##sys#number->string x)))
		((eq? x (##sys#slot '##sys#arbitrary-unbound-symbol 0))
		 (outstr port "#<unbound value>") )
		((not (##core#inline "C_blockp" x)) (outstr port "#<invalid immediate object>"))
		((##core#inline "C_forwardedp" x) (outstr port "#<invalid forwarded object>"))
		((##core#inline "C_symbolp" x)
		 (cond [(fx= 0 (##sys#byte (##sys#slot x 1) 0))
			(let ([str (##sys#symbol->string x)])
			  (case ksp
			    [(#:prefix) 
			     (outchr port #\:)
			     (outstr port str) ]
			    [(#:suffix) 
			     (outstr port str)
			     (outchr port #\:) ]
			    [else
			     (outstr port "#:")
			     (outstr port str) ] ) ) ]
		       [(memq x '(#!optional #!key #!rest))
			(outstr port (##sys#slot x 1))]
		       [(##sys#qualified-symbol? x)
			(outstr port (##sys#symbol->qualified-string x))]
		       (else
			(let ((str (##sys#symbol->string x)))
			  (if (or (not readable) (sym-is-readable? str))
			      (outstr port str)
			      (outreadablesym port str) ) ) ) ) )
		((##sys#number? x) (outstr port (##sys#number->string x)))
		((##core#inline "C_anypointerp" x) (outstr port (##sys#pointer->string x)))
		((##core#inline "C_stringp" x)
		 (cond (readable
			(outchr port #\")
			(do ((i 0 (fx+ i 1))
			     (c (##core#inline "C_block_size" x) (fx- c 1)) )
			    ((eq? c 0)
			     (outchr port #\") )
			  (let ((chr (##core#inline "C_subbyte" x i)))
			    (case chr
			      ((34) (outstr port "\\\""))
			      ((92) (outstr port "\\\\"))
			      (else
			       (cond ((or (fx< chr 32)
					  (fx= chr 127))
				      (outchr port #\\)
				      (case chr
                                        ((7) (outchr port #\a))
					((8) (outchr port #\b))
					((9) (outchr port #\t))
					((10) (outchr port #\n))
					((11) (outchr port #\v))
					((12) (outchr port #\f))
					((13) (outchr port #\r))
					(else
					 (outchr port #\x)
					 (when (fx< chr 16) (outchr port #\0))
					 (outstr port (##sys#number->string chr 16)) ) ) )
				     (else (outchr port (##core#inline "C_fix_to_char" chr)) ) ) ) ) ) ) )
		       (else (outstr port x)) ) )
		((##core#inline "C_pairp" x)
		 (outchr port #\()
		 (out (##sys#slot x 0))
		 (do ((x (##sys#slot x 1) (##sys#slot x 1)))
		     ((or (not (##core#inline "C_blockp" x)) (not (##core#inline "C_pairp" x)))
		      (if (not (eq? x '()))
			  (begin
			    (outstr port " . ")
			    (out x) ) )
		      (outchr port #\)) )
		   (outchr port #\space)
		   (out (##sys#slot x 0)) ) )
		((##core#inline "C_bytevectorp" x)
		 (outstr port "#${")
		 (let ((len (##sys#size x)))
		   (do ((i 0 (fx+ i 1)))
		       ((fx>= i len))
		     (let ((b (##sys#byte x i)))
		       (when (fx< b 16)
			 (outchr port #\0))
		       (outstr port (##sys#number->string b 16)))))
		 (outchr port #\}) )
		((##core#inline "C_structurep" x) (##sys#user-print-hook x readable port))
		((##core#inline "C_closurep" x) (outstr port (##sys#procedure->string x)))
		((##core#inline "C_locativep" x) (outstr port "#<locative>"))
		((##core#inline "C_lambdainfop" x)
		 (outstr port "#<lambda info ")
		 (outstr port (##sys#lambda-info->string x))
		 (outchr port #\>) )
		((##core#inline "C_portp" x)
		 (if (##sys#slot x 1)
		     (outstr port "#<input port \"")
		     (outstr port "#<output port \"") )
		 (outstr port (##sys#slot x 3))
		 (outstr port "\">") )
		((##core#inline "C_vectorp" x)
		 (let ((n (##core#inline "C_block_size" x)))
		   (cond ((eq? 0 n)
			  (outstr port "#()") )
			 (else
			  (outstr port "#(")
			  (out (##sys#slot x 0))
			  (do ((i 1 (fx+ i 1))
			       (c (fx- n 1) (fx- c 1)) )
			      ((eq? c 0)
			       (outchr port #\)) )
			    (outchr port #\space)
			    (out (##sys#slot x i)) ) ) ) ) )
		(else (##sys#error "unprintable non-immediate object encountered")))))
      (##sys#void))))

(define ##sys#procedure->string 
  (let ((string-append string-append))
    (lambda (x)
      (let ((info (##sys#lambda-info x)))
	(if info
	    (string-append "#<procedure " (##sys#lambda-info->string info) ">")
	    "#<procedure>") ) ) ) )

(define ##sys#record-printers '())

(define (##sys#register-record-printer type proc)
  (let ([a (assq type ##sys#record-printers)])
    (if a 
	(##sys#setslot a 1 proc)
	(set! ##sys#record-printers (cons (cons type proc) ##sys#record-printers)) )
    (##core#undefined) ) )

(define (##sys#user-print-hook x readable port)
  (let* ((type (##sys#slot x 0))
	 (a (assq type ##sys#record-printers)) )
    (cond (a (handle-exceptions ex
		(begin
		  (##sys#print "#<Error in printer of record type `" #f port)
		  (##sys#print (##sys#symbol->string type) #f port)
		  (if (##sys#structure? ex 'condition)
		      (and-let* ((a (member '(exn . message) (##sys#slot ex 2))))
			(##sys#print "': " #f port)
			(##sys#print (cadr a) #f port)
			(##sys#write-char-0 #\> port))
		      (##sys#print "'>" #f port)))
	       ((##sys#slot a 1) x port)))
	  (else
	   (##sys#print "#<" #f port)
	   (##sys#print (##sys#symbol->string type) #f port)
	   (case type
	     ((condition)
	      (##sys#print ": " #f port)
	      (##sys#print (##sys#slot x 1) #f port) )
	     ((thread)
	      (##sys#print ": " #f port)
	      (##sys#print (##sys#slot x 6) #f port) ) )
	   (##sys#write-char-0 #\> port) ) ) ) )

(define ##sys#with-print-length-limit
  (let ([call-with-current-continuation call-with-current-continuation])
    (lambda (limit thunk)
      (call-with-current-continuation
       (lambda (return)
	 (parameterize ((##sys#print-length-limit limit)
			(##sys#print-exit return)
			(current-print-length 0))
	   (thunk)))))))


;;; Bitwise fixnum operations:

(define (bitwise-and . xs)
  (let loop ([x -1] [xs xs])
    (if (null? xs)
	x
	(loop (##core#inline_allocate ("C_a_i_bitwise_and" 4) x (##sys#slot xs 0))
	      (##sys#slot xs 1)) ) ) )

(define (bitwise-ior . xs)
  (let loop ([x 0] [xs xs])
    (if (null? xs)
	x
	(loop (##core#inline_allocate ("C_a_i_bitwise_ior" 4) x (##sys#slot xs 0)) 
	      (##sys#slot xs 1)) ) ) )

(define (bitwise-xor . xs)
  (let loop ([x 0] [xs xs])
    (if (null? xs)
	x
	(loop (##core#inline_allocate ("C_a_i_bitwise_xor" 4) x (##sys#slot xs 0))
	      (##sys#slot xs 1)) ) ) )

(define (bitwise-not x)
  (##core#inline_allocate ("C_a_i_bitwise_not" 4) x) )

(define (arithmetic-shift x y)
  (##core#inline_allocate ("C_a_i_arithmetic_shift" 4) x y) )

(define (bit-set? n i)
  (##core#inline "C_i_bit_setp" n i) )


;;; String ports:
;
; - Port-slots:
;
;   Input:
;
;   10: position
;   11: len
;   12: string
;
;   Output:
;
;   10: position
;   11: limit
;   12: output

(define ##sys#string-port-class
  (letrec ([check 
	    (lambda (p n)
	      (let* ([position (##sys#slot p 10)]
		     [limit (##sys#slot p 11)] 
		     [output (##sys#slot p 12)]
		     [limit2 (fx+ position n)] )
		(when (fx>= limit2 limit)
		  (when (fx>= limit2 maximal-string-length)
		    (##sys#error "string buffer full" p) )
		  (let* ([limit3 (fxmin maximal-string-length (fx+ limit limit))]
			 [buf (##sys#make-string limit3)] )
		    (##sys#copy-bytes output buf 0 0 position)
		    (##sys#setslot p 12 buf)
		    (##sys#setislot p 11 limit3)
		    (check p n) ) ) ) ) ] )
    (vector
     (lambda (p)			; read-char
       (let ([position (##sys#slot p 10)]
	     [string (##sys#slot p 12)]
	     [len (##sys#slot p 11)] )
	 (if (fx>= position len)
	     #!eof
	     (let ((c (##core#inline "C_subchar" string position)))
	       (##sys#setislot p 10 (fx+ position 1))
	       c) ) ) )
     (lambda (p)			; peek-char
       (let ([position (##sys#slot p 10)]
	     [string (##sys#slot p 12)]
	     [len (##sys#slot p 11)] )
	 (if (fx>= position len)
	     #!eof
	     (##core#inline "C_subchar" string position) ) ) )
     (lambda (p c)			; write-char
       (check p 1)	
       (let ([position (##sys#slot p 10)]
	     [output (##sys#slot p 12)] )
	 (##core#inline "C_setsubchar" output position c)
	 (##sys#setislot p 10 (fx+ position 1)) ) )
     (lambda (p str)			; write-string
       (let ([len (##core#inline "C_block_size" str)])
	 (check p len)
	 (let ([position (##sys#slot p 10)]
	       [output (##sys#slot p 12)] )
	   (##core#inline "C_substring_copy" str output 0 len position)
	   (##sys#setislot p 10 (fx+ position len)) ) ) )
     void ; close
     (lambda (p) #f)			; flush-output
     (lambda (p)			; char-ready?
       (fx< (##sys#slot p 10) (##sys#slot p 11)) )
     (lambda (p n dest start)		; read-string!
       (let* ((pos (##sys#slot p 10))
	      (n2 (fx- (##sys#slot p 11) pos) ) )
	 (when (or (not n) (fx> n n2)) (set! n n2))
	 (##core#inline "C_substring_copy" (##sys#slot p 12) dest pos (fx+ pos n) start)
	 (##sys#setislot p 10 (fx+ pos n))
	 n))
     (lambda (p limit)			; read-line
       (let* ((pos (##sys#slot p 10))
	      (size (##sys#slot p 11)) 
	      (buf (##sys#slot p 12)) 
	      (end (if limit (fx+ pos limit) size)))
	 (if (fx>= pos size)
	     #!eof
	     (receive (next line full-line?)
		 (##sys#scan-buffer-line
		  buf (if (fx> end size) size end) pos
		  (lambda (pos) (values #f pos #f) ) )
	       ;; Update row & column position
	       (if full-line?
		   (begin
		     (##sys#setislot p 4 (fx+ (##sys#slot p 4) 1))
		     (##sys#setislot p 5 0))
		   (##sys#setislot p 5 (fx+ (##sys#slot p 5) (##sys#size line))))
	       (##sys#setislot p 10 next)
	       line) ) ) )
     (lambda (p)			; read-buffered
       (let ((pos (##sys#slot p 10))
	     (string (##sys#slot p 12))
	     (len (##sys#slot p 11)) )
	 (if (fx>= pos len)
	     ""
	     (let ((buffered (##sys#substring string pos len)))
	       (##sys#setislot p 10 len)
	       buffered))))
     )))

;; Invokes the eos handler when EOS is reached to get more data.
;; The eos-handler is responsible for stopping, either when EOF is hit or
;; a user-supplied limit is reached (ie, it's indistinguishable from EOF)
(define (##sys#scan-buffer-line buf limit start-pos eos-handler)
  (define (copy&append buf offset pos old-line)
    (let* ((old-line-len (##sys#size old-line))
	   (new-line (##sys#make-string (fx+ old-line-len (fx- pos offset)))))
      (##core#inline "C_substring_copy" old-line new-line 0 old-line-len 0)
      (##core#inline "C_substring_copy" buf new-line offset pos old-line-len)
      new-line))
  (let loop ((buf buf)
	     (offset start-pos)
	     (pos start-pos)
	     (limit limit)
	     (line ""))
    (if (fx= pos limit)
	(let ((line (copy&append buf offset pos line)))
	  (receive (buf offset limit) (eos-handler pos)
	    (if buf
		(loop buf offset offset limit line)
		(values offset line #f))))
	(let ((c (##core#inline "C_subchar" buf pos)))
	  (cond ((eq? c #\newline)
		 (values (fx+ pos 1) (copy&append buf offset pos line) #t))
		((and (eq? c #\return)	; \r\n -> drop \r from string
		      (fx> limit (fx+ pos 1))
		      (eq? (##core#inline "C_subchar" buf (fx+ pos 1)) #\newline))
		 (values (fx+ pos 2) (copy&append buf offset pos line) #t))
		((and (eq? c #\return)	; Edge case (#568): \r{read}[\n|xyz]
		      (fx= limit (fx+ pos 1)))
		 (let ((line (copy&append buf offset pos line)))
		   (receive (buf offset limit) (eos-handler pos)
		     (if buf
			 (if (eq? (##core#inline "C_subchar" buf offset) #\newline)
			     (values (fx+ offset 1) line #t)
			     ;; "Restore" \r we didn't copy, loop w/ new string
			     (loop buf offset offset limit
				   (##sys#string-append line "\r")))
			 ;; Restore \r here, too (when we reached EOF)
			 (values offset (##sys#string-append line "\r") #t)))))
		((eq? c #\return)
		 (values (fx+ pos 1) (copy&append buf offset pos line) #t))
		(else (loop buf offset (fx+ pos 1) limit line)) ) ) ) ) )

(define (open-input-string string)
  (##sys#check-string string 'open-input-string)
  (let ([port (##sys#make-port #t ##sys#string-port-class "(string)" 'string)])
    (##sys#setislot port 11 (##core#inline "C_block_size" string))
    (##sys#setislot port 10 0)
    (##sys#setslot port 12 string)
    port ) )

(define (open-output-string)
  (let ([port (##sys#make-port #f ##sys#string-port-class "(string)" 'string)])
    (##sys#setislot port 10 0)
    (##sys#setislot port 11 output-string-initial-size)
    (##sys#setslot port 12 (##sys#make-string output-string-initial-size))
    port ) )

(define (get-output-string port)
  (##sys#check-output-port port #f 'get-output-string)
  (if (not (eq? 'string (##sys#slot port 7)))
      (##sys#signal-hook
       #:type-error 'get-output-string "argument is not a string-output-port" port) 
      (##sys#substring (##sys#slot port 12) 0 (##sys#slot port 10)) ) )

(define ##sys#print-to-string
  (let ([get-output-string get-output-string]
	[open-output-string open-output-string] )
    (lambda (xs)
      (let ([out (open-output-string)])
	(for-each (lambda (x) (##sys#print x #f out)) xs)
	(get-output-string out) ) ) ) )

(define ##sys#pointer->string
  (let ((string-append string-append))
    (lambda (x)
      (cond ((##core#inline "C_taggedpointerp" x)
	     (string-append 
	      "#<tagged pointer "
	      (##sys#print-to-string 
	       (let ((tag (##sys#slot x 1)))
		 (list (if (pair? tag) (car tag) tag) ) ) )
	      " "
	      (##sys#number->string (##sys#pointer->address x) 16)
	      ">") )
	    ((##core#inline "C_swigpointerp" x)
	     (string-append "#<SWIG pointer 0x" (##sys#number->string (##sys#pointer->address x) 16) ">") )
	    (else
	     (string-append "#<pointer 0x" (##sys#number->string (##sys#pointer->address x) 16) ">") ) ) ) ) )


;;; Platform configuration inquiry:

(define software-type
  (let ([sym (string->symbol ((##core#primitive "C_software_type")))])
    (lambda () sym) ) )

(define machine-type
  (let ([sym (string->symbol ((##core#primitive "C_machine_type")))])
    (lambda () sym) ) )

(define machine-byte-order
  (let ([sym (string->symbol ((##core#primitive "C_machine_byte_order")))])
    (lambda () sym) ) )

(define software-version
  (let ([sym (string->symbol ((##core#primitive "C_software_version")))])
    (lambda () sym) ) )

(define build-platform
  (let ([sym (string->symbol ((##core#primitive "C_build_platform")))])
    (lambda () sym) ) )

(define ##sys#windows-platform
  (and (eq? 'windows (software-type))
       ;; Still windows even if 'Linux-like'
       (not (eq? 'cygwin (build-platform)))) )

(define (chicken-version #!optional full)
  (define (get-config)
    (let ([bp (build-platform)]
	  [st (software-type)]
	  [sv (software-version)]
	  [mt (machine-type)] )
      (define (str x)
	(if (eq? 'unknown x)
	    ""
	    (string-append (symbol->string x) "-") ) )
      (string-append (str sv) (str st) (str bp) (##sys#symbol->string mt)) ) )
  (if full
      (let ((spec (string-append
		   (if (##sys#fudge 3)	" 64bit" "")
		   (if (##sys#fudge 15) " symbolgc" "")
		   (if (##sys#fudge 40) " manyargs" "")
		   (if (##sys#fudge 24) " dload" "") 
		   (if (##sys#fudge 28) " ptables" "")
		   (if (##sys#fudge 32) " gchooks" "") 
		   (if (##sys#fudge 39) " cross" "") ) ) )
	(string-append
	 "Version " ##sys#build-version
	 (if ##sys#build-branch (string-append " (" ##sys#build-branch ")") "")
	 (if ##sys#build-id (string-append " (rev " ##sys#build-id ")") "")
	 "\n"
	 (get-config)
	 (if (zero? (##sys#size spec))
	     ""
	     (string-append " [" spec " ]") )
	 "\n"
	 (or (##sys#build-tag) "")))
      ##sys#build-version) )


;;; Feature identifiers:

(define ##sys#->feature-id
  (let ()
    (define (err . args)
      (apply ##sys#signal-hook #:type-error "bad argument type - not a valid feature identifer" args) )
    (define (prefix s)
      (if s 
	  (##sys#string-append s "-")
	  "") )
    (lambda (x)
      (cond [(string? x)  (string->keyword x)]
	    [(keyword? x) x]
	    [(symbol? x)  (string->keyword (##sys#symbol->string x))]
	    [else	  (err x)] ) ) ) )

(define ##sys#features
  '(#:chicken #:srfi-6 #:srfi-10 #:srfi-23 #:srfi-30 #:srfi-39 #:srfi-62 #:srfi-17 
	      #:srfi-12 #:srfi-88 #:srfi-98
	      #:irregex-is-core-unit))

;; Add system features:

(let ((check (lambda (f)
	       (unless (eq? 'unknown f)
		 (set! ##sys#features (cons (##sys#->feature-id f) ##sys#features))))))
  (check (software-type))
  (check (software-version))
  (check (build-platform))
  (check (machine-type))
  (check (machine-byte-order)) )

(when (##sys#fudge 40) (set! ##sys#features (cons #:manyargs ##sys#features)))
(when (##sys#fudge 24) (set! ##sys#features (cons #:dload ##sys#features)))
(when (##sys#fudge 28) (set! ##sys#features (cons #:ptables ##sys#features)))
(when (##sys#fudge 39) (set! ##sys#features (cons #:cross-chicken ##sys#features)))
(when (##sys#fudge 3) (set! ##sys#features (cons #:64bit ##sys#features)))

(set! ##sys#features
  (let ((major (##sys#string-append "chicken-" (##sys#number->string (##sys#fudge 41)))))
    (cons (##sys#->feature-id major)
	  (cons (##sys#->feature-id 
		 (string-append
		  major "."
		  (##sys#number->string (##sys#fudge 43))))
		##sys#features))))

(define (register-feature! . fs)
  (for-each
   (lambda (f)
     (let ([id (##sys#->feature-id f)])
       (unless (memq id ##sys#features) (set! ##sys#features (cons id ##sys#features))) ) )
   fs)
  (##core#undefined) )

(define (unregister-feature! . fs)
  (let ([fs (map ##sys#->feature-id fs)])
    (set! ##sys#features
      (let loop ([ffs ##sys#features])
	(if (null? ffs)
	    '()
	    (let ([f (##sys#slot ffs 0)]
		  [r (##sys#slot ffs 1)] )
	      (if (memq f fs)
		  (loop r)
		  (cons f (loop r)) ) ) ) ) )
    (##core#undefined) ) )

(define (features) ##sys#features)

(define (##sys#feature? . ids)
  (let loop ([ids ids])
    (or (null? ids)
	(and (memq (##sys#->feature-id (##sys#slot ids 0)) ##sys#features)
	     (loop (##sys#slot ids 1)) ) ) ) )

(define feature? ##sys#feature?)


;;; Access backtrace:

(define-constant +trace-buffer-entry-slot-count+ 4)

(define ##sys#get-call-chain
  (let ((extract
	 (foreign-lambda* nonnull-c-string ((scheme-object x)) "C_return((C_char *)x);")))
    (lambda (#!optional (start 0) (thread ##sys#current-thread))
      (let* ((tbl (foreign-value "C_trace_buffer_size" int))
	     ;; 4 slots: "raw" string, cooked1, cooked2, thread
	     (c +trace-buffer-entry-slot-count+)
	     (vec (##sys#make-vector (fx* c tbl) #f))
	     (r (##core#inline "C_fetch_trace" start vec)) 
	     (n (if (fixnum? r) r (fx* c tbl))) )
	(let loop ((i 0))
	  (if (fx>= i n) 
	      '()
	      (let ((t (##sys#slot vec (fx+ i 3)))) ; thread
		(if (or (not t) (not thread) (eq? thread t))
		    (cons (vector
			   (extract (##sys#slot vec i)) ; raw
			   (##sys#slot vec (fx+ i 1))   ; cooked1
			   (##sys#slot vec (fx+ i 2)) ) ; cooked2
			  (loop (fx+ i c)) )
		    (loop (fx+ i c))) ) ) ) ) ) ) )

(define (##sys#really-print-call-chain port chain header)
  (when (pair? chain)
    (##sys#print header #f port)
    (for-each
     (lambda (info) 
       (let* ((more1 (##sys#slot info 1)) ; cooked1 (expr/form)
	      (more2 (##sys#slot info 2)) ; cooked2 (cntr/frameinfo)
	      (fi (##sys#structure? more2 'frameinfo)))
	 (##sys#print "\n\t" #f port)
	 (##sys#print (##sys#slot info 0) #f port) ; raw (mode)
	 (##sys#print "\t  " #f port)
	 (when (and more2 (if fi (##sys#slot more2 1)))
	   (##sys#write-char-0 #\[ port)
	   (##sys#print 
	    (if fi
		(##sys#slot more2 1)	; cntr
		more2)
	    #f port)
	   (##sys#print "] " #f port) )
	 (when more1
	   (##sys#with-print-length-limit
	    100
	    (lambda ()
	      (##sys#print more1 #t port) ) ) ) ) )
     chain)
    (##sys#print "\t<--\n" #f port) ) )

(define (print-call-chain #!optional (port ##sys#standard-output) (start 0)
				     (thread ##sys#current-thread)
				     (header "\n\tCall history:\n") )
  (##sys#check-output-port port #t 'print-call-chain)
  (##sys#check-exact start 'print-call-chain)
  (##sys#check-string header 'print-call-chain)
  (let ((ct (##sys#get-call-chain start thread)))
    (##sys#really-print-call-chain port ct header)
    ct))

(define get-call-chain ##sys#get-call-chain)


;;; Interrupt handling:

(define (##sys#user-interrupt-hook)
  (define (break) (##sys#signal-hook #:user-interrupt #f))
  (if (eq? ##sys#current-thread ##sys#primordial-thread)
      (break)
      (##sys#setslot ##sys#primordial-thread 1 break) ) )


;;; Default handlers

(define ##sys#break-on-error (##sys#fudge 25))

(define-foreign-variable _ex_software int "EX_SOFTWARE")

(define ##sys#error-handler
  (make-parameter
   (let ([string-append string-append])
     (lambda (msg . args)
       (##sys#error-handler (lambda args (##core#inline "C_halt" "error in error")))
       (cond ((##sys#fudge 4)
	      (##sys#print "\nError" #f ##sys#standard-error)
	      (when msg
		(##sys#print ": " #f ##sys#standard-error)
		(##sys#print msg #f ##sys#standard-error) )
	      (cond [(fx= 1 (length args))
		     (##sys#print ": " #f ##sys#standard-error)
		     (##sys#print (##sys#slot args 0) #t ##sys#standard-error) ]
		    [else
		     (##sys#for-each
		      (lambda (x)
			(##sys#print #\newline #f ##sys#standard-error)
			(##sys#print x #t ##sys#standard-error) )
		      args) ] )
	      (##sys#print #\newline #f ##sys#standard-error)
	      (print-call-chain ##sys#standard-error)
	      (when (and ##sys#break-on-error (##sys#symbol-has-toplevel-binding? 'repl))
		(repl) 
		(##sys#print #\newline #f ##sys#standard-error)
		(##core#inline "C_exit_runtime" _ex_software) )
	      (##core#inline "C_halt" #f) )
	     (else
	      (let ((out (open-output-string)))
		(when msg (##sys#print msg #f out))
		(##sys#print #\newline #f out)
		(##sys#for-each (lambda (x) (##sys#print x #t out) (##sys#print #\newline #f out)) args)
		(##core#inline "C_halt" (get-output-string out)) ) ) ) ) ) ) )

(define reset-handler 
  (make-parameter 
   (lambda ()
     ((##sys#exit-handler) _ex_software)) ) )

(define exit-in-progress #f)

(define exit-handler
  (make-parameter
   (lambda (#!optional (code 0))
     (##sys#check-exact code)
     (cond (exit-in-progress
	    (##sys#warn "\"exit\" called while processing on-exit tasks"))
	   (else
	    (##sys#cleanup-before-exit)
	    (##core#inline "C_exit_runtime" code))))))

(define implicit-exit-handler
  (make-parameter
   (lambda ()
     (##sys#cleanup-before-exit) ) ) )

(define ##sys#exit-handler exit-handler)
(define ##sys#reset-handler reset-handler)
(define ##sys#implicit-exit-handler implicit-exit-handler)

(define force-finalizers (make-parameter #t))

(define ##sys#cleanup-tasks '())

(define (##sys#cleanup-before-exit)
  (set! exit-in-progress #t)
  (when (##sys#fudge 37)		; -:H given?
    (##sys#print "\n" #f ##sys#standard-error)
    (##sys#dump-heap-state))
  (let loop ()
    (let ((tasks ##sys#cleanup-tasks))
      (set! ##sys#cleanup-tasks '())
      (unless (null? tasks)
	(for-each (lambda (t) (t)) tasks)
	(loop))))    
  (when (##sys#fudge 13)		; debug mode
    (##sys#print "[debug] forcing finalizers...\n" #f ##sys#standard-error) )
  (when (force-finalizers) (##sys#force-finalizers)) )

(define (on-exit thunk)
  (set! ##sys#cleanup-tasks (cons thunk ##sys#cleanup-tasks)))


;;; Condition handling:

(define (##sys#signal-hook mode msg . args)
  (##core#inline "C_dbg_hook" #f)
  (case mode
    [(#:user-interrupt)
     (##sys#abort
      (##sys#make-structure
       'condition
       '(user-interrupt)
       '() ) ) ]
    [(#:warning #:notice)
     (##sys#print 
      (if (eq? mode #:warning) "\nWarning: " "\nNote: ")
      #f ##sys#standard-error)
     (##sys#print msg #f ##sys#standard-error)
     (if (or (null? args) (fx> (length args) 1))
	 (##sys#write-char-0 #\newline ##sys#standard-error)
	 (##sys#print ": " #f ##sys#standard-error))
     (for-each
      (lambda (x)
	(##sys#print x #t ##sys#standard-error)
	(##sys#write-char-0 #\newline ##sys#standard-error) )
      args) 
     (##sys#flush-output ##sys#standard-error) ] 
    [else
     (when (and (symbol? msg) (null? args))
       (set! msg (##sys#symbol->string msg)) )
     (let* ([hasloc (and (or (not msg) (symbol? msg)) (pair? args))]
	    [loc (and hasloc msg)]
	    [msg (if hasloc (##sys#slot args 0) msg)]
	    [args (if hasloc (##sys#slot args 1) args)] )
       (##sys#abort
	(##sys#make-structure
	 'condition 
	 (case mode
	   [(#:type-error)		'(exn type)]
	   [(#:syntax-error)		'(exn syntax)]
	   [(#:bounds-error)		'(exn bounds)]
	   [(#:arithmetic-error)	'(exn arithmetic)]
	   [(#:file-error)		'(exn i/o file)]
	   [(#:runtime-error)		'(exn runtime)]
	   [(#:process-error)		'(exn process)]
	   [(#:network-error)		'(exn i/o net)]
	   [(#:network-timeout-error)   '(exn i/o net timeout)]
	   [(#:limit-error)		'(exn runtime limit)]
	   [(#:arity-error)		'(exn arity)]
	   [(#:access-error)		'(exn access)]
	   [(#:domain-error)		'(exn domain)]
	   ((#:memory-error)            '(exn memory))
	   [else			'(exn)] )
	 (list '(exn . message) msg
	       '(exn . arguments) args
	       '(exn . call-chain) (##sys#get-call-chain)
	       '(exn . location) loc) ) ) ) ] ) )

(define (##sys#abort x)
  (##sys#current-exception-handler x)
  (##sys#abort
   (##sys#make-structure
    'condition
    '(exn) 
    (list '(exn . message) "exception handler returned"
	  '(exn . arguments) '()
	  '(exn . location) #f) ) ) )

(define (##sys#signal x)
  (##sys#current-exception-handler x) )

(define abort ##sys#abort)
(define signal ##sys#signal)

(define ##sys#last-exception #f)	; used in csi for ,exn command

(define ##sys#current-exception-handler
  ;; Exception-handler for the primordial thread:
  (let ((string-append string-append))
    (lambda (c)
      (when (##sys#structure? c 'condition)
	(set! ##sys#last-exception c)
	(let ((kinds (##sys#slot c 1)))
	  (cond ((memq 'exn kinds)
		 (let* ((props (##sys#slot c 2))
			(msga (member '(exn . message) props))
			(argsa (member '(exn . arguments) props))
			(loca (member '(exn . location) props)) )
		   (apply
		    (##sys#error-handler)
		    (if msga
			(let ((msg (cadr msga))
			      (loc (and loca (cadr loca))) )
			  (if (and loc (symbol? loc))
			      (string-append
			       "(" (##sys#symbol->qualified-string loc) ") " 
			       (cond ((symbol? msg) (##sys#slot msg 1))
				     ((string? msg) msg)
				     (else "") ) ) ; Hm...
			      msg) )
			"<exn: has no `message' property>")
		    (if argsa
			(cadr argsa)
			'() ) )
		   ;; in case error-handler returns, which shouldn't happen:
		   ((##sys#reset-handler)) ) )
		((eq? 'user-interrupt (##sys#slot kinds 0))
		 (##sys#print "\n*** user interrupt ***\n" #f ##sys#standard-error)
		 ((##sys#reset-handler)) )
		((eq? 'uncaught-exception (##sys#slot kinds 0))
		 ((##sys#error-handler)
		  "uncaught exception"
		  (cadr (member '(uncaught-exception . reason) (##sys#slot c 2))) )
		 ((##sys#reset-handler)) ) ) ) )
      (##sys#abort
       (##sys#make-structure
	'condition 
	'(uncaught-exception) 
	(list '(uncaught-exception . reason) c)) ) ) ) )

(define (with-exception-handler handler thunk)
  (let ([oldh ##sys#current-exception-handler])
    (##sys#dynamic-wind 
      (lambda () (set! ##sys#current-exception-handler handler))
      thunk
      (lambda () (set! ##sys#current-exception-handler oldh)) ) ) )

(define (current-exception-handler #!optional proc)
  (when proc
    (set! ##sys#current-exception-handler proc))
  ##sys#current-exception-handler)

(define (make-property-condition kind . props)
  (##sys#make-structure
   'condition (list kind)
   (let loop ((props props))
     (if (null? props)
	 '()
	 (cons (cons kind (car props)) (cons (cadr props) (loop (cddr props)))) ) ) ) )

(define (make-composite-condition c1 . conds)
  (let ([conds (cons c1 conds)])
    (for-each (lambda (c) (##sys#check-structure c 'condition 'make-composite-condition)) conds)
    (##sys#make-structure
     'condition
     (apply ##sys#append (map (lambda (c) (##sys#slot c 1)) conds))
     (apply ##sys#append (map (lambda (c) (##sys#slot c 2)) conds)) ) ) )

(define (condition? x) (##sys#structure? x 'condition))

(define (condition->list x)
  (or (condition? x)
      (##sys#signal-hook
       #:type-error 'condition->list
       "argument is not a condition object" x))
  (map
   (lambda (k)
     (cons k (let loop ((props (##sys#slot x 2))
			(res '()))
	       (cond ((null? props)
		      res)
		     ((eq? k (caar props))
		      (loop (cddr props) (cons (list (cdar props) (cadr props)) res)))
		     (else (loop (cddr props) res))))))
   (##sys#slot x 1)))

(define (condition-predicate kind)
  (lambda (c) 
    (and (condition? c)
         (if (memv kind (##sys#slot c 1)) #t #f)) ) )

(define (condition-property-accessor kind prop . err-def)
  (let ((err? (null? err-def))
	(k+p (cons kind prop)) )
    (lambda (c)
      (##sys#check-structure c 'condition)
      (and (memv kind (##sys#slot c 1))
	   (let ([a (member k+p (##sys#slot c 2))])
	     (cond [a (cadr a)]
		   [err? (##sys#signal-hook 
			  #:type-error 'condition-property-accessor
			  "condition has no such property" prop) ]
		   [else (car err-def)] ) ) ) ) ) )

(define get-condition-property
  (lambda (c kind prop . err-def)
    ((apply condition-property-accessor kind prop err-def) c)))


;;; Error hook (called by runtime-system):

(define ##sys#error-hook
  (let ([string-append string-append])
    (lambda (code loc . args)
      (case code
	((1) (let ([c (car args)]
		   [n (cadr args)] 
		   [fn (caddr args)] )
	       (apply
		##sys#signal-hook 
		#:arity-error loc
		(string-append "bad argument count - received " (##sys#number->string n) " but expected "
			       (##sys#number->string c) )
		(if fn (list fn) '())) ) )
	((2) (let ([c (car args)]
		   [n (cadr args)] 
		   [fn (caddr args)] )
	       (apply
		##sys#signal-hook
		#:arity-error loc
		(string-append "too few arguments - received " (##sys#number->string n) " but expected "
			       (##sys#number->string c) )
		(if fn (list fn) '()))))
	((3) (apply ##sys#signal-hook #:type-error loc "bad argument type" args))
	((4) (apply ##sys#signal-hook #:runtime-error loc "unbound variable" args))
	((5) (apply ##sys#signal-hook #:limit-error loc "parameter limit exceeded" args))
	((6) (apply ##sys#signal-hook #:limit-error loc "out of memory" args))
	((7) (apply ##sys#signal-hook #:arithmetic-error loc "division by zero" args))
	((8) (apply ##sys#signal-hook #:bounds-error loc "out of range" args))
	((9) (apply ##sys#signal-hook #:type-error loc "call of non-procedure" args))
	((10) (apply ##sys#signal-hook #:arity-error loc "continuation cannot receive multiple values" args))
	((11) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a non-cyclic list" args))
	((12) (apply ##sys#signal-hook #:limit-error loc "recursion too deep" args))
	((13) (apply ##sys#signal-hook #:type-error loc "inexact number cannot be represented as an exact number" args))
	((14) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a proper list" args))
	((15) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a fixnum" args))
	((16) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a number" args))
	((17) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a string" args))
	((18) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a pair" args))
	((19) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a list" args))
	((20) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a character" args))
	((21) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a vector" args))
	((22) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a symbol" args))
	((23) (apply ##sys#signal-hook #:limit-error loc "stack overflow" args))
	((24) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a structure of the required type" args))
	((25) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a blob" args))
	((26) (apply ##sys#signal-hook #:type-error loc "locative refers to reclaimed object" args))
	((27) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a non-immediate value" args))
	((28) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a number vector" args))
	((29) (apply ##sys#signal-hook #:type-error loc "bad argument type - not an integer" args))
	((30) (apply ##sys#signal-hook #:type-error loc "bad argument type - not an unsigned integer" args))
	((31) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a pointer" args))
	((32) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a tagged pointer" args))
	((33) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a flonum" args))
	((34) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a procedure" args))
	((35) (apply ##sys#signal-hook #:type-error loc "bad argument type - invalid base" args))
	((36) (apply ##sys#signal-hook #:limit-error loc "recursion too deep or circular data encountered" args))
	((37) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a boolean" args))
	((38) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a locative" args))
	((39) (apply ##sys#signal-hook #:type-error loc "bad argument type - not a port" args))
	((40) (apply ##sys#signal-hook #:type-error loc "bad argument type - not an input-port" args))
	((41) (apply ##sys#signal-hook #:type-error loc "bad argument type - not an output-port" args))
	((42) (apply ##sys#signal-hook #:file-error loc "port already closed" args))
	((43) (apply ##sys#signal-hook #:type-error loc "cannot represent string with NUL bytes as C string" args))
	((44) (apply ##sys#signal-hook #:memory-error loc "segmentation violation" args))
	((45) (apply ##sys#signal-hook #:arithmetic-error loc "floating-point exception" args))
	((46) (apply ##sys#signal-hook #:runtime-error loc "illegal instruction" args))
	((47) (apply ##sys#signal-hook #:memory-error loc "bus error" args))
	(else (apply ##sys#signal-hook #:runtime-error loc "unknown internal error" args)) ) ) ) )


;;; Miscellaneous low-level routines:

(define (##sys#structure? x s) (##core#inline "C_i_structurep" x s))
(define (##sys#generic-structure? x) (##core#inline "C_structurep" x))
(define (##sys#slot x i) (##core#inline "C_slot" x i))
(define (##sys#size x) (##core#inline "C_block_size" x))
(define ##sys#make-pointer (##core#primitive "C_make_pointer"))
(define ##sys#make-tagged-pointer (##core#primitive "C_make_tagged_pointer"))
(define (##sys#pointer? x) (##core#inline "C_anypointerp" x))
(define (##sys#set-pointer-address! ptr addr) (##core#inline "C_update_pointer" addr ptr))
(define (##sys#bytevector? x) (##core#inline "C_bytevectorp" x))
(define (##sys#string->pbytevector s) (##core#inline "C_string_to_pbytevector" s))
(define (##sys#permanent? x) (##core#inline "C_permanentp" x))
(define (##sys#block-address x) (##core#inline_allocate ("C_block_address" 4) x))
(define (##sys#locative? x) (##core#inline "C_locativep" x))
(define (##sys#srfi-4-vector? x)
  (and (##core#inline "C_blockp" x)
       (##sys#generic-structure? x)
       (memq (##sys#slot x 0)
             '(u8vector u16vector s8vector s16vector u32vector s32vector f32vector f64vector))))

(define (##sys#null-pointer)
  (let ([ptr (##sys#make-pointer)])
    (##core#inline "C_update_pointer" 0 ptr)
    ptr) )

(define (##sys#null-pointer? x)
  (eq? 0 (##sys#pointer->address x)) )

(define (##sys#address->pointer addr)
  (let ([ptr (##sys#make-pointer)])
    (##core#inline "C_update_pointer" addr ptr)
    ptr) )

(define (##sys#pointer->address ptr)
  ;;XXX '4' is platform dependent!
  (##core#inline_allocate ("C_a_unsigned_int_to_num" 4) (##sys#slot ptr 0)) )

(define (##sys#make-c-string str #!optional (loc '##sys#make-c-string))
  (let* ([len (##sys#size str)]
         [buf (##sys#make-string (fx+ len 1))] )
    (##core#inline "C_substring_copy" str buf 0 len 0)
    (##core#inline "C_setsubchar" buf len #\nul)
    (if (fx= (##core#inline "C_asciiz_strlen" buf) len)
        buf
        (##sys#error-hook (foreign-value "C_ASCIIZ_REPRESENTATION_ERROR" int)
                          loc str))) )

(define ##sys#peek-signed-integer (##core#primitive "C_peek_signed_integer"))
(define ##sys#peek-unsigned-integer (##core#primitive "C_peek_unsigned_integer"))
(define (##sys#peek-fixnum b i) (##core#inline "C_peek_fixnum" b i))
(define (##sys#peek-byte ptr i) (##core#inline "C_peek_byte" ptr i))

(define (##sys#vector->structure! vec) (##core#inline "C_vector_to_structure" vec))

(define (##sys#peek-double b i)
  (##core#inline_allocate ("C_a_f64peek" 4) b i))

(define (##sys#peek-c-string b i)
  (and (not (##sys#null-pointer? b))
       (let* ([len (##core#inline "C_fetch_c_strlen" b i)]
	      [str2 (##sys#make-string len)] )
	 (##core#inline "C_peek_c_string" b i str2 len)
	 str2 ) ) )

(define (##sys#peek-nonnull-c-string b i)
  (let* ([len (##core#inline "C_fetch_c_strlen" b i)]
	 [str2 (##sys#make-string len)] )
    (##core#inline "C_peek_c_string" b i str2 len)
    str2 ) )

(define (##sys#peek-and-free-c-string b i)
  (and (not (##sys#null-pointer? b))
       (let* ([len (##core#inline "C_fetch_c_strlen" b i)]
	      [str2 (##sys#make-string len)] )
	 (##core#inline "C_peek_c_string" b i str2 len)
	 (##core#inline "C_free_mptr" b i)
	 str2 ) ) )

(define (##sys#peek-and-free-nonnull-c-string b i)
  (let* ([len (##core#inline "C_fetch_c_strlen" b i)]
	 [str2 (##sys#make-string len)] )
    (##core#inline "C_peek_c_string" b i str2 len)
    (##core#inline "C_free_mptr" b i)
    str2 ) )

(define (##sys#poke-c-string b i s) 
  (##core#inline "C_poke_c_string" b i (##sys#make-c-string s) s) )

(define (##sys#poke-integer b i n) (##core#inline "C_poke_integer" b i n))
(define (##sys#poke-double b i n) (##core#inline "C_poke_double" b i n))

(define ##sys#peek-c-string-list 
  (let ((fetch (foreign-lambda c-string "C_peek_c_string_at" c-pointer int)))
    (lambda (ptr n)
      (let loop ((i 0))
	(if (and n (fx>= i n))
	    '()
	    (let ((s (fetch ptr i)))
	      (if s
		  (cons s (loop (fx+ i 1)))
		  '() ) ) ) ) ) ) )

(define ##sys#peek-and-free-c-string-list 
  (let ((fetch (foreign-lambda c-string "C_peek_c_string_at" c-pointer int))
	(free (foreign-lambda void "C_free" c-pointer)))
    (lambda (ptr n)
      (let ((lst (let loop ((i 0))
		   (if (and n (fx>= i n))
		       '()
		       (let ((s (fetch ptr i)))
			 (cond (s
				(##core#inline "C_free_sptr" ptr i)
				(cons s (loop (fx+ i 1))) )
			       (else '() ) ) ) ) ) ) )
	(free ptr)
	lst) ) ) )

(define (##sys#vector->closure! vec addr)
  (##core#inline "C_vector_to_closure" vec)
  (##core#inline "C_update_pointer" addr vec) )

(define (##sys#symbol-has-toplevel-binding? s)
  (not (eq? (##sys#slot s 0) (##sys#slot '##sys#arbitrary-unbound-symbol 0))) )

(define (##sys#copy-bytes from to offset1 offset2 bytes)
  (##core#inline 
   "C_substring_copy"
   from to
   offset1 (fx+ offset1 bytes)
   offset2) )

(define (##sys#copy-words from to offset1 offset2 words)
  (##core#inline 
   "C_subvector_copy"
   from to
   offset1 (fx+ offset1 words)
   offset2) )

(define (##sys#compare-bytes from to offset1 offset2 bytes)
  (##core#inline 
   "C_substring_compare"
   from to
   offset1 offset2 bytes) )

;; OBSOLETE
(define ##sys#zap-strings (foreign-lambda void "C_zap_strings" scheme-object))

(define (##sys#block-pointer x)
  (let ([ptr (##sys#make-pointer)])
    (##core#inline "C_pointer_to_block" ptr x)
    ptr) )


;;; Support routines for foreign-function calling:

(define (##sys#foreign-char-argument x) (##core#inline "C_i_foreign_char_argumentp" x))
(define (##sys#foreign-fixnum-argument x) (##core#inline "C_i_foreign_fixnum_argumentp" x))
(define (##sys#foreign-flonum-argument x) (##core#inline "C_i_foreign_flonum_argumentp" x))
(define (##sys#foreign-block-argument x) (##core#inline "C_i_foreign_block_argumentp" x))

(define (##sys#foreign-struct-wrapper-argument t x) 
  (##core#inline "C_i_foreign_struct_wrapper_argumentp" t x))

(define ##sys#foreign-number-vector-argument ##sys#foreign-struct-wrapper-argument) ;OBSOLETE
(define (##sys#foreign-string-argument x) (##core#inline "C_i_foreign_string_argumentp" x))
(define (##sys#foreign-symbol-argument x) (##core#inline "C_i_foreign_symbol_argumentp" x))
(define (##sys#foreign-pointer-argument x) (##core#inline "C_i_foreign_pointer_argumentp" x))
(define (##sys#foreign-tagged-pointer-argument x tx) (##core#inline "C_i_foreign_tagged_pointer_argumentp" x tx))
(define (##sys#foreign-integer-argument x) (##core#inline "C_i_foreign_integer_argumentp" x))
(define (##sys#foreign-integer64-argument x) (##core#inline "C_i_foreign_integer64_argumentp" x))

(define (##sys#foreign-unsigned-integer-argument x)
  (##core#inline "C_i_foreign_unsigned_integer_argumentp" x))

(define (##sys#foreign-unsigned-integer64-argument x)
  (##core#inline "C_i_foreign_unsigned_integer64_argumentp" x))


;;; Low-level threading interface:

(define ##sys#default-thread-quantum 10000)

(define (##sys#default-exception-handler arg) 
  (##core#inline "C_halt" "internal error: default exception handler shouldn't be called!") )

(define (##sys#make-thread thunk state name q)
  (##sys#make-structure
   'thread
   thunk				; #1 thunk
   #f					; #2 result list
   state				; #3 state
   #f					; #4 block-timeout
   (vector				; #5 state buffer
    ##sys#dynamic-winds
    ##sys#standard-input
    ##sys#standard-output
    ##sys#standard-error
    ##sys#default-exception-handler
    (##sys#vector-resize ##sys#current-parameter-vector
			 (##sys#size ##sys#current-parameter-vector) #f) )
   name					; #6 name
   (##core#undefined)			; #7 end-exception
   '()					; #8 owned mutexes
   q					; #9 quantum
   (##core#undefined)			; #10 specific
   #f					; #11 block object (type depends on blocking type)
   '()					; #12 recipients
   #f) )				; #13 unblocked by timeout?

(define ##sys#primordial-thread
  (##sys#make-thread #f 'running 'primordial ##sys#default-thread-quantum))

(define ##sys#current-thread ##sys#primordial-thread)

(define (##sys#make-mutex id owner)
  (##sys#make-structure
   'mutex
   id					; #1 name
   owner				; #2 thread or #f
   '()					; #3 list of waiting threads
   #f					; #4 abandoned
   #f					; #5 locked
   (##core#undefined) ) )		; #6 specific

(define (##sys#schedule) ((##sys#slot ##sys#current-thread 1)))

(define (##sys#thread-yield!)
  (##sys#call-with-current-continuation
   (lambda (return)
     (let ((ct ##sys#current-thread))
       (##sys#setslot ct 1 (lambda () (return (##core#undefined))))
       (##sys#schedule) ) ) ) )

(define (##sys#kill-other-threads thunk)
  (thunk))	     ; does nothing, will be modified by scheduler.scm


;;; Interrupt-handling:

(define ##sys#context-switch (##core#primitive "C_context_switch"))

(define ##sys#signal-vector (make-vector 256 #f))

(define (##sys#interrupt-hook reason state)
  (let loop ((reason reason))
    (when reason
      (let ((handler (##sys#slot ##sys#signal-vector reason)))
	(when handler
	  (handler reason))
	(loop (##core#inline "C_i_pending_interrupt" #f)))))
    (cond ((fx> (##sys#slot ##sys#pending-finalizers 0) 0)
	   (##sys#run-pending-finalizers state) )
	  ((procedure? state) (state))
	  (else (##sys#context-switch state) ) ) )

(define (##sys#dispatch-interrupt k)
  (##sys#interrupt-hook
   (##core#inline "C_i_pending_interrupt" #f)
   k))


;;; Accessing "errno":

(define-foreign-variable ##sys#errno int "errno")

(define ##sys#update-errno)
(define errno)

(let ([rn 0])
  (set! ##sys#update-errno (lambda () (set! rn ##sys#errno) rn))
  (set! errno (lambda () rn)) )


;;; Format error string for unterminated here-docs:

(define (##sys#format-here-doc-warning end)
  (##sys#print-to-string `("unterminated here-doc string literal `" ,end "'")))

;;; Special string quoting syntax:

(set! ##sys#user-read-hook
  (let ([old ##sys#user-read-hook]
	[read read]
	[display display] )
    (define (readln port)
      (let ([ln (open-output-string)])
	(do ([c (##sys#read-char-0 port) (##sys#read-char-0 port)])
	    ((or (eof-object? c) (char=? #\newline c))
	     (if (eof-object? c) c (get-output-string ln)))
	  (##sys#write-char-0 c ln) ) ) )
    (define (read-escaped-sexp port skip-brace?)
      (when skip-brace? (##sys#read-char-0 port))
      (let* ((form (read port)))
	(when skip-brace?
	      (let loop ()
		;; Skips all characters until #\}
		(let ([c (##sys#read-char-0 port)])
		  (cond [(eof-object? c)
			 (##sys#read-error port "unexpected end of file - unterminated `#{...}' item in `here' string literal") ]
			[(not (char=? #\} c)) (loop)] ) ) ) )
	form))
    (lambda (char port)
      (cond [(not (char=? #\< char)) (old char port)]
	    [else
	     (read-char port)
	     (case (##sys#peek-char-0 port)
	       [(#\<)
		(##sys#read-char-0 port)
		(let ([str (open-output-string)]
		      [end (readln port)] 
		      [f #f] )
		  (let ((endlen (if (eof-object? end) 0 (string-length end))))
		    (cond
		     ((fx= endlen 0)
		      (##sys#read-warning
		       port "Missing tag after #<< here-doc token"))
		     ((or (char=? (string-ref end (fx- endlen 1)) #\space)
			  (char=? (string-ref end (fx- endlen 1)) #\tab))
		      (##sys#read-warning
		       port "Whitespace after #<< here-doc tag"))
		     ))			    
		  (do ([ln (readln port) (readln port)])
		      ((or (eof-object? ln) (string=? end ln))
		       (when (eof-object? ln)
			 (##sys#read-warning port
			  (##sys#format-here-doc-warning end)))
		       (get-output-string str) )
		    (if f 
			(##sys#write-char-0 #\newline str)
			(set! f #t) )
		    (display ln str) ) ) ]
	       [(#\#)
		(##sys#read-char-0 port)
		(let ([end (readln port)] 
		      [str (open-output-string)] )
		  (define (get/clear-str)
		    (let ((s (get-output-string str)))
		      (set! str (open-output-string))
		      s))

		  (let ((endlen (if (eof-object? end) 0 (string-length end))))
		    (cond
		     ((fx= endlen 0)
		      (##sys#read-warning
		       port "Missing tag after #<# here-doc token"))
		     ((or (char=? (string-ref end (fx- endlen 1)) #\space)
			  (char=? (string-ref end (fx- endlen 1)) #\tab))
		      (##sys#read-warning
		       port "Whitespace after #<# here-doc tag"))
		     ))

		  (let loop [(lst '())]
		    (let ([c (##sys#read-char-0 port)])
		      (case c
			[(#\newline #!eof)
			 (let ([s (get/clear-str)])
			   (cond [(or (eof-object? c) (string=? end s))
				  (when (eof-object? c)
				    (##sys#read-warning
				     port (##sys#format-here-doc-warning end))
				     )
				  `(##sys#print-to-string
				    ;;Can't just use `(list ,@lst) because of 126 argument apply limit
				    ,(let loop2 ((lst (cdr lst)) (next-string '()) (acc ''())) ; drop last newline
				       (cond ((null? lst)
					      `(cons ,(##sys#print-to-string next-string) ,acc))
					     ((or (string? (car lst)) (char? (car lst)))
					      (loop2 (cdr lst) (cons (car lst) next-string) acc))
					     (else
					      (loop2 (cdr lst)
						     '()
						     `(cons ,(car lst)
							    (cons ,(##sys#print-to-string next-string) ,acc))))))) ]
				 [else (loop (cons #\newline (cons s lst)))] ) ) ]
			[(#\#)
			 (let ([c (##sys#peek-char-0 port)])
			   (case c
			     [(#\#)
			      (##sys#write-char-0 (##sys#read-char-0 port) str)
			      (loop lst) ]
			     [(#\{) (loop (cons (read-escaped-sexp port #t)
						(cons (get/clear-str) lst) ) ) ]
			     [else  (loop (cons (read-escaped-sexp port #f)
						(cons (get/clear-str) lst) ) ) ] ) ) ]
			[else
			 (##sys#write-char-0 c str)
			 (loop lst) ] ) ) ) ) ]
	       [else (##sys#read-error port "unreadable object")] ) ] ) ) ) )


;;; command-line handling


(define argv				; includes program name
  (let ((cache #f)
        (fetch-arg (foreign-lambda* c-string ((scheme-object i))
                     "C_return(C_main_argv[C_unfix(i)]);")))
    (lambda ()
      (unless cache
        (set! cache (do ((i (fx- main_argc 1) (fx- i 1))
                         (v '() (cons (fetch-arg i) v)))
                        ((fx< i 0) v))))
      cache)))

(define program-name
  (make-parameter
   (if (null? (argv))
       "<unknown>" ; may happen if embedded in C application
       (car (argv)))
   (lambda (x)
     (##sys#check-string x 'program-name)
     x) ) )

(define command-line-arguments
  (make-parameter
   (let ([args (argv)])
     (if (pair? args)
	 (let loop ([args (##sys#slot args 1)])
	   (if (null? args)
	       '()
	       (let ([arg (##sys#slot args 0)]
		     [r (##sys#slot args 1)] )
		 (if (and (fx>= (##sys#size arg) 3)
			  (string=? "-:" (##sys#substring arg 0 2)))
		     (loop r)
		     (cons arg (loop r)) ) ) ) )
	 args) )
   (lambda (x)
     (##sys#check-list x 'command-line-arguments)
     x) ) )


;;; Finalization:

(define-foreign-variable _max_pending_finalizers int "C_max_pending_finalizers")

(define ##sys#pending-finalizers 
  (##sys#make-vector (fx+ (fx* 2 _max_pending_finalizers) 1) (##core#undefined)) )

(##sys#setislot ##sys#pending-finalizers 0 0)

(define ##sys#set-finalizer! (##core#primitive "C_register_finalizer"))

(define set-finalizer! 
  (let ((string-append string-append))
    (lambda (x y)
      (when (fx>= (##sys#fudge 26) _max_pending_finalizers)
	(cond ((##core#inline "C_resize_pending_finalizers" (fx* 2 _max_pending_finalizers))
	       (set! ##sys#pending-finalizers
		 (##sys#vector-resize ##sys#pending-finalizers
				      (fx+ (fx* 2 _max_pending_finalizers) 1)
				      (##core#undefined)))
	       (when (##sys#fudge 13)
		 (##sys#print 
		  (string-append
		   "[debug] too many finalizers (" 
		   (##sys#number->string (##sys#fudge 26))
		   "), resized max finalizers to "
		   (##sys#number->string _max_pending_finalizers)
		   "\n")
		  #f ##sys#standard-error)))
	      (else
	       (when (##sys#fudge 13)
		 (##sys#print 
		  (string-append
		   "[debug] too many finalizers ("
		   (##sys#fudge 26)
		   "), forcing ...\n")
		  #f ##sys#standard-error))
	       (##sys#force-finalizers) ) ) )
      (##sys#set-finalizer! x y) ) ) )

(define ##sys#run-pending-finalizers
  (let ((vector-fill! vector-fill!)
	(string-append string-append)
	(working #f) )
    (lambda (state)
      (unless working
	(set! working #t)
	(let* ((c (##sys#slot ##sys#pending-finalizers 0)) )
	  (when (##sys#fudge 13)
	    (##sys#print 
	     (string-append "[debug] running " (##sys#number->string c)
			    " finalizer(s) (" (##sys#number->string (##sys#fudge 26))
			    " live, " (##sys#number->string (##sys#fudge 27))
			    " allocated) ...\n")
	     #f ##sys#standard-error))
	  (do ([i 0 (fx+ i 1)])
	      ((fx>= i c))
	    (let ([i2 (fx+ 1 (fx* i 2))])
	      (handle-exceptions ex
		  (##sys#show-exception-warning ex "in finalizer" #f)
		((##sys#slot ##sys#pending-finalizers (fx+ i2 1))
		 (##sys#slot ##sys#pending-finalizers i2)) ) ))
	  (vector-fill! ##sys#pending-finalizers (##core#undefined))
	  (##sys#setislot ##sys#pending-finalizers 0 0) 
	  (set! working #f) ) )
      (cond ((not state))
	    ((procedure? state) (state))
	    (state (##sys#context-switch state) ) ) ) ))

(define (##sys#force-finalizers)
  (let loop ()
    (let ([n (##sys#gc)])
      (cond ((fx> (##sys#slot ##sys#pending-finalizers 0) 0)
	     (##sys#run-pending-finalizers #f)
	     (loop) )
	    (else n) ) ) ))

(define (gc . arg)
  (let ((a (and (pair? arg) (car arg))))
    (if a
	(##sys#force-finalizers)
	(apply ##sys#gc arg) ) ) )


;;; Auxilliary definitions for safe use in quasiquoted forms and evaluated code:

(define ##sys#list->vector list->vector)
(define ##sys#list list)
(define ##sys#length length)
(define ##sys#cons cons)
(define ##sys#append append)
(define ##sys#vector vector)
(define ##sys#apply apply)
(define ##sys#values values)
(define ##sys#equal? equal?)
(define ##sys#car car)
(define ##sys#cdr cdr)
(define ##sys#pair? pair?)
(define ##sys#vector? vector?)
(define ##sys#vector->list vector->list)
(define ##sys#vector-length vector-length)
(define ##sys#vector-ref vector-ref)
(define ##sys#>= >=)
(define ##sys#= =)
(define ##sys#+ +)
(define ##sys#eq? eq?)
(define ##sys#eqv? eqv?)
(define ##sys#list? list?)
(define ##sys#null? null?)
(define ##sys#map-n map)
(define ##sys#list-ref list-ref)


;;; Promises:

(define (##sys#make-promise proc)
  (##sys#make-structure 'promise proc))

(define (promise? x)
  (##sys#structure? x 'promise) )

(define (make-promise obj)
  (if (promise? obj) obj
      (##sys#make-promise (lambda () obj))))

;;; Internal string-reader:

(define ##sys#read-from-string 
  (lambda (s)
    (let ([i (open-input-string s)])
      (read i) ) ) )


;;; Convenient error printing:

(define print-error-message
  (let* ([display display]
	 [newline newline] 
	 [write write]
	 [string-append string-append]
	 [errmsg (condition-property-accessor 'exn 'message #f)]
	 [errloc (condition-property-accessor 'exn 'location #f)]
	 [errargs (condition-property-accessor 'exn 'arguments #f)] 
	 [writeargs
	  (lambda (args port)
	    (##sys#for-each 
	     (lambda (x)
	       (##sys#with-print-length-limit 80 (lambda () (write x port)))
	       (newline port) )
	     args) ) ] )
    (lambda (ex . args)
      (let-optionals args ([port ##sys#standard-output]
			   [header "Error"] )
	(##sys#check-output-port port #t 'print-error-message)
	(newline port)
	(display header port)
	(cond [(and (not (##sys#immediate? ex)) (eq? 'condition (##sys#slot ex 0)))
	       (cond ((errmsg ex) =>
		      (lambda (msg)
			(display ": " port)
			(let ([loc (errloc ex)])
			  (when (and loc (symbol? loc))
			    (display (string-append "(" (##sys#symbol->qualified-string loc) ") ") port) ) )
			(display msg port) ) )
		     (else 
		      (let ((kinds (##sys#slot ex 1)))
			(if (equal? '(user-interrupt) kinds)
			    (display ": *** user interrupt ***" port)
			    (begin
			      (display ": <condition> " port)
			      (display (##sys#slot ex 1) port) ) ) ) ) )
	       (and-let* ([args (errargs ex)])
		 (if (fx= 1 (length args))
		     (begin
		       (display ": " port)
		       (writeargs args port) )
		     (begin
		       (newline port)
		       (writeargs args port) ) ) ) ]
	      [(string? ex)
	       (display ": " port)
	       (display ex port)
	       (newline port) ]
	      [else
	       (display ": uncaught exception: " port)
	       (writeargs (list ex) port) ] ) ) ) ) )


;;; Show exception message and backtrace as warning
;;; (used for threads and finalizers)

(define ##sys#show-exception-warning
  (let ((print-error-message print-error-message)
	(display display)
	(write-char write-char)
	(print-call-chain print-call-chain)
	(open-output-string open-output-string)
	(get-output-string get-output-string) )
    (lambda (exn cause #!optional (thread ##sys#current-thread))
      (when ##sys#warnings-enabled
	(let ((o (open-output-string)))
	  (display "Warning" o)
	  (when thread
	    (display " (" o)
	    (display thread o)
	    (write-char #\) o))
	  (display ": " o)
	  (display cause o)
	  (print-error-message exn ##sys#standard-error (get-output-string o))
	  (print-call-chain ##sys#standard-error 0 thread) ) ))))


;;; We need this here so `location' works:
 
(define (##sys#make-locative obj index weak? loc)
  (cond [(##sys#immediate? obj)
	 (##sys#signal-hook #:type-error loc "locative cannot refer to immediate object" obj) ]
	[(or (vector? obj) (pair? obj))
	 (##sys#check-range index 0 (##sys#size obj) loc)
	 (##core#inline_allocate ("C_a_i_make_locative" 5) 0 obj index weak?) ]
	#;[(symbol? obj)
	 (##sys#check-range index 0 1 loc)
	 (##core#inline_allocate ("C_a_i_make_locative" 5) 0 obj index weak?) ]
	[(and (##core#inline "C_blockp" obj)
	      (##core#inline "C_bytevectorp" obj) )
	 (##sys#check-range index 0 (##sys#size obj) loc)
	 (##core#inline_allocate ("C_a_i_make_locative" 5) 2 obj index weak?) ]
	[(##sys#generic-structure? obj)
	 (case (##sys#slot obj 0)
	   [(u8vector)
	    (let ([v (##sys#slot obj 1)])
	      (##sys#check-range index 0 (##sys#size v) loc)
	      (##core#inline_allocate ("C_a_i_make_locative" 5) 2 v index weak?))  ]
	   [(s8vector)
	    (let ([v (##sys#slot obj 1)])
	      (##sys#check-range index 0 (##sys#size v) loc)
	      (##core#inline_allocate ("C_a_i_make_locative" 5) 3 v index weak?) ) ]
	   [(u16vector)
	    (let ([v (##sys#slot obj 1)])
	      (##sys#check-range index 0 (##sys#size v) loc)
	      (##core#inline_allocate ("C_a_i_make_locative" 5) 4 v index weak?) ) ]
	   [(s16vector)
	    (let ([v (##sys#slot obj 1)])
	      (##sys#check-range index 0 (##sys#size v) loc)
	      (##core#inline_allocate ("C_a_i_make_locative" 5) 5 v index weak?) ) ]
	   [(u32vector)
	    (let ([v (##sys#slot obj 1)])
	      (##sys#check-range index 0 (##sys#size v) loc)
	      (##core#inline_allocate ("C_a_i_make_locative" 5) 6 v index weak?) ) ]
	   [(s32vector)
	    (let ([v (##sys#slot obj 1)])
	      (##sys#check-range index 0 (##sys#size v) loc)
	      (##core#inline_allocate ("C_a_i_make_locative" 5) 7 v index weak?) ) ]
	   [(f32vector)
	    (let ([v (##sys#slot obj 1)])
	      (##sys#check-range index 0 (##sys#size v) loc)
	      (##core#inline_allocate ("C_a_i_make_locative" 5) 8 v index weak?) ) ]
	   [(f64vector)
	    (let ([v (##sys#slot obj 1)])
	      (##sys#check-range index 0 (##sys#size v) loc)
	      (##core#inline_allocate ("C_a_i_make_locative" 5) 9 v index weak?) ) ]
	   ;;XXX pointer-vector currently not supported
	   [else 
	    (##sys#check-range index 0 (fx- (##sys#size obj) 1) loc)
	    (##core#inline_allocate ("C_a_i_make_locative" 5) 0 obj (fx+ index 1) weak?) ] ) ]
	[(string? obj)
	 (##sys#check-range index 0 (##sys#size obj) loc)
	 (##core#inline_allocate ("C_a_i_make_locative" 5) 1 obj index weak?) ] 
	[else
	 (##sys#signal-hook
	  #:type-error loc
	  "bad argument type - locative cannot refer to objects of this type" 
	  obj) ] ) )


;;; More memory info

(define (memory-statistics)
  (let* ([free (##sys#gc #t)]
	 [info (##sys#memory-info)] 
	 [hsize (##sys#slot info 0)] )
    (vector hsize (fx- hsize free) (##sys#slot info 1)) ) )


;;; Property lists

(define (##sys#put! sym prop val)
  (##sys#check-symbol sym 'put!)
  (##core#inline_allocate ("C_a_i_putprop" 8) sym prop val) )

(define put! ##sys#put!)

(define (##sys#get sym prop #!optional default)
  (##sys#check-symbol sym 'get)
  (##core#inline "C_i_getprop" sym prop default))

(define get (getter-with-setter ##sys#get put! "(get sym prop . default)"))

(define (remprop! sym prop)
  (##sys#check-symbol sym 'remprop!)
  (let loop ((plist (##sys#slot sym 2)) (ptl #f))
    (and (not (null? plist))
	 (let* ((tl (##sys#slot plist 1))
		(nxt (##sys#slot tl 1)))
	   (or (and (eq? (##sys#slot plist 0) prop)
		    (begin
		      (if ptl
			  (##sys#setslot ptl 1 nxt)
			  (##sys#setslot sym 2 nxt) )
		      #t ) )
	       (loop nxt tl) ) ) ) ) )

(define symbol-plist
  (getter-with-setter
   (lambda (sym)
     (##sys#check-symbol sym 'symbol-plist)
     (##sys#slot sym 2) )
   (lambda (sym lst)
     (##sys#check-symbol sym 'symbol-plist)
     (##sys#check-list lst 'symbol-plist/setter)
     (if (##core#inline "C_i_fixnumevenp" (##core#inline "C_i_length" lst))
	 (##sys#setslot sym 2 lst) 
	 (##sys#signal-hook
	  #:type-error "property-list must be of even length"
	  lst sym)))
   "(symbol-plist sym)"))

(define (get-properties sym props)
  (##sys#check-symbol sym 'get-properties)
  (when (symbol? props)
    (set! props (list props)) )
  (##sys#check-list props 'get-properties)
  (let loop ((plist (##sys#slot sym 2)))
    (if (null? plist)
	(values #f #f #f)
	(let* ((prop (##sys#slot plist 0))
	       (tl (##sys#slot plist 1))
	       (nxt (##sys#slot tl 1)))
	  (if (memq prop props)
	      (values prop (##sys#slot tl 0) nxt)
	      (loop nxt) ) ) ) ) )


;;; Print timing information (support for "time" macro):

(define (##sys#display-times info)
  (define (pstr str) (##sys#print str #f ##sys#standard-error))
  (define (pchr chr) (##sys#write-char-0 chr ##sys#standard-error))
  (define (pnum num)
    (##sys#print (if (zero? num) "0" (##sys#number->string num)) #f ##sys#standard-error))
  (##sys#flush-output ##sys#standard-output)
  (pnum (##sys#slot info 0))
  (pstr "s CPU time")
  (let ((gctime (##sys#slot info 1)))
    (when (> gctime 0)
      (pstr ", ")
      (pnum gctime)
      (pstr "s GC time (major)")))
  (let ((mut (##sys#slot info 2))
	(umut (##sys#slot info 3)))
    (when (fx> mut 0)
      (pstr ", ")
      (pnum mut)
      (pchr #\/)
      (pnum umut)
      (pstr " mutations (total/tracked)")))
  (let ((minor (##sys#slot info 4))
	(major (##sys#slot info 5)))
    (when (or (fx> minor 0) (fx> major 0))
      (pstr ", ")
      (pnum major)
      (pchr #\/)
      (pnum minor)
      (pstr " GCs (major/minor)")))
  (##sys#write-char-0 #\newline ##sys#standard-error)
  (##sys#flush-output ##sys#standard-error))


;;; Dump heap state to stderr:

(define ##sys#dump-heap-state (##core#primitive "C_dump_heap_state"))
(define ##sys#filter-heap-objects (##core#primitive "C_filter_heap_objects"))


;;; fast folds with correct argument order

(define (foldl f z lst)
  (##sys#check-list lst 'foldl)
  (let loop ((lst lst) (z z))
    (if (not (pair? lst))
	z
	(loop (##sys#slot lst 1) (f z (##sys#slot lst 0))))))

(define (foldr f z lst)
  (##sys#check-list lst 'foldr)
  (let loop ((lst lst))
    (if (not (pair? lst))
	z
	(f (##sys#slot lst 0) (loop (##sys#slot lst 1))))))


;; Some list-operations, used by the syntax-rules implementation, inside module
;; implementation and in csi

(define (##sys#del x lst tst)
  (let loop ((lst lst))
    (if (null? lst)
	'()
	(let ((y (car lst)))
	  (if (tst x y)
	      (cdr lst)
	      (cons y (loop (cdr lst))) ) ) ) ) )

(define (##sys#nodups lis elt=)
  (let recur ((lis lis))
    (if (null? lis) lis
	(let* ((x (car lis))
	       (tail (cdr lis))
	       (new-tail (recur (##sys#del x tail elt=))))
	  (if (eq? tail new-tail) lis (cons x new-tail))))))

;; contributed by Peter Bex
(define (##sys#drop-right input temp)
  ;;XXX use unsafe accessors
  (let loop ((len (length input))
	     (input input))
    (cond
     ((> len temp)
      (cons (car input)
	    (loop (- len 1) (cdr input))))
     (else '()))))

(define (##sys#take-right input temp)
  ;;XXX use unsafe accessors
  (let loop ((len (length input))
	     (input input))
    (cond
     ((> len temp)
      (loop (- len 1) (cdr input)))
     (else input))))

