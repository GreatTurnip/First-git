#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;
    string str;
    cin >> str;
    int g = str.find('G');
    int t = str.find('T');
    if(g>t)
    {
      reverse(str.begin(),str.end());
    }
    bool gflag=false;
    bool findflag = false;
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='G') 
        {
            gflag=true;
            j=i;
        }
        if(gflag==true)
        {
            j+=k;
            if (j >= n) break;
            if(str[j]=='#')
            {
                findflag=false;
                break;
            }
            else if(str[j]=='T')
            {
                findflag=true;
                break;
            }
        }
    }
    if(findflag) cout << "YES";
    else cout << "NO";         
    return 0;
}