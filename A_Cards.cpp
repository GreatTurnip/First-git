#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    bool all_equal = true;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[i]={x,i+1};
        if(i > 0 && x != a[0].first) all_equal = false;
    }
    sort(a.begin(),a.end());
    int i=0;
    int j=n-1;
     if(all_equal) {
        for(int i = 0; i < n; i += 2)
            cout << i+1 << " " << i+2 << "\n";
    } else {
        sort(a.begin(), a.end());
        int i = 0, j = n-1;
        while(i < j) {
            cout << a[i].second << " " << a[j].second << "\n";
            i++; j--;
        }
    }
    return 0;
}
