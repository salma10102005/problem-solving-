#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n%10;
    int up = n/10;
    if(temp%up == 0 || up%temp == 0)
    {
        cout << "YES" ;
    }
    else 
    {
        cout << "NO" ;
    }
    return 0;
}