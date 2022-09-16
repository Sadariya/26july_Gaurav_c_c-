//Write program to make an addition of two number using pointer
/*
#include<stdio.h>
int main ()
{
	int *a,*b;
	int c,d,e;
	printf("\n\tenter first number :- ");
	scanf("%d",&c);
	printf("\tenter second number :- ");
	scanf("%d",&d);
	a=&c;
	b=&d;
	e = *a + *b ;
	printf("\n\tYour addition is %d.",e);	
}
*/

// using array to overcome memory occupied.
#include<stdio.h>
int main ()
{
	int *a,*b;
	int c[20];
	//assign the pointer to array.
	a=&c[0];	
	b=&c[1];
	//dynamic enter two numbers.
	printf("\n\tenter first number :- ");
	scanf("%d",&*a);
	printf("\tenter second number :- ");
	scanf("%d",&*b);
	//result of addition print.
	printf("\n\tYour addition is %d.",*a + *b);	
}
