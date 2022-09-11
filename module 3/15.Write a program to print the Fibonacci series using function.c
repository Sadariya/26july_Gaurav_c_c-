/*The Fibonacci sequence is a series of numbers in which each number is the sum of the two that
precede it. Starting at 0 and 1, the sequence looks like this: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
and so on forever.The Fibonacci sequence can be described using a mathematical 
equation: Xn+2= Xn+1 + Xn.*/
#include<stdio.h>
int a,b,c,d,e;
void dynamicnumber ()
{
	printf("\n** Enter the number upto you want to print **");
	printf("\n Enter number :-  ");
	scanf("%d",&a);
}
void startingnumber ()
{
	c=0;
	printf(" \n%d, ",c);
}
void fibonacciseries ()
{
	c=1;
	for (d=0; d<a; d++)
	{
		if (b<a)
		{	
			e=b;
			b=b+c;
			c=e;
		}
		if (b<a)
		{	
			printf(" \n%d, ",b);
		}
	}
}
void main()
{
	dynamicnumber ();
	startingnumber ();
	fibonacciseries ();
}

