#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{   
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,k;
        cin>>a>>b;
        int c=0,i=0,j=0;
        
        c=(a[0]-'0')*1000+(a[1]-'0')*100+(a[3]-'0')*10+(a[4]-'0');
        if(b[0]=='A')
        {
            c=c%1200;
        }
        if(b[0]=='P' && c<1200)
        {
            c=c+1200;
        }
        int d;
        cin>>d;
        while(d--)
        {
            string e,f,g,h;
            cin>>e>>f>>g>>h;
            int i,j;
            i=(e[0]-'0')*1000+(e[1]-'0')*100+(e[3]-'0')*10+(e[4]-'0');
            if(f[0]=='A')
            {
                i=i%1200;
            }
            if(f[0]=='P' && i<1200)
            {
                i=i+1200;
            }     
            j=(g[0]-'0')*1000+(g[1]-'0')*100+(g[3]-'0')*10+(g[4]-'0');
            if(h[0]=='A')
            {
                j=j%1200;
            }
            if(h[0]=='P' && j<1200)
            {
                j=j+1200;
            }  
            if((i<=c&&j>=c))
            {
                k=k+'1';
            }
            else
            {
                k=k+'0';
            }
        }
        cout<<k<<endl;
    }
	return 0;
}
