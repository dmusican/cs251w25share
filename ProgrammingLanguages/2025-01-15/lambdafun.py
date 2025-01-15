# Lambdas exist in Python!
# Scheme (lambda (x) (+ x 1))
# lambda x: x+1

print( (lambda x: x+1)(5) )

adder = lambda x: x+1
print(adder(5))

# Tons of applications, the obvious one
# is sorting
items = [('horse', 9), ('cow', 3),
         ('zebra', 0)]

print(sorted(items))
# key is a function on each item you're
# sorting that indicates what you are
# sorting it by
print(sorted(items,
             key=lambda animal: animal[1]))
