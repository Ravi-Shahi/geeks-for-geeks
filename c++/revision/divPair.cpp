#include<iostream>
using namespace std;
//jump statement: continue, break, goto and return

int main(){
if(true){
label1:
    cout<<"label"<<endl; // once it is printed program start execution from here 
    
    /* can be used if I want something to be perfect without any mistakes
       for example perfect 10 pairs without any Invalid Input Its similar to recursion but 
       without going back to initial function.
    */
} 
int x,y;
for(int i=1;i<=10;i++){
    cout<<"Pair: "<<i<<endl;
    cout<<"Enter pair of numbers"<<endl;
    cin>>x>>y;
    if(y==0){
        cout<<"Invalid Input"<<endl;  
        goto label1;       
    }else{
        cout<<"Result: "<<x/y<<endl;
    }
}
    

return 0;
}