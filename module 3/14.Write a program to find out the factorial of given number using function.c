/*
The factorial of a whole number is the function that, 
multiplies the number by every natural number.
Formula :-  n! = n × (n - 1)!
*/
 
#include<stdio.h>
int A,B,C=1;
int Dynamicvalue ()
{
	printf("\n\t* Enter Any number to get Factorial :- ");
	scanf("%d",&A);
}
int Printvalue ()
{
	for(B=A; B>0; B--)
	{
		C*=B;
	}
	printf("\n\t--> Your number Factorial is %d.\n\n",C);
}
int main ()
{
	Dynamicvalue ();
	Printvalue ();
}

/*
#include<stdio.h>
int main ()
{
	int A,B,C;
	printf("\n\t* Enter Any number to get Factorial :- ");
	scanf("%d",&A);
		for(B=A; B>0; B--)
	{
		C*=B;
	}
	printf("\n\t--> Your number Factorial is %d.\n\n",C);	
}
*/
