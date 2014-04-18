(use irregex)

(let* ((version-tokens (string-split (chicken-version) "."))
       (major (string->number (car version-tokens)))
       (minor (string->number (cadr version-tokens))))

  (display "Checking major and minor version numbers against chicken-version... ")
  ;; Those fudges are mapped to C_MAJOR_VERSION and C_MINOR_VERSION
  (assert (= (##sys#fudge 41) major))
  (assert (= (##sys#fudge 43) minor))
  (print "ok")

  (display "Checking the registered feature chicken-<major>.<minor>... ")
  (let loop ((features (features)))
    (if (null? features)
        (error "Could not find feature chicken-<major>.<minor>")
        (let ((feature (symbol->string (car features))))
          (cond ((irregex-match "chicken-(\\d+)\\.(\\d+)" feature)
                 => (lambda (match)
                      (assert (= (string->number
                                  (irregex-match-substring match 1))
                                 major))
                      (assert (= (string->number
                                  (irregex-match-substring match 2))
                                 minor))))
                (else (loop (cdr features)))))))
  (print "ok"))
