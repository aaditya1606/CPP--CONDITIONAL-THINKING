// PROGRAM: TAKE A NUMBER AND PRINT "Fizz" IF DIVISIBLE BY 3,"Buzz" IF DIVISIBLE BY 5 AND "FizzBuzz" IF DIVISIBLE BY BOTH
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER THE NUMBER: ";
    cin >> number;
    if (number % 3 == 0 && number % 5 == 0)
    {
        cout << "FizzBuzz!!";
    }
    else if (number % 3 == 0)
    {
        cout << "Fizz!!";
    }
    else if (number % 5 == 0)
    {
        cout << "Buzz!!";
    }
    else
    {
        cout << "NOT DIVISIBLE BY BOTH 3 AND 5!!";
    }
    return 0;
}