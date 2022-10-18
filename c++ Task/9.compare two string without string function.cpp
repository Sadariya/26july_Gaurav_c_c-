#include <iostream>
using namespace std;

int main()
{
  	char A[100];
	char B[100];
  	int C;
  	
  	cout <<"\n Please Enter the First String :  ";
  	cin >> A;
  	
  	cout <<"\n Please Enter the Second String :  ";
  	cin >> B;
		   
  	if(A[C] < B[C])
   	{
   		cout <<"\n A is Less than B \n B string is big.";
	}
	else if(A[C] > B[C])
   	{
   		cout <<"\n B is Less than A\n A string is big";
	}
	else
   	{
   		cout <<"\n A is Equal to B";
	}
  	
  	return 0;
}
