n = input().split(" ")
k = int(n[0])
s = int(n[1])
if s < k: k = s

cnt = 0
for i in range(0,k+1):
    for j in range(0,k+1):
        if (s-i-j >= 0 and s-i-j <= k): 
            cnt += 1

print(cnt)