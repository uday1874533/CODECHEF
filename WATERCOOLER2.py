# SUNIL GAADU COMEDY

# cook your dish here
rent=int(input())
for r in range(rent):
  c,p=map(int,input().split())
  if c>=p: print(0)
  else:
    print(p//c) if c<p and p%c!=0 else print((p//c)-1)




# YESTERDAY AFGHANISTAN WON