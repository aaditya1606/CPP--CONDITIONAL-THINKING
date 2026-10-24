// PROGRAM: TAKE DAY AND MONTH AND CHECK IF IT FORMS A VALID CALENDAR DATE(IGNORING LEAP YEARS)
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day, month;
    cout << "ENTER THE DAY: ";
    cin >> day;
    cout << "ENTER THE MONTH: ";
    cin >> month;
    if (month >= 1 && month <= 12)
    {

        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            if (day >= 0 && day <= 31)
            {
                cout << "VALID CALENDAR!!";
            }
            else
            {
                cout << "INVALID CALENDAR!!";
            }
        }
        else
        {
            if (day >= 1 && day <= 30)
            {
                cout << "VALID CALENDAR!!";
            }
            else
            {
                cout << "INVALID CALENDAR!!";
            }
        }
    }
    else
    {
        cout << "INVALID CALENDAR!!";
    }
    return 0;
}