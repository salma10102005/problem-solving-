#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int larg = n, small = 1;
    for(int i = 0; i< n ; i++)
    {
        if(i%2 != 0)
        {
            cout << larg <<" " ;
            larg--;
        }
        else
        {
            cout << small << " ";
            small++ ;
        }
    }
    return 0;
}