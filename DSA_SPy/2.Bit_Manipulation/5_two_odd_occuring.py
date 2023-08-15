def two_odd(n):
    x = 0
    for i in range(len(n)):
        x ^= n[i]
    
    k = x & (~ (x - 1))
    
    res1, res2 = 0, 0
    for i in range(len(n)):
        if n[i] & x == 0:
            res1 ^= n[i]
        else:
            res2 ^= n[i]
    return (res1, res2)


n = list(map(int, input().split()))
print(two_odd(n))