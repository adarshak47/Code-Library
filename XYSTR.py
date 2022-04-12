t=int(input())
while(t>0):
    t=t-1
    a=[]
    c=0
    s=input()
    n=len(s)
    for i in range(0,len(s)):
        a.insert(i,s[i])
    i=0
    while(i<n-1):
        if(a[i]==a[i+1]):
            i=i+1
        else:
            c=c+1
            i=i+2
    print(c)
