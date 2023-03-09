//Introduction of Array
//9th of March,2023
#include<iostream>
using namespace std;

int main(){


    int arr[5]={1,2,45,0,37};
    cout<<"Arr[0]: "<<arr[0]<<" Arr[1]: "<<arr[1]<<" Arr[2]: "<<arr[2]<<" Arr[3]: "<<arr[3]<<" Arr[4]: "<<arr[4]<<endl;
   
   
    char arr1[]={'a','b'};
    cout<<"Arr1[0]: "<<arr1[0]<<" Arr1[1]: "<<arr1[1]<<endl;

    int num;
    cin>>num;
    int arr2[num];
    for(int i=0;i<num;i++){            //This will take input in arr2[num] for total "num" number of index
        cin>>arr2[i];
    }
    for(int i=0;i<num;i++){           //Print array
        cout<<arr2[i];
    }
    cout<<endl;
}