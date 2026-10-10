// PROGRAM: TAKE A TEMPERATURE VALUE AND PRINT "COLD","WARM" OR "HOT" USING RANGE CONDITIONS
// AUTHOR- AADITYA SHAKYA
// LANGUAGE: C++

#include <bits/stdc++.h>
using namespace std;

// TEMP RANGE: LESS THAN 15 --COLD
// 15 TO 35 --WARM
// 35 AND ABOVE --HOT

int main(){
    int temp;
    cout<<"ENTER THE TEMPERATURE: ";
    cin>>temp;
    if(temp<15){
        cout<<"COLD!!";
    }
    else if(temp>=15 && temp<=35){
        cout<<"WARM!!";
    }
    else{
        cout<<"HOT!!";
    }
    return 0;
}