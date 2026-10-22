// PROGRAM: TAKE COORDINATES(X,Y) AND CHECK IF THE POINT LIES ON X-AXIS,Y-AXIS OR AT ORIGIN
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cout << "ENTER THE X COORDINATE: ";
    cin >> x;
    cout << "ENTER THE Y COORDINATE: ";
    cin >> y;
    if (x == 0 && y > 0)
    {
        cout << "Y AXIS!";
    }
    else if (x > 0 && y == 0)
    {
        cout << "X AXIS!";
    }
    else if (x == 0 && y == 0)
    {
        cout << "ORIGIN!";
    }
    else
    {
        cout << "NEITHER ON AXES NOR AT ORIGIN!";
    }
    return 0;
}