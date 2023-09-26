G = 100 # global variable

def fun(a):
    # L = 500 # local variable 
    # print(L)
    G = 200 # local variable 
    G = G-a # scope in the fun()
    return G

print(fun(5))
print('after fun() G =', G) # scope all over the program
# print(L) # outside of scope fun()

""" 
    global variables can be accessed inside local scope
    but cannot be midified without 'global' keyword
    local varibles cannot be accessed outside their scopes
"""

def fun2(b):
    global G # access global variable
    # print(G)
    G -= b
    return G

print(fun2(72)) # G = G - b
print('after fun2() G =', G) # scope all over the program