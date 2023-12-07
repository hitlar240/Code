""" list -> array """

#index:   0   1   2   3   4   5   6   7   8   9
arr =    [1,  2,  3,  4,  5,  6,  7,  8,  9,  10]
#index:  -10 -9  -8  -7  -6  -5  -4  -3  -2  -1

# print(arr[4])
# print(arr[-6])

""" list[start : end] """
# print(arr[3 : 7]) # from index 3 to < 7
# print(arr[-7 : -3]) # from index -7 to < -3
# print(arr[3 : ]) # from 3 to end
# print(arr[ : 7]) # from 0 to < 7
# print(arr[ : ]) # from begin to end
print(arr[ : : -1]) # from end to begin (reverse)

for i in arr[: : -1]:
    print(i)

# print(arr)

""" list[start : end : step] """
# print(arr[3 : 7 : 2]) # from index 3 to < 7 increment 2
# print(arr[-7 : -3 : 2]) # from index -7 to < -3 increment 2

# print(arr[9 : 0 : -1])
# print(arr[9 : 0 : -2])


""" ------------------------------------------------------ """


# """ list method """
# arr = [1, 2, 3, 4, 5]
# print(arr)

# arr.append(6)
# print(arr)

# arr.insert(3, 100) # insert 100 at index 3
# print(arr)

# if 100 in arr:
#     arr.remove(100) # remove 100 from the list
# print(arr)

# last = arr.pop() # remove & return last element
# print(last, arr)

# if 3 in arr:
#     index = arr.index(3) # search & return index of 3
#     print(index)

# # count = arr.count(100)
# count = arr.count(2)
# print(count)

# arr.reverse() # reverse list
# print(arr)

# arr.sort() # sort list
# print(arr)


# """ --------------------------------------------------- """

# num = [1, 5, 10, 17, 20, 25, 31, 35, 44, 53]

# # odd = []
# # for n in num:
# #     if n%2 == 1 and n%5 == 0:
# #         odd.append(n)
# # print(odd)

# odd = [n   for n in num if n%2 == 1 and n%5 == 0]
# print(odd)


# """ Nested loop """

# A = ['a','b','c']
# B = [1, 2, 3]

# # cp = [] # cartesian product
# # for a in A:
# #     for n in B:
# #         cp.append((a,n)) # tuple
# #         # cp.append([a,n]) # list


# cp = [(a,n) for a in A for n in B] # tuple
# # cp = [[a,n] for a in A for n in B] # list
# print(cp)

