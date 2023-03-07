//Permutation and Combination of number
//3rd of March, 2023
#include<iostream>
using namespace std;

int factorial(int num){
    int fact=1;
    for(int i=1;i<=num;i++){
        fact*=i;
    }
    return fact;
}

int permutation(int n, int r){
    int numerator, denomerator; 
    numerator=factorial(n);
    denomerator=factorial(n-r);
    return numerator/denomerator;

}

int combination(int n, int r){
    int numerator,denomerator;
    numerator=factorial(n);
    denomerator=factorial(r)*factorial(n-r);
    return numerator/denomerator;
}
int main(){
    int n,r;
    char choose;
    cout<<"Enter value of n then r"<<endl;
    cin>>n>>r;
    cout<<"For Combination press C"<<endl<<"For Permutation press P"<<endl;
    cin>>choose;
    if(n>=r){
        if(choose=='P'||choose=='p'){
            cout<<"Permutation of "<<n<<"P"<<r<<" is "<<permutation(n,r)<<endl;
        }
        else if(choose=='C' || choose=='c'){
            cout<<"Combination of "<<n<<"C"<<r<<" is "<<combination(n,r)<<endl;
        }
    } 
    else
       cout<<"Enter the value of n is greater than r"; 
       return 0;  
}