""" Set: collection of unique elements {  ,  , ...}
         no duplicates
         doesn't maintain order
"""

# lst = [5, 1, 2, 5, 3, 4, 2, 1, 2]
# print(lst)
# st = set(lst)
# print(st)
# st.add(100)
# st.add(5)
# st.remove(3)
# print(st)

# # print(st[2]) # inaccessable
# # st[2] = 72 # immutable

# for i in st: print(i)

# if 3 in st: print("exist")
# else: print('not!')


A = {1, 2, 3, 4, 5}
B = {3, 5, 7}

print(A & B) # intersection
print(A | B) # Union



# lst2 = ['habul',"abul", 'babu', 'abul', 'abu']
# print(lst2)
# st2 = set(lst2)
# print(st2)