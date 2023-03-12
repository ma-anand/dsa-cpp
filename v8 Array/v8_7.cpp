//Linear Search
//12th of March, 2023
#include<iostream>
using namespace std;

bool getNumber(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(key==arr[i])
           return 1;
    }
    return 0;
}; 

int main(){
    int arr[5]={1,2,3,4,5};
    int key = 2;

    bool find= getNumber(arr,5,2);

    if(find)
        cout<<"Present"<<endl;
    else
       cout<<"Absent"<<endl;
    return 0;
}