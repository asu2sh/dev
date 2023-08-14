def iter_pow(x, n):
    res = 1
    while n>0:
        if n & 1:
            res *= x
        x *= x
        n = n >> 1
    return res


x, n = int(input()), int(input())
print(iter_pow(x, n))