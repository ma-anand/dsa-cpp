//Pass by value
//3rd of March, 2023
#include<iostream>
using namespace std;

int number(int num){
    return num++;
}

int main(){
    int num =5;
    cout<<num<<endl;               //output is 5 due to number function is created new address of num


    number(num);         //if we store it in variable and then print that variable that will be 6. 


    cout<<num<<endl;               //output is 5 due to number function is created new address of num
    return 0;
}