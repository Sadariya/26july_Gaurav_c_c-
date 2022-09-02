//  reverse number is like that you write 123 so its reverse order is 321.
//  it means reverse order 123 == 321.
//  using this formula
// 	Remainder=number%10;
//	Reverse=(Reverse*10)+Remainder;
//	number=number/10;   Repeat this process untill number==0.
#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("\nEnter number you want to print in reverse order:- ");
    scanf("%d",&a);
	for(d=0; d<10; d++)
	{
		b = a % 10;
		c = (c * 10) + b;
		a = a / 10;
		if (a == 0)
		{
			d = 10;
		}
		if (d == 10)
		{
			printf("\nReverse order of number is :- %d",c);
		}
	}
}
