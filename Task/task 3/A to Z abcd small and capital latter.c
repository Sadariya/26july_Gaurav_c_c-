#include<stdio.h>
void main()
{
	int a;
	for(a=a; a<=122; a++)
	{
		if((a>64)&&(a<=90))
		{
		printf(" %c ",a);
		}
		if (a==91)
		{
		printf("\n");
		}
		if((a>96)&&(a<=122))
		{
		printf(" %c ",a);
		}
	}
}
