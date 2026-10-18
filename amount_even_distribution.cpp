// PROGRAM: CHECK IF AN AMOUNT CAN BE DIVIDED EVENLY INTO 2000,500,100 CURRENCY NOTES
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int amount;
    cout << "ENTER THE AMOUNT: ";
    cin >> amount;
    if (amount / 2000 >= 1 && (amount % 2000) / 500 >= 1 && ((amount % 2000) % 500) % 100 == 0)
    {
        cout << "AMOUNT CAN BE EASILY DISTRIBUTED INTO 2000/500/100 CURRENCY NOTES" << endl;
    }
    else
    {

        if (amount % 2000 == 0)
        {
            cout << "AMOUNT CAN BE EVENLY DISTRIBUTED INTO 2000 CURRENCY NOTES" << endl;
        }
        if (amount % 500 == 0)
        {
            cout << "AMOUNT CAN BE EVENLY DISTRIBUTED INTO 500 CURRENCY NOTES" << endl;
        }
        if (amount % 100 == 0)
        {
            cout << "AMOUNT CAN BE EVENLY DISTRIBUTED INTO 100 CURRENCY NOTES" << endl;
        }
    }
    return 0;
}