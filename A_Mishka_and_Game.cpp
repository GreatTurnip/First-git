 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int mishka=0,chris=0;
    for(int i=0;i<n;i++)
    {
       int m,c;
       cin >> m >> c;
       if(m>c) mishka++;
       if (c>m)chris++;
    }
    if(mishka>chris) cout<<"Mishka";
    else if(chris>mishka) cout<< "Chris";
    else cout<< "Friendship is magic!^^";

    return 0;
}
