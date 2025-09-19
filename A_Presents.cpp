#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> p(n+2);
    vector <int> res(n+2);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        res[p[i]] = i;
    }
    for ( int i =1; i <=n ; i++)
    {
        cout << res[i] << " ";
    }
    cout << "\n";
    return 0;
}