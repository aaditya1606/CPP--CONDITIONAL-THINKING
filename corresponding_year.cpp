// PROGRAM:TAKE A YEAR AND PRINT THE CORRESPONDING CENTURY
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int year;
    cout<<"ENTER THE YEAR: ";
    cin>>year;
    if(year>0){
        if(year/100==1){
            cout<<year/100<<"st Century!";
        }
        else if(year/100==2){
            cout<<year/100<<"nd Century!";
        }
        else{
            cout<<year/100<<"th Century!";
        }
    }
    return 0;
}