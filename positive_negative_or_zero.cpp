// PROGRAM: TAKE A NUMBER AND PRINT WHETHER IT IS POSITIVE,NEGATIVE OR ZERO
// AUTHOR-AADITYA SHAKYA
// LANGUAGE: C++
#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"ENTER THE NUMBER: ";
    cin>>number;
    if(number>0){
        cout<<"POSITIVE!!";
    }
    else if(number<0){
        cout<<"NEGATIVE!!";
    }
    else{
        cout<<"ZERO!!";
    }
    return 0;
}