st = input()
n = len(st)

cnt = l = r = j = 0
sub = ''
arr = []

for i in range(0,n):
    if st[i] == 'L': 
        l += 1
        sub += 'L'
    # elif st[i] == 'R': 
    else:
        r += 1
        sub += 'R'
    if l==r:
        cnt += 1
        arr.append(sub)
        sub = ''
        l = r = 0


print(cnt)
for i in arr:
    print(i)
