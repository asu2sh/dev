def left_rotate(arr):
    n = len(arr)
    for i in range(n):
        arr[n-1-i], arr[0] = arr[0], arr[n-1-i]
    return arr


def rotate(arr):
    n = len(arr)
    tmp = arr[0]
    for i in range(1, n):
        arr[i-1] = arr[i]
    arr[n-1] = tmp
    return arr


arr = [1, 2, 3, 4, 5]
print(rotate(arr))