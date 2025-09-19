#include <bits/stdc++.h>
using namespace std;
bool isTriangular(int n)
{
    int value = 8*n +1;
    int root = sqrt(value);
    return root*root == value;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    cin >> n;
    if(isTriangular(n))
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}