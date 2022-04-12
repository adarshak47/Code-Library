#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main(void) {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0,maxi=0;
        scanf("%d %d",&n,&k);
        char x[n];
        scanf("%s",x);
        for(int i=0;i<n;i++)
        {
            if(x[i]=='*')
            {
                c++;
                if(c>maxi)
                maxi=c;
            }
            else
            c=0;

        }
        if(maxi>=k)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
	return 0;
}

