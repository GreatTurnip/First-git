#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string guest, host;
    cin >> guest;
    cin >> host;
    string inputstring;
    cin >> inputstring;
    string targetstring;
    targetstring = guest + host;
    int inputcount =0, targetcount = 0;
    for ( char c : inputstring)
    {
        inputcount++;

    }
    for ( char c : targetstring)
    {
        targetcount++;
    }
    if(inputcount>targetcount) cout <<"NO";
    else if(inputcount == targetcount)
    {
        sort(inputstring.begin(), inputstring.end());
        sort(targetstring.begin(), targetstring.end());
        if(inputstring == targetstring) cout <<"YES";
        else cout <<"NO";
    }
    else
    {
        cout <<"NO";
    }

    return 0;
}
