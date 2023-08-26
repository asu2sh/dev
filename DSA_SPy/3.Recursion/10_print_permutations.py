def permute(s, idx=0):
    if idx == len(s)-1:
        print(''.join(s))
        return
    for i in range(len(s)):
        s[i], s[idx] = s[idx], s[i]
        permute(s, idx+1)
        s[i], s[idx] = s[idx], s[i]


s = input()
permute(list(s))