;;;; specialization-test-2.scm


(module main ()
(import scheme chicken foreign)

#>
static int inlined(int i) {
static int n = 0;
n += i;
return n;}
<#

(define (foo i)
  (print "foo: " i)
  0)

(assert (zero? (foo 1.0)))
(assert (= 1 (foo 1)))

)
