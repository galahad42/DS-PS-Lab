// Find weekday of given date
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int date, month, year;
    int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string day[] = {
        "saturday",
        "sunday",
        "monday",
        "tuesday",
        "wednesday",
        "thursday",
        "friday",
    };
    vector<int> leap;

    cin >> date >> month >> year;
    int days;
    int count;
    int lcount = 0;
    bool isleap = false;

    // 1-1-2000 --> sunday
    for (int i = 2000; i <= year; i += 4)
    {
        if (i == year)
        {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            {
                isleap = true;
            }

            continue;
        }
        else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            lcount++;
        }
    }

    days = lcount * 366 + (year-2000 - lcount -1 ) * 365;

    if (isleap == true)
    {
        months[1] = 29;
    }
    else {
        months[1] = 28;
    }

    for (int i = 0; i < month; i++)
    {
        days += months[i];
    }

    days += date;

    int remainder = days % 7;
    cout << day[remainder];

    return 0;
}