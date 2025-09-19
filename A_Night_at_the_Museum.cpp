 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    int forward , backward;
    int count =0;
    char prev = 'a';
    for(char ch : str)
    {
       forward = abs(ch - prev);
       backward = 26 - abs(ch - prev);
       count += min(forward,backward);
       prev= ch;
    }

    cout << count;
    return 0;
}
