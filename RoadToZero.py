def pay1(x, y, a, b):
    big = 0
    small = 0
    if (x > y):
        big = x
        small = y
    else:
        big = y
        small = x
    return (big - small)*a + small*b


def pay2(x, y, a, b):
    big = 0
    small = 0
    if (x > y):
        big = x
        small = y
    else:
        big = y
        small = x
    return big*b + (big - small)*a


def pay3(x, y, a, b):
    return x * a + y * a


n = int(input())
ans = []
for i in range(n):
    x, y = [int(m) for m in input().split()]
    a, b = [int(m) for m in input().split()]
    ans.append(min(pay1(x, y, a, b), pay2(x, y, a, b), pay3(x, y, a, b)))
for i in ans:
    print(i)
