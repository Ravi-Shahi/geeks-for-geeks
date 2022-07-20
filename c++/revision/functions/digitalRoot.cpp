#include<iostream>
using namespace std;

int digRoot(int n){
  if(n<10)
    return n;
  int temp=0,sum=0;
  while(n>0){
    temp = n%10;
    sum +=temp;
    n /=10;
  }
  return digRoot(sum);
}
int main(){
    int n;
    cout<<"Enter a number to find digital Root"<<endl;
    cin>>n;
    cout<<digRoot(n);
    return 0;
}