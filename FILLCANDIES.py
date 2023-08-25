# VARALAKSHIMI VRATAM

# cook your dish here
candy = int(input())
for c in range(candy):
  n,k,m = map(int,input().split())
  print(n//(k*m)) if n%(k*m)==0 else print((n//(k*m))+1)
