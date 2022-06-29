#include<iostream>
using namespace std;
//jump statement: continue, break, goto and return
void test(){
    int a =6,b=4,c=10;
    int d; 
    d = a,b,c; // 6
    cout<<"D: "<<d<<endl;
    int e;
    e = (a,b,c); //6
    cout<<"E: "<<d<<endl;
}
int main(){
    test();
if(true){
label1:
    cout<<"label"<<endl; // once it is printed program start execution from here 
    /* can be used if I want something to be perfect without any mistakes
       for example perfect 10 pairs without any Invalid Input Its similar to recursion but 
       without going back to initial function.
    */
} 
int x,y;
bool isKicked = false;
for(int i=1;i<=10;i++){
    cout<<"Pair: "<<i<<endl;
    cout<<"Enter pair of numbers"<<endl;
    cin>>x>>y;
    if(y==0){
        cout<<"Invalid Input"<<endl;  
        goto label1;       
    }else if(x==0){
        isKicked = true;
        break; // takes me out of loop
    }    
    else{
        cout<<"Result: "<<x/y<<endl;
    }
}
if(isKicked)
cout<<"break executed: "<<endl;

return 0; // this takes me out of function
}