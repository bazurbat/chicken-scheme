;;;; specialization-test-1.scm


(module foo (foo bar)
(import scheme chicken foreign)

#>
static int inlined(int i) {
static int n = 0;
n += i;
return n;}
<#

(: foo (fixnum -> fixnum))

(define (foo i)
  (print "foo: " i)
  0)

(: bar (number -> fixnum)
   ((fixnum) (##core#inline "inlined" #(1))))

(define (bar i)
  (print "bar: " i)
  0)

(handle-exceptions ex #f (foo 1.0))	; failed type-check
(assert (zero? (foo 1)))
(assert (zero? (bar 1.0)))
(assert (= 1 (bar 1)))

)
