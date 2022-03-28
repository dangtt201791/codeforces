n, m = [int(i) for i in input().split()]
if (n < m):
    print(-1)
else:
    step = m
    while(2 * step < n):
        step += m
    print(step)
