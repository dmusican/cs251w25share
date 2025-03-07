;; (let ((a 3) (b (+ a 1)))
;;   b)
;; Bad because a not bound yet when try to add 1

;; new thing
;; temporary helper function
(define add-one
  (lambda (x)
    (+ x 1)))
(add-one 5)
;; But what if I only needed add-one ONCE, right here
;; and so I don't want to clutter my space with
;; variables I don't need

;; How about
((lambda (x) (+ x 1)) 5)
;; but hard to read

;; let to the rescue
(let ((add-one (lambda (x)
                 (+ x 1))))
  (add-one 5))
