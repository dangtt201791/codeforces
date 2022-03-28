n, a, b = [int(i) for i in input().split()]
print((n - a) if (n - a) < (b + 1) else (b + 1))
