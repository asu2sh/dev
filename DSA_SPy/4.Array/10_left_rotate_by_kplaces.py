def rev(arr, low, high):
    while low < high:
        arr[low], arr[high] = arr[high], arr[low]
        low += 1
        high -= 1

def left_rotate(arr, k):
    n = len(arr)
    rev(arr, 0, k-1)
    rev(arr, k, n-1)
    rev(arr, 0, n-1)
    return arr


arr = [1, 2, 3, 4, 5]
k = 2
print(left_rotate(arr, k))


# TC: O(n)  SC: O(n)
def rotate_left(arr, k):
    n = len(arr)
    res = []
    for i in range(k, n):
        res.append(arr[i])
    for i in range(k):
        res.append(arr[i])
    return res