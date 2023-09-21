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


def kadane(arr, n):
    curr_max, res = arr[0], arr[0]
    for i in range(1, n):
        curr_max = max(curr_max + arr[i], arr[i])
        res = max(curr_max, res)
    return res

def solve(arr, n):
    max_normal = kadane(arr, n)
    if max_normal < 0:
        return max_normal
    arr_sum = 0
    for i in range(n):
        arr_sum += arr[i]
        arr[i] = -arr[i]
    max_circular = kadane(arr, n) + arr_sum
    return max(max_normal, max_circular)

arr = [10, 5, -5]
n = len(arr)
print(naive(arr, n), solve(arr, n))