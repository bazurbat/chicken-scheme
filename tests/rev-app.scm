(use reverser)
(assert (equal? "oof" (rev "foo")))
(assert (equal? '(a b c) (rev '(c b a))))
