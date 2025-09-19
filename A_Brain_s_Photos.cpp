 #include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,c;
    cin >> n >> c;
    vector <string> photo(n);
    bool bw=true;
    char pixel;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin >> pixel;
            if(pixel=='C'||pixel=='M'||pixel=='Y') bw=false;
        }
    }
    if(bw==true) cout<<"#Black&White"<<endl;
    else cout<<"#Color";
    return 0;
}
