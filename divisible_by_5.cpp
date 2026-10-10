// PROGRAM: CHECK WHETHER A NUMBER IS DIVISIBLE BY 5 OR NOT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"ENTER THE NUMBER: ";
    cin>>number;
    if(number%5==0){
        cout<<"NUMBER IS DIVISIBLE BY 5!!";
    }
    else{
        cout<<"NUMBER IS NOT DIVISIBLE BY 5!!";
    }
    return 0;
}