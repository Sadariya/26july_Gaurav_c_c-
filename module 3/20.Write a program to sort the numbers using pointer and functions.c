#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int *a;
	int b,c;
	int d,e;
printf("\n\t**Enter How many number print**");
	printf("\nEnter the number :- ");
	scanf("%d",&b);
	a=(int *)malloc(b*sizeof(int));
printf("\n\t**Enter Your value below.**\n");
	for (c=0; c<b; c++)
	{
		printf("Enter the value ");
		scanf("%d",&a[c]);
	}
	for (c=0; c<b; c++)
	{
		for (d=0; d<b; d++)
		{
			if (a[c] < a[d])
			{
			e = a[c];
			a[c] = a[d];
			a[d] = e;
			}
		}
	}
printf("\n\t**Your answer is below.**");
	for (c=0; c<b; c++)
	{
		printf("\nYour value is %d.",a[c]);
	}
}
