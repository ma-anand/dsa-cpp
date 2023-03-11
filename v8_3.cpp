//Swap Array by Alternate
//11th of March, 2023
#include<iostream>
using namespace std;

void print_arr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};

void swapAlternate(int arr[], int size){
    for(int i=0;i<size;i+=2){                  
        if(i+1<size)
            swap(arr[i],arr[i+1]);     /* 
                                          int temp=a[i];                    //Another way 
                                          a[i]=a[i+1];
                                          a[i+1]=temp
                                        */
    }
};

int main(){
    int even[8]={10,13,17,19,23,29,31,37};
    int odd[5]={7,3,5,2,8};

//Call SwapAlternate Function

    swapAlternate(even,8);
    swapAlternate(odd,5);
    
//Call Print Array Function

    print_arr(even,8);
    print_arr(odd,5);
    return 0;
}