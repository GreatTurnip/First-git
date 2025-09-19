#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int rank_index[100];
    cin >> n;
    for( int i =1 ; i<n; i++)
    {
        cin >> rank_index[i];
    }
    int high, low;
    cin >> low>> high;
    int sum =0;
    for(int i = low; i <high; i++)
    {
        sum += rank_index[i];
    }
    cout << sum << endl;
         
    return 0;
}