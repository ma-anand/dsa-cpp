//Squar pattern by row and row+increasing row number
#include<iostream>
using namespace std;

int main(){
    int row,a,b;
    cin>>row;
    a=row+1;
    b=row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<a<<b;
        }
        cout<<endl;
        b++;
    }
    return 0;
}