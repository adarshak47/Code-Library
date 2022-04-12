#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> a;
        vector<int> b;
        int n,d,x,j=0,k=0;
        cin>>n>>d;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x>=80 || x<=9)
            {
                a.push_back(x);
            }
            else
            {
                b.push_back(x);
            }
        }
        if(a.size()%d==0 && b.size()%d==0)
        {
            cout<<a.size()/d + b.size()/d<<endl;
        }
        else if(a.size()%d!=0 && b.size()%d!=0)
        {
            cout<<a.size()/d + b.size()/d + 2<<endl;
        }
        else
        {
            cout<<a.size()/d + b.size()/d +1<<endl;
        }
    }
	return 0;
}
