// PROGRAM: TAKE COORDINATES(X,Y) AND DETERMINE WHICH QUADRANT THE POINT LIES IN
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cout << "ENTER THE X-COORDINATE OF THE POINT: ";
    cin >> x;
    cout << "ENTER THE Y-COORDINATE OF THE POINT: ";
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout << "FIRST QUADRANT!!";
    }
    else if (x < 0 && y > 0)
    {
        cout << "SECOND QUADRANT!!";
    }
    else if (x < 0 && y < 0)
    {
        cout << "THIRD QUADRANT!!";
    }
    else if (x > 0 && y < 0)
    {
        cout << "FOURTH QUADRANT!!";
    }
    else
    {
        cout << "ORIGIN!!";
    }
    return 0;
}