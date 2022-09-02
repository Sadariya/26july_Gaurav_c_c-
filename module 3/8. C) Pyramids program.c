/*
Pyramid Programs
C) 
	* * * *
	  * * *
	    * *
	      *
*/	      
#include<stdio.h>
void main()
{
	int a,b,c;
	for(a=4; a>=1; a--)
	{
		for(b=3; b>=a; b--)
		{
			printf("   ");
		}
		for(c=1; c<=a; c++)
		{
			printf(" * ");
		}
	printf("\n");
	}
}
