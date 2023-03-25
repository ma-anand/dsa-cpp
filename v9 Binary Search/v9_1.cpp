//Binary Search
//25th of March, 2023
#include<iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int start=0,end=size-1;

    int mid=start+((end-start)/2);      //int mid=(start+end)/2;   ---->may be exceed the integer limit


    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+((end-start)/2);      //int mid=(start+end)/2;   ---->may be exceed the integer limit
    }
    return -1;
};

int main(){
    int evenArr[6]={13,17,23,29,31,37};
    int oddArr[5]={3,5,7,13,17};
    int key;
    cin>>key;
    cout<<"Index: "<<binarySearch(evenArr,6,key)<<endl;
    cin>>key;
    cout<<"Index: "<<binarySearch(oddArr,5,key)<<endl;
}