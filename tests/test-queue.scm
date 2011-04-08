;;;; test-queue.scm


(include "QUEUE")


(functor (test-queue (Q QUEUE)) *
  (import scheme chicken Q)
  (use srfi-1)
  
  (define (list->queue lst)
    (fold (lambda (x q) (enqueue q x)) empty-queue lst))

  (define (queue->list q)
    (if (empty? q)
	'()
	(cons (head q) (queue->list (dequeue q))))) )
