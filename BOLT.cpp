#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        float k1,k2,k3,v,y,z=9.58;
        cin>>k1>>k2>>k3>>v;
        y=100/(k1*k2*k3*v);
        y=round(y*100)/100;
        if(y<z)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
	return 0;
}
