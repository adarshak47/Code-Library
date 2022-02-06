#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int lis[n];
    for(int i=0;i<n;i++)
    {
        lis[i]=1;
    }


    for(int i=1;i<n;i++)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(v[i]>v[j] && lis[i]<lis[j]+1)
            {
                lis[i]=lis[i]+1;
            }
        }
    }
    cout<<*max_element(lis,lis+n)<<endl;
}