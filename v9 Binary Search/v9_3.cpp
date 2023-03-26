//Peak Index in a Mountain Array
//26th March, 2023
#include<iostream>
using namespace std;

peakIndex(int arr[],int size){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid-1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main(){
    int arr[4]={0,10,5,2};
    int arr2[4]={0,2,1,0};
    cout<<peakIndex(arr,4)<<endl;
    cout<<peakIndex(arr2,4)<<endl;
}