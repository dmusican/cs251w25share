(define fact
  (lambda (n)
    (if (equals? n 1)
        1
        (* n (fact (- n 1))))))

;;; Call it like (fact 5 1). Second parameter
;;; when you call it should always be 1
;;; (so this should probably just be a helper
;;; function)
(define fact-tail
  (lambda (n partial)
    (if (equal? n 1)
        partial
        (fact-tail (- n 1) (* n partial)))))
