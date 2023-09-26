t = int(input())
for i in range(t):
    a = str(input())
    for j in a[::-1]:
        print(f'{j} ',end="")
    print()