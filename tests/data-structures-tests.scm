;;;; data-structures-tests.scm


(use data-structures)

(let ((alist '((foo . 123) ("bar" . "baz"))))
  (alist-update! 'foo 999 alist)
  (assert (= (alist-ref 'foo alist) 999))
  (alist-update! 'qux 'nope alist)
  (assert (not (alist-ref 'qux alist)))
  (assert (eq? 'yep (alist-ref 'qux (alist-update! 'qux 'yep alist))))
  (assert (eq? 'ok (alist-ref "bar" (alist-update! "bar" 'ok alist equal?) equal?))))

(let ((alist '((foo . 123) ("bar" . "baz"))))
  (alist-update 'foo 999 alist)
  (assert (= (alist-ref 'foo alist) 123))
  (assert (eq? 'yep (alist-ref 'qux (alist-update 'qux 'yep alist))))
  (assert (eq? 'ok (alist-ref "bar" (alist-update "bar" 'ok alist equal?) equal?))))