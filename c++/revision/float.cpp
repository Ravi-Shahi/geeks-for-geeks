#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float num;
    cout<<"Enter your decimal number: "<<endl;
    cin>>num;
    //printing the number as it is
    cout<<"Before precision: "<<num<<endl;
    // without using fixed it prints  digits = parameter to function setprecision
    cout<<"After precision: "<<setprecision(2)<<num<<endl;
    /*when using fixed it prints digits in fixed notation, 
    digits after point = parameter to function setprecision*/
    cout<<"After precision and fixed: "<<setprecision(2)<<fixed<<num<<endl;
    cout<<"fixed: "<<fixed<<setprecision(2)<<num<<endl;

}