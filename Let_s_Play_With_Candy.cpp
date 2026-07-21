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
    int mex = 0;
    for(int i = 0; i<n ; i++)
    {
        if(arr[i] == mex )
        {
            //present 
            mex++ ;
        }
    }
    cout << mex ;
    return 0;
}