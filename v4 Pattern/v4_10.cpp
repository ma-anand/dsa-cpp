//right angle triangle starting with space
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int space=0;space<row-1-i;space++){
            cout<<" ";
        }
        for(int star=0;star<=i;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}