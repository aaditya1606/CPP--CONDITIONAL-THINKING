// PROGRAM: TAKE TWO DATES AND DETERMINE WHICH ONE COMES FIRST IN THE CALENDAR
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day1, month1, day2, month2;
    cout << "ENTER THE FIRST DAY: ";
    cin >> day1;
    cout << "ENTER THE FIRST MONTH: ";
    cin >> month1;
    cout << "ENTER THE SECOND DAY: ";
    cin >> day2;
    cout << "ENTER THE SECOND MONTH: ";
    cin >> month2;
    if ((month1 >= 1 && month1 <= 12) && (month2 >= 1 && month2 <= 12) && (day1 >= 1 && day1 <= 31) && (day2 >= 1 && day2 <= 31))
    {
        if (month1 > month2)
        {
            cout << "DATE 2 COMES FIRST!";
        }
        else if (month1 < month2)
        {
            cout << "DATE 1 COMES FIRST! ";
        }
        else
        {
            if (day1 > day2)
            {
                cout << "DATE 2 COMES FIRST!";
            }
            else if (day1 < day2)
            {
                cout << "DATE 1 COMES FIRST!";
            }
            else
            {
                cout << "BOTH THE DATES ARE SAME!";
            }
        }
    }
    else
    {
        cout << "INVALID DATE!";
    }
    return 0;
}