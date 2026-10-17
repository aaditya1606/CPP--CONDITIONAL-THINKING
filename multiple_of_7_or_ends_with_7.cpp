// PROGRAM: CHECK IF A NUMBER IS MULTIPLE OF 7 OR ENDS WITH 7
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    if (number % 7 == 0 && number % 10 == 7)
    {
        cout << "NUMBER IS BOTH MULTIPLE OF 7 AS WELL AS ENDING WITH 7!";
    }
    else if (number % 7 == 0)
    {
        cout << "NUMBER IS MULTIPLE OF 7!!";
    }
    else if (number % 10 == 7)
    {
        cout << "NUMBER ENDS WITH 7!!";
    }
    else
    {
        cout << "NUMBER IS NEITHER MULTIPLE OF 7 NOR ENDS WITH 7!!";
    }
    return 0;
}