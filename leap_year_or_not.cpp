// PROGRAM: CHECK IF THE GIVEN YEAR IS A LEAP YEAR OR NOT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cout<<"ENTER THE YEAR: ";
    cin>>year;
    if((year%4==0 && year%100!=0)||year%400==0){
        cout<<"IT IS A LEAP YEAR!!";
    }
    else{
        cout<<"IT IS NOT A LEAP YEAR!!";
    }
    return 0;
}