def max_profit(arr):
    n = len(arr)
    res = 0
    
    for i in range(n-1):
        if arr[i] < arr[i+1]:
            res += (arr[i+1] - arr[i])
    return res


# arr = list(map(int, input().split()))
arr = [1, 5, 3, 8, 12]
print(max_profit(arr))