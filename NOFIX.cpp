#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        vector<int> v1(n+1),v2(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>v1[i];
            v2[i]=i-v1[i];
        }
        
        for(int i=1;i<=n;i++)
        {
            if(v2[i]+c==0)
            {
                c++;
            }
            
        }
        
        cout<<c<<endl;
        
    }
	return 0;
}
