n, m = [int(x) for x in input().split()]
Dic = {}
for i in range(m):
    lan1, lan2 = [x for x in input().split()]
    if (len(lan1) <= len(lan2)):
        Dic[lan1] = lan1
        Dic[lan2] = lan1
    else:
        Dic[lan1] = lan2
        Dic[lan2] = lan2
str = input().split()
for i in range(n):
    print(Dic[str[i]], end=' ')
