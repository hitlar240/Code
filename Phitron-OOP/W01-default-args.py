def fun(a, b, *args): # *args  variable number of parameters (tuple)
    print(args)
    for i in args:
        print(i)
    return a+b

x = fun(1, 3, 5, 9, 0)
print(x)
