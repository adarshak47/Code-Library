#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int d1,v1,d2,v2,p,c=0,i;
    cin>>d1>>v1>>d2>>v2>>p;
    for(i=0;c<p;i++)
    {
        if(i>=d1 && i>=d2)
        {
            c=c+((v1)+(v2));
        }
        else if(i>=d1 && i<d2)
        {
            c=c+(v1);
        }
        else if(i>=d2 && i<d1)
        {
            c=c+(v2);
        }
        else
        {
            c=c;
        }
    }
    cout<<i-1;
	return 0;
}
