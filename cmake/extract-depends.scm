(import scheme chicken)
(use data-structures extras)

(define core-modules
  `(scheme chicken foreign ,@##sys#core-library-modules ,@##sys#core-syntax-modules))

(define modules '())
(define imports '())
(define includes '())

;; copied from chicken/support.scm

(set! ##sys#user-read-hook
  (let ([old-hook ##sys#user-read-hook])
    (lambda (char port)
      (if (char=? #\> char)
          (let* ((_ (read-char port))           ; swallow #\>
                 (text (scan-sharp-greater-string port)))
            `(declare (foreign-declare ,text)) )
          (old-hook char port) ) ) ) )

(define (scan-sharp-greater-string port)
  (let ([out (open-output-string)])
    (let loop ()
      (let ([c (read-char port)])
        (cond [(eof-object? c) (quit "unexpected end of `#> ... <#' sequence")]
              [(char=? c #\newline)
               (newline out)
               (loop) ]
              [(char=? c #\<)
               (let ([c (read-char port)])
                 (if (eqv? #\# c)
                     (get-output-string out)
                     (begin
                       (write-char #\< out)
                       (write-char c out)
                       (loop) ) ) ) ]
              [else
               (write-char c out)
               (loop) ] ) ) ) ) )

(define (extract-names expr)
  (let loop ((expr expr) (names '()))
    (cond ((symbol? expr)
           (if (memq expr core-modules) names (cons expr names)))
          ((pair? expr)
           (case (car expr)
             ((srfi)
              (map (compose (cut string-append "srfi-" <>) number->string)
                   (cdr expr)))
             ((only except prefix rename)
              (loop (cadr expr) names)))))))

(define (get-imports ls)
  (when (pair? ls)
    (let ((first (car ls))
          (rest  (cdr ls)))
      (case first
        ((quote quasiquote))
        ((import use requre require-extension require-library)
         (set! imports (append imports
                               (apply append (map extract-names rest)))))
        ((module)
         (set! modules (cons (car rest) modules))
         (get-imports (cdr rest)))
        ((include)
         (set! includes (cons (car rest) includes)))
        (else
          (get-imports first)
          (get-imports rest))))))

(define (extract-imports)
  (let ((e (read)))
    (unless (eof-object? e)
      (get-imports e)
      (extract-imports))))

(define (main args)
  (handle-exceptions
    exn (print-error-message exn (current-error-port))
    (define in-file (car args))
    (define out-file (cadr args))
    (define (write-imports)
      (with-input-from-file in-file extract-imports)
      (write-string "set(imports ")
      (write-string (string-intersperse (map ->string imports)))
      (write-string ")")(newline)
      (write-string "set(includes ")
      (write-string (string-intersperse (map ->string includes)))
      (write-string ")")(newline))
  (and (file-exists? out-file) (delete-file out-file))
  (with-output-to-file out-file write-imports)))

; (main (command-line-arguments))
