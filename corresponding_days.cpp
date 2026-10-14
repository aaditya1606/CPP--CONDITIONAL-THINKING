// PROGRAM: TAKE A DAY NUMBER(1-7) AND PRINT THE CORRESPONDING DAY NAME
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cout << "ENTER THE DAY NUMBER(1-7):";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "MONDAY!!";
        break;
    case 2:
        cout << "TUESDAY!!";
        break;
    case 3:
        cout << "WEDNESDAY!!";
        break;
    case 4:
        cout << "THURSDAY!!";
        break;
    case 5:
        cout << "FRIDAY!!";
        break;
    case 6:
        cout << "SATURDAY!!";
        break;
    case 7:
        cout << "SUNDAY!!";
        break;
    default:
        cout << "INVALID DAY ENTERRED!!";
        break;
    }
    return 0;
}