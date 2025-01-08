(define add-nums
  (lambda (x y)
    (+ x y)))

;;; How to write recursive functions
;;;
;;; Base case: easy simple approach for a small
;;; problem
;;;
;;; Recursive step: how can you find a way
;;; to get the solution using a call to
;;; a simpler version of the problem?


;;; Comment
;;; Find the length of a list
(define list-length
  (lambda (lst)
    
