// PROGRAM: CHECK VOTING ELIGIBILITY FOR GIVEN AGE
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"ENTER YOUR AGE(in yrs): ";
    cin>>age;
    if(age>0){
        if(age>=18){
            cout<<"YOU ARE ELIGIBLE TO VOTE!!";
        }
        else{
            cout<<"YOU ARE NOT ELIGIBLE TO VOTE!!";
        }
    }
    else{
        cout<<"INVALID AGE!!";
    }
    return 0;
}