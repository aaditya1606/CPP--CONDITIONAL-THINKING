// PROGRAM: TAKE A 3-DIGIT NUMBER AND CHECK IF ALL THE DIGITS OF THE NUMBER ARE DISTINCT OR NOT
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"ENTER A 3-DIGIT NUMBER: ";
    cin>>number;
    int ones=number%10;
    int tens=(number/10)%10;
    int hundred=number/100;
    if(number>=100 && number<=999){

        if(ones==tens || tens==hundred || hundred==ones){
            cout<<"NOT DISTINCT!!";
        }
        else{
            cout<<"DISTINCT!!";
        }
    }
    else{
        cout<<"IT SHOULD BE A 3-DIGIT NUMBER!!";
    }
    return 0;
}