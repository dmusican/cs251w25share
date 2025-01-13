(define mult
  (lambda (a)
    (lambda (b)
      (* a b))))

;; map
;; "distributing" (except that Scheme on our laptops doesn't do that)
(define addOne
  (lambda (x)
    (+ x 1)))

;; map says: take the function (of one parameter)
;; and apply that function to each item in the list
;; which is given
(map addOne '(9 1 2 3 7))

(map (mult 3) '(9 1 2 3 7))

;;; "reduce", which is used for combining results
;;; together, is called fold-left and fold-right in
;;; Scheme

(use-modules ((rnrs)))
(fold-left + 0 '(1 2 3))
(fold-left / 24.0 '(2 3))
