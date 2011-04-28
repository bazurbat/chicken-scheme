;;;; specialization-test-2.scm


(module main ()
(import scheme chicken foreign foo)	; note: does not load foo!

#>
static int inlined(int i) {
static int n = 0;
n += i;
return n;}
<#

(assert (= 1 (bar 1)))

)
