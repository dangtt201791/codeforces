def isHello(s):
    fh = s.find('h')
    if fh == -1:
        return 0
    fe = s.find('e', fh, len(s))
    if fe == -1:
        return 0
    fl1 = s.find('l', fe, len(s))
    if fl1 == -1:
        return 0
    fl2 = s.find('l', fl1 + 1, len(s))
    if fl2 == -1:
        return 0
    fo = s.find('o', fl2, len(s))
    if fo == -1:
        return 0
    return 1


s = input()
if isHello(s):
    print("YES")
else:
    print('NO')
