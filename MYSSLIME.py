# cook your dish here

def getLeft(i, l, n):
    if i > 1:
        return 0
    elif i == 0:
        return 0
    return l[0]
def getRight(i, l, n):
    if i == n-1:
        return 0
    elif i < n - 2:
        return 0
    return l[i+1]
    


for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    
    
    res = 0
    for i in range(n):
        left = getLeft(i, l, n)
        right = getRight(i, l, n)
        
        res = max(l[i] - left - right, res)
    print(res)