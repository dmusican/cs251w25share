(define a 7)

(define fun1
  (lambda (x)
    (define y 3)
    (+ x y)))

(define fun2
  (lambda (x)
    (display "hello\n")
    (define y 3)
    (+ x y)))


;; If I call
;;(define a 7)
;; does a side effect happen? YES!

;; If I call fun1
;; (fun1 5)
;; does a side effect happen?
;; NO, (define y 3) created a local variable
;; y that was not visible to the env
;; that called (fun1 7)

;; fun2?
