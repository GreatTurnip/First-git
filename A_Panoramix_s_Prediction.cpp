#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    bool answer= false;
    cin >> n>> m;
    int x= n;
    while(answer==false) 
    {
    x++;
    answer = true;
    if(x<2) answer = false ;
    else if(x==2) answer = true;
    else if(x%2==0) answer = false;
    else 
    {
        for( int i=3; i<= sqrt(x); i+=2)
        {
            if(x%i==0)
            {
                answer = false;
                break;
            }
        }
    }
    }
    if (x == m)
    cout << "YES\n";
else
    cout << "NO\n";

    cout << endl;
    
    
    
    
    
    
    return 0;
}