#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,col,ar;
        cin>>n;
        if(n==1)
            cout<<1<<" "<<4<<endl;
        else
        {
             col=1+(4*(((n-1)*(n))/2));
             ar=4+(8*(n-1));
             cout<<col<<" "<<ar<<endl;
            
        }
       
    }
    return 0;
}
