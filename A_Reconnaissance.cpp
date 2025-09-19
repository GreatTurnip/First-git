#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin >> n >> d;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int count =0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(abs(a[i] - a[j]) <= d && i!=j)
            {
                count++;
            }
        }
    }
    cout << count;     
    return 0;
}