//Sum of all element in array
//12th of March, 2023
#include<iostream>
using namespace std;

void sumArr(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"Sum of all element of Array is "<<sum<<endl;
};

void inputArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
};

int main(){
    int size;
    cin>>size;
    int arr[1000];
    inputArr(arr,size);
    sumArr(arr,size);
    return 0;
}