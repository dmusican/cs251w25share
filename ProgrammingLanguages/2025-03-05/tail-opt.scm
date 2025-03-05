(define fact
  (lambda (n)
    (if (equals? n 1)
        1
        (* n (fact (- n 1))))))

(define
