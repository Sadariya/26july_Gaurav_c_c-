/*The Fibonacci sequence is a series of numbers in which each number is the sum of the two that
precede it. Starting at 0 and 1, the sequence looks like this: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
and so on forever.The Fibonacci sequence can be described using a mathematical 
equation: Xn+2= Xn+1 + Xn.*/
// fibonacci sequence using while loop.
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34.
#include<stdio.h>
int main()
{
	int a,b,c,i,n;
	printf("Enter your fibonacci number up to you want to print:-  ");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d, %d, ",a,b);
	while(i<n)
	{
		c=a+b;
		if(c<n)
		{
		printf("%d, ",c);
		}
		a=b;
		b=c;
		i++;
	}
}
