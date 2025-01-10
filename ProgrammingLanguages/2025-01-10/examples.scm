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
;; (remove-first 'a '(a b c))  ---> (b c)
;; (remove-first 'b '(a b c b d)) -> (a c b d)
;; but don't actually remove anything
;; construct the answer and return it
(define remove-first
  (lambda (item lst)
    (cond ((null? lst) '())
	  ((equal? item (car lst)) (cdr lst))
	  (else (cons (car lst)
		      (remove-first item (cdr lst)))))))

(define remove
  (lambda (item lst)
    (cond ((null? lst) '())
	  ((equal? item (car lst))
	   (remove item (cdr lst)))
	  (else (cons (car lst)
		      (remove item (cdr lst)))))))

;; substitute one item for another
;; (subst 'b 'a '(d b g b)) -> (d a g a)
;; (subst 'b 'a '((b c) (b () d))) ->
;;               ((a c) (a () d))
;; (subst 'b 'a  'b)   ---> a
;; don't care about level of nested lists
(define subst
  (lambda (old new input)
    (cond ((null? input) '())

	  ((list? input)
	   (cons 
	    (subst old new (car input))
	    (subst old new (cdr input))))

	  ((equal? input old) new)
	  (else input))))














