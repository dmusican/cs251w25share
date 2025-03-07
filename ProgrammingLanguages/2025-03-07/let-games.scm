;; (let ((a 3) (b (+ a 1)))
;;   b)
;; Bad because a not bound yet when try to add 1

;; new thing
;; temporary helper function
(define add-one
  (lambda (x)
    (+ x 1)))
(add-one 5)
