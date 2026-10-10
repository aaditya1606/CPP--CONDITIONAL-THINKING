// PROGRAM: TAKE THREE NUMBERS AND PRINT THE LARGEST
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"ENTER THE FIRST NUMBER: ";
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER: ";
    cin>>num2;
    cout<<"ENTER THE THIRD NUMBER: ";
    cin>>num3;
    int max=num1;
    if(num2>max && num2>num3){
        max=num2;
    }
    else if(num3>max && num3>num2){
        max=num3;
    }
    cout<<"MAXIMUM NUMBER: "<<max;
    return 0;
}