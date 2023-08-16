def max_and(arr):
    pattern = 0
    res = 0

    for i in range(31, -1, -1):
        pattern = res | (1 << i)
        cnt = 0
        for j in range(len(arr)):
            if pattern & arr[j] == pattern:
                cnt += 1
        if cnt >= 2:
            res = res | (1 << i)
    return res


arr = list(map(int, input().split()))
print(max_and(arr))