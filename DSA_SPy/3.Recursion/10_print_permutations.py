def permute(s, n, res, idx=0):
    if len(s) == 1: # if size of string is 1, return s
        return s   
    if idx == n-1:
        x = ''.join(s)  # to return string back from the list
        if x not in res:    # to remove duplicates
            res.append(x)
        return
    for i in range(idx, n):
        s[i], s[idx] = s[idx], s[i] # I
        permute(s, n, res, idx+1)
        s[i], s[idx] = s[idx], s[i] # II
        print('1')
    return res


s = input()
res = permute(list(s), len(s), [])  # list(s) to convert to list since strings are immutable -> I & II
res.sort()  # for lexicographical order
for i in res:
    print(i)