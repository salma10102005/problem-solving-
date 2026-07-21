#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for(int i = 0; i < x; i++)
    {
        int m, n;
        cin >> m >> n;

        string s1, s2;
        cin >> s1;
        cin >> s2;

        for(int j = 0; j < min(m,n); j++)
        {
            if(s1[j] == s2[j])
            {
                cout << s1[j];
            }
            else
            {
                break;
            }
        }

        cout << endl;
    }
}