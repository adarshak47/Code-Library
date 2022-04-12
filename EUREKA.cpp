#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        double x;
        cin>>n;
        x=(pow(0.143*n,n));
        if(x-int(x)<0.5)
        cout<<int(x)<<endl;
        else
        cout<<int(x)+1<<endl;
        
    }
	return 0;
}
