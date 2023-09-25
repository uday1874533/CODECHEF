# BUS ...
#ANNAVARAM
# DAY 1

# cook your dish here
out=int(input())
for o in range(out):
  n,x,p=map(int,input().split())
  if (x*3)+((n-x)*-1)>=p: 
    print("pass")
  else: print("fail")
