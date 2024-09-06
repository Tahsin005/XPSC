n = int(input())

arr = list(map(int , input().split()))
sum = 0
for  i in range(len(arr)):
    sum += arr[i]
    
if sum >= 0:
    print(sum)
else:
    print(sum * -1)