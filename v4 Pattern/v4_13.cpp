//Triangle by star & space by palindrome of number
#include<iostream>
using namespace std;

int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int fis_tri=1;fis_tri<=row-i;fis_tri++){
            cout<<fis_tri;
        }
        for(int sec_tri=0;sec_tri<i;sec_tri++){
            cout<<"**";
        }
        for(int third_tri=row-i;third_tri>0;third_tri--){
            cout<<third_tri;
        }
        cout<<endl;
    }
    return 0;
}