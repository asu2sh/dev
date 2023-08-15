def count_bit(n):
    cnt = 0
    for i in range(1, 33):
        if n & (1 << i-1):
            cnt += 1
    return cnt


n = int(input())
print(count_bit(n))