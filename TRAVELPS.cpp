#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--)
    {
        int n,a,b,sum=0;
        string s;
        cin>>n>>a>>b;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                sum+=a;
            }
            else
            {
                sum+=b;
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
