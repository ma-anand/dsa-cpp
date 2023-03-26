//First and Last Position of an Element In Sorted Array
//26th of March, 2023
#include<iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int start=0,end=size-1,ans=-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return ans;
};

int lastOcc(int arr[],int size,int key){
    int start=0,end=size-1,ans=-1;
    int mid=start+((end-start)/2);
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return ans;
};

int main(){
    int arr[5]={0,1,1,1,2};
    cout<<firstOcc(arr,5,1)<<" "<<lastOcc(arr,5,1);
    return 0;
}