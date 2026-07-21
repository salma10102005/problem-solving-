#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int arr[n];
    long long sum = 0;
    for(i = 0; i<n ; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << abs(sum) ;

    return 0;
}