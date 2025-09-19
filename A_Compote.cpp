#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >>a;
    cin >> b;
    cin >> c;
    int result;
    int count=0;
    for(int i=0;i<=a;i++)
    {
         if(i*2<=b && i*4<=c) count=i;
    }
    result = count + 2*count + 4*count;
    cout << result;
         
    return 0;
}
