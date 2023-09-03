# RAIN WON THE MATCH 
#IND VS PAK 
#SALAAR 24TH NOV LATEST

# cook your dish here
t=int(input())
for i in range(t):
    x1, x2, y1, y2=map(int, input().split())
    print(max(abs(x1-y1), abs(x2-y2)))
