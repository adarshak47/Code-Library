#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int maxi=0,cnt=0,n;
        cin>>s;
        n=s.length();
        for(int i=1;i<n-1;i++)
        {
            if(s[i]!=s[0] && s[i]!=s[n-1])
            {
                cnt++;
            }
            else
            {
                cnt=0;
            }
            maxi=max(maxi,cnt);
        }
        if(maxi==0)
            cout<<-1<<endl;
        else
            cout<<maxi<<endl;
    }
	return 0;
}
