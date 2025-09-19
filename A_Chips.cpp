#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int sum = 0;
    while (true)
    {
        bool flag = true;
        for ( int i =1; i <= n; i++)
        {
             if(m>=i)
             {
                m -= i;
                
             }
             else 
             {
                flag = false;
                break;
             }
             
        }
        if (!flag) break;
    
    }
    cout << m<< endl; 
         
    return 0;
}