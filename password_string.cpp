// PROGRAM: TAKE A PASSWORD STRING AND CHECK BASIC RULES(LENGTH>=8 AND CONTAINS ATLEAST ONE DIGIT)
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string password;
    cout << "ENTER THE PASSWORD: ";
    cin >> password;
    int length = password.size();
    bool flag = false;
    if (length >= 8)
    {
        for (int i = 0; i < length; i++)
        {
            if (password[i] >= '0' && password[i] <= '9')
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
        {
            cout << "TRUE!";
        }
        else
        {
            cout << "FALSE!";
        }
    }
    else
    {
        cout << "FALSE!";
    }
    return 0;
}