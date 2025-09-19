#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int twocount =0;
    if(n%2 !=0)
    {
        while(n>3)
    {
        
        n=n-2;
        twocount++; 
       
        
    }
    cout << twocount + 1 << endl;
    for(int i=twocount;i>0;i--)
    {
        cout << 2 << " ";
    }
    cout << 3;     
    }
    else
    {
         while(n>0)
    {
        
        n=n-2;
        twocount++; 
       
        
    }
    cout << twocount << endl;
    for(int i=twocount;i>0;i--)
    {
        cout << 2 << " ";
    }
         
    }
    return 0;
}

