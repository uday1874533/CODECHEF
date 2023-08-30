# cook your dish here

#RAAKHI 2 DAYS 30&31
for _ in range(int(input())):
    n, a, b = map(int,input().split())
    print(b*(n%2) + (a+b)*(n//2))
