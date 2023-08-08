def fib(n):
    if n==0 or n==1:
        print(n)
        return
    a, b = 0, 1
    print(a, b, sep='\n')
    for i in range(2, n+1):
        c = a+b
        print(c)
        a = b
        b = c

n = int(input())
fib(n)