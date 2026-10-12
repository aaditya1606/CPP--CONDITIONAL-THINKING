// PROGRAM: TAKE THREE SIDES AND CHECK IF THEY FORM A VALID TRIANGLE
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"ENTER THE FIRST SIDE OF THE TRIANGLE: ";
    cin>>a;
    cout<<"ENTER THE SECOND SIDE OF THE TRIANGLE: ";
    cin>>b;
    cout<<"ENTER THE THIRD SIDE OF THE TRIANGLE: ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"VALID TRIANGLE!!";
    } 
    else{
        cout<<"NOT A VALID TRIANGLE!!";
    }
    return 0;
}