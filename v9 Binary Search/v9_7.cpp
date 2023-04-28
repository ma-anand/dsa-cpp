//Painter's Partition Problem
//21st of March, 2023
#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int countGiven, int mid){
    
}

int painterPartition(int arr[], int size, int countGiven){
    int start=0;
    int sum=0,count=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int end=sum;
    sum=0;
    int mid= start + (end-start)/2;
    while(start<=end){
        if(isPossible(arr,size,countGiven,mid)){
            sum+=arr[i]
        }
        else{
            count++;
            if(count>countGiven){
                return false;  //kjoj
            }
        }
    }
}

int main(){
    int arr[4]={5,5,5,5};
    cout<<painterPartition(arr,4,2); 
}