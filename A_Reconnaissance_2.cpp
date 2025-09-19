#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> a(n);
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int mindiff = abs(a[1] - a[0]);
    int currentdiff, pos1=0, pos2=1;
    for(int i=0; i<n; i++)
    {
        currentdiff = abs(a[i] - a[(i+1)%n]);
        if(currentdiff < mindiff)
        {
            mindiff = currentdiff;
            pos1 = i;
            pos2 = (i+1)%n;
        }

    }
    cout << pos1+1 << " " << pos2+1 << endl;
    
         
    return 0;
}