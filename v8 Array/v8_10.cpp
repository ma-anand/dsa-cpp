//sort 0,1
//21th of March, 2023
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int main(){
    vector<int> arr;
    int sizeOfArr;
    cin>>sizeOfArr;
    for(int i=0;i<sizeOfArr;i++){
        int a;
        cin>>a;
        if(a==0 || a==1)
           arr.push_back(a);
    }
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        while(arr[start]==0){
            start++;
        }
        while(arr[end]==1){
            end--;
        }
        if(arr[start]==1 && arr[end]==0 && start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}