count = 0
n, x = [int(i) for i in input().split()]
for i in range(1, n + 1, 1):
    if ((x // i)*i == x and x // i <= n):
        count += 1
print(count)
