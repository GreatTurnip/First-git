#include <bits/stdc++.h>
using namespace std;

int main() {
ios::sync_with_stdio(false);
cin.tie(nullptr);
int n;
cin>>n;
vector<int> a(n);
for(int i=0;i<n;i++) cin>>a[i];
int count=1;
int ans=1;
for(int i=0;i<n-1;i++)
{
    if(a[i+1]>a[i])
    {
        count++;
        ans=max(ans,count);
    }
    else count=1;
}
cout<<ans<<endl;
return 0;
}
