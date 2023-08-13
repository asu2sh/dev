def prime_factors(n):
    i, temp = 2, n
    while i*i <= n:
        while temp%i == 0:
            print(i)
            temp //= i
        i += 1
    if temp > 1:
        print(temp)


n = int(input())
prime_factors(n)
