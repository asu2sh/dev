def countDigits(n):
    if n==0:
        return 1
    res = 0
    while n > 0:
        n = n//10
        res+=1
    return res

print(countDigits(777))
# O(logn)


import math
print("countDigits:", math.floor(math.log(777, 10)) + 1)
# O(C)
# In this method to count digits, we use floor of log base 10 of a number + 1
# If n = 0, this will give ValueError