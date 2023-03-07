#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    switch(num){                   //switch(2*num){           is also true.
        case 1:
              cout<<"One"<<endl;
              break;
        case 2:
              cout<<"Two"<<endl;
              break;
        default:
              cout<<"Default"<<endl;
      }
      return 0; 
}