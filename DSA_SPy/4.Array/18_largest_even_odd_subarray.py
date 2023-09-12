# Maximum length Alternating Even-Odd Subarray

def naive(arr, n):
    res = 1
    for i in range(n):
        curr = 1
        for j in range(i+1, n):
            if (arr[j]%2 == 0 and arr[j-1]%2 != 0) or (arr[j]%2 != 0 and arr[j-1]%2 == 0):
                curr += 1
            else:
                break
        res = max(res, curr)
    return res


def solve(arr, n):
    res ,curr = 1, 1
    for i in range(1, n):
        if (arr[i]%2 == 0 and arr[i-1]%2 != 0) or (arr[i]%2 != 0 and arr[i-1]%2 ==0):
            curr += 1
        else:
            curr = 1
        res = max(curr, res)
    return res


# arr = [7, 10, 13, 14]       # 4
# arr = [10, 12, 8, 4]        # 1
arr = [5, 10, 20, 6, 3, 8]    # 3
n = len(arr)
print(naive(arr, n), solve(arr, n))