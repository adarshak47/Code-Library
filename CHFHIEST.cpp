#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
   long long int t;
    cin>>t;
    while(t--)
    {
        long long int D,d,P,Q,n,x=0;
        cin>>D>>d>>P>>Q;
        n=(D-d)/d;
        n=n*(n+1)/2;
        x=P*D+(Q*n*d)+(D%d)*(D/d)*Q;
        cout<<x<<endl;
    }
	return 0;
}
