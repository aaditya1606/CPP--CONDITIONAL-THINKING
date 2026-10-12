// PROGRAM: IF THE SIDES FORM A VALID TRIANGLE, DETERMINE WHETHER IT IS EQUILATERAL,ISOCELES OR SCALENE
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
        if(a==b && b==c){
            cout<<"EQUILATERAL!!";
        }
        else if(a==b || b==c || c==a){
            cout<<"ISOCELES TRIANGLE!!";
        }
        else{
            cout<<"SCALENE TRIANGLE!!";
        }
    }
    else{
        cout<<"INVALID TRIANGLE!!";
    }
    return 0;
}