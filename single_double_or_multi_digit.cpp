// PROGRAM: CHECK WHETHER A GIVEN NUMBER IS SINGLE DIGIT/DOUBLE DIGIT/MULTI DIGIT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    if (number < 0)
    {
        number = number * (-1);
    }
    if (number >= 0 && number <= 9)
    {
        cout << "SINGLE DIGIT!!";
    }
    else if (number >= 10 && number <= 99)
    {
        cout << "DOUBLE DIGIT!!";
    }
    else
    {
        cout << "MULTI DIGIT!!";
    }
    return 0;
}