# Approach 1
def kphone(a, N, pad, res, s, i=0):
    if i == N:
        res.append(''.join(s))
        return
    
    num = int(a[i])
    char = pad.get(num)
    
    for j in range(len(char)):
        s.append(char[j])
        kphone(a, N, pad, res, s, i+1)
        s.pop()


# Approach 2
def phone(n, keypad, res, output=""):
    if n == 0:
        res.append(output)
        return
    
    s = keypad.get(n % 10)
    
    for i in range(len(s)):
        phone(n//10, keypad, res, s[i]+output)


a = input()
n = int(a)
keypad = {
    0: "",
    1: "",
    2: "abc",
    3: "def",
    4: "ghi",
    5: "jkl",
    6: "mno",
    7: "pqrs",
    8: "tuv",
    9: "wxyz",
}

res1 = []
kphone(a, len(a), keypad, res1, [])
print(res1)

res2 = []
phone(n, keypad, res2)
print(res2)
