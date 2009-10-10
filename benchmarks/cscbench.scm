;;;; cscbench - Compile and run benchmarks - felix -*- Scheme -*-
;
; - Usage: cscbench [-debug] [-cc=<path>] [-csc=<path>] [-chicken=<path>] OPTION ...

(require-extension srfi-1 utils posix regex)

(define ignored-files '("cscbench.scm" "cscbench.scm~"))
(define flonum-files '("fft" "maze" "nbody"))
(define cc "gcc")
(define chicken "chicken")
(define csc "csc")

(define +chicken-format+ 
  "~A ~A -quiet -no-warnings -heap-size 16m -output-file tmpfile.c ~A ~A -debug xopi 2>&1 >>bench.log")

(define +cc-format+
  (cond-expand
    (macos      "~a ~a -s -I.. tmpfile.c -o tmpfile ../lib~achicken.a -lm")
    (else       "~a ~a -I.. tmpfile.c -o tmpfile ../lib~achicken.a -lm") ) )

(define (abort-run) #f)

(define run
  (let ([secrx (regexp "^ *([-.+e0-9]*(\\.[0-9]*)?) seconds elapsed$")])
    (lambda ()
      (system* "./tmpfile >tmpfile.out")
      (with-input-from-file "tmpfile.out"
        (lambda ()
          (let loop ([line (read-line)])
            (if (eof-object? line) 
                (abort-run)
                (let ([m (string-match secrx line)])
                  (if m
                      (string->number (second m)) 
                      (loop (read-line)) ) ) ) ) ) ) ) ) )

(define (display-l str len pad)
  (let ([slen (string-length str)])
    (display (substring str 0 (min slen len)))
    (display (make-string (max 0 (- len slen)) pad)) ) )

(define (display-r str len pad)
  (let ([slen (string-length str)])
    (display (make-string (max 0 (- len slen)) pad))
    (display (substring str 0 (min slen len))) ) )

(define display-f-4.3
  (let ([florx (regexp "^([-+e0-9]*)(\\.([0-9]*))?$")])
    (lambda (n)
      (let* ([m (string-match florx (number->string n))]
	     [is (second m)]
	     [fs (fourth m)] )
        (display-r is 4 #\space)
        (display #\.)
        (display-r (or fs "0") 3 #\0) ) ) ) )

(define (display-size n)
  (display-r 
   (string-append (number->string (quotient n 1024)) "k") 
   10 #\space))

(define (compile-and-run file decls options coptions unsafe)
  (system* +chicken-format+ chicken file decls options)
  (system* +cc-format+ cc coptions (if unsafe "u" ""))
  (let ((time (call-with-current-continuation
	       (lambda (abort)
		 (set! abort-run (cut abort #f))
		 (let ((runs
			(butlast
			 (cdr 
			  (sort 
			   (map (lambda _ (run)) (iota 5))
			   <)))))
		   (/ (apply + runs) 3)))))
	(size (file-size "tmpfile")))
    (display #\space)
    (cond (time
            (display-f-4.3 time)
            (values time size))
          (else
            (display "FAILED")
            (values 9999.9 size)))))

(define (dflush x)
  (display x)
  (flush-output) )

(define (main options)
  (call/cc 
   (lambda (return)
     (let loop ((opts options))
       (cond ((null? opts) (return #f))
	     ((string=? "-debug" (car opts)) 
	      (set! system*
		(let ([system* system*])
		  (lambda args
		    (let ([s (apply sprintf args)])
		      (printf "system: ~A~%" s)
		      (system* s) ) ) ) ) )
	     ((string-match "-cc=(.*)" (car opts)) =>
	      (lambda (m) (set! cc (second m))))
	     ((string-match "-csc=(.*)" (car opts)) =>
	      (lambda (m) (set! csc (second m))))
	     ((string-match "-chicken=(.*)" (car opts)) =>
	      (lambda (m) (set! chicken (second m))))
	     (else
	      (set! options opts)
	      (return #f)))
       (loop (cdr opts)))))
  (set! cc (string-trim-both (with-input-from-pipe "csc -cc-name" read-line)))
  (delete-file* "tmpfile.scm")
  (delete-file* "bench.log")
  (system* "~A -version" chicken)
  (dflush "\nCC:\n")
  (if (eq? (build-platform) 'sun)
      (system (conc cc " -V"))
      (system* "~A -v" cc) )
  (dflush "\nCFLAGS:\n")
  (system* "echo `~a -cflags`" csc)
  (display "\nRunning benchmarks ...\n\n  (averaging over 5 runs, dropping highest and lowest, binaries are statically linked and stripped,\n")
  (display "   compiler log will be written to \"bench.log\")\n")
  (display "\n                     (runtime)                                  (code size)\n")
  (display "\n                     base       fast     unsafe        max      base      fast    unsafe       max")
  (display "\n                  ----------------------------------------------------------------------------------\n")
  (let ((sum-base 0.0)
	(sum-fast 0.0)
        (sum-unsafe 0.0)
        (sum-max 0.0)
	(size-base 0)
	(size-fast 0)
	(size-unsafe 0)
	(size-max 0))
    (for-each
     (lambda (file)
       (let* ([name (pathname-file file)]
	      [options (string-intersperse options " ")] 
	      (t 0))
	 (display-l name 16 #\space)
	 (flush-output)
	 (set!-values 
	  (t size-base)
	  (compile-and-run		; base
	   file
	   "-debug-level 0 -optimize-level 1" 
	   options "" #f))
	 (set! sum-base (+ sum-base t))
	 (dflush "  ")
	 (set!-values 
	  (t size-fast)
	  (compile-and-run		; fast but safe
	   file
	   "-debug-level 0 -optimize-level 3 -lambda-lift" 
	   options "" #f))
	 (set! sum-fast (+ sum-fast t))
	 (dflush "  ")
	 (set!-values
	  (t size-unsafe)
	  (compile-and-run 		; fast and unsafe
	   file
	   "-debug-level 0 -optimize-level 4 -block -disable-interrupts -lambda-lift" 
	   options "" #t))
	 (set! sum-unsafe (+ sum-unsafe t))
	 (dflush "  ")
	 (cond ((member name flonum-files)
		(display "         "))
	       (else
		(set!-values
		 (t size-max)
		 (compile-and-run file "-benchmark-mode" options "" #t) ) ; maximal speed
		(set! sum-max (+ sum-max t))))
	 (display-size size-base)
	 (display-size size-fast)
	 (display-size size-unsafe)
	 (display-size size-max)
	 (newline)
	 (flush-output)))
     (lset-difference string=? (sort (glob "*.scm") string<?) ignored-files))
    (display "\nTOTAL            ")
    (display-f-4.3 sum-base)
    (display "   ")
    (display-f-4.3 sum-fast)
    (display "   ")
    (display-f-4.3 sum-unsafe)
    (display "   ")
    (display-f-4.3 sum-max)
    (newline)
    0))

(main (command-line-arguments))
