#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    int b[m];
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int val;
    cin >> val;

    for(int i = 0; i < val; i++)
    {
        cout << a[i] << " ";
    }

    for(int i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }

    for(int i = val; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}