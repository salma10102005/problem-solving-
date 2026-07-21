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
    if(x.eng_marks == y.eng_marks)
    {
        if(x.math_marks == y.math_marks)
        {
            return x.id < y.id;
        }

        return x.math_marks > y.math_marks;
    }

    return x.eng_marks > y.eng_marks;
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