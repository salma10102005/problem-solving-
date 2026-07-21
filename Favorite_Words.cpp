#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s[0] == 'c' || s[s.size()-1] == 'f')
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;

}