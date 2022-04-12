#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,maxi=0,cnt=INT_MAX;
        cin>>n>>x;
        vector<int> v;
        map<int,int> m1,m2;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<n;i++)
        {
            m1[v[i]]++;
            m2[v[i]^x]++;
        }
        if(x==0)
        {
            for(auto it=m1.begin();it!=m1.end();it++)
            {
                maxi=max(maxi,it->second);
            }
            cnt=0;
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(m1[v[i]]+m2[v[i]]>maxi)
                {
                    maxi=m1[v[i]]+m2[v[i]];
                    cnt=m2[v[i]];
                }
                else if(m1[v[i]]+m2[v[i]]==maxi)
                {
                    cnt=min(cnt,m2[v[i]]);
                }
            }
        }
        cout<<maxi<<" "<<cnt<<endl;
    }
	return 0;
}
