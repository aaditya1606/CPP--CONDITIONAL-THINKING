// PROGRAM: TAKE TWO NUMBERS AND DETERMINE WHETHER BOTH ARE EVEN OR BOTH ARE ODD OR ONE IS EVEN AND ONE IS ODD
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
    if(num1%2==0 && num2%2==0){
        cout<<"BOTH THE NUMBERS ARE EVEN!!";
    }
    else if(num1%2==1 && num2%2==1){
        cout<<"BOTH THE NUMBERS ARE ODD!!";
    }
    else{
        cout<<"ONE IS EVEN AND ONE IS ODD!!";
    }
    return 0;
}