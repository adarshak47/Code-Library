t=int(input())
while(t>0):
    t=t-1
    s=0
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    for i in range(0,n):
        if(a[i]>=k):
            s=s+a[i]-k
    print(s)
