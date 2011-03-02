;;;; reader-tests.scm


(set-sharp-read-syntax! #\& (lambda (p) (read p) (values)))
(set-sharp-read-syntax! #\^ (lambda (p) (read p)))
(set-read-syntax! #\! (lambda (p) (read-line p) (values)))

(define output
  (with-output-to-string
    (lambda ()
      (print "hi") ! this is fortran
      (print "foo") #&(print "amp-comment") (print "baz")
      #^(print "bye"))))

!! output:
!! hi
!! foo
!! baz
!! bye

(assert (string=? output "hi\nfoo\nbaz\nbye\n"))
