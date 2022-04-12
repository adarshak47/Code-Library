#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n1,n2;
    cin>>n1;
    vector<string> v1(n1);
    for(int i=0;i<n1;i++)
    {
        cin>>v1[i];
    }
    cin>>n2;
    while(n2--)
    {
        string s;
        cin>>s;
        int count1=count(v1.begin(),v1.end(),s);
        cout<<count1<<endl;
    }
    
    return 0;
}
