def trapped(arr):
    n = len(arr)
    res = 0
    lmax, rmax = [None]*n, [None]*n
    
    maxm = 0
    for i in range(n):
        lmax[i] = max(maxm, arr[i])
        if arr[i] > maxm:
            maxm = arr[i]
    
    maxm = 0
    for i in range(n-1, -1, -1):
        rmax[i] = max(maxm, arr[i])
        if arr[i] > maxm:
            maxm = arr[i]
    
    for i in range(n):
        res += (min(lmax[i], rmax[i]) - arr[i])
        
    return res


arr = list(map(int, input().split()))
print(trapped(arr))