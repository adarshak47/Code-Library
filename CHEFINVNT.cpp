#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,k,x,a,b;
        cin>>n>>p>>k;
        b=p%k;
        if(n%k<=b-1)
        {
            x=(n%k)*((n/k)+1)+(b-n%k)*(n/k);
            x=x+(p/k+1);
        }
        else
        {
             x=(b)*((n/k)+1);
             x=x+(p/k+1);
        }
        cout<<x<<endl;
        
    }
	return 0;
}
