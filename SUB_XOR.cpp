#include <bits/stdc++.h>
using namespace std;
#define mod 998244353


int func(long long a, unsigned int b, int c)
{
    int ans=1;
    a=a%c;
    if(a==0)
    {
        return 0;
    }
 
    while(b>0)
    {
        if(b&1)
            
            ans=(ans*a)%c;
        b=b>>1;
        a=(a*a)%c;
    }
    return ans;
}


int main() {
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      string s;
      cin>>s;
      vector<long long> v(n+2,0);
      for(int i=0;i<n;i++){
              
            if(s[i]=='1'){
                v[0]+=i;
                v[1]-=i;
                int j=n-i-1;
                
                v[0]+=1;
                v[j+1]-=1;
                
                if(i>0 && i<n-1){
                    v[1]+=i;
                    v[j+1]-=i;
                }
            }
        }
      long long ans=0,temp;
      if(v[0]&1){
          ans+=1;
      }
      for(int i=1;i<=n+1;i++){
          v[i]+=v[i-1];
          if(v[i]&1){
              temp=func(2,i,mod);
              ans=((ans%mod)+(temp%mod))%mod;
          }
      }
      cout<<ans<<endl;
  }
  
  return 0;
}
