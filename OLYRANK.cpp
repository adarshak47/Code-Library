#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        int g1,s1,b1,g2,s2,b2,s11=0,s22=0;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        // s11=g1*3+s1*2+b1*1;
        // s22=g2*3+s2*2+b2*1;
        
        s11=g1+s1+b1;
        s22=g2+s2+b2;
        
        if(s11>s22)
        {
            cout<<"1"<<endl;
            
        }
        
        else
        {
            cout<<"2"<<endl;
        }
        
        
    }
	return 0;
}
