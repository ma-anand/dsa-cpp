//Find Number, lower Case, Upper Case
#include<iostream>
using namespace std;

int main(){
    char character;
    cin>>character;
    if(character>='0' && character<='9'){
        cout<<character<<" is a number."<<endl;
    }
    else if(character>='a' && character<='z'){
        cout<<character<<" is a lower case letter."<<endl;
    }
    else if(character>='A' && character<='Z'){
        cout<<character<<" is a upper case letter."<<endl;
    }
    return 0;
}