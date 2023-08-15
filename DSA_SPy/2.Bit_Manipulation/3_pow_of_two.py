def power_two(n):
    if n==0:
        return False
    return (n & (n-1) == 0)


n = int(input())
print(power_two(n))