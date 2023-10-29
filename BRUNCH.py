# cook your dish here

#GRAHANAM YESTERDAY NIGHT 
# IND VS ENG ,DUSSEHERA HOLIDAYS COMPLETED

t = int(input())
for _ in range(t):
    x,y = map(int, input().split())
    if x//y<=20:
        print(x//y)
    else:
        print(20)
