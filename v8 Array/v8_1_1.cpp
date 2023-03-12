/* 
Designated Initializer: This initializer is used when we want to initialize a range with the same value. 
This is used only with GCC compilers.

[ first . . . last ] = value; 
example
         int num[5]={ [0 . . . 4 ] = 7 };                  -------->this is for C
*/

//std::fill(std::begin(arr), std::end(arr), value);         ------->this is for C++


#include<iostream>
#include<algorithm>
using namespace std;

void print_arr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};

int main(){

    int arr[5]={0};                          //-------->this is for 0
    print_arr(arr,5);
    //   int num[5]={ [0 . . . 4 ] = 7 };     -------> this is for gcc compiler (for C language)

    int arr1[5];
    std::fill(std::begin(arr1), std::end(arr1), 7);   //-------->this is for all non zero value
    print_arr(arr1,5);
    return 0;
}