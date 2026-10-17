// PROGRAM: TAKE A 3-DIGIT NUMBER AND DETERMINE IF THE MIDDLE DIGIT IS THE LARGEST/SMALLEST/NEITHER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER A 3-DIGIT NUMBER: ";
    cin >> number;
    int ones = number % 10;
    int tens = (number / 10) % 10;
    int hundred = number / 100;
    if (number >= 100 && number <= 999)
    {

        if (tens > ones && tens > hundred)
        {
            cout << "MIDDLE DIGIT IS THE LARGEST!!";
        }
        else if (tens < ones && tens < hundred)
        {
            cout << "MIDDLE DIGIT IS THE SMALLEST!!";
        }
        else
        {
            cout << "MIDDLE DIGIT IS NEITHER THE SMALLEST NOR THE LARGEST!!";
        }
    }
    else
    {
        cout << "ENTER A 3-DIGIT NUMBER!!";
    }
    return 0;
}