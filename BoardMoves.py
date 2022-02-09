def countStep(n):
    i = 1
    ans = 0
    while (2 * i + 1 <= n):
        ans += ((2 * i + 1)**2 - (2 * i - 1)**2) * i
        i += 1
    return ans


n = int(input())
ans = []
for i in range(n):
    x = int(input())
    ans.append(countStep(x))

for i in ans:
    print(i)
