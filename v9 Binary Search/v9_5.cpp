//Square root (decmil place also)
//28th of March,2023
#include<iostream>
using namespace std;

int squareRootInInt(int num){
    int start=0,end=num,ans=0;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(mid*mid==num){
            return mid;
        }
        else if(mid*mid>num){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

double precision(int num, int place, int tempSol){
    double fact=1, ans=tempSol;
    for(int i=0; i<place; i++){
        fact/=10;
        for(double j=ans;j*j<num; j+=fact){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int num,dec;
    cin>>num>>dec;
    int tempSol=squareRootInInt(num);
    cout<<"Squre root of "<<num<<" is "<<precision(num,dec,tempSol)<<endl;
    return 0;
}