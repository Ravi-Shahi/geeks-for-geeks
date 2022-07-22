#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v;
    int n, userInp;
    cout<<"Enter your list size: "<<endl;
    cin>>n;
    for (int i =0;i<n;i++){    
      cout<<"Enter your element: "<<endl;
      cin>>userInp;
      v.push_back(userInp);
    }
    for(int x: v)
      cout<<x<<" ";
    return 0;
}