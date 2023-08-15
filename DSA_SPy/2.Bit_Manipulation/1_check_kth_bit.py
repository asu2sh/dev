def check_bit(n, k):
    if n & (1 << k-1):
        return True
    return False


n, k = int(input()), int(input())
print(check_bit(n, k))