;;;; library-tests.scm


;; numbers

(assert (= -4.0 (round -4.3)))
(assert (= 4.0 (round 3.5)))
(assert (= 4 (round (string->number "7/2"))))
(assert (= 7 (round 7)))
(assert (zero? (round -0.5))) 		; is actually -0.0
(assert (zero? (round -0.3)))
(assert (= -1 (round -0.6)))
(assert (zero? (round 0.5)))
(assert (zero? (round 0.3)))
(assert (= 1.0 (round 0.6)))
(assert (rational? 1))
(assert (rational? 1.0))
(assert (not (rational? +inf.)))
(assert (not (rational? 'foo)))


;; fp-math

(assert (= (sin 42.0) (fpsin 42.0)))
(assert (= (cos 42.0) (fpcos 42.0)))
(assert (= (tan 42.0) (fptan 42.0)))
(assert (= (asin 0.5) (fpasin 0.5)))
(assert (= (acos 0.5) (fpacos 0.5)))
(assert (= (atan 0.5) (fpatan 0.5)))
(assert (= (atan 42.0 1.2) (fpatan2 42.0 1.2)))
(assert (= (exp 42.0) (fpexp 42.0)))
(assert (= (log 42.0) (fplog 42.0)))
(assert (= (expt 42.0 3.5) (fpexpt 42.0 3.5)))
(assert (= (sqrt 42.0) (fpsqrt 42.0)))
(assert (= 43.0 (fpround 42.5)))
(assert (= -43.0 (fpround -42.5)))
(assert (= 42.0 (fpround 42.2)))
(assert (= 42.0 (fptruncate 42.5)))
(assert (= -42.0 (fptruncate -42.5)))
(assert (= 42.0 (fpfloor 42.2)))
(assert (= -43.0 (fpfloor -42.5)))
(assert (= 43.0 (fpceiling 42.5)))
(assert (= -42.0 (fpceiling -42.2)))
