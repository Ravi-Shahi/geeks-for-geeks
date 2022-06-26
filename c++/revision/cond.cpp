#include<iostream>
using namespace std;

int main(){
    // user input
    int n;
    cout<<"Enter a number"<<endl; // output using insertion operator
    cin>>n; // input using extraction operator
    int sum = 0;
    if(n<0)
        cout<<"Invalid Input"<<endl;
    else
       while(n>0){
        sum +=n;
        n--;
       }    
    cout<<"Sum: "<<sum<<endl;
    char move;
    cout<<"Enter moves 'L' 'R' 'F' 'B'"<<endl;
    cin>>move;
    switch(move)
    {
        case 'L':
            cout<<"Letf"<<endl;// break not mentioned other case R is also executed 
        case 'R':
            cout<<"Right"<<endl;
            break;
        default:
            cout<<"m lazy to write other moves: "<<endl;
    }


    return 0;
}