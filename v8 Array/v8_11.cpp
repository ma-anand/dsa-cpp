//Pair in C++ Standard Template Library (STL)
//22nd of March, 2023
//First and Last Position of an Element In Sorted Array
//26th of March, 2023
#include<iostream>
#include <utility>
using namespace std;

int main(){
    //pair (data_type1, data_type2) Pair_name (value1, value2) ;
    
    /*
    pair<int, double> PAIR1;
    pair<string, char> PAIR2;
    */

    pair<int,int>  g1;         //default
    g1.first=5;
    g1.second=7;
    cout<<g1.first<<" "<<g1.second<<endl;



    pair  g2(1, 'a');  //initialized,  different data type
    cout<<g2.first<<" "<<g2.second<<endl;

    pair  g3(1, 10);   //initialized,  same data type
    cout<<g3.first<<" "<<g3.second<<endl;
    
    pair  g4(g3);    //copy of g3
    cout<<g4.first<<" "<<g4.second<<endl;
    
    return 0;
}
