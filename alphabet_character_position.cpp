// PROGRAM: TAKE AN ALPHABET CHARACTER AND CHECK IF IT LIES BETWEEN 'a' AND 'm' OR 'n' AND 'z'
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    char character;
    cout<<"ENTER THE CHARACTER(lower case): ";
    cin>>character;
    if(character>='a' && character<='m'){
        cout<<"CHARACTER LIES IN BETWEEN 'a' and 'm'";
    }
    else if(character>'m' && character<='z'){
        cout<<"CHARACTER LIES IN BETWEEN 'n' and 'z'";
    }
    else{
        cout<<"Character neither lies between 'a' and 'm' nor in between 'n' and 'z'";
    }
    return 0;
}