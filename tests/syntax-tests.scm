;;;; syntax-tests.scm - various macro tests


(use extras)


(define-syntax t
  (syntax-rules ()
    ((_ r x)
     (let ((tmp x))
       (if (not (equal? r tmp))
	   (error "test failed" r tmp 'x)
	   (pp tmp))))))

(define-syntax f
  (syntax-rules ()
    ((_ x)
     (handle-exceptions ex (void)
       x
       (error "test returned, but should have failed" 'x) ))))

(t 3 3)

(f abc)

(f (t 3 4))

;; test syntax-rules

(define-syntax test
  (syntax-rules ()
    ((_ x form)
     (let ((tmp x))
       (if (number? tmp)
	   form
	   (error "not a number" tmp))))))

(t 100 (test 2 100))

;; some basic contrived testing

(define (fac n)
  (let-syntax ((m1 (lambda (n r c) 
		     (pp `(M1: ,n))
		     (list (r 'sub1) (cadr n)))))
    (define (sub1 . _)			; ref. transp.? (should not be used here)
      (error "argh.") )
    #;(print "fac: " n)		  
    (if (test n (zero? n))
	1
	(* n (fac (m1 n))))))

(t 3628800 (fac 10))

;; letrec-syntax

(t 34
(letrec-syntax ((foo (syntax-rules () ((_ x) (bar x))))
		(bar (syntax-rules () ((_ x) (+ x 1)))))
  (foo 33))
)

;; from r5rs:

(t 45
(let ((x 5))
  (define foo (lambda (y) (bar x y)))
  (define bar (lambda (a b) (+ (* a b) a)))
  (foo (+ x 3)))
)

;; an error, according to r5rs - here it treats foo as defining a toplevel binding

#;(let-syntax
  ((foo (syntax-rules ()
          ((foo (proc args ...) body ...)
           (define proc
             (lambda (args ...)
               body ...))))))
  (let ((x 3))
    (foo (plus x y) (+ x y))
    (define foo x)
    (print (plus foo x))))

(t 'now
(let-syntax ((when (syntax-rules ()
                     ((when test stmt1 stmt2 ...)
                      (if test
                          (begin stmt1
                                 stmt2 ...))))))
  (let ((if #t))
    (when if (set! if 'now))
    if))
)

(t 'outer
(let ((x 'outer))
  (let-syntax ((m (syntax-rules () ((m) x))))
    (let ((x 'inner))
      (m))))       
)

(t 7
(letrec-syntax
  ((my-or (syntax-rules ()
            ((my-or) #f)
            ((my-or e) e)
            ((my-or e1 e2 ...)
             (let ((temp e1))
               (if temp
                   temp
                   (my-or e2 ...)))))))
  (let ((x #f)
        (y 7)
        (temp 8)
        (let odd?)
        (if even?))
    (my-or x
           (let temp)
           (if y)
           y)))
)

(define-syntax kw
  (syntax-rules (baz)
    ((_ baz) "baz")
    ((_ any) "no baz")))

(t "baz" (kw baz))
(t "no baz" (kw xxx))

(let ((baz 100))
  (t "no baz" (kw baz)))

(t 'ok
(let ((=> #f))
  (cond (#t => 'ok)))
)

(t '(3 4)
(let ((foo 3))
  (let-syntax ((bar (syntax-rules () ((_ x) (list foo x)))))
    (let ((foo 4))
      (bar foo))))
)

;;; alternative ellipsis test

(define-syntax foo
  (syntax-rules 
      ___ () 
      ((_ vals ___) (list '... vals ___))))

(t '(... 1 2 3)
   (foo 1 2 3)
)

(define-syntax defalias
  (syntax-rules ___ ()
    ((_ new old)
     (define-syntax new
       (syntax-rules ()
	 ((_ args ...) (old args ...)))))))

(defalias inc add1)

(t 3 (inc 2))

;;;

(define-syntax usetmp
  (syntax-rules ()
    ((_ var) 
     (list var))))

(define-syntax withtmp
  (syntax-rules ()
    ((_ val exp)
     (let ((tmp val))
       (exp tmp)))))

(t '(99)
   (withtmp 99 usetmp)
)

(t 7
(letrec-syntax
    ((my-or (syntax-rules ()
	      ((my-or) #f)
	      ((my-or e) e)
	      ((my-or e1 e2 ...)
	       (let ((temp e1))
		 (if temp
		     temp
		     (my-or e2 ...)))))))
  (let ((x #f)
        (y 7)
        (temp 8)
        (let odd?)
        (if even?))
    (my-or x
           (let temp)
           (if y)
           y)))
)

(define-syntax foo
  (syntax-rules ()
    ((_ #(a ...)) (list a ...))))

(t '(1 2 3)
   (foo #(1 2 3))
)


(define-syntax loop
  (lambda (x r c)
    (let ((body (cdr x)))
      `(,(r 'call/cc)
	(,(r 'lambda) (exit)
	 (,(r 'let) ,(r 'f) () ,@body (,(r 'f))))))))

(let ((n 10))
  (loop
   (print* n " ") 
   (set! n (sub1 n))
   (when (zero? n) (exit #f)))
  (newline))

(define-syntax while0
  (syntax-rules ()
    ((_ t b ...)
     (loop (if (not t) (exit #f)) 
	   b ...))))

(f (while0 #f (print "no.")))

(define-syntax while
  (lambda (x r c)
    `(,(r 'loop) 
      (,(r 'if) (,(r 'not) ,(cadr x)) (exit #f))
      ,@(cddr x))))

(let ((n 10))
  (while (not (zero? n))
	 (print* n " ")
	 (set! n (- n 1)) )
  (newline))

;;; found by Jim Ursetto

(let ((lambda 0)) (define (foo) 1) (foo))


;;; define-macro implementation (only usable in a module-free environment)

(define-syntax define-macro
  (syntax-rules ()
    ((_ (name . llist) body ...)
     (define-syntax name
       (lambda (x r c)
	 (apply (lambda llist body ...) (strip-syntax (cdr x))))))))

(define-macro (loop . body)
  (let ((loop (gensym)))
    `(call/cc
      (lambda (exit)
	(let ,loop () ,@body (,loop))))))

(let ((i 1))
  (loop (when (> i 10) (exit #f))
	(print* i " ")
	(set! i (add1 i))))
(newline)


;;;; exported macro would override original name (fixed in rev. 13351)

(module xfoo (xbaz xbar)
  (import scheme)
  (define-syntax xbar
    (syntax-rules ()
      ((_ 1) (xbaz))
      ((_) 'xbar)))
  (define-syntax xbaz
    (syntax-rules ()
      ((_ 1) (xbar))
      ((_) 'xbazz))))

(import xfoo)
(assert (eq? 'xbar (xbaz 1)))
(assert (eq? 'xbazz (xbar 1)))
(assert (eq? 'xbar (xbar)))


;;;; ellipsis pattern element wasn't matched - reported by Jim Ursetto (fixed rev. 13582)

(define-syntax foo
  (syntax-rules ()
    ((_ (a b) ...)
     (list '(a b) ...))
    ((_ a ...)
     (list '(a) ...))))

(assert (equal? (foo (1 2) (3 4) (5 6)) '((1 2) (3 4) (5 6))))
(assert (equal? (foo (1 2) (3) (5 6)) '(((1 2)) ((3)) ((5 6))))) ; failed
(assert (equal? (foo 1) '((1))))


;;; incorrect lookup for keyword variables in DSSSL llists

(module broken-keyword-var ()
  (import scheme chicken)
  ((lambda (#!key string) (assert (not string))))) ; refered to R5RS `string'


;;; compiler didn't resolve expansion into local variable
;;; (reported by Alex Shinn, #15)

(module unresolve-local (foo)
  (import scheme)
  (define (foo)
    (let ((qux 3))
      (let-syntax ((bar (syntax-rules () ((bar) qux))))
	(bar))))

  (display (foo))
  (newline)
)


;;; incorrect expansion when assigning to something marked '##core#primitive (rev. 14613)

(define x 99)

(module primitive-assign ()
  (import scheme chicken)
  (let ((x 100)) (set! x 20) (assert (= x 20)))
  (set! setter 123))

(assert (= x 99))
(assert (= 123 setter))


;;; prefixed import from `chicken' module with indirect reference to imported syntax
;;; (reported by Jack Trades)

(module prefixed-self-reference1 (a b c)
  (import scheme (prefix chicken c:))
  (c:define-values (a b c) (values 1 2 3)) )

(module prefixed-self-reference2 ()
  (import scheme (prefix chicken c:))
  (c:define-values (a b c) (values 1 2 3))
  (c:print "ok")
  (c:condition-case 
   (c:abort "ugh")
   (ex () (c:print "caught"))))

(module prefixed-self-reference3 (a)
  (import (prefix scheme s.) (prefix chicken c.))
  (s.define (a x y)
	    (c.condition-case (s.+ x y) ((exn) "not numbers")))
  )

(module prefixed-self-reference4 (a)
  (import (prefix scheme s.))
  (s.define (a x y) (s.and x y)))


;;; canonicalization of body captures 'begin (reported by Abdulaziz Ghuloum)

(let ((begin (lambda (x y) (bomb)))) 1 2)


;;; redefinition of defining forms

(module m0001 (foo bar)
  (import (prefix scheme s:))
  (s:define-syntax foo (syntax-rules () ((_ x) (s:list x))))
  (s:define bar 99))

(module m0002 ()
  (import scheme m0001 extras)
  (pp (foo bar)))


;;; renaming of arbitrary structures

(module m1 (s1 s2)

  (import scheme)

  (define-syntax s1 (syntax-rules () ((_ x) (list x))))

  (define-syntax s2
    (lambda (x r c)
      (r `(vector (s1 ,(cadr x)))))) )	; without renaming the local version of `s1'
					; below will be captured 

(import m1)

(let-syntax ((s1 (syntax-rules () ((_ x) x))))
  (assert (equal? '#((99)) (s2 99))))


;;; local definitions

(define-syntax s2
  (syntax-rules ()
    ((_) 1)))

(define (f1) 3)
(define v1 9)
(define v2 10)

(let ()
  (define-syntax s2
    (syntax-rules ()
      ((_) 2)))
  42
  (define-values (v1 v2) (values 1 2))
  43
  (define (f1) 4)
  (define ((f2)) 4)
  (assert (= 4 (f1)))
  (assert (= 4 ((f2))))
  (assert (= 2 (s2)))
  (assert (= 1 v1))
  (assert (= 2 v2)))

(assert (= 1 (s2)))
(assert (= 3 (f1)))
(assert (= 9 v1))
(assert (= 10 v2))


;;; redefining definition forms (disabled, since we can not catch this error easily)

#|
(module m0a () (import chicken) (reexport (only scheme define)))
(module m0b () (import chicken) (reexport (only scheme define-syntax)))

(module m1 ()
(import (prefix scheme s:) (prefix m0b m:))
;(s:define m:define 1)
(s:define-syntax s:define-syntax (syntax-rules ()))
)
|#


;;; renaming of keyword argument (#277)

(define-syntax foo1
  (syntax-rules ()
    ((_ procname)
     (define (procname #!key (who "world"))
       (string-append "hello, " who)))))

(foo1 bar)

(assert (string=? "hello, XXX" (bar who: "XXX")))


;;; import not seen, if explicitly exported and renamed:

#|
(module foo ((bar baz))
(import scheme chicken)

(define (baz x)
  (print x))

(define-syntax bar
  (syntax-rules ()
    ((_ x) (baz x))))

)

(import (prefix foo f:))
(f:bar 1)
|#
