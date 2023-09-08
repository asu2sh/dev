def solve(arr):
    cnt, res = 0, 0
    for i in range(len(arr)):
        if arr[i] == 1:
            cnt += 1
        else:
            res = max(res, cnt)
            cnt = 0
    return max(res, cnt)


# arr = [0, 1, 1, 0, 1, 0]    # 2
# arr = [1, 1, 1, 1]          # 4
# arr = [0, 0, 0]             # 0
arr = [1, 0, 1, 1, 1, 1, 0, 1, 1]
print(solve(arr))