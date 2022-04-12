t=int(input())
while(t>0):
    t=t-1
    sum=0
    n=input()
    n=int(n)
    a=list(map(int,input().split()))
    for i in range(1,n):
        if(a[i]>a[i-1]):
            sum=sum+a[i]-a[i-1]-1
        else:
            sum=sum+a[i-1]-a[i]-1
    print(sum)
