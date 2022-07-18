#include<iostream>
using namespace std;

int main(){
    cout<<"Enter year: "<<endl;
    int year;
    cin>> year;
    if(year%4)
      cout<<"Not a Leap Year";
    else if(year%100)
      cout<<"Not a Leap Year";
    else if(year%400)
      cout<<"Not a Leap Year";
    else
      cout<<"Leap Year";
    return 0;
}