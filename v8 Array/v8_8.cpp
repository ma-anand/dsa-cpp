//Reverse of Array
//12th of March, 2023
#include<iostream>
using namespace std;

void reverseArr(int arr[],int size){                
    int start=0,end=size-1;                 //for(int i=0;i<size/2;i++){              
    while(start<=end){                      //    swap(arr[i],arr[size-1-i]);
        swap(arr[start],arr[end]);          //}
        start++;
        end--;
    }
};

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};

void inputArr(int arr[], int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
};

int main(){
    int arr[1000],size;
    cin>>size;
    inputArr(arr,size);
    printArr(arr,size);
    reverseArr(arr,size);
    printArr(arr,size);
}