# WIFI NOT WORKOIND

# cook your dish here
t = int(input())
for i in range(t):
    s,x,y,z = map(int,input().split())
    print(0) if (x+y+z) <= s else print(1) if (x+z) <= s or (y+z) <= s else print(2)
