# M3 L6 ...

# cook your dish here
for _ in range(int(input())):
    X,Y,Z= map(int,input().split())
    if Y%Z==0:
        print((Y//Z)*X)
    else:
        print((Y//Z+1)*X)

    
    
        
