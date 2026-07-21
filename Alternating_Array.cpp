#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        int count1 = 0;
        int count2 = 0;
        for(int i = 0; i<n ; i++)
        {
            int x;
            cin >> x;
            if(i%2 == 0)
            {
                if(x%2 == 0)
                count1++;
                if(x%2 == 1)
                count2++ ;
            }
            else
            {
                if(x%2 == 1)
                count1++;
                if(x%2 == 0)
                count2++;
            }
            
        }
        cout << min(count1,count2) << endl;
    }
    return 0;
}