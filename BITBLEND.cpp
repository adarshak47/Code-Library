#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,ce=0,oe=0,oo=0,ee=0,eo=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0)
            ce++;
            if(i%2!=0 && v[i]%2==0)
            {
                oe++;
            }
            else if(i%2!=0 && v[i]%2!=0)
            {
                oo++;
            }
            else if(i%2==0 && v[i]%2==0)
            {
                ee++;
            }
            else
            {
                eo++;
            }
        }
        
        if(ce==n)
        {
            cout<<-1<<endl;
        }
        else
        {
            int m=max(eo+oe,ee+oo),o,e; 
            if(m==n)
            {
                cout<<0<<endl;
            }
            else
            {
                if(m==eo+oe)
                {
                    cout<<n-m<<endl;
                   
                   int o,oi;
                   for(int i=0;i<n;i=i+2)
                   {
                       if(v[i]%2!=0)
                       {
                           o=v[i];
                           oi=i;
                           break;
                       }
                   }
                   for(int i=0;i<n;i++)
                   {
                       if(i%2==0 && v[i]%2==0)
                       {
                           v[i]=v[i]^o;
                           cout<<i+1<<" "<<oi+1<<endl;
                       }
                       else if(i%2!=0 && v[i]%2!=0)
                       {
                           v[i]=v[i]^o;
                           cout<<i+1<<" "<<oi+1<<endl;
                       }
                       
                   }
                   
                    
                }
                else
                {
                    cout<<n-m<<endl;
                   int o,oi;
                   
                   for(int i=1;i<n;i=i+2)
                   {
                       if(v[i]%2!=0)
                       {
                           o=v[i];
                           oi=i;
                           break;
                       }
                   }
                   
                   for(int i=0;i<n;i++)
                   {
                       if(i%2==0 && v[i]%2!=0)
                       {
                           v[i]=v[i]^o;
                           cout<<i+1<<" "<<oi+1<<endl;
                       }
                       else if(i%2!=0 && v[i]%2==0)
                       {
                           v[i]=v[i]^o;
                           cout<<i+1<<" "<<oi+1<<endl;
                       }
                       
                   }
                    
                }
            }
            
        }
    }
   
	return 0;
}




