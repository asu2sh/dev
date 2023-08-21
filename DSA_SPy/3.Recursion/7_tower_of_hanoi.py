def toh(n, A, B, C):
    if n == 1:
        print(f'Move {n} from {A} to {C}')
        return
    toh(n-1, A, C, B)
    print(f'Move {n} from {A} to {C}')
    toh(n-1, B, A, C)


n = int(input())
toh(n, 'A', 'B', 'C')