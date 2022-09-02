/*
Pyramid Programs
B) 
	1
	2 3
	4 5 6
	7 8 9 10
*/
#include<stdio.h>
int main()
{
	int a,b,c;
	for (a=1; a<=4; a++)
	{
		for (b=1; b<=a; b++)
		{
		  c=c+1;
		  printf("%d  ",c);
		}
		printf("\n");
	}
}
