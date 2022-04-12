#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,x;
        cin>>a>>b>>c>>d;
        x=(c/a)+(d/b);
        cout<<x<<endl;
    }
	return 0;
}
