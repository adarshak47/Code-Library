t=int(input())
while(t>0):
    t=t-1
    h,p=map(int,input().split())
    while(h>0 and p>0):
        h=h-p
        p=p//2
    if(h>0):
        print("0")
    else:
        print("1")
