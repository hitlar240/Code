# def add(a,b):
#     return a+b

add = lambda a, b : a + b
pwr = lambda a, b : a**b

print(add(2,5), pwr(5,2))

# dbl = lambda a : a*2

arr = [1, 2, 3, 4, 5]
# dbl_arr = map(dbl, arr)
dbl_arr = map(lambda a: a*2, arr)
print(arr)
print(list(dbl_arr))



stu = [ # list of dictiionary
{"Name": 'tom', 'Roll': 23, "Mark": 72},
{"Name": 'al', 'Roll': 3, "Mark": 27},
{"Name": 'tanvir', 'Roll': 32, "Mark": 32},
{"Name": 'abul', 'Roll': 240, "Mark": 55},
{"Name": 'babu', 'Roll': 72, "Mark": 99},
]

passed = filter(lambda s: s["Mark"]>=33, stu)
print(list(passed))

print(list(filter(lambda s: s["Roll"]%2==0, stu)))