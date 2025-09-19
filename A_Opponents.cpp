#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    int count=0;
    int ans=0;
    for(int i=0;i<d;i++)
    {
        string a;
        cin>>a;
        auto it =a.find('0');
        if(it!=string::npos)
        {
          count++;
          ans=max(ans,count);
        }
        else count=0;
    }
    cout<<ans<<endl;
    return 0;
}
