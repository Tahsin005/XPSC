n = int(input())

arr = list(map(int , input().split()))
val = int(input())
found = 0
for i in range(n):
    if arr[i] == val:
        print(i)
        found = 1
        break
if found == 0:
    print(-1)