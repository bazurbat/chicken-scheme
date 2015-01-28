(use reverser)

(define (last lst)
  (let loop ((lst lst))
    (if (null? (cdr lst))
	(car lst)
	(loop (cdr lst)))))

(assert (equal? "oof" (rev "foo")))
(assert (equal? '(a b c) (rev '(c b a))))
(assert (= rev-version (string->number (last (command-line-arguments)))))
(exit)
