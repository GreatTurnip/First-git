 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x1,x2,x3;
    cin >> x1 >> x2 >> x3;
    int middle;
     if ((x3 >= x1 && x3 <= x2) || (x3 >= x2 && x3 <= x1))
        middle = x3;
    else if ((x2 >= x1 && x2 <= x3) || (x2 >= x3 && x2 <= x1))
        middle = x2;
    else
        middle = x1;

    int ans = abs(middle-x1) + abs(middle-x2) + abs(middle-x3);
    cout << ans;
    return 0;
}
