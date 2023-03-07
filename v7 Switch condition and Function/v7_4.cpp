//number of 100,50,20,1 rupees note required. Solved by switch case.
//3rd of March, 2023
#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    switch(1){                                                          //It will run case 1 and we are not using break so it run all case.
        case 1:
            cout<<"Hundred rupees note is "<<num/100<<endl;
            num%=100;
        case 2:
           cout<<"Fifty rupees note is "<<num/50<<endl;
            num%=50;
        case 3:
           cout<<"Twenty rupees note is "<<num/20<<endl;               
           num%=20;
        case 4:
            cout<<"One rupees note is "<<num/1<<endl;
    }
    return 0;
}
