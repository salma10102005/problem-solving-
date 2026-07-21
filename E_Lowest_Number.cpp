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
    int min = 0;
    for(int i = 1; i<n ; i++)
    {
        if(arr[i] < arr[min])
        {
            min = i;
        }
    }
    cout << arr[min] << " " << min +1 ;
    return 0;
}
// eikhne dhorlam {8,4,2,7} ache..ekhn arr[min] = 0 dhorsi mane 0 index re minimum dhorlam and 
// frst a arr[0] == 8 == min dhorsi ekhn first condition false 8<8 tai condition a jabe na 
// then 1 no index a 4<8 mane condition true so eikhne 0 index theke jabe update hoye min = i 
// mane ekhn min hobe 1 no index man hobe 4 then abr check ; 