// PROGRAM: TAKE MARKS(0-100) AND PRINT CORRESPONDING GRADES
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int grades;
    cout<<"ENTER YOUR GRADES: ";
    cin>>grades;
    if(grades>=90 && grades<=100){
        cout<<"A";
    }
    else if(grades>=70){
        cout<<"B";
    }
    else if(grades>=50){
        cout<<"C";
    }
    else if(grades>=33){
        cout<<"D";
    }
    else{
        cout<<"F";
    }
    return 0;
}