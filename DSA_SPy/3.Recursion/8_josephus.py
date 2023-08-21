def josephus(n, k):
    if n == 1:
        return 0
    else:
        return (josephus(n-1, k) + k) % n


def jos(n, k, i=0):
    if len(n) == 1:
        return n[0]
    i = (i+k-1)%len(n)
    n.pop(i)
    print(n)
    return jos(n, k, i)


n, k = int(input()), int(input())
print(josephus(n, k))

n = [i for i in range(n)]
print(jos(n, k))
