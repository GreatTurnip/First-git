#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string str;
    cin >> str;
    int a=0,d=0;
    for(int i=0;i<n;i++ )
    {
       if(str[i]=='A') a++;
       if(str[i]=='D') d++;
    }
    if(a>d) cout << "Anton";
    else if(d>a) cout << "Danik";
    else cout << "Friendship";
    return 0;
}
