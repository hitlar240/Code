n = int(input())

f = [0, 1] 
for i in range(2,n):
    f.append(f[i-1] + f[i-2])

for i in range(0,n):
    print(f'{f[i]} ', end="")