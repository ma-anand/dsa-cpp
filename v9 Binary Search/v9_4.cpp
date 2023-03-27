//Pivot     ----->     rotated and sorted array       (we find here smallest number)  
//27th of March, 2023
#include<iostream>
using namespace std;

int pivotFind(int arr[], int size){
    int start=0,end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;      //return end;        --------->both point same index
};

int main(){
    int arr[6]={9,10,1,2,3,4};
    cout<<pivotFind(arr,6);                  
    return 0;
}