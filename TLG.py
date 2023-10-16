# cook your dish here
#LAST DAY FOR OWLCODING
n = int(input())
play1 = 0
play2 = 0
max1 = 0
max2 = 0
for _ in range(n):
    a,b = map(int,input().split())
    max1 += a
    max2 += b
    if max1>max2:
        play1 = max(play1,max1-max2)
    else:
        play2 = max(play2,max2-max1)
if play1>play2:
    print(1,play1)
else:
    print(2,play2)
    
    

