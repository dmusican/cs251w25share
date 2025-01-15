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

# Make a new list that adds one to every
# item in a list you have
items = [9, 2, 1, 3, 5]
# CS 111 way
new_items = items.copy()
for i in range(len(new_items)):
    new_items[i] = new_items[i] + 1
print(new_items)

# Super cool functional way
new_items = map(lambda thing: thing+1,
                items)
print(new_items)
