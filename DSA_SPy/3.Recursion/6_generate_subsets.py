def subset(s, curr='', i=0):
    if i == len(s):
        print(curr)
        return
    subset(s, curr, i+1)
    subset(s, curr + s[i], i+1) 


s = input()
subset(s)