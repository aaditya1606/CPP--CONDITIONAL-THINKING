// PROGRAM: CHECK IF A NUMBER IS DIVISIBLE BY BOTH 3 AND 5
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"ENTER THE NUMBER: ";
    cin>>number;
    if(number%3==0 && number%5==0){
        cout<<"NUMBER IS DIVISIBLE BY BOTH 3 AND 5!!";
    }
    else{
        cout<<"NUMBER IS NOT DIVISIBLE BY BOTH 3 AND 5!!";
    }
    return 0;
}