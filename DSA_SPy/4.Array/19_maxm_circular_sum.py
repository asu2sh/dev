def naive(arr, n):
    res = arr[0]
    for i in range(n):
        curr_max, curr_sum = arr[i], arr[i]
        for j in range(1, n):
            idx = (i+j) % n
            curr_sum += arr[idx]
            curr_max = max(curr_max, curr_sum)
        res = max(res, curr_max)
    return res


def solve(arr, n):
    pass


arr = [10, 5, -5]
n = len(arr)
print(naive(arr, n), solve(arr, n))