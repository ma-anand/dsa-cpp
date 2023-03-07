//right angle triangle by reverse of letter by row
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        char a='A'+row-1-i;;
        for(int j=0;j<=i;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
    return 0;
}