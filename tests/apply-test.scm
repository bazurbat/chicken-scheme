(require-extension srfi-1)

(define max-argcount ##sys#apply-argument-limit)

(begin-for-syntax
 (define max-direct-argcount
   (cond-expand
     ;; This depends the temp stack's size (as does max-argcount w/ manyargs).
     ;; We can't use the foreign value for C_TEMPORARY_STACK_SIZE here because
     ;; we're evaluating this in the compiler, not compiling it (confused yet?)
     (compiling 2048)
     ;; But in interpreted mode, everything boils down to "apply", so if no apply
     ;; hack is available, we're more limited in csi than in csc.
     (else ##sys#apply-argument-limit))))

(when (feature? 'manyargs) (print "many arguments supported."))

(define (foo . args)
  (when (pair? args)
    (assert (= (length args) (last args)))))

(printf "testing 'apply' with 0..~A (maximum apply argument count)...\n" max-argcount)
(do ((i 0 (add1 i)))
    ((>= i max-argcount))
  (apply foo (iota i 1)))

(let-syntax
    ((invoke-directly
      (ir-macro-transformer
       (lambda (i r c)
         `(begin
            (print "invoking directly with 0..50...")
            ;; Lowest edge cases
            ,@(list-tabulate 50 (lambda (i) `(foo ,@(iota i 1))))
            (printf "invoking directly with ~A..~A (maximum ~A direct argument count)...\n"
              ,(- max-direct-argcount 50) ,max-direct-argcount
              (cond-expand (compiling "compiled") (else "interpreted")))
            ;; Highest edge cases
            ,@(list-tabulate
               50 (lambda (i) `(foo ,@(iota (- max-direct-argcount i) 1)))))))))
  (print "If this segfaults on x86-64, try updating GCC (4.5 has a code-generation bug):")
  (invoke-directly))

(define-syntax assert-argcount-error
  (syntax-rules ()
    ((_ expr)
     (assert (condition-case (begin expr #f)
               ((exn runtime limit) 'a-okay))))))

(print "testing 'apply' can detect calls of too many arguments...")
(assert-argcount-error (apply foo (iota (add1 max-argcount) 1)))

(print "testing direct invocation can detect calls of too many arguments...")
(let-syntax ((invoke-directly-with-too-many-args
              (ir-macro-transformer
               (lambda (i r c)
                 `(assert-argcount-error (foo ,@(iota (add1 max-direct-argcount) 1)))))))
  (invoke-directly-with-too-many-args))
