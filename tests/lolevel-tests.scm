;;;; Unit lolevel testing

(require-extension lolevel)

(define-syntax assert-error
  (syntax-rules ()
    ((_ expr) 
     (assert (handle-exceptions _ #t expr #f)))))

; move-memory!

(let ((s "..."))
  (assert-error (move-memory! "abc" s 3 -1)))

; overlapping src and dest, moving "right" (from SRFI-13 tests)
(assert (string=?
	 "aabce"
	 (let ((str (string-copy "abcde")))
	   (move-memory! str str 3 0 1) str)))
;; Specialisation rewrite from types.db
(assert (string=?
	 "aabce"
	 (let ((str (string-copy "abcde")))
	   (move-memory! (make-locative str) (make-locative str) 3 0 1) str)))

; overlapping src and dest, moving "left" (from SRFI-13 tests)
(assert (string=?
	 "bcdde"
	 (let ((str (string-copy "abcde")))
	   (move-memory! str str 3 1) str)))
;; Specialisation rewrite from types.db
(assert (string=?
	 "bcdde"
	 (let ((str (string-copy "abcde")))
	   (move-memory! (make-locative str) (make-locative str) 3 1) str)))

; object-copy

; allocate

(define some-chunk (allocate 23))

(assert some-chunk)

; free

(free some-chunk)

(define some-chunk (allocate 23))

; pointer?

(assert (pointer? some-chunk))

; pointer-like?

(assert (pointer-like? some-chunk))

(assert (pointer-like? allocate))

; address->pointer

; pointer->address

; object->pointer

; pointer->object

; pointer=?

(assert (pointer=? some-chunk (address->pointer (pointer->address some-chunk))))

; pointer+

(assert (pointer=? (address->pointer #x9) (pointer+ (address->pointer #x5) #x4)))

; align-to-word

; pointer-u8-set!

; pointer-s8-set!

; pointer-u16-set!

; pointer-s16-set!

; pointer-u32-set!

; pointer-s32-set!

; pointer-f32-set!

; pointer-f64-set!

; pointer-u8-ref

(set! (pointer-u8-ref some-chunk) 255)

(assert (= 255 (pointer-u8-ref some-chunk)))

; pointer-s8-ref

(set! (pointer-s8-ref some-chunk) -1)

(assert (= -1 (pointer-s8-ref some-chunk)))

; pointer-u16-ref

; pointer-s16-ref

; pointer-u32-ref

; pointer-s32-ref

; pointer-f32-ref

; pointer-f64-ref

; tag-pointer

(define some-unique-tag '#(vector foo bar))

(define some-tagged-pointer (tag-pointer some-chunk some-unique-tag))

(assert some-tagged-pointer)

; tagged-pointer?

(assert (tagged-pointer? some-tagged-pointer))

(assert (tagged-pointer? some-tagged-pointer some-unique-tag))

; pointer-tag

(assert (eq? some-unique-tag (pointer-tag some-tagged-pointer)))

; make-locative

; make-weak-locative

; locative-set!

; locative-ref

; locative->object

; locative?

; extend-procedure

(define (foo a b) (list a b))

(define unique-proc-data-1 '(23 'skidoo))

(define new-foo (extend-procedure foo unique-proc-data-1))

(assert (not (eq? foo new-foo)))

(define foo new-foo)

; extended-procedure?

(assert (extended-procedure? foo))

; procedure-data

(assert (eq? unique-proc-data-1 (procedure-data foo)))

; set-procedure-data!

(define unique-proc-data-2 '(23 'skidoo))

(assert (eq? foo (set-procedure-data! foo unique-proc-data-2)))

(assert (eq? unique-proc-data-2 (procedure-data foo)))

; block-set!

(define some-block (vector 1 2 3 4))

(block-set! some-block 2 5)

; block-ref

(assert (= 5 (block-ref some-block 2)))

; number-of-slots

(assert (= 4 (number-of-slots some-block)))

; number-of-bytes

(assert (= 4 (number-of-bytes "abcd")))

(assert (= (if (##sys#fudge 3) 8 4) (number-of-bytes '#(1))))

; make-record-instance

(define some-record (make-record-instance 'test 'a 1))

(assert some-record)

; record-instance?

(assert (record-instance? some-record))

(assert (record-instance? some-record 'test))

; record-instance-type

(assert (eq? 'test (record-instance-type some-record)))

; record-instance-length

(assert (= 2 (record-instance-length some-record)))

; record-instance-slot-set!

; record-instance-slot

(assert (eq? 1 (record-instance-slot some-record 1)))

(record-instance-slot-set! some-record 1 'b)

(assert (eq? 'b (record-instance-slot some-record 1)))

; record->vector

(assert (equal? '#(test a b) (record->vector some-record)))

; object-evict
; object-evicted?
; object-size
; object-release

(define tstvec (vector #f))
(let ((sz (object-size tstvec)))
  (assert (and (integer? sz) (positive? sz))) )
(define ev-tstvec (object-evict tstvec))
(assert (not (eq? tstvec ev-tstvec)))
(assert (object-evicted? ev-tstvec))
(set! ev-tstvec
  (let ((old ev-tstvec))
    (object-release old)
    #f))

; object-evict-to-location

; object-unevict

; object-become!

(define some-foo '#(1 2 3))

(define some-bar '(1 2 3))

(object-become! (list (cons some-foo '(1 2 3)) (cons some-bar '#(1 2 3))))

(assert (pair? some-foo))

(assert (vector? some-bar))

; mutate-procedure!

(assert (equal? '(1 2) (foo 1 2)))

(define new-foo
  (mutate-procedure! foo (lambda (new) (lambda args (cons 'hello (apply new args))))))

(assert (not (eq? foo new-foo)))

(assert (equal? '(hello 1 2) (foo 1 2)))

; pointer vectors

(define pv (make-pointer-vector 42 #f))
(assert (= 42 (pointer-vector-length pv)))
(assert (not (pointer-vector-ref pv 0)))
(pointer-vector-set! pv 1 (address->pointer 999))
(set! (pointer-vector-ref pv 40) (address->pointer 777))
(assert (not (pointer-vector-ref pv 0)))
(assert (not (pointer-vector-ref pv 41)))
(assert (= (pointer->address (pointer-vector-ref pv 1)) 999))
(assert (= (pointer->address (pointer-vector-ref pv 40)) 777))
(pointer-vector-fill! pv (address->pointer 1))
(assert (= 1 (pointer->address (pointer-vector-ref pv 0))))

#+(not csi)
(begin
  (define pv1
    (foreign-lambda* bool ((pointer-vector pv))
      "C_return(pv == NULL);"))
  (define pv2
    (foreign-lambda* c-pointer ((pointer-vector pv) (bool f))
      "static void *xx = (void *)123;"
      "if(f) pv[ 0 ] = xx;"
      "C_return(xx);"))
  (assert (eq? #t (pv1 #f)))
  (define p (pv2 pv #t))
  (assert (pointer=? p (pv2 pv #f))))
