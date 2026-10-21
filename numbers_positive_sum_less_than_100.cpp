// PROGRAM: TAKE TWO NUMBERS AND CHECK IF BOTH ARE POSITIVE AND THEIR SUM IS LESS THAN 100
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cout<<"ENTER THE FIRST NUMBER: ";
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER: ";
    cin>>num2;
    if(num1>=0 && num2>=0){
        if(num1+num2<100){
            cout<<"TRUE!";
        }
        else{
            cout<<"FALSE!";
        }
    }
    else{
        cout<<"FALSE!";
    }
    return 0;
}