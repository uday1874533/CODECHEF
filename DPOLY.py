# PIC EYES
# cook your dish here
for q in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    t = (n - 1)
    a.reverse()
    for w in a:
        if (w==0):
            t -= 1
        else:
            print(t)
            break
        
    
