# IND VS PAK IND WON   HITMAN 86  /TUTION TOPIC

# cook your dish here
market=int(input())
for m in range(market):
  e=int(input())
  s=list(map(int,input().split()))
  d=list(map(int,input().split()))
  eq=0
  for i in range(e):
    if s[i]==d[i]: eq+=1
  print(eq)
