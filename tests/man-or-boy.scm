;;;; man-or-boy.scm - Knuth's 


;; begin
;;   real procedure A (k, x1, x2, x3, x4, x5);
;;   value k; integer k;
;;   begin
;;     real procedure B;
;;     begin k:= k - 1;
;;           B:= A := A (k, B, x1, x2, x3, x4);
;;     end;
;;     if k <= 0 then A:= x4 + x5 else B;
;;   end;
;;   outreal (A (10, 1, -1, -1, 1, 0));
;; end;


(define (A k x1 x2 x3 x4 x5)
  (define (B)
    (set! k (- k 1))
    (A k B x1 x2 x3 x4))
  (if (<= k 0)
      (+ (x4) (x5))
      (B)))

(do ((i 1 (sub1 i)))
    ((zero? i))
  (print i)
  (assert
   (= -175416
      (A 20
	 (lambda () 1) 
	 (lambda () -1)
	 (lambda () -1)
	 (lambda () 1)
	 (lambda () 0)))))