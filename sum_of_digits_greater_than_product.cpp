// PROGRAM: TAKE AN INTEGER(1-9999) AND CHECK IF THE SUM OF ITS DIGITS IS GREATER THAN THE PRODUCT OF ITS DIGITS
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number;
    cout << "ENTER AN INTEGER(1-9999): ";
    cin >> number;
    if(number>=1 && number<=9999){

        int ones = number % 10;
        int tens = (number / 10) % 10;
        int hundred = ((number / 10) / 10) % 10;
        int thousand = number / 1000;
        int sum = ones + tens + hundred + thousand;
        int product = ones * tens * hundred * thousand;
        if (sum > product)
        {
            cout << "TRUE!";
        }
        else
        {
            cout << "FALSE!!";
        }
    }
    else{
        cout<<"ENTER A VALID NUMBER(1-9999)!!";
    }
    return 0;
}