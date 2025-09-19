#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    reverse(s.begin(), s.end());
    string t;
    getline(cin, t);
    s==t ? cout << "YES" : cout << "NO";
    cout << endl;

    
         
    return 0;
}