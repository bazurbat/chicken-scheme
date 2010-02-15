;;;; private-repository-test.scm


(use files)


(define repo (normalize-pathname (repository-path)))
(define dir (normalize-pathname (get-environment-variable "REPO_DIR")))

(print (list dir repo))

(assert (string=? repo dir))

