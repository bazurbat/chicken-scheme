(use files posix)

(define-constant SOME-POS 123456)

(let ((tnpfilpn (create-temporary-file)))
  (let ((tmpfilno (file-open tnpfilpn (+ open/rdwr open/creat open/text))))
    (set-file-position! tmpfilno SOME-POS seek/end)
    (assert (= SOME-POS (file-position tmpfilno)))
    (file-close tmpfilno)
    (delete-file* tnpfilpn) ) )

(let ((tnpfilpn (create-temporary-file)))
  (let ((tmpfilno (file-open tnpfilpn (+ open/rdwr open/creat open/text))))
    (let ((port (open-output-file* tmpfilno)))
      (set-file-position! port SOME-POS seek/end)
      (assert (= SOME-POS (file-position port)))
      (close-output-port port)
      (delete-file* tnpfilpn) ) ) )
