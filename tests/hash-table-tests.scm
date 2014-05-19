;;;; hash-table-tests.scm

(require-extension srfi-69 data-structures extras)

(print "SRFI 69 procedures")
(assert (eq? hash equal?-hash))
(assert (eq? hash-by-identity eq?-hash))

;; Re-use variable
(define ht)

(print "HT - No Parameters")
(set! ht (make-hash-table))
(assert (hash-table? ht))
(assert (eq? equal? (hash-table-equivalence-function ht)))
(assert (eq? equal?-hash (hash-table-hash-function ht)))
(assert (not (hash-table-has-initial? ht)))

(print "HT - Test Parameter")
(set! ht (make-hash-table eq?))
(assert (hash-table? ht))
(assert (eq? eq? (hash-table-equivalence-function ht)))
(assert (eq? eq?-hash (hash-table-hash-function ht)))
(assert (not (hash-table-has-initial? ht)))

(print "HT - Number Test Parameter")
(set! ht (make-hash-table =))
(assert (hash-table? ht))
(assert (eq? = (hash-table-equivalence-function ht)))
(assert (eq? number-hash (hash-table-hash-function ht)))
(assert (not (hash-table-has-initial? ht)))

(print "HT - All Optional Parameters")
(set! ht (make-hash-table eqv? eqv?-hash 23))
(assert (hash-table? ht))
(assert (not (hash-table-has-initial? ht)))

(print "HT - All Parameters")
(set! ht (make-hash-table eqv? eqv?-hash 23
                          #:test equal? #:hash equal?-hash
                          #:initial 'foo
                          #:size 500
                          #:min-load 0.45 #:max-load 0.85
                          #:weak-keys #t #:weak-values #t))
(assert (hash-table? ht))
(assert (not (hash-table-weak-keys ht)))
(assert (not (hash-table-weak-values ht)))
(assert (eq? equal? (hash-table-equivalence-function ht)))
(assert (eq? equal?-hash (hash-table-hash-function ht)))
(assert (hash-table-has-initial? ht))
(assert (eq? (hash-table-initial ht) 'foo))

(print "HT - Insert with setter")
(set! (hash-table-ref ht 23.0) 'bar)
(assert (eq? (hash-table-ref ht 23.0) 'bar))

(print "HT - Insert with update!")
(hash-table-update! ht 'baz identity (lambda () 'foo))
(assert (eq? (hash-table-ref ht 'baz) 'foo))
(assert (= (hash-table-size ht) 2))

(print "HT - A-List")
(let ([alist (hash-table->alist ht)])
  (assert (list? alist))
  (assert (= (length alist) 2))
  (assert (eq? (alist-ref 23.0 alist) 'bar))
  (assert (eq? (alist-ref 'baz alist) 'foo)) )

(print "HT - set! overwrites")
(hash-table-set! ht 23.0 'foo-bar)
(assert (eq? (hash-table-ref ht 23.0) 'foo-bar))

(print "HT - Delete")
(assert (hash-table-delete! ht 23.0))
(assert (not (hash-table-exists? ht 23.0)))
(assert (= (hash-table-size ht) 1))

(print "HT - Remove")
(assert (hash-table-remove! ht (lambda (k v) (eq? k 'baz))))
(assert (not (hash-table-exists? ht 'baz)))
(assert (= (hash-table-size ht) 0))

(print "HT - Make from A-List")
(set! ht (alist->hash-table '(("abc" . #t) ("cbs" . #t) ("cnn" . #f))))
(assert (hash-table? ht))
(assert (= (hash-table-size ht) 3))

(print "HT - Merge!")
(let ([ht2 (make-hash-table)])
  (set! (hash-table-ref ht2 23.0) 'bar)
  (set! (hash-table-ref ht2 'baz) 'foo)
  (let ([ht3 (hash-table-merge! ht2 ht)])
    (assert (eq? ht3 ht2))
    (assert (not (eq? ht3 ht)))
    (let ([alist (hash-table->alist ht3)])
      (assert (list? alist))
      (assert (= (length alist) 5))
      (assert (eq? (alist-ref "abc" alist equal?) #t))
      (assert (eq? (alist-ref "cbs" alist equal?) #t))
      (assert (eq? (alist-ref "cnn" alist equal?) #f))
      (assert (eq? (alist-ref 23.0 alist) 'bar))
      (assert (eq? (alist-ref 'baz alist) 'foo)) ) ) )

(print "HT - Merge")
(let ([ht2 (make-hash-table)])
  (set! (hash-table-ref ht2 23.0) 'bar)
  (set! (hash-table-ref ht2 'baz) 'foo)
  (let ([ht3 (hash-table-merge ht2 ht)])
    (assert (not (eq? ht3 ht2)))
    (assert (not (eq? ht3 ht)))
    (let ([alist (hash-table->alist ht3)])
      (assert (list? alist))
      (assert (= (length alist) 5))
      (assert (eq? (alist-ref "abc" alist equal?) #t))
      (assert (eq? (alist-ref "cbs" alist equal?) #t))
      (assert (eq? (alist-ref "cnn" alist equal?) #f))
      (assert (eq? (alist-ref 23.0 alist) 'bar))
      (assert (eq? (alist-ref 'baz alist) 'foo)) ) ) )

(print "HT - Map")
(let ([alist (hash-table-map ht (lambda (k v) (cons k v)))])
  (assert (list? alist))
  (assert (= (length alist) 3)) )

(print "HT - Fold")
(let ([alist (hash-table-fold ht (lambda (k v a) (cons (cons k v) a)) '())])
  (assert (list? alist))
  (assert (= (length alist) 3)) )

(print "HT - Built-in string hash function")
(set! ht (make-hash-table string=?))
(hash-table-set! ht "test" 123)
(hash-table-set! ht "one" 1)
(assert (= 123 (hash-table-ref ht "test")))
(assert (= 1 (hash-table-ref ht "one")))

;; Issue #818, found by Jim Ursetto (srfi-13 defines its own string-hash)
(print "HT - After overwriting 'string-hash' should still work")
(set! string-hash (lambda (x) (error "Wrong string-hash called")))
(set! ht (make-hash-table string=?))
(hash-table-set! ht "foo" "bar")
(assert (string=? (hash-table-ref ht "foo") "bar"))

(set! ht (make-hash-table equal? (lambda (object bounds)
                                   (case object
                                     ((test) 0)
                                     ((one two) 1)
                                     (else (+ bounds 1))))))
(print "HT - custom hash function")
(hash-table-set! ht 'test 123)
(hash-table-set! ht 'one 1)
(hash-table-set! ht 'two 2)
(assert (= 123 (hash-table-ref ht 'test)))
(assert (= 1 (hash-table-ref ht 'one)))
(assert (= 2 (hash-table-ref ht 'two)))

(print "HT - out of bounds value is caught")
(assert (handle-exceptions exn #t (hash-table-set! ht 'out-of-bounds 123) #f))

(print "Hash collision weaknesses")
;; If these fail, it might be bad luck caused by the randomization/modulo combo
;; So don't *immediately* dismiss a hash implementation when it fails here
(assert (not (= (hash "a" 10 1) (hash "a" 10 2))))
(assert (not (= (hash (make-string 1 #\nul) 10 10) 0)))
;; Long identical suffixes should not hash to the same value
(assert (not (= (hash (string-append (make-string 1000000 #\a)
                                     (make-string 1000000 #\c)) 10 1)
                (hash (string-append (make-string 1000000 #\b)
                                     (make-string 1000000 #\c)) 10 1))))
;; Same for prefixes
(assert (not (= (hash (string-append (make-string 1000000 #\a)
                                     (make-string 1000000 #\b)) 10 1)
                (hash (string-append (make-string 1000000 #\a)
                                     (make-string 1000000 #\c)) 10 1))))
;; And palindromes, too
(assert (not (= (hash (string-append (make-string 1000000 #\a)
                                     (make-string 1000000 #\b)
                                     (make-string 1000000 #\a)) 10 1)
                (hash (string-append (make-string 1000000 #\a)
                                     (make-string 1000000 #\c)
                                     (make-string 1000000 #\a)) 10 1))))
;; differing number of nul bytes should not be identical
(assert (not (= (hash (make-string 1 #\nul) 10 1)
                (hash (make-string 2 #\nul) 10 1))))
;; ensure very long NUL strings don't cause the random value to get pushed out
(assert (not (= (hash (make-string 1000000 #\nul) 10 1)
                (hash (make-string 1000001  #\nul) 10 1))))

;; Stress Test

(set! ht (make-hash-table))

(define-constant stress-size 100000)

(print "HT - Stress Insert " stress-size " Fixnum Key Items")
(time
  (do ([i 0 (fx+ i 1)])
      [(fx= i stress-size)]
    (set! (hash-table-ref ht i) i) ) )

(print "HT - Stress Retrieve " stress-size " Fixnum Key Items")
(time
  (do ([i 0 (fx+ i 1)])
      [(fx= i stress-size)]
    (assert (fx= i (hash-table-ref ht i))) ) )

(print "HT - copy")
(define l '((1 a) (2 b) (3 c)))
(set! ht (alist->hash-table l))
(define ht2 (hash-table-copy ht))
(assert (= (hash-table-size ht2) (hash-table-size ht)))
(print l " -- " (hash-table->alist ht2))
(assert (equal? l (sort (hash-table->alist ht2)
                        (lambda (e1 e2) (< (car e1) (car e2))))))
;; Ensure that lookup still works (#905, randomization value was reset)
(assert (equal? '(a) (hash-table-ref ht2 1)))

(print "HT - recursive depth/length")
(assert (fixnum? (recursive-hash-max-depth)))
(assert (positive? (recursive-hash-max-depth)))
(assert (fixnum? (recursive-hash-max-length)))
(assert (positive? (recursive-hash-max-length)))

(let ((dd (recursive-hash-max-depth))
      (tls (list (random 100000) (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000) (list (random 100000))))))))))))))))
  (let ((hsh1 (equal?-hash tls 536870912 0)))
    (recursive-hash-max-depth 10)
    (assert (fx= 10 (recursive-hash-max-depth)))
    (let ((hsh2 (equal?-hash tls 536870912 0)))
      (recursive-hash-max-depth dd)
      (print hsh1 " <?> " hsh2)
      (assert (not (= hsh1 hsh2))) ) ) )

(let ((dl (recursive-hash-max-length))
      (tv (vector (random 100000) (random 100000) (random 100000) (random 100000) (random 100000) (random 100000) (random 100000) (random 100000) (random 100000) (random 100000) (random 100000) (random 100000))))
  (let ((hsh1 (equal?-hash tv 536870912 0)))
    (recursive-hash-max-length 10)
    (assert (fx= 10 (recursive-hash-max-length)))
    (let ((hsh2 (equal?-hash tv 536870912 0)))
      (recursive-hash-max-length dl)
      (print hsh1 " <?> " hsh2)
      (assert (not (= hsh1 hsh2))) ) ) )
