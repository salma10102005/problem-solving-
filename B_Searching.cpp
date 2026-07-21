#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin >> arr[i];
    }
    int a;
    cin >> a;
    int flag = 100;
    for(int i = 0; i<n ; i++)
    {
        if( arr[i] == a)
        {
            cout << i << endl;
            flag = 200;
            break;
        }
        
    }
    if(flag == 100)
    {
        cout << "-1" << endl ;
    }
    
    return 0;
}