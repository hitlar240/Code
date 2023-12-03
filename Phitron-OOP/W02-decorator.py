# nested function

import math

def decorator(fun):
    def inner(*arg, **kwarg):
        print('start')
        # print(fun)
        fun(*arg, **kwarg) # call fun() inside decorator
        print('end')
    return inner

@decorator # pass a function as parameter
def get_fact(n):
    print(f'Factorial of {n} is = {math.factorial(n)}')

@decorator
def work():
    print('kam nai bekar...')

@decorator
def vegitable(**kwarg):
    for key,val in kwarg.items():
        print(key, val)


# decorator(get_fact)(7)
get_fact(7)

# work()

# vegitable(mula=10, potol=21, begun=15)


