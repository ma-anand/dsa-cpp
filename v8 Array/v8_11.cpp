//
//22nd of March, 2023
#include<iostream>
using namespace std;

inputMatrix(int arr[], int rowSize){
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<rowSize;j++){
            cin>>arr[i][j];
        }
    }
}

outputMatrix(int arr[], int rowSize){
    for(int i=0;i<rowSize;i++){
        for(int j=0;j<rowSize;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

int main(){
    int arr1[2][2],arr2[2][2];
    inputMatrix(arr1,2,2);
    inputMatrix(arr2,2,2);
    multiMatrix(arr1,arr2);
    return 0;
}