;; Get the nth item of a list
(define nth
  (lambda (lst n)
    (if (null? lst)
	#f  ; empty list: no item, so just false
	(if (equal? n 0)
	    (car lst)
	    (nth (cdr lst) (- n 1))))))
	
(define nth-redux
  (lambda (lst n)
    (cond [(null? lst) #f]
	  [(equal? n 0) (car lst)]
	  [else (nth-redux (cdr lst) (- n 1))])))

;; can interchange [] (), work same so long as match

;; examples where constructing lists for the answer
;; (remove-first 'a '(a b c))  ---> (a)
;; (remove-first 'b '(a b c b d)) -> (a c b d)
(define remove-first










