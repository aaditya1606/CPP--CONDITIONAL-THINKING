// PROGRAM: TAKE ELECTRICITY UNITS CONSUMED AND CALCULATE THE BILL AS PER SLABS
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int units;
    cout << "ENTER THE ELECTRICITY UNITS CONSUMED(IN kWh): ";
    cin >> units;
    long int bill = 0;
    if (units > 0)
    {
        if (units > 200)
        {
            bill = 500 + (units-200) * 5;
        }
        else if (units <= 200 && units>100)
        {
            bill = 200 + (units-100) * 3;
        }
        else if (units <= 100)
        {
            bill = bill + units * 2;
        }
    }
    else
    {
        cout << "INVALID INPUT!!";
    }
    cout << "BILL: " << bill;
    return 0;
}