;;;; typematch-tests.scm


(use lolevel)


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
	  (define (,fname x) (bomb))
	  (assert (eq? 'ok (,fname ,val)) "did not specialize" ',val ',type)
	  (assert (eq? 'ok-too (,fname ,nval)) "did specialize" ',val ',type)
	  (: ,fname2 (* -> *)
	     (((not ,type)) (bomb)))
	  (define (,fname2 x) 'ok)
	  (print "specialize not " ',type)
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
(ms '(1) 1.2 pair)
(ms '(1 . 2) '() pair)
(ms + 1.2 procedure)
(ms '#(1) 1.2 vector)
(ms '() 1 null)
(ms (void) 1.2 undefined)
(ms (current-input-port) 1.2 port)
(ms (make-blob 10) 1.2 blob)
(ms (address->pointer 0) 1.2 pointer)
(ms (make-pointer-vector 1) 1.2 pointer-vector)
(ms (make-locative "a") 1.2 locative)
(ms (##sys#make-structure 'promise) 1 (struct promise))
(ms '(1 . 2.3) '(a) (pair fixnum float))
(ms '#(a) 1 (vector symbol))
(ms '(1) 'a (or pair symbol))
(ms (list) 'a list)
(ms '() 'a (or null pair))

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
(m pair (pair number string))
(m procedure (procedure () *))
(mn (procedure (*) *) (procedure () *))
(m (procedure (#!rest) . *) (procedure (*) . *))
(mn (procedure () *) (procedure () * *))

(mx (forall (a) (procedure (#!rest a) a) +))
(mx (or pair null) '(1))
(mx (or pair null) (list))
