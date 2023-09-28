def solve(arr, n, k):
    curr_max = 0
    for i in range(k):
        curr_max += arr[i]
    res = curr_max
    for i in range(k, n-1):
        curr_max = curr_max + arr[i] - arr[i-k]
        res = max(curr_max, res)
    return res

arr = [1, 8, 30, -5, 20, 7]
k = 4
print(solve(arr, len(arr), k))