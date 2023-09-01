def zero(arr):
    idx = 0
    for i in range(len(arr)):
        if arr[i] != 0:
            arr[i], arr[idx] = arr[idx], arr[i]
            idx += 1
    return arr


arr = list(map(int, input().split()))
print(zero(arr))