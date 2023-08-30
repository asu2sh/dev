def check_sorted(arr):
    inc, dec = True, True
    
    for i in range(len(arr)-1):
        if not arr[i] <= arr[i+1]:
            inc = False
            break
            
    for i in range(len(arr)-1):
        if not arr[i] >= arr[i+1]:
            dec = False
            break
    
    if inc or dec:
        return True
    return False

arr = list(map(int, input().split()))
print(check_sorted(arr))