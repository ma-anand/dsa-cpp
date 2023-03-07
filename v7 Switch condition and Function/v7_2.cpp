#include<iostream>
using namespace std;

int  main(){
    char ch;
    cin>>ch;
    switch(ch){
        case 'a':
            cout<<"a"<<endl;
            // continue;            continue statement only use in loop
            break;
        case 'b':
            cout<<"b"<<endl;
            break;
        case 'c':
            cout<<"c"<<endl;
            break;
        case 'd':
            cout<<"d"<<endl;
            break;
        default:
            cout<<"default"<<endl;
    }
    return 0;
}