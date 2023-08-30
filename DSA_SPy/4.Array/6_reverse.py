def reverse(arr):
    k = -1
    for i in range(len(arr)//2):
        arr[i], arr[k] = arr[k], arr[i]
        k = k-1
    return arr


arr = list(map(int, input().split()))
print(reverse(arr))