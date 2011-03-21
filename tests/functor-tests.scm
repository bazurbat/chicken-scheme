;;;; functor-tests.scm


(include "test-queue")
(include "breadth-first")


(module queue1 ((interface: QUEUE))
  (import scheme)
  (define empty-queue '())
  (define (enqueue q x) (append q (list x)))
  (define empty? null?)
  (define head car)
  (define dequeue cdr) )


(module queue2 ((interface: QUEUE))
  (import scheme chicken)
  (define-record entry q x)
  (define empty-queue #f)
  (define enqueue make-entry)
  (define empty? not)
  (define (head q)
    (let ((q2 (entry-q q)))
      (if (empty? q2) (entry-x q) (head q2))))
  (define (dequeue q) 
    (let ((q2 (entry-q q)))
      (if (empty? q2) empty-queue (make-queue (dequeue q) x)))) )


(module queue3 ((interface: QUEUE))
  (import scheme chicken)
  (define-record queue heads tails)
  (define empty-queue (make-queue '() '()))
  (define (norm q)
    (if (null? (queue-heads q))
	(make-queue (reverse (queue-tails q)) '())
	q))
  (define (enqueue q x)
    (norm (make-queue (queue-heads q) (cons x (queue-tails q)))))
  (define (empty? q)
    (and (null? (queue-heads q)) (null? (queue-tails q))))
  (define (head q) (car (queue-heads q)))
  (define (dequeue q)
    (norm (make-queue (cdr (queue-heads q)) (queue-tails q)))) )
