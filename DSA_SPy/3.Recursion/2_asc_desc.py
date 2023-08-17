def to_one(n):
    if n==0:
        return
    print(n, end='')
    to_one(n-1)

def one_to(n):
    if n==0:
        return
    one_to(n-1)
    print(n, end='')

n = int(input())
to_one(n)
print('')
one_to(n)