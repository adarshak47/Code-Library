#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> cost(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>cost[i][j];
        }
    }

    vector<int> dp(pow(2,n));
    for(int i=0;i<pow(2,n);i++)
    {
        dp[i]=INT_MAX;
    }

    dp[0]=0;

    for(int mask=0;mask<pow(2,n);mask++)
    {
        int x=__builtin_popcount(mask);
        for(int j=0;j<n;j++)
        {
            if(mask & (1<<j))
                continue;
            dp[mask | (1<<j)]=min(dp[mask | (1<<j)],dp[mask]+cost[x][j]);
        }
    }

    cout<<dp[pow(2,n)-1];
}