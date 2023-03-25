//Binary Search
//25th of March, 2023
#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start=0,end=size-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main(){
    int evenArr[6]={10,13,17,30,48,53};
    int oddArr[7]={10,13,29,37,47,53,61};
    int key;
    cin>>key;
    int index= binarySearch(evenArr,6,key);
    cout<<index<<endl;;
    cin>>key;
    index= binarySearch(oddArr,7,key);
    cout<<index<<endl;;
}