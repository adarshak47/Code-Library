#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x;
        cin>>n;
        if(n==1)
        {
            x=20;
        }
        else if(n==2)
        {
            x=36;
        }
        else if(n==3)
        {
            x=51;
        }
        else if(n==4)
        {
            x=60;
        }
        else if(n%4==0)
        {
            x=((n/4)-1)*44+60;
        }
        else if(n%4==1)
        {
            x=((n/4)-1)*44+56+20;
        }
        else if(n%4==2)
        {
            x=((n/4)-1)*44+52+36;   
        }
        else 
        {
            x=((n/4)-1)*44+48+51;
        }
        cout<<x<<endl;
    }
	return 0;
}
