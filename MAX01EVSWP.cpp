#include <bits/stdc++.h>
using namespace std;




int main() {

  int testcase;
  cin >> testcase;
  while(testcase--){
    int n;
    cin >> n;
    string s;    
    cin >> s; 
    int  c1 = 0, c0 = 0;
    for(int i = 0;i < s.length();i++){
       if(s[i]=='0')
        c0++;
        else
         c1++; 
    }
    int res = 0;
    int len = s.length();
    if(len&1)len--;
    int string01 = 1, string10 = 1;
    for(int i = 0;i <= len-2;i+=2){
        if(s[i] != '0' || s[i+1] != '1'){

            string01 = 0;
        }
        
        if(s[i] != '1' || s[i+1] != '0'){
            string10 = 0;
        }
    }
    
    if(string01){
        cout << len/2 << endl;
        continue;
    }
    else if (string10){
        if(s[len] == '1'){
            cout << (len/2) << endl;
            continue;
        }
    
    }

    if(c1== c0){
        res = c1 - 1;
    }
    else if(c1 < c0){
        res = c1;
        
    }
    else if(c1 > c0){
        res = c0;
   }
    
    cout << res << endl;
  }
  
  
  return 0;
}
