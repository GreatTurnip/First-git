 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,c;
    cin >> n >> c;
    vector<long long> arr(n); 
    for(int i=0; i<n;i++)
    {
        cin >> arr[i]; 
    }
    int count =1;
    for(int i=1; i<n;i++)
    {
        if(arr[i] - arr[i-1] <= c) count ++;
        else count=1;
    }
    cout << count;
    return 0;
}
