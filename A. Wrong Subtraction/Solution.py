n,k = input().split()
k = int(k)

for num in range(0, k):
    if int(n[len(n)-1]) == 0:
            n = str(int(int(n)/10))
    else:
            n = str(int(n)-1)

print(n)