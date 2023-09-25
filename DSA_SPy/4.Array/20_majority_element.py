# Moore's Voting Algoritm

def solve(arr, n):
    res, cnt = 0, 1
    for i in range(1, n):
        if arr[i] == arr[res]:
            cnt += 1
        else:
            cnt -= 1
        if cnt == 0:
            res, cnt = i, 1
    
    cnt = 0
    for i in range(n):
        if arr[i] == arr[res]:
            cnt += 1
    
    if cnt > n//2:
        return res
    return -1


arr = [6, 8, 4, 8, 8]
print(solve(arr, len(arr)))