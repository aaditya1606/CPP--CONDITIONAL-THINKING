// PROGRAM: TAKE A CHARACTER AND CHECK WHETHER IT'S UPPERCASE,LOWERCASE,A DIGIT OR A SPECIAL CHARACTER
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    char character;
    cout<<"ENTER THE CHARACTER: ";
    cin>>character;
    if(character>='A' && character<='Z'){
        cout<<"UPPERCASE!!";
    }
    else if(character>='a' && character<='z'){
        cout<<"LOWERCASE!!";
    }
    else if(character>='0' && character<='9'){
        cout<<"DIGITS!!";
    }
    else{
        cout<<"SPECIAL CHARACTER!!";
    }
    return 0;
}