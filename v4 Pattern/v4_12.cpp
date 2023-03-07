//Triangle by palindrome of number
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int space=row-i;space>0;space--){
            cout<<" ";
        }
        for(int fi_tri=1;fi_tri<i;fi_tri++){
            cout<<fi_tri;
        }
        for(int sec_tri=i;sec_tri>0;sec_tri--){
            cout<<sec_tri;
        }
        cout<<endl;
    }
    return 0;
}