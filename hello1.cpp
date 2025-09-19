 #include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int time_remain = 240 - k;
    int count = 0;

    if (time_remain > 0) {
        while (time_remain >= 0) {
            count++;
            time_remain -= 5 * count;
        }
        count--; 
        if (count > n) count = n;
        cout << count;
    } else {
        cout << 0;
    }

    return 0;
}
