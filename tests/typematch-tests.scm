;;;; typematch-tests.scm


(use lolevel data-structures)


(define-syntax check
  (syntax-rules ()
    ((_ x not-x t)
     (begin
       (print "check " 't " " 'x)
       (compiler-typecase x
	 (t 'ok))
       (compiler-typecase not-x
	 ((not t) 'ok))))))

(define-syntax checkp
  (syntax-rules ()
    ((_ p x t)
     (let ((tmp x))
       (print "check predicate " 't " " 'p)
       (if (p tmp)
	   (compiler-typecase tmp
	     (t 'ok)))
       (compiler-typecase (##sys#make-structure 'foo)
	 ((not t) 'ok))))))

(define (bar) 42)

(define-syntax m
  (er-macro-transformer
   (lambda (x r c)
     (let ((t1 (cadr x))
	   (t2 (caddr x))
	   (foo1 (gensym 'foo1))
	   (foo2 (gensym 'foo2)))
       `(begin
	  (print ',t1 " = " ',t2)
	  (: ,foo1 (-> ,t1))
	  (: ,foo2 (-> ,t2))
	  (define (,foo1) (bar))
	  (define (,foo2) (bar))
	  (compiler-typecase (,foo1)
	    (,t2 'ok))
	  (print ',t2 " = " ',t1)
	  (compiler-typecase (,foo2)
	    (,t1 'ok)))))))

(define-syntax mx
  (syntax-rules ()
    ((_ t x) 
     (compiler-typecase 
      x
      (t 'ok)))))

(define-syntax mn
  (er-macro-transformer
   (lambda (x r c)
     (let ((t1 (cadr x))
	   (t2 (caddr x))
	   (foo1 (gensym 'foo1))
	   (foo2 (gensym 'foo2)))
       `(begin
	  (print ',t1 " != " ',t2)
	  (: ,foo1 (-> ,t1))
	  (: ,foo2 (-> ,t2))
	  (define (,foo1) (bar))
	  (define (,foo2) (bar))
	  (compiler-typecase (,foo1)
	    (,t2 (bomb))
	    (else 'ok))
	  (print ',t2 " != " ',t1)
	  (compiler-typecase (,foo2)
	    (,t1 (bomb))
	    (else 'ok)))))))

(define-syntax ms
  (er-macro-transformer
   (lambda (x r c)
     (let ((fname (gensym))
	   (fname2 (gensym))
	   (val (cadr x))
	   (nval (caddr x))
	   (type (cadddr x)))
       `(begin
	  (print "specialize " ',type)
	  (: ,fname (,type -> *)
	     ((,type) 'ok)
	     (((not ,type)) 'ok-too))
	  (define (,fname x) 'bomb)
	  (assert (eq? 'ok (,fname ,val)) "did not specialize" ',val ',type)
	  (assert (eq? 'ok-too (,fname ,nval)) "did specialize" ',nval ',type)
	  (: ,fname2 (* -> *)
	     (((not ,type)) 'bomb))
	  (define (,fname2 x) 'ok)
	  (print "specialize not " ',type)
	  (,fname2 ,val))))))


;;;

(check 123 1.2 fixnum)
(check "abc" 1.2 string)
(check 'abc 1.2 symbol)
(check #\x 1.2 char)
(check #t 1.2 boolean)
(check (+ 1 2) 'a number)
(check '(1) 1.2 (list fixnum))
(check '(a) 1.2 (list symbol))
(check (list 1) '(1 . 2) (list fixnum))
(check '(1 . 2) '() pair)
(check + 1.2 procedure)
(check '#(1) 1.2 vector)
(check '() 1 null)
(check (current-input-port) 1.2 input-port)
(check (make-blob 10) 1.2 blob)
(check (address->pointer 0) 1.2 pointer)
(check (make-pointer-vector 1) 1.2 pointer-vector)
(check (make-locative "a") 1.2 locative)
(check (##sys#make-structure 'promise) 1 (struct promise))
(check '(1 . 2.3) '(a) (pair fixnum float))
(check '#(a) 1 (vector symbol))
(check '("ok") 1 (list string))

(ms 123 1.2 fixnum)
(ms "abc" 1.2 string)
(ms 'abc 1.2 symbol)
(ms #\x 1.2 char)
(ms #t 1.2 boolean)
(ms '(1) 1.2 (list fixnum))
(ms '(1 . 2) '() pair)
(ms + 1.2 procedure)
(ms '#(1) 1.2 (vector fixnum))
(ms '() 1 null)
(ms (void) 1.2 undefined)
(ms (current-input-port) 1.2 input-port)
(ms (make-blob 10) 1.2 blob)
(ms (address->pointer 0) 1.2 pointer)
(ms (make-pointer-vector 1) 1.2 pointer-vector)
(ms (make-locative "a") 1.2 locative)
(ms (##sys#make-structure 'promise) 1 (struct promise))
(ms '(1 . 2.3) '(a) (pair fixnum float))
(ms '#(a) 1 (vector symbol))
(ms '(1) "a" (or (list fixnum) symbol))
(ms (list 1) 'a (list fixnum))
(ms '() 'a (or null pair))

(define n 1)

(checkp boolean? #t boolean)
(checkp boolean? #f boolean)
(checkp pair? '(1 . 2) pair)
(checkp null? '() null)
(checkp symbol? 'a symbol)
(checkp number? (+ n) number)
(checkp number? (+ n) number)
(checkp exact? '1 fixnum)
(checkp real? (+ n) number)
(checkp complex? (+ n) number)
(checkp inexact? '1.2 float)
(checkp char? #\a char)
(checkp string? "a" string)
(checkp vector? '#() vector)
(checkp procedure? + procedure)
(checkp blob? (make-blob 1) blob)
(checkp condition? (##sys#make-structure 'condition) (struct condition))
(checkp fixnum? 1 fixnum)
(checkp flonum? 1.2 float)
(checkp input-port? (current-input-port) input-port)
(checkp pointer-vector? (make-pointer-vector 1) pointer-vector)
(checkp pointer? (address->pointer 1) pointer)

(mn (procedure (*) *) (procedure () *))
(m (procedure (#!rest) . *) (procedure (*) . *))
(mn (procedure () *) (procedure () * *))

(mx (forall (a) (procedure (#!rest a) a)) +)
(mx (list fixnum) '(1))


;;; special cases

(let ((x (##sys#make-structure 'foo)))
  (mx (struct foo) x))

(define x 1)

(assert 
 (eq? 'number
      (compiler-typecase (vector-ref '#(1 2 3.4) x)
	(fixnum 'fixnum)
	(float 'float)
	(number 'number))))

(mx float (vector-ref '#(1 2 3.4) 2))
(mx fixnum (vector-ref '#(1 2 3.4) 0))
(mx float (##sys#vector-ref '#(1 2 3.4) 2))
(mx fixnum (##sys#vector-ref '#(1 2 3.4) 0))
(mx (vector fixnum float) (vector 1 2.3))
(mx (list fixnum float) (list 1 2.3))

(: f1 (forall (a) ((list-of a) -> a)))
(define (f1 x) (car x))
(mx fixnum (f1 '(1)))

(: f2 (forall (a) ((list-of a) -> a)))
(define (f2 x) (car x))
(assert
 (eq? 'sf
      (compiler-typecase (f2 (list (if bar 1 'a)))
	(symbol 's)
	(fixnum 'f)
	((or fixnum symbol) 'sf))))

(: f3 (forall (a) ((list-of a) -> a)))
(define f3 car)
(define xxx '(1))

(compiler-typecase (f3 (the (or (vector-of fixnum) (list-of fixnum)) xxx))
  (fixnum 'ok))

(assert
 (eq? 'ok
      (compiler-typecase (list 123)
	((forall (a) (or (vector-of a) (list-of a))) 'ok)
	(else 'not-ok))))

(: f4 (forall (a) ((or fixnum (list-of a)) -> a)))
(define f4 identity)

(compiler-typecase (f4 '(1))
  (fixnum 'ok))

(assert
 (eq? 'ok (compiler-typecase (f4 1)
	    (fixnum 'not-ok)
	    (else 'ok))))

