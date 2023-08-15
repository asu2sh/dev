def power_set(s):
    n = len(s)
    m = 1 << n
    
    for i in range(m):
        for j in range(n):
            if (i & (1 << j)) != 0:
                print(s[j])
        print('\n')


s = input()
power_set(s)