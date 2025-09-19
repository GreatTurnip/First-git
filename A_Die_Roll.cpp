#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int y,w;
    cin >> y >> w;
    int max_roll = max(y,w);
    int remaining = 6 - max_roll +1;
    if(remaining == 6) cout << "1/1";
    else if(remaining == 5) cout << "5/6";
    else if(remaining == 4) cout << "2/3";
    else if(remaining == 3) cout << "1/2";
    else if(remaining == 2) cout << "1/3";
    else if(remaining == 1) cout << "1/6";
    else cout << "0/1";
    
    return 0;
}