//Squar by Increasing character in every row and col
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            char ch='A'+i+j;          //if we do direct cout<<'A'+i+j; then it print number;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}