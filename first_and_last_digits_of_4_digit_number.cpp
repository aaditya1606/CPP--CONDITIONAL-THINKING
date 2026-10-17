// PROGRAM: TAKE A 4-DIGIT NUMBER AND CHECK IF THE FIRST AND THE LAST DIGITS ARE EQUAL OR NOT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER A 4-DIGIT NUMBER: ";
    cin >> number;
    if (number >= 1000 && number <= 9999)
    {

        int last_digit = number % 10;
        int first_digit = number / 1000;
        if (last_digit == first_digit)
        {
            cout << "EQUAL!!";
        }
        else
        {
            cout << "NOT EQUAL!!";
        }
    }
    else
    {
        cout << "ENTER A 4-DIGIT NUMBER!!";
    }
    return 0;
}