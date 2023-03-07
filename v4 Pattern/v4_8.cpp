//Triangle by Character
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    char a='A';
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
    return 0;
}