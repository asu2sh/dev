def subset(arr, n, sum):
    if n == 0:
        if sum == 0:
            return 1
        return 0
    return subset(arr, n-1, sum) + subset(arr, n-1, sum - arr[n-1])

   
arr = list(map(int, input().split()))
sum = int(input())
print(subset(arr, len(arr), sum))