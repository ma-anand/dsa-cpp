//sort
//30th of March, 2023
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[10] = {9,5,4,3,2,1,6,7,10,8}; 
	sort(a, a+10);  //sorting
	
	 				
	for(int i = 0; i <10; ++i)
	{
		cout << a[i] << " ";
	}
}
