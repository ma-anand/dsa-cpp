//Inverse of right angle triangle
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=row-i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}