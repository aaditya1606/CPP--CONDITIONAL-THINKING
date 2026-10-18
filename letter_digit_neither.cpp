// PROGRAM: TAKE A CHARACTER AND CHECK IF IT IS A LETTER/DIGIT/NEITHER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char character;
    cout << "ENTER THE CHARACTER: ";
    cin >> character;
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z'))
    {
        cout << "LETTER!!";
    }
    else if (character >= '0' && character <= '9')
    {
        cout << "DIGIT!!";
    }
    else
    {
        cout << "NEITHER!!";
    }
    return 0;
}