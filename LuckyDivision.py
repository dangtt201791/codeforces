def isLucky(n):
    return n.count('4') + n.count('7') == len(n)


def isAlmostLucky(n):
    for i in range(2, int(n)//2 + 1):
        if int(n) % i == 0:
            if isLucky(str(i)):
                return 1
    return 0


num = input()
if isLucky(num):
    print('YES')
elif isAlmostLucky(num):
    print('YES')
else:
    print('NO')
