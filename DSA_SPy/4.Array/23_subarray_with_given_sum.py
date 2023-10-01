def solve(arr, n, k):
    curr_sum, idx = 0, 0
    for i in range(n):
        curr_sum += arr[i]
        while curr_sum > k:
            curr_sum -= arr[idx]
            idx += 1
        if curr_sum == k:
            return True
    return False


arr = [1, 4, 20, 3, 10, 5]
k = 3
print(solve(arr, len(arr), k))