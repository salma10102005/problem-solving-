#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin >> x >> y;
    int a[x]; 
    for(int i = 0; i<x ; i++)
    {
        cin >> a[i];
    }
    int count = 0;
     int s = a[y-1];
        for(int i = 0; i<x; i++)
        {
            if(a[i]>=s && a[i]>0) count++;
        }
    cout << count;

    return 0;
}