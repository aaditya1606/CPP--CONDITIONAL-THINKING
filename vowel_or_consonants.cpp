// PROGRAM: TAKE A CHARACTER AND CHECK IF IT'S A VOWEL OR CONSONANT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    char characters;
    cout<<"ENTER THE CHARACTER: ";
    cin>>characters;
    if((characters>='A' && characters<='Z')||(characters>='a' && characters<='z')){
        if(characters=='a'||characters=='e'||characters=='i'||characters=='o'||characters=='u'||characters=='A'||characters=='E'||characters=='I'||characters=='O'||characters=='U'){
            cout<<"VOWELS!!";
        }
        else{
            cout<<"CONSONANTS!!";
        }
        return 0;
    }
}