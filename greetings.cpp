// PROGRAM: TAKE HOUR OF THE DAY(0-23) AND PRINT THE GREETINGS ACCORDINGLY
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

int main(){
    int hour;
    cout<<"ENTER THE HOUR(0-23): ";
    cin>>hour;
    if(hour>=0 && hour<=23){

        if(hour>=4 && hour<12){
            cout<<"GOOD MORNING!!";
        }
        else if(hour>=12 && hour<=16){
            cout<<"GOOD AFTERNOON!!";
        }
        else if(hour>16 && hour<=22){
            cout<<"GOOD EVENING!!";
        }
        else{
            cout<<"GOOD NIGHT!!";
        }
    }
    else{
        cout<<"INVALID HOUR!!";
    }
    return 0;
}