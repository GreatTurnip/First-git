#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
        if(n%2==0)
        {
            cout<<0<<endl;
        }
        else cout<<x<<endl;
    }
    return 0;
}
