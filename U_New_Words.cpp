#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int e = 0, g = 0, y = 0, p = 0, t = 0;
    for(char c : s)
    {
        c = tolower(c);
        
        if(c == 'e') e++ ;
        if(c == 'g') g++ ;
        if(c == 'y') y++ ;
        if(c == 'p') p++ ;
        if(c == 't') t++ ;

    } 
    cout << min({e,g,p,y,t});
    return 0;
}