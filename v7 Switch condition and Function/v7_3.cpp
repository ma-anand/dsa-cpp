// Calculater question
//3rd of March 2023
#include<iostream>
using namespace std;

int  main(){
    int num1,num2;
    char ch;
    cin>>num1>>ch>>num2;
    switch(ch){
        case '+':
           cout<<num1+num2<<endl;
           break;
        case '-':
           cout<<num1-num2<<endl;
           break;
        case '*':
           cout<<num1*num2<<endl;
           break;
        case '/':
           cout<<num1/num2<<endl;
           break;
        default:
           cout<<"Incorrect arithmetic operation";
    }
    return 0;
}