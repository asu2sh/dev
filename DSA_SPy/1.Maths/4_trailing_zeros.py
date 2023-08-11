def trailingZeros(n):
    '''
    trailing zeros in factorial of n
    e.g. n=10, n! = 3628800 o/p = 2
    for n=100, o/p = 24
    not a good idea to find factorial, 
    but we can count no. of pairs of 2's and 5's
    but since count of 2's always more, we count the 5's
    '''
    res = 0
    x = 5
    while x<=n:
        res += n//x
        x *= 5
    return res


n = int(input())
print(trailingZeros(n))