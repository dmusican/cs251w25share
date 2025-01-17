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


