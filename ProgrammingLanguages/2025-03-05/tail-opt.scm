(define fact
  (lambda (n)
    (if (equals? n 1)
        1
        (* (fact (- n 1))))))
