#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long int k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i<n ; i++)
    {
        cin >> arr[i];
    }
    int flag = 100;
    int max = 0;
    for(int i = 0; i<n ; i++)
    {
        if(arr[i] <= k && arr[i] > max)
        {
            //kinte parbe
            max = arr[i];
            flag = 200; 
        }
    }
    if(flag == 100)
    {
        cout << "-1";
    }
    else 
        cout << max << endl;
  
    return 0;
}