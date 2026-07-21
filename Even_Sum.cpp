#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int i = 0; i<x ; i++)
    {
        int m,s;
        cin >>m ;
        int a[m];
        for(int i = 0; i>m ; i++)
        {
            cin >> a[i];
        }
        int sum = 0;
        for(int i = 0; i<m ; i ++)
        {
            sum += a[i];
        }
        for(int i = 0; i<m ; i++)
        {
             s = sum - a[i];
        }
        if(s%2 == 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }

        
    }
    return 0;
}