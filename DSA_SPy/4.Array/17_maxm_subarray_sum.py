def max_sub_sum(arr):
    n = len(arr)
    max_curr, res = arr[0], arr[0]
    for i in range(1, n):
        max_curr = max(max_curr + arr[i], arr[i])
        res = max(max_curr, res)
    return res


arr = [2, 3, -8, 7, -1, 2, 3]   # 11
# arr = [5, 8, 13]                # 26
# arr = [-6, -1, -8]              # -1
print(max_sub_sum(arr))