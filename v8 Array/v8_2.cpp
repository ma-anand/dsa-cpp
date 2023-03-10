//2D Array
//10th of March,2023
#include<iostream>
using namespace std;

int main(){
    /* int arr[][]={1,2,3,4,5,6,7,8};   ----->give error: declaration of 'arr' as multidimensional array
                                              must have bounds for all dimensions except the first*/
    int arr[2][2]={5,7,2,13};
    cout<<arr[0][0]<<" "<<arr[0][1]<<" "<<endl;
    
    //Matrix 3X3 input
    int num=3;
    //cin>>num;
    int arr1[num][num];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            //for(int k=0;k<num;k++){
                cin>>arr1[i][j];
            //}
        }
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            //for(int k=0;k<num;k++){
                cout<<arr1[i][j]<<" ";
            //}
        }
        cout<<endl;
    }
    return 0;
}