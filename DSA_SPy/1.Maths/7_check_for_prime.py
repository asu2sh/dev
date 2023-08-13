# import math

def check_prime(n):
    if n==1:
        return False
    if n==2 or n==3:
        return True
    if n%2==0 or n%3==0:
        return False
    # for i in range(5, math.floor(math.sqrt(n))):
    #     if n%i==0:
    #         return False
    i = 5
    while i*i <= n:
        if n%i==0:
            return False
        i+=1
    return True


n = int(input())
print(check_prime(n))