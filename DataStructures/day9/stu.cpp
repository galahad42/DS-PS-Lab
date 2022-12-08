#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct student
{
    int rollNO;
    char name[20];
    int marks;
} s[3], *s1;

int main()
{

    s1 = s;

    for (int i = 0; i < 3; i++)
    {
        cin >> (s1 + i)->rollNO >> (s1 + i)->name >> (s1 + i)->marks;
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << s[i].rollNO << " " << s[i].name << " " << s[i].marks << endl;
    }
    return 0;
}