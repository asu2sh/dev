def one_odd(n):
    res = 0
    for i in range(len(n)):
        res ^= n[i]
    return res


n = list(map(int, input().split()))
print(one_odd(n))