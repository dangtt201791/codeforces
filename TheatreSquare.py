def LamTron(n, a):
    return n//a + (0 if n % a == 0 else 1)


s = input().split()
n, m, a = [int(x) for x in s]
print(LamTron(n, a) * LamTron(m, a))
