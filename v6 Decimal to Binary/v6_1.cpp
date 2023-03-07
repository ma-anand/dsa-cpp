#include <iostream>
#include <math.h>
using namespace std;


                   //positive decimal number to binary number


int main(){
    int positive_decimal,ans=0,i=0;
    cin>>positive_decimal;               //only positive number input will give right answer.

    while(positive_decimal!=0){         

        int bit=positive_decimal&1;
        ans=(bit*pow(10,i))+ans;
        positive_decimal>>=1;
        i++;
    }

    cout<<"Binary number is "<<ans<<endl;
    return 0;
}