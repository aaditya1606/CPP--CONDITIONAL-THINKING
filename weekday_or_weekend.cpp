#include <bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cout<<"Enter the day(1-7): ";
    cin>>day;
    if(day>=1 && day<=5){
        cout<<"WEEKDAY";
    }
    else if(day>=6 && day<=7){
        cout<<"WEEKEND";
    }
    else{
        cout<<"ENTER A VALID DAY FROM 1-7!";
    }
    return 0;
}