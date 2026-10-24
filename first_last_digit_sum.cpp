// PROGRAM: TAKE A 3 DIGIT NUMBER AND CHECK IF THE SUM OF THE FIRST AND THE LAST DIGIT EQUALS THE MIDDLE DIGIT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "ENTER A 3-DIGIT NUMBER: ";
    cin >> num;
    if (num >= 100 && num <= 999)
    {
        int ones = num % 10;
        int tens = (num / 10) % 10;
        int hundred = num / 100;
        if (ones + hundred == tens)
        {
            cout << "TRUE!";
        }
        else
        {
            cout << "FALSE!!";
        }
    }
    else
    {
        cout << "IT SHOULD BE A 3-DIGIT NUMBER!!";
    }
    return 0;
}