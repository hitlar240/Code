def fun(x,n):
    s = 0
    for i in range(2,n+1):
        if i%2 == 0:
            s += x**i
    return s

i = input().split(" ")
x = int(i[0])
n = int(i[1])

print(fun(x, n))
