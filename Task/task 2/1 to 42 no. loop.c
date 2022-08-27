#include<stdio.h>
void main()
{
    int a,b,c;
    for (a=1; a<=6; a++)
    {
        for (b=1; b<=a; b++)
        {
        	c=c+1;
        	printf("%d  ",c);
        	//printf("%d  ",a);
    	}
		printf("\n");
	}
	for (a=7; a<=12; a++)
    {
        for (b=12; b>=a; b--)
        {
        	c=c+1;
        	printf("%d  ",c);
    	}
		printf("\n");
	}
}
