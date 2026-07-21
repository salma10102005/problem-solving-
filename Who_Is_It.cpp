#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id, marks;
    string name;
    char section;
};

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        Student s[3];

        // input
        for(int i = 0; i < 3; i++)
        {
            cin >> s[i].id
                >> s[i].name
                >> s[i].section
                >> s[i].marks;
        }

        Student best = s[0];

        // compare
        for(int i = 1; i < 3; i++)
        {
            if(s[i].marks > best.marks)
            {
                best = s[i];
            }

            else if(s[i].marks == best.marks)
            {
                if(s[i].id < best.id)
                {
                    best = s[i];
                }
            }
        }

        cout << best.id << " "
             << best.name << " "
             << best.section << " "
             << best.marks << endl;
    }

    return 0;
}