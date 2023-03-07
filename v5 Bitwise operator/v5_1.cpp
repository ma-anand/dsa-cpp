//AND (&), OR (|), NOT (~), XOR(^)
#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;
    cout<<(a&b)<<endl;             //without small bracket, it will through an error.
    cout<<(a|b)<<endl;             //without small bracket, it will through an error.
    cout<<~a<<endl; 
    cout<<(a^b)<<endl;             //without small bracket, it will through an error.
}