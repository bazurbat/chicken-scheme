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


(module test-q1 = (test-queue queue1))
(module test-q2 = (test-queue queue2))
(module test-q3 = (test-queue queue3))

(import (rename test-q1 (list->queue l2q1) (queue->list q2l1)))
(import (rename test-q2 (list->queue l2q2) (queue->list q2l2)))
(import (rename test-q3 (list->queue l2q3) (queue->list q2l3)))

(use srfi-1)
(define long-list (list-tabulate 10000 identity))

(print "Queue representation #1:")
(time (q2l1 (l2q1 long-list)))
(print "Queue representation #2:")
(time (q2l2 (l2q2 long-list)))
(print "Queue representation #3:")
(time (q2l3 (q2l3 long-list)))

(module breadth = (breadth-first queue3))

(import breadth)

(define (next-char lst) 
  (list (cons #\A lst) (cons #\B lst) (cons #\C lst)))

(define (show n csq) 
  (map list->string (take csq 1)))

(pp (show 8 (search next-char '())))	;XXX assert
