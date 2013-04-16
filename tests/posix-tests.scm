(use files posix lolevel)

(define-syntax assert-error
  (syntax-rules ()
    ((_ expr) 
     (assert (handle-exceptions _ #t expr #f)))))

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

(assert-error (get-environment-variable "with\x00embedded-NUL"))
(assert-error (setenv "with\x00embedded-NUL" "blabla"))
(assert-error (setenv "blabla" "with\x00embedded-NUL"))
(assert-error (system "echo this is \x00 not okay"))
;; Use "false" to signal to the calling script that there was an error,
;; even if the process will get called
(assert-error (process-execute "false\x00123"))
(assert-error (process-execute "false" '("1" "123\x00456")))
(assert-error (process-execute "false" '("123\x00456") '("foo\x00bar" "blabla") '("lalala" "qux\x00mooh")))

(let ((tnpfilpn (create-temporary-file)))
  (let ((tmpfilno (file-open tnpfilpn (+ open/rdwr open/creat)))
        (data "abcde")
        (size 5))
    (file-write tmpfilno data)
    (let ((mmap (map-file-to-memory #f size prot/read (+ map/shared map/file) tmpfilno))
          (str (make-string size)))
      (move-memory! (memory-mapped-file-pointer mmap) str size)
      (assert (blob=? (string->blob data) (string->blob str)))
      (unmap-file-from-memory mmap))))
