//Peak Index in a Mountain Array
//26th March, 2023
#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int start=0,end=arr.size()-1;
        int mid=start+(end-start)/2;
        while(start<end){
            if(arr[mid]<arr[mid+1]){
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
    vector<int> arr,arr2;
    arr={1,2,3,4,5,3,1,0};
    arr2={1,5,4,3,2,1,0};
    cout<<"Index of peak of mountain is: "<<peakIndexInMountainArray(arr)<<endl;
    cout<<"Index of peak of mountain is: "<<peakIndexInMountainArray(arr2)<<endl;
}