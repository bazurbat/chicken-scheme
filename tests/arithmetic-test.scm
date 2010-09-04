;;;; arithmetic-test.scm


(use extras)

#+use-numbers (use numbers)

(define range 2)
(define random-range 32000)
(define result '())

(define points
  (list 0 1 -1 2 -2
	most-positive-fixnum most-negative-fixnum
	(add1 most-positive-fixnum) (sub1 most-negative-fixnum)
	1103515245
	631629065
	12345
	(expt 2 32)))

(cond-expand
  (fully-random (randomize))
  (else (randomize 42)))

(define (push c total opname args res)
  (let ((x (list (cons c total) (cons opname args) '-> res)))
    (pp x)
    (set! result (append result (list x)))))

(define (test-permutations opname op points)
  (let* ((np (length points))
	 (nr (add1 (* range 2)))
	 (total (* np np nr nr))
	 (c 1))
    (for-each
     (lambda (x)
       (for-each
	(lambda (y)
	  (do ((i (- range) (add1 i)))
	      ((> i range))
	    (do ((j (- range) (add1 j)))
		((> j range))
	      (let* ((args (list (+ x i) (+ y j)))
		     (res 
		      (handle-exceptions ex (get-condition-property ex 'exn 'message)
			(apply op args))))
		(push c total opname args res)
		(set! c (add1 c))))))
	points))
     points)))

(define (test-random-permutations opname op points)
  (for-each
   (lambda (x)
     (for-each
      (lambda (y)
	(do ((i 10 (sub1 i)))
	    ((zero? i))
	  (let* ((args (list (+ x (random random-range)) (+ y (random random-range))))
		 (res (apply op args)))
	    (push opname args res))))
      points))
   points))

(for-each
 (lambda (oo)
   (let ((args (append oo (list points))))
     (apply test-permutations args)))
 `((+ ,+)
   (- ,-)
   (* ,*)
   (/ ,/)))
