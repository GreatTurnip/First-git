#include <bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,x;
    cin>>n>>x;
    long long int ic_count=x;
    long long int d_count=0;
    while(n--)
    {
        char s;
        cin>>s;
        if(s=='+')
        {
           long long int i;
           cin>>i;
           ic_count+=i;
        } 
        else
        {
           long long int i;
           cin>>i;
           if(ic_count-i<0) 
           {
            d_count++;
           }
           else ic_count-=i;
        }
    }
    cout<<ic_count<<" "<<d_count<<endl;
    return 0;
}
