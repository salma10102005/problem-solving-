#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int v = x%10;
    int m = x/10;
    if(v != m) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}