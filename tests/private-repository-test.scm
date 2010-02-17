;;;; private-repository-test.scm


(use files)

(define repo (normalize-pathname (repository-path)))
(define dir (normalize-pathname (car (command-line-arguments))))

(print (list dir repo))

(assert (string=? repo dir))

