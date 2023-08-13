def sieve(n):
    isPrime = [True] * (n+1)
    i = 2
    while i*i <= n:
        if isPrime[i]:
            j = 2*i
            while j <= n:
                isPrime[j] = False
                j += i
        i += 1
    res = [i for i in range(2, n+1) if isPrime[i] == True]
    return res


def sievee(n):
    isPrime = [True] * (n+1)
    for i in range(2, n+1):
        if isPrime[i]:
            print(i)
            j = 2
            while i*j <= n:
                isPrime[i*j] = False
                j += i


n = int(input())
print(sieve(n))
sievee(n)