def reverse(arr):
    k = -1
    for i in range(len(arr)//2):
        arr[i], arr[k] = arr[k], arr[i]
        k = k-1
    return arr


arr = list(map(int, input().split()))
print(reverse(arr))


def rev(arr):
    low = 0
    high = len(arr) - 1
    while(low < high):
        arr[low], arr[high] = arr[high], arr[low]
        low += 1
        high -= 1
    return arr