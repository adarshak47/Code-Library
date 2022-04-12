#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e,b,c,d,e1,b1,c1,d1,j=0;
        cin>>n;
        int a[n+1],l[n+1];
        if(n==2)
        {
            for(int i=1;i<=n;i++)
            {
                cin>>a[i];
                if(a[i]==1)
                e=e1=i;
                else
                b=b1=i;
            }
            for(int i=1;i<=n;i++)
            {
                cin>>l[i];
            }
            while(b<=e)
            {
                b=b+l[b1];
                j++;
            }
        }
        if(n==3)
        {
            for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                e=e1=i;
                else if(a[i]==2)
                b=b1=i;
                else
                c=c1=i;
        }
        for(int i=1;i<=n;i++)
        {
            cin>>l[i];
        }
        while(b<=e)
        {
            b=b+l[b1];
            j++;
        }
        while(c<=b)
        {
            c=c+l[c1];
            j++;
        }
        }
        if(n==4)
        {
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                e=e1=i;
                else if(a[i]==2)
                b=b1=i;
                else if(a[i]==3)
                c=c1=i;
                else
                d=d1=i;
        }
        for(int i=1;i<=n;i++)
        {
            cin>>l[i];
        }
        while(b<=e)
        {
            b=b+l[b1];
            j++;
        }
        while(c<=b)
        {
            c=c+l[c1];
            j++;
        }
        while(d<=c)
        {
            d=d+l[d1];
            j++;
        }
        }
        cout<<j<<endl;
    }
}
