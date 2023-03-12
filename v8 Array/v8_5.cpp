//Maximum and Minimum number in Array
//12th of March, 2023
#include<iostream>
using namespace std;

int getMax(int arr[], int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
       maxi=max(maxi,arr[i]);          //  Predefine Function
       /*
        if(maxi<arr[i])
          maxi=arr[i];
        */
    }
    return maxi;
}

int getMin(int arr[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,arr[i]);       //  Predefine Function
       /*
        if(mini>arr[i])
          mini=arr[i];
        */
    }
    return mini;
}

int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Maximum number is "<<getMax(arr,size)<<endl;
    cout<<"Minimum number is "<<getMin(arr,size)<<endl;
    return 0;
}