#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b;
    cin >> a >> b >> n;
    while (n>0)
    {
       n=n-std::gcd(a,n);
       if (n <= 0)
       {
         cout << "0";
         break;
       }
       n= n - std::gcd(b,n);
       if(n<=0)
       {
         cout << "1";
         break;

       }
    }
    
    return 0;
}