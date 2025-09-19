#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int current_num =0;
    int max_num = 0;
    int n;
    cin>>n;
    for(int i =0 ; i < n; i++)
    {
        int a , b;
        cin >> a >> b;
        current_num += b;
        current_num -= a;
        if(current_num > max_num)
        {
            max_num = current_num;
        }
    }
    cout << max_num;
    cout << endl;
    
    return 0;
}