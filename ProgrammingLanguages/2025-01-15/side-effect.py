def remove_last(lst):
    result = lst[:len(lst)-1]  #no side effect
    done = True   # no
    return result # no

count = 0 # not in a function
def remove_last_again(lst):
    global count
    count += 1
    lst.pop()
    print("working")
    done = True
    return None


# Where are side effects when functions are
# called?
