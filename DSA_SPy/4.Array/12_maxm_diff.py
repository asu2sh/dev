def maxm_diff(arr):
    n = len(arr)
    res = arr[1] - arr[0]
    minm = arr[0]
    for j in range(1, n):
        res = max(res, arr[j] - minm)
        minm = min(minm, arr[j])
    return res


arr = list(map(int, input().split()))
print(maxm_diff(arr))


# TC: O(n^2)
# def maxm_diff(arr):
#     n = len(arr)
#     res = arr[1] - arr[0]
#     for i in range(n-1):
#         for j in range(i+1, n):
#             res = max(res, arr[j]-arr[i])
#     return res