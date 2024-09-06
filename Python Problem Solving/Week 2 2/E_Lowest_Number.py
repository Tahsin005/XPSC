n = int(input())

arr = list(map(int , input().split()))
idx = 0
mn = arr[0]
for i in range(n):
    if arr[i] < mn:
        mn = arr[i]
        idx = i
        
print(f'{mn} {idx + 1}')