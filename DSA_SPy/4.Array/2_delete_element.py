def delete(arr, n):
    idx = -1
    for i in range(len(arr)):
        if arr[i] == n:
            idx = i
            break
    for i in range(idx, len(arr)-1):
        arr[i] = arr[i+1]
    
    arr[-1] = 0
    if idx == -1:
        return idx
    return arr


arr = list(map(int, input().split()))
n = int(input())
print(delete(arr, n))