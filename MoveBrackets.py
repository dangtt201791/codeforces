def countTime(s):
    while '()' in s:
        s = s.replace('()', '')
    return (len(s)//2)


t = int(input())
ans = []
for i in range(t):
    n = int(input())
    s = input()
    ans.append(countTime(s))
for i in ans:
    print(i)
