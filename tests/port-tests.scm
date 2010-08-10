(require-extension srfi-1 ports)

(define *text* #<<EOF
this is a test
<foof> #;33> (let ((in (open-input-string ""))) (close-input-port in)
       (read-char in)) [09:40]
<foof> Error: (read-char) port already closed: #<input port "(string)">
<foof> #;33> (let ((in (open-input-string ""))) (close-input-port in)
       (read-line in))
<foof> Error: call of non-procedure: #t
<foof> ... that's a little odd
<Bunny351> yuck. [09:44]
<Bunny351> double yuck. [10:00]
<sjamaan> yuck squared! [10:01]
<Bunny351> yuck powered by yuck
<Bunny351> (to the power of yuck, of course) [10:02]
<pbusser3> My yuck is bigger than yours!!!
<foof> yuck!
<foof> (that's a factorial)
<sjamaan> heh
<sjamaan> I think you outyucked us all [10:03]
<foof> well, for large enough values of yuck, yuck! ~= yuck^yuck [10:04]
ERC> 
EOF
)

(define p (open-input-string *text*))

(assert (string=? "this is a test" (read-line p)))

(assert
 (string=? 
  "<foof> #;33> (let ((in (open-input-string \"\"))) (close-input-port in)"
  (read-line p)))
(assert (= 20 (length (read-lines (open-input-string *text*)))))


;;; port operations

(assert
 (string=? 
  *text*
  (with-output-to-string
    (lambda ()
      (copy-port (open-input-string *text*) (current-output-port))))))

(assert 
 (equal? 
  '(3 2 1)
  (let ((out '()))
    (copy-port
     (open-input-string "1 2 3")
     #f
     read
     (lambda (x port) (set! out (cons x out))))
    out)))

(print "slow...")
(time
 (with-input-from-file "compiler.scm"
   (lambda ()
     (with-output-to-file "compiler.scm.2"
       (lambda ()
	 (copy-port 
	  (current-input-port) (current-output-port)
	  (lambda (port) (read-char port))
	  (lambda (x port) (write-char x port))))))))

(print "fast...")
(time
 (with-input-from-file "compiler.scm"
   (lambda ()
     (with-output-to-file "compiler.scm.2"
       (lambda ()
	 (copy-port (current-input-port) (current-output-port)))))))

(delete-file "compiler.scm.2")
