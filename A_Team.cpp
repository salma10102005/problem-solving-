#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int count = 0;
    while(x--)
    {
        int a,y,z;
        cin >> a >> y >> z;

        int sum = a+y+z;
        if(sum >= 2) count ++;
    }
    cout << count;
    return 0;
}