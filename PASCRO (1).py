# cook your dish here
t=int(input())
for i in range(t):
    c,cf=0,0
    r=int(input())
    chef=input()
    chefina=input()
    for j in range(r):
        if(chef[j]=='S'and chefina[j]=='R'):
            cf+=1
        elif(chef[j]=='R' and chefina[j]=='P'):
            cf+=1
        elif(chef[j]=='P' and chefina[j]=='S'):
            cf+=1
        elif(chef[j]==chefina[j]):
            continue
        else:
            c+=1
    if c==cf:
        print(1)
    elif(c>cf):
        print(0)
    else:
        diff=cf-c
        print(diff//2+1)