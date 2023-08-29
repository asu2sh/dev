def insert_ele(li, n, pos):

    idx = pos - 1
    li.append(0)
    
    for i in range(len(li)-1, idx, -1):
        li[i] = li[i-1]
        
    li[idx] = n
    return li


li = list(map(int, input().split()))
n, pos = int(input()), int(input())
print(insert_ele(li, n, pos))