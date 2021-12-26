def sortStrength(m):
    if (m[0] < s):
        return m[1]
    else:
        return -1


s, n = [int(x) for x in input().split()]
l = []
for i in range(n):
    t = [int(x) for x in input().split()]
    l.append(t)
l.sort(key=sortStrength, reverse=True)
while(len(l) != 0 and l[0][0] < s):
    s += l[0][1]
    l.pop(0)
    l.sort(key=sortStrength, reverse=True)
if len(l) == 0:
    print('YES')
else:
    print('NO')
