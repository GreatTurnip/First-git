#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        string name;
        cin>>name;
        int before,after;
        cin>>before>>after;
        if(before>=2400 && after>before)
        {
            flag=true;
            break;
        }        
    }
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
