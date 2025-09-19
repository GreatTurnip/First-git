 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, r;
    cin >> k >> r;

    int a;
    int b = 1;          
    bool flag = false;
    while (flag == false) {
        if ((k * b) % 10 == 0 || (k * b) % 10 == r) {
            a = b;
            flag = true;
        } else {
            b++;
        }
    }
    cout << a;
    return 0;
}
