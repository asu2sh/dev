def power(x, n):
    if n==0:
        return 1
    print('a')
    res = power(x, n//2)
    res *= res
    if n%2==0:
        return res
    return res * x


x, n= int(input()), int(input())
print(power(x, n))