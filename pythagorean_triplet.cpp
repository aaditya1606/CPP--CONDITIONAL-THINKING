// PROGRAM: TAKE THREE NUMBERS AND CHECK IF THEY CAN FORM A PYTHAGOREAN TRIPLET
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "ENTER THE FIRST NUMBER: ";
    cin >> num1;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> num2;
    cout << "ENTER THE THIRD NUMBER: ";
    cin >> num3;
    if ((num1 * num1 == num2 * num2 + num3 * num3) || (num2 * num2 == num1 * num1 + num3 * num3) || (num3 * num3 == num1 * num1 + num2 * num2))
    {
        cout << "PYTHAGOREAN TRIPLET EXIST!!";
    }
    else
    {
        cout << "PYTHAGOREAN TRIPLET DOES NOT EXIST!!";
    }
    return 0;
}