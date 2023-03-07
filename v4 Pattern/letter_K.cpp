//Patter of Letter K
//letter "K"
//6th of March, 2023
#include<iostream>
using namespace std;

int main(){
    int row;
    cout<<"Number of row is greater than 3 for see K pattern."<<endl;
    cin>>row;
    if(row%2==0){
        for(int i=row/2;i>0;i--){
            cout<<"*";
            for(int j=1;j<=row/2;j++){
                if(j==i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        for(int i=0;i<row/2;i++){
            cout<<"*";
            for(int j=0;j<row;j++){
                if(j==i+1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    else{
        for(int i=row/2+1;i>0;i--){
            cout<<"*";
            for(int j=1;j<=row/2+1;j++){
                if(j==i){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        for(int i=0;i<row/2;i++){
            cout<<"*";
            for(int j=0;j<row;j++){
                if(j==i+1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}