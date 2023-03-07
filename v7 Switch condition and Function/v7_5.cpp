//Function 
//3rd of March, 2023
#include<iostream>
using namespace std;

//function signature
int power(){           //int power(int num1,num2){     ||     int power(int,int){   --> both are correct

    //function body
    int num1,num2;                   
    cin>>num1>>num2;
    int ans=1;
    for(int i=0;i<num2;i++){
        ans*=num1;
    }
    return ans;
}

int main(){
    int a=power();                       //function call
    cout<<a<<endl;
    return 0;
}