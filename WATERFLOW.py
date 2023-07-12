#LT DAY 4 PREP M1


# cook your dish here
for _ in range(int(input())):
    W,X,Y,Z=map(int,input().split())
    print((('overflow','unfilled')[W+Y*Z<X],'filled') [W+Y*Z==X])
