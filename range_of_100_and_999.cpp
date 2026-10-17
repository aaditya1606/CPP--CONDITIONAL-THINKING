// PROGRAM: CHECK IF A NUMBER LIES WITHIN THE RANGE OF [100,999]
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    if (number >= 100 && number <= 999)
    {
        cout << "NUMBER LIES WITHIN THE RANGE!!";
    }
    else
    {
        cout << "NUMBER DOES NOT LIES WITHIN THE RANGE!!";
    }
    return 0;
}