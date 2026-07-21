// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,i;
//     cin >> n ;
//     int a[n];
//     for (int i = 0; i<n ; i++)
//     {
//         cin >> a[i];
//     }
//     for(int i = n-1 ; i >= 0 ; i--)
//     {
//         cout << a[i] << " " ;
//     }
//     return 0;
// }
//or
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i = 0; i<n ; i++)
    {
        cin >> v[i];
    }
    for(int i = n-1; i>=0 ; i--)
    {
        cout<<v[i] << " " ;
    }
    return 0;
}