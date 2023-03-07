//odd or even number
//3rd of March, 2023
#include<iostream>
using namespace std;

bool isEven(int){
    int num;
    if(num&1){    // see here if num&1 is true that means 1 then it is odd. ....8,4,2,1 binary number
        return 0;
    }
    return 1;
}

int main(){
    int a;
    cin>>a;
    if(isEven)
       cout<<a<<" is even.";
    else
       cout<<a<<" is odd.";
       return 0;
}