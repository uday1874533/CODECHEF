# TENSION TENSION 

# cook your dish here
angle = int(input())
for n in range(angle):
  a,b,c,d = map(int,input().split())
  print("yes") if (a+c and b+d)==180 else print("no")
