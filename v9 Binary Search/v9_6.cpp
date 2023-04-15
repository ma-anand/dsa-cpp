//Book Allocation
//30th of March, 2023
#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int num, int mid){  //Chesker
	int studentCount=1,pageSum=0;
	for(int i=0; i<size; i++){
		if(pageSum+arr[i]<=mid){
			pageSum+=arr[i];
		}
		else{
			studentCount++;
			if(pageSum>mid || studentCount>num){
				return false;
			}
			pageSum=arr[i];
		}
	}
	return true;
}

int bookAllocation(int arr[], int size, int num){
	int start=0,end,mid,sum=0,ans=-1;
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	end=sum;
	mid=start+(end-start)/2;
	while(start<=end){
		if(isPossible(arr,size,num,mid)){     //possible function to decide going lef or right
			ans=mid;
			end=mid-1;
		}else{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	int num;
	cin>>num;
	cout<<bookAllocation(arr,size,num);
}