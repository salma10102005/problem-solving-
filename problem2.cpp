#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int x, y, z, a, b;
        cin >> x >> y >> z >> a >> b;

        int count60 = 0;
        int count30 = 0;

        if (x >= 60) count60++;
        if (y >= 60) count60++;
        if (z >= 60) count60++;
        if (a >= 60) count60++;
        if (b >= 60) count60++;

        if (x >= 30) count30++;
        if (y >= 30) count30++;
        if (z >= 30) count30++;
        if (a >= 30) count30++;
        if (b >= 30) count30++;

        if (count60 >= 2 && count30 >= 4)
            cout << "Pass" << endl;
        else
            cout << "Fail" << endl;
    }

    return 0;
}