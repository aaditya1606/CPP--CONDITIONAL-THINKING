// PROGRAM: TAKE TWO ANGLES OF THE TRIANGLE AND COMPUTE THE THIRD ANGLE
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    float angle1, angle2, angle3;
    cout << "ENTER THE FIRST ANGLE OF THE TRIANGLE: ";
    cin >> angle1;
    cout << "ENTER THE SECOND ANGLE OF THE TRIANGLE: ";
    cin >> angle2;
    angle3 = 180 - angle1 - angle2;
    if (angle1 > 0 && angle2 > 0 && angle3 > 0)
    {
        cout << "THIRD ANGLE: " << angle3 << endl;
    }
    else
    {
        cout << "NOT A VALID TRIANGLE!!";
    }
    return 0;
}