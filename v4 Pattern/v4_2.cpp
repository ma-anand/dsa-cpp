//squar pattern by reverse of no. of colomn
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row;j++){
            cout<<row-j<<" ";
        }
        cout<<endl;
    }
    return 0;
}