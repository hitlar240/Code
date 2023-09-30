""" Tuple: (  ,  ,...) immutable"""

# def fun(a,b,c):
#     return a,b,c # return tuple
# print(fun(1,2,3))



# tpl = 'abul', "babul", 'tom al', 123, True  # Heterogeneous

# print(tpl)
# print(type(tpl))
# print(tpl[2])
# print(tpl[-2])
# print(tpl[2:5])
# print(tpl[5:2:-1])

# tpl[2] = "Tanvir" # does not support item assignment | immutable
# print(len(tpl))

# for i in tpl: print(i)

# if "tomal" in tpl: print('ase')
# else: print("nai!")


# tpl2 = ('abul', "babul", 'tom al'), 123, True  # nested tuple
# print(tpl2)
# print(len(tpl2))

tpl3 = [1,2,3,4,5], ["a",'b','c']
print(tpl3)
# print(type(tpl3))
# print(type(tpl3[1]))
# print(len(tpl3))
# print(len(tpl3[0]))

# tpl3[1] = [6,7,8] # immutable element in tuple
tpl3[1][1] = 0 # mutable element in list
print(tpl3)


""" List: [  ,  ,...] mutable"""
# lst = ['abul', "babul", 'tom al', 123, True]  # Homogeneous
# print(lst)
# # print(type(lst))

# lst[2] = "Tanvir" # mutable
# print(lst)