#include<iostream>
#include<math.h>
using namespace std;


                   //decimal number to its binary complement 


int main(){
    /*           error due to long value
    
    int num,complement=0,i=0,complement_decimal_number=0;       
    cin>>num;
    if(num==0){
        cout<<"1"<<endl;
    }
    while(num!=0){
       complement+=((num&1)^1)*pow(10,i);
       num>>=1;
       i++;
    }
    cout<<complement<<endl;
    i=0;
    while(complement!=0){
        int digit= complement%10;
        if(digit==1)
         complement_decimal_number+=pow(2,i);
        complement/=10;
        i++;
    }
    cout<<complement_decimal_number<<endl;
    
    */
    int num,mask=0,m;
    cin>>num;
    m=num;
    if(num==0){
        cout<<"1"<<endl;
    }
    else{
    while(m!=0){
        mask=(mask<<1)|1;
        m>>=1;
    }
    }
    cout<<((~num)&mask)<<endl;
    return 0;
}