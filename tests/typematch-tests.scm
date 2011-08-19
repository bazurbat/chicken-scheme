;;;; typematch-tests.scm


(define-syntax check
  (syntax-rules ()
    ((_ x not-x t)
     (begin
       (compiler-typecase x
	 (t 'ok))
       (compiler-typecase not-x
	 ((not t) 'ok))
       (ms t x not-x)))))

(define-syntax checkp
  (syntax-rules ()
    ((_ p x t)
     (let ((tmp x))
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
	  (print t1 " = " t2)
	  (: ,foo1 (-> ,t1))
	  (: ,foo2 (-> ,t2))
	  (define (,foo1) (bar))
	  (define (,foo2) (bar))
	  (compiler-typecase (,foo1)
	    (,t2 'ok))
	  (print t2 " = " t1)
	  (compiler-typecase (,foo2)
	    (,t1 'ok)))))))

(define-syntax mn
  (er-macro-transformer
   (lambda (x r c)
     (let ((t1 (cadr x))
	   (t2 (caddr x))
	   (foo1 (gensym 'foo1))
	   (foo2 (gensym 'foo2)))
       `(begin
	  (print t1 " != " t2)
	  (: ,foo1 (-> ,t1))
	  (: ,foo2 (-> ,t2))
	  (define (,foo1) (bar))
	  (define (,foo2) (bar))
	  (compiler-typecase (,foo1)
	    (,t2 (bomb))
	    (else 'ok))
	  (print t2 " != " t1)
	  (compiler-typecase (,foo2)
	    (,t1 (bomb))
	    (else 'ok)))))))

(define-syntax ms
  (er-macro-transformer
   (lambda (x r c)
     (let ((fname (gensym))
	   (fname2 (gensym))
	   (type (cadr x))
	   (val (caddr x))
	   (nval (cadddr x)))
       `(begin
	  (print "specialize " type)
	  (: ,fname (,type -> *)
	     ((,type) 'ok)
	     (((not ,type)) 'ok-too))
	  (define (,fname x) (bomb))
	  (assert (eq? 'ok (,fname ,val)))
	  (assert (eq? 'ok-too (,fname ,nval)))
	  (: ,fname2 (* -> *)
	     (((not ,type)) (bomb)))
	  (define (,fname2 x) 'ok)
	  (print "specialize not " type)
	  (,fname2 ,val))))))


;;;

(check 123 1.2 fixnum)
(check "abc" 1.2 string)
(check 'abc 1.2 symbol)
(check #\x 1.2 char)
(check #t 1.2 boolean)
(check 123 'a number)
(check 12.3 'a number)
(check '(1) 1.2 list)
(check '(a) 1.2 list)
(check '(1) 1.2 pair)
(check '(1 . 2) '() pair)
(check + 1.2 procedure)
(check '#(1) 1.2 vector)
(check '() 1 null)
(check '() 1.2 list)
(check (void) 1.2 undefined)
(check (current-input-port) 1.2 port)
(check (make-blob 10) 1.2 blob)
(check (address->pointer 0) 1.2 pointer)
(check (make-pointer-vector 1) 1.2 pointer-vector)
(check (make-locative 'a) 1.2 locative)
(check (##sys#make-structure 'promise) 1 (struct promise))
(check '(1 . 2.3) '(a) (pair fixnum float))
(check '#(a) 1 (vector symbol))
(check '("ok") 1 (list string))

(checkp boolean? #t boolean)
(checkp boolean? #f boolean)
(checkp pair? '(1 . 2) pair)
(checkp null? '() null)
(checkp list? '(1) list)
(checkp symbol? 'a symbol)
(checkp number? '1 number)
(checkp number? '1.2 number)
(checkp exact? '1 fixnum)
(checkp real? '1 number)
(checkp complex? '1 number)
(checkp inexact? '1.2 float)
(checkp char? #\a char)
(checkp string? "a" string)
(checkp vector? '#() vector)
(checkp procedure? + procedure)
(checkp blob? (make-blob 1) blob)
(checkp condition? (##sys#make-structure 'condition) (struct condition))
(checkp fixnum? 1 fixnum)
(checkp flonum? 1.2 float)
(checkp port? (current-input-port) port)
(checkp pointer-vector? (make-pointer-vector 1) pointer-vector)
(checkp pointer? (address->pointer 1) pointer)

(m number fixnum)
(m number float)
(m list null)
(mn list pair)
(m pair (pair number string))
(m procedure (procedure () *))
(mn (procedure (*) *) (procedure () *))
(m (procedure (#!rest) . *) (procedure (*) . *))
(mn (procedure () *) (procedure () * *))
