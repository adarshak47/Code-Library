#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,odd_idx,eve_idx,sum=0;
        vector<int> v;
        cin>>n;
        eve_idx=n/2;
        odd_idx=n-eve_idx;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            v.push_back(x);
            if(x%2==0 && odd_idx>0)
            {
                sum=sum+1;
                odd_idx--;
            }
            if(x%2!=0 && eve_idx>0)
            {
                sum=sum+1;
                eve_idx--;
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
