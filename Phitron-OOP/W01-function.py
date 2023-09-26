# define function

# def fun(n):
#     print(n)
#     # return n
# f = fun(72)
# print(f) # void funtion returns 'None'




# def sum(a,b,c=7): # argument c is optional
#     print(c)
#     return a+b
# print(sum(5,8))



# def is_(a,b):
#     return a<b
# print(is_(5,8))


""" Multiple return from function """
def operations(a,b):
    sum = a + b
    mul = a * b
    mod = a % b
    # return sum, mul, mod # (touple)
    return [sum, mul, mod] # [list]
print(operations(7,5))



# print(sum(input(),input()))