def palindrome(n):
    if n[::-1] == n:
        print('Palindrome')
    else:
        print('Not Palindrome')


def reverse(n):
    rev = 0
    while n > 0:
        rev = rev*10 + n%10
        n //= 10
    print(rev)


n = input()
palindrome(n)
reverse(int(n))
    
