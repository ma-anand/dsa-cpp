//Duplicate In Array   https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397
//12th of March, 2023
#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,2,3,4};
    int ans=0;
    cout<<"Value of ans=0,  (ans++) ^ arr[i]: ";
    for(int i=0;i<5;i++){
        ans=ans^arr[i];
        cout<<ans<<" ";
    }
    cout<<endl<<"Value of (ans^i): ";
    for(int i=0;i<5;i++){
        ans=ans^i;
        cout<<ans<<" ";
    }
    cout<<endl;
    cout<<ans<<endl;
    return 0;
}