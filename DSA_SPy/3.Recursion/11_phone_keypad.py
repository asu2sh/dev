# Approach 1
def kphone(a, keypad, res, idx=0, output=[]):
    if idx == len(a):
        res.append(''.join(output))
        return
    
    key = int(a[idx])
    val = keypad.get(key)
    
    for i in range(len(val)):
        output.append(val[i])
        kphone(a, keypad, res, idx+1, output)
        output.pop()


# Approach 2
def phone(n, keypad, res, output=""):
    if n == 0:
        res.append(output)
        return
    
    key = n % 10
    val = keypad.get(key)
    
    for i in range(len(val)):
        phone(n//10, keypad, res, val[i]+output)


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
kphone(a, keypad, res1)
print(res1)

res2 = []
phone(n, keypad, res2)
print(res2)
