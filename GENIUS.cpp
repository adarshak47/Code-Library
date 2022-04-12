#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x;
        if(x%3==0)
        {
            a=x/3;
            b=0;
        }
        else if(x%3==1)
        {
            a=(x/3)+1;
            b=2;
        }
        else 
        {
            a=(x/3)+1;
            b=1;
        }
        
        if(a+b<=n)
        {
            cout<<"Yes\n";
            cout<<a<<" "<<b<<" "<<n-a-b<<endl;
        }
        else
        {
            cout<<"No\n";
        }
    }
	return 0;
}
