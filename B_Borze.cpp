#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string input_string;
    cin >> input_string;
    for(int i = 0; i < input_string.size();)
    {
        if(input_string[i] == '.')
        {
            cout << '0';
            i++;
        }
        else
        {
            if(input_string[i + 1] == '.')
            {
                cout << '1';
            }
            else 
            {
                cout << '2';
            }
            i = i+2;

        }

    }
    return 0;
}