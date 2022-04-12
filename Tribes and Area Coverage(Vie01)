#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void find_tribe(vector<vector<int>> &v,int i,int j,int r,int c,int &temp)
{
    if(i<0 || i>=r || j<0 || j>=c || v[i][j]!=1)
        return;
    v[i][j]=2;
    temp=temp+1;
    find_tribe(v,i+1,j,r,c,temp);
    find_tribe(v,i,j+1,r,c,temp);
    find_tribe(v,i-1,j,r,c,temp);
    find_tribe(v,i,j-1,r,c,temp);
    find_tribe(v,i+1,j+1,r,c,temp);
    find_tribe(v,i+1,j-1,r,c,temp);
    find_tribe(v,i-1,j+1,r,c,temp);
    find_tribe(v,i-1,j-1,r,c,temp);
    
    
}

int main() {
    int n,x,tc=0,ma=0,temp=0;
    cin>>n;
    vector<vector<int>> v;
    vector<string> s;
    
    for(int i=0;i<n;i++)
    {
        vector<int> v1;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            v1.push_back(x);
        }
        v.push_back(v1);    
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i][j]==1)
            {
                temp=0;
                find_tribe(v,i,j,n,n,temp);
                if(temp>ma)
                    ma=temp;
                tc++;
            }
        }
    }
    cout<<tc<<endl<<ma<<endl;
    return 0;
}
