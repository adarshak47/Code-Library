#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        // int a1,a2,a3,a4;
        // cin>>a1>>a2>>a3>>a4;
        // set<int> s;
        // s.insert(a1);
        // s.insert(a2);
        // s.insert(a3);
        // s.insert(a4);
        
        
        
        // if(s.size()==2)
        // cout<<s.size()/2<<endl;
        
        
        int a[4],c;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        
        map<int,int> m;
        for(int i=0;i<4;i++)
        {
            c=count(a, a + 4, a[i]);
            m.insert(pair<int, int>(a[i], c));
        }
        
        map<int, int>::iterator itr;
        

        if(m.size()==4 || m.size()==3)
        {
            cout<<"2"<<endl;
        }
        
        else if(m.size()==1)
        {
            cout<<"0"<<endl;
        }
        
        else
        {
            int g;
            for(itr = m.begin(); itr != m.end(); ++itr)
            {
                g= itr->second;
            }
            
            if(g==1 || g==3)
            {
                cout<<"1"<<endl;
            }
            else
            {
                cout<<"2"<<endl;
            }
            
        }
    }
	return 0;
}
