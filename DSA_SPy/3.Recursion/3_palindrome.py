def palindrome(s, start, end):
    if start >= end:
        return True
    return (s[start] == s[end]) and palindrome(s, start+1, end-1)
    

s = input()
print(palindrome(s, start=0, end=len(s)-1))