#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string inputstring;
    cin >> inputstring;
    int countupper =0, countlower = 0;
    for(char c : inputstring)
    {
        if(isupper(c)) countupper++;
        else countlower++;
    }
    if(countupper > countlower)
    {
        transform(inputstring.begin(), inputstring.end(), inputstring.begin(), ::toupper);

    }
    if(countupper <= countlower)
    {
        transform(inputstring.begin(), inputstring.end(), inputstring.begin(), ::tolower);

    }
    cout << inputstring << endl;     
    return 0;
}