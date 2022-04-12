#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c0,c1;
        string s;
        cin>>n>>s;
        c0=count(s.begin(),s.end(),'0');
        c1=count(s.begin(),s.end(),'1');
        if(n%2==0)
        {
            if((c0%2==0 && c1%2==0) || (c0==c1))
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
	return 0;
}
