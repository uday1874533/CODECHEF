# NO PLACE
# cook your dish here
t = int(input())
for i in range(t):
    p,q = map(int,input().split())
    res = (p+q)
    print("Alice") if res%4 == 0 or res%4 == 1 else print("Bob")
