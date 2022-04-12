#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    long long int t; 
    cin >> t; 
    while (t--) 
    { 
        long long int a[4]; 
        for (int i = 0; i < 4; i++) 
            cin >> a[i]; 
        sort(a, a + 4); 
        long long int a1 = (a[2] + a[0]) / 2; 
        long long int b1 = a[2] - a1; 
        long long int a2 = (a[2] + a[1]) / 2; 
        long long int b2 = a[2] - a2; 
        long long int a3 = (a[3] + a[0]) / 2; 
        long long int b3 = a[3] - a3; 
        long long int a4 = (a[3] + a[1]) / 2; 
        long long int b4 = a[3] - a4; 
        if ( (a1 != 0) && (b1 != 0)) 
            if ((a1 / b1 == a[1]) && (a1 * b1 == a[3]) && (a1 >= 1) && (b1 >= 1) && (a1 <= 10000) && (b1 <= 10000)) 
            { 
                cout << a1 << " " << b1 << endl; 
                continue; 
            } 
        if ((a2 != 0) &&  (b2 != 0)) 
            if ((a2 / b2 == a[0]) && (a2 * b2 == a[3]) && (a2 >= 1) && (b2 >= 1) && (a2 <= 10000) && (b2 <= 10000)) 
            { 
                cout << a2 << " " << b2 << endl; 
                continue; 
            } 
        if ((a3 != 0) && (b3 != 0)) 
            if ((a3 / b3 == a[1]) && (a3 * b3 == a[2]) && (a3 >= 1) && (b3 >= 1) && (a3 <= 10000) && (b3 <= 10000)) 
            { 
                cout << a3 << " " << b3 << endl; 
                continue; 
            } 
        if ( (a4 != 0) &&  (b4 != 0)) 
            if ((a4 / b4 == a[0]) && (a4 * b4 == a[2]) && (a4 >= 1) && (b4 >= 1) && (a4 <= 10000) && (b4 <= 10000)) 
            { 
                cout << a4 << " " << b4 << endl; 
                continue; 
            } 
        cout << "-1 -1" << endl; 
    } 
    return 0; 
}
