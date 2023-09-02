def leader(arr):
    n = len(arr)
    maxm = arr[n-1]
    for i in range(n-1, -1, -1):
        if arr[i] >= maxm:
            print(arr[i])
            maxm = arr[i]


arr = list(map(int, input().split()))
leader(arr)