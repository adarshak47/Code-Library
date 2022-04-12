#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        long long int profit;
        scanf("%d",&n);
        int p[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
        }
        sort(p,p+n,greater<int>());
        profit=p[0];
        for(j=1;j<n;j++)
        {
            p[j]=p[j]-j;
            if(p[j]>0)
            {
                profit=profit+p[j];
            }
        }
        profit=profit%1000000007;
        printf("%lld\n",profit);
    }

return 0;
}
