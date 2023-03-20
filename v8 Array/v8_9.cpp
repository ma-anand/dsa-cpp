//Pair Sum
//21st of march, 2023

#include<iostream>
#include<vector>
#include<math.h>
#include <algorithm>
using namespace std;

int main(){
    //vector<int> arr={1,9,2,8,3};
    //int sizeOfArr=5,sumIsEqual=10;
    vector<int> arr;
    vector <vector<int>> ans;
    int sizeOfArr,sumIsEqual;
    cin>>sizeOfArr>>sumIsEqual;
    for(int i=0;i<sizeOfArr;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<sizeOfArr;i++){
        for(int j=i+1;j<sizeOfArr;j++){
            if(arr[i]+arr[j]==sumIsEqual){
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}