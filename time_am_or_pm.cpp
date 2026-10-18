// PROGRAM: TAKE 24-HOUR TIME(HOURS AND MINUTES) AND PRINT WHETHER IT IS AM OR PM
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "ENTER THE TIME IN 24 HOUR FORMAT(HOURS AND MINUTES)";
    int hr, min;
    cout << "ENTER HOURS(0-23): ";
    cin >> hr;
    cout << "ENTER MINUTES(0-59): ";
    cin >> min;
    if ((hr >= 0 && hr < 24) && (min >= 0 && min <= 59))
    {
        if (hr >= 0 && hr <= 11)
        {
            cout << "AM!";
        }
        else
        {
            cout << "PM!";
        }
    }
    else
    {
        cout << "INVALID TIME FORMAT!!";
    }
    return 0;
}