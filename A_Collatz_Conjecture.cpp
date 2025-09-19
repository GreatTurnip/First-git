#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--)
    {
        int k,x;
        cin >>k >> x;
        int res=x;
        for(int i=0;i<k;i++)
        {
           if((res-1)%3==0 && ((res-1)/3)%2!=0 )
           {
              res=(res-1)/3;
           }
           else res=res*2;
        }
        cout<<res<<endl;
    }
    return 0;
}
