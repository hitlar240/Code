n = int(input())
lst = input().split()
sl = sorted(set(lst))

cnt = {}
for i in sl:
    cnt[i] = 0

for i in lst:
    cnt[i] += 1

sum = 0
for i in sorted(set(lst)):
    if cnt[i] > int(i):
        sum += cnt[i] - int(i)
    elif cnt[i] < int(i):
        sum += cnt[i]

print(sum)