 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string inputstring1;
    string inputstring2;
    cin >> inputstring1;
    int n = inputstring1.length();
    cin >> inputstring2;
    for ( int i =0 ; i < n; i++)
    {
        cout << (inputstring1[i] != inputstring2[i]? '1' : '0');
    }
    return 0;
}