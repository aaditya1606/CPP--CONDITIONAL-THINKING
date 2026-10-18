// PROGRAM: TAKE INCOME AND AGE AND CHECK IF ELIGIBLE FOR TAX
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int income,age;
    cout<<"ENTER YOUR INCOME IN LAKHS: ";
    cin>>income;
    cout<<"ENTER YOUR AGE: ";
    cin>>age;
    if(income>=0 && age>=0){
        if(income>=5 && age>=18){
            cout<<"ELIGIBLE!!";
        }
        else{
            cout<<"NOT ELIGIBLE!!";
        }
    }
    else{
        cout<<"INVALID INPUT!!";
    }
    return 0;
}