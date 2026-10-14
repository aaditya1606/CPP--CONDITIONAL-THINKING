// PROGRAM: CHECK IF ONE OF THE TWO GIVEN NUMBERS IS A MULTIPLE OF OTHER
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
    if(num1%num2==0){
        cout<<num1<<" is a multiple of "<<num2;
    }
    else if(num2%num1==0){
        cout<<num2<<" is a multiple of "<<num1;
    }
    else if(num1%num2==0 && num2%num1==0){
        cout<<"Both the numbers are SAME!!";
    }
    else{
        cout<<"Numbers are not multiple of one another!!";
    }
    return 0;
}