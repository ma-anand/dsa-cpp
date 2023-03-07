#include<iostream>
#include<math.h>
using namespace std;


                   //binary number to decimal number 


int main(){
    int binary,ans=0,i=0;
    cin>>binary;              //only binary number
    while(binary!=0){
        int digit=binary%10;
        if(digit==1)
          ans+=pow(2,i);
        binary/=10;
        i++;
    }
    cout<<"Decimal number is "<<ans<<endl;
    return 0;
}