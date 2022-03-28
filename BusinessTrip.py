k = int(input())
a = input().split()
a = [int(i) for i in a]
a.sort(reverse=True)
length = 0
count = 0
while length < k:
    length += a[count]
    count += 1
    if count == 12 and length < k:
        count = -1
        break
print(count)
