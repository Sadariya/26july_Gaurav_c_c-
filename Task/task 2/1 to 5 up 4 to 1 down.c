#include<stdio.h>
void main()
{
    int a,b;
    for (a=1; a<=5; a++)
    {
        for (b=1; b<=a; b++)
        {
        	printf("%d  ",a);
    	}
		printf("\n");
	}
	for (a=4; a>=1; a--)
    {
        for (b=1; b<=a; b++)
        {
        	printf("%d  ",a);
    	}
		printf("\n");
	}
}
