//number increasing by increasing row
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=0;j<row;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}