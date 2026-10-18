// PROGRAM: CHECK WHETHER A NUMBER IS PERFECT SQUARE OR NOT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER A POSITIVE NUMBER: ";
    cin >> number;
    if (number < 0)
    {
        cout << "INVALID INPUT!!";
    }
    bool flag = true;
    for (int i = 0; i <= number; i++)
    {
        flag = true;
        if (i * i == number)
        {
            cout << "PERFECT SQUARE!!";
            break;
        }
        else
        {
            flag = false;
        }
    }
    if (flag == false)
    {
        cout << "NOT A PERFECT SQUARE!!";
    }
    return 0;
}