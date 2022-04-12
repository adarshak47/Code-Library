#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<long long int> v;
        long long int n,i,x;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }
        x=0;
        sort(v.begin(),v.end());
        x=abs(v[0]-v[1])+abs(v[1]-v[n-1])+abs(v[n-1]-v[0]);
        printf("%lld\n",x);
    }
	return 0;
}
