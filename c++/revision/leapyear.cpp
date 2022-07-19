#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter year: "<<endl;
    cin>>year;
    // accuracy around 80%
    if(year%4)
    cout<<"Not Leap Year"<<endl;
    else if (year%100)
    cout<<"Leap Year"<<endl;
    else if(year%400)
    cout<<"Not a Leap Year"<<endl;
    else
    cout<<"Leap Year"<<endl;
    cout<<"Trying new approach"<<endl;
    if(year%4==0 && year%100!=0||year%400==0)
    cout<<"Leap Year"<<endl;
    else
    cout<<"Not a Leap Year"<<endl;
    
}