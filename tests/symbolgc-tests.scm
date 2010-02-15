;;;; symbolgc-tests.scm
;
; - run this with the "-:w" option


(use extras)

(assert (##sys#fudge 15))

(define *count1* (vector-ref (##sys#symbol-table-info) 2))

(print "starting with " *count1* " symbols")
(print "interning 10000 symbols ...")

(do ((i 10000 (sub1 i)))
    ((zero? i))
  (string->symbol (sprintf "%%%~a%%%" i)))

(print "recovering ...")

(let loop ()
  (let ((n (vector-ref (##sys#symbol-table-info) 2)))
    (print* n " ")
    (unless (< (- n *count1*) 200)     ; allow some
      (gc #t)
      (loop))))

(print "\ndone.")
