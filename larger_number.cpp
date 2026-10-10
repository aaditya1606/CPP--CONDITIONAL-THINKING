// PROGRAM: TAKE TWO NUMBERS AND PRINT THE LARGER ONE
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1;
    cout<<"ENTER THE FIRST NUMBER: ";
    cin>>num1;
    int num2;
    cout<<"ENTER THE SECOND NUMBER: ";
    cin>>num2;
    if(num1>num2){
        cout<<"FIRST NUMBER IS GREATER THAN THE SECOND ONE!!";
    }
    else if(num2>num1){
        cout<<"SECOND NUMBER IS GREATER THAN THE FIRST ONE!!";
    }
    else{
        cout<<"BOTH THE NUMBERS ARE EQUAL!!";
    }
    return 0;
}