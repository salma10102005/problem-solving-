#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a>1000)
    {
        cout << "I will buy Punjabi" << endl ;
        int sub = a - 1000 ;
        if(sub >= 500)
        {
            cout << "I will buy new shoes" << endl ;
            cout << "Alisa will buy new shoes" << endl ;
        }
    }
    else
    {
        cout << "Bad luck!" << endl;
    }
    return 0;
}