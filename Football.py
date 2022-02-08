n = int(input())
count = 1
s = input()
tt = "T"
i = 1
while (i <= n - 1):
    t = input()
    if t == s:
        count += 1
    else:
        tt = t
    i += 1
if (count > (n - count)):
    print(s)
else:
    print(tt)
