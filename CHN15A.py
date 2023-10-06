# OS GANGGGARAPAM 
# SE OSDKMNAH
# PAK 286 NETHERLAND 77-2

# cook your dish here
for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(input().split())
    count = 0
    for i in range(n):
        a[i] = int(a[i]) + k 
        if (a[i] % 7 == 0):
            count += 1
    print(count)
