#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int m;
        cin >> m;

        int even = 0, odd = 0;

        for(int i = 0; i < m; i++)
        {
            int x;
            cin >> x;

            if(x % 2 == 0)
                even++;
            else
                odd++;
        }

        if(m % 2 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << abs(even - odd) / 2 << endl;
        }
    }

    return 0;
}