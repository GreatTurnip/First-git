#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,z;
    cin >> n >> m >> z;
    int min_conflict = lcm(n, m);
    int answer = z/min_conflict;
    cout << answer << endl;

    return 0;
}