def sec_largest(arr):
    maxm = arr[0]
    res1, res2 = -1, -1
    for i in range(len(arr)):
        if arr[i] > maxm:
            maxm = arr[i]
            res2 = res1
            res1 = i
    return res2


arr = list(map(int, input().split()))
print(sec_largest(arr))