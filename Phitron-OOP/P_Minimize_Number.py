
def even(lst,n):
    for i in range(n):
        if(int(lst[i])%2!=0):
            return False
        else: lst[i] = int(lst[i])/2
    return True

n = int(input())
lst = input().split()

cnt = 0
while even(lst, n):
    cnt += 1

print(cnt)