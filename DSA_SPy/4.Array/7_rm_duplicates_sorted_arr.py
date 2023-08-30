# Remove duplicates from a sorted list
def remove_duplicates(arr):
    idx = 1
    for i in range(len(arr)):
        if arr[idx-1] != arr[i]:
            arr[idx] = arr[i]
            idx += 1
    return arr


arr = list(map(int, input().split()))
print(remove_duplicates(arr))

# SC: O(n)
# def remove_duplicates(arr):
#     tmp = []
#     for i in range(len(arr)):
#         if arr[i] not in tmp:
#             tmp.append(arr[i])
#     return tmp