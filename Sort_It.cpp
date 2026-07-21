#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public :
    string name;
    int cls;
    char sec;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student x, Student y)
{
    int total1 = x.math_marks + x.eng_marks;
    int total2 = y.math_marks + y.eng_marks ;
    if(total1 == total2)
    {
        return x.id < y.id ;
    }
    else
    {
        return total1 > total2 ;
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i =0; i<n ; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].sec
        >> a[i].id >> a[i].math_marks >> a[i].eng_marks ;
    }
    sort (a,a+n, cmp);
    for(int i = 0; i<n; i++)
    {
        cout << a[i].name <<" "
         << a[i].cls <<" "
          << a[i].sec <<" "
           << a[i].id <<" "
            << a[i].math_marks <<" "
             << a[i].eng_marks <<" " <<endl;

    }


    return 0;
}