/*Chef decided to go on a diet during the following N days 
(numbered 1 through N). Part of the diet plan is to eat 
K grams of protein during each day. For each valid i, Chef 
wants to buy A[i] grams of protein in the morning of the 
i-th day and then eat K grams of protein as part of his 
dinner. If he has any protein remaining, he can store it and
 use it in later dinners. Initially, Chef is storing 0 grams
  of protein.
            Determine whether Chef will have enough protein
             all the time during his diet. In case he will 
             not have enough, find the first day on which 
             Chef will be unable to eat K grams of protein.

Input
The first line of the input contains a single integer T
denoting the number of test cases. The description of T
test cases follows.
The first line of each test case contains two space-separated 
integers N and K.
The second line contains N space-separated integers 
A[1],A[2],A[3].......A[N].

Output
For each test case:

If Chef will have enough protein during his diet, print a 
single line containing the string "YES".
Otherwise, print a single line containing the string "NO", 
followed by a space and one integer — the first day when 
Chef will be unable to eat K grams of protein.
*/

#include <iostream>
#include<stdlib.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int N,K;
	    cin>>N>>K;
	    int *A=(int*)malloc(N*sizeof(int));
	    int a=0,ans=0;
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<N;i++){
	        ans+=A[i];
	        if(ans<(K*(i+1))){
	            a=-1;
	            cout<<"NO "<<i+1<<endl;
	            break;
	        }
	        else{
	            a++;
	            continue;
	        }
	    }
	    if(a==N){
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
