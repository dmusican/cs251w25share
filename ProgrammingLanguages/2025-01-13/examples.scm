(define mult
  (lambda (a)
    (lambda (b)
      (* a b))))

;; map
;; "distributing" (except that Scheme on our laptops doesn't do that)
(define addOne
  (lambda (x)
    (+ x 1)))

(map addOne '(9 1 2 3 7))
