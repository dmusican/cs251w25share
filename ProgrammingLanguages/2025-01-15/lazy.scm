(define gen-lazy-list
  (lambda (start stop)
    (if (> start stop)
        '()
        (cons start
            (lambda ()
              (gen-lazy-list (+ start 1) stop))))))
