#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin, s);
    bool isVowel = false;
    
    for(int i =s.length()-2 ; i>=0; i--)
    {
       if (s[i] ==' ') continue;
       char ch = tolower(s[i]);
         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
       {
         isVowel = true;
         
       }
       break;
        
    }
    if(isVowel) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}