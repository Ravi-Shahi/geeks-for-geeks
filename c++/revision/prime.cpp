#include<iostream>
#include<cmath>
using namespace std;

int main(){
int n, isPrime =1;
cout<<"Enter your Number: "<<endl;
cin>>n;
if(n<=1){
    isPrime = 0;
}else{
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0)
          isPrime =0;
    }
    if (isPrime)
      cout<<"Prime"<<endl;
    else
      cout<<"Not Prime"<<endl;
}

return 0;
}