# cook your dish here


for _ in range(int(input())):
    n, money = map(int, input().split())
    L = list(input().split())
    for i in range(n):
        L[i] = int(L[i])
        
    ns = ""
    for i in range(n):
        if (L[i] <= money):
            ns += "1"
            money -= L[i]
        else:
            ns += '0'
    
    print(ns)
    
