n, t = input().split()
n = int(n)
if len(t) > n:
    print(-1)
else:
    while len(t) < n:
        t += '0'
    print(t)
