#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string id;
    int credit;
    double cgpa;
};
int main()
{

    Student s[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> s1[i].id >> s1[i].credit >> s1[i].cgpa;
    }
    cout << "Students list whose CGPA is more than 3.75: ";
    for (int i = 0; i < 10; i++)
    {
        if (s[i].cgpa > 3.75)
        {
            cout << s[i].id << " ";
        }
    }
    cout << endl;
    cout << "Students list who has completed more than 50 credits: ";
    for (int i = 0; i < 10; i++)
    {
        if (s[i].credit > 50)
        {
            cout << s[i].id << " ";
        }
    }
    return 0;
}