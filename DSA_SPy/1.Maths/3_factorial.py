def fact(n):
    res = 1
    while n>1:
        res *= n
        n -= 1
    print(res)
    
    
def recurFact(n):
    if n == 0:
        return 1
    return n * recurFact(n-1)


n = int(input())
fact(n)
print(recurFact(n))
