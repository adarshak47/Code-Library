#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c=0;
        cin>>a>>b;
        if(a%2==0 && b%2==0)
        {
            c=2*(a/2 * b/2);
        }
        else if(a%2==0 && b%2!=0)
        {
            c=((a/2)*(b-1)/2)+((a/2)*(b+1)/2);
        }
        else if(a%2!=0 && b%2==0)
        {
            c=((b/2)*(a-1)/2)+((b/2)*(a+1)/2);
        }
        else if(a%2!=0 && b%2!=0)
        {
            c=((a+1)/2 * (b+1)/2) + ((a-1)/2 * (b-1)/2);
        }
        else 
        {
            
        }
        cout<<c<<endl;
    }
	return 0;
}
