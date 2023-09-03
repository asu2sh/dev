def frequency(arr):
    n = len(arr)
    cnt = 1
    for i in range(1, n):
        if arr[i] != arr[i-1]:
            print(arr[i-1], cnt)
            cnt = 0
        cnt += 1
    print(arr[n-1], cnt)


arr = [10, 10, 10, 20, 30, 30]
frequency(arr)