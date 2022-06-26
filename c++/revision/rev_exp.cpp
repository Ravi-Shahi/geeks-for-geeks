#include<iostream>
//#include -> preprocessor directive 
//<header files or standard files>
//
using namespace std;
int glob;
int main(){
    int a =4;
    const int b = 69;// read-only variable can't be changed
    cout<<"b: "<<b<<endl;
    int glob;
    cout<<sizeof(int)<<endl;
    cout<<"Local: "<<glob<<endl; // prints garbage value
    cout<<"Global: "<<::glob<<endl; //scope resolution operator
    if(a = b) //logical error
      cout<<"It allows non-boolean expression";
    return 0;    
}