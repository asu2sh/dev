def largest(arr):
    maxm = arr[0]
    for i in range(len(arr)):
        if arr[i] > maxm:
            maxm = arr[i]
            res = i
    return res


arr = list(map(int, input().split()))
print(largest(arr))