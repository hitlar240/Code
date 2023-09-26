t = int(input())
for i in range(t):
    n = input().split(" ")
    x = min(int(n[0]), int(n[1]))
    y = max(int(n[0]), int(n[1]))

    s = 0
    for k in range(x+1, y):
        if k%2 != 0:
            s += k
    print(s)