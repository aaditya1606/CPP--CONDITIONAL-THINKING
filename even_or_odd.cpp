// PROGRAM: CHECK WHETHER A NUMBER IS EVEN OR ODD
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"ENTER THE NUMBER: ";
    cin>>number;
    if(number%2==0){
        cout<<"NUMBER IS EVEN!!";
    }
    else{
        cout<<"NUMBER IS ODD!!";
    }
    return 0;
}