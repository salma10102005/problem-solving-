#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;

    int a[n];

    
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool palindrome = true;

    
    for(i = 0, j = n-1; i < j; i++, j--)
    {
        if(a[i] != a[j])
        {
            palindrome = false;
            break;
        }
    }

    if(palindrome)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}