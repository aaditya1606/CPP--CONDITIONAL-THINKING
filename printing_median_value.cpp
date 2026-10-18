// PROGRAM: TAKE 3 NUMBERS AND PRINT THE MEDIAN VALUE
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "ENTER THE FIRST NUMBER: ";
    cin >> a;
    cout << "ENTER THE SECOND NUMBER: ";
    cin >> b;
    cout << "ENTER THE THIRD NUMBER: ";
    cin >> c;
    if ((a >= b && a <= c) || (a >= c && a <= b))
    {
        cout << a << endl;
    }
    else if ((b >= a && b <= c) || (b >= c && b <= a))
    {
        cout << b << endl;
    }
    else if ((c >= a && c <= b) || (c >= b && c <= a))
    {
        cout << c << endl;
    }
    return 0;
}