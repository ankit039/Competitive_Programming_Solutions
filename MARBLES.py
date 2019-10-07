def nCr(n, r):
    a = min(r, n - r)
    p = 1
    for i in range(a):
        p = p * (n - i) / (1 + i)
    return p

try:
    t = int(input())
    for i in range(t):
        n, k = map(int, input().split(' '))
        print(int(nCr(n - 1, k - 1)))
except EOFError as e:
    pass

