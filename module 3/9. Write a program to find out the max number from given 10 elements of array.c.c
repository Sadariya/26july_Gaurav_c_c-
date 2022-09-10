#include<stdio.h>
int main ()
{
	int a[10], b, c;
	
	for (b=0; b<10; b++)
	{
		printf("Enter a[%d] = ",b);
		scanf("%d",&a[b]);
	}
	for (b=0; b<10; b++)
	{
		if (a[b] > a[0])
		{
			a[0] = a[b];
		}
	}
	for (b=0; b<10; b++)
	{
		if (a[0] == a[b])
		{
			c=b;
		}
	}
	printf("\na[%d] max element is %d.",c,a[0]);
}
/*
#include<stdio.h>
int main()
{
	int no [5];
	int a,b;
	for (a=0; a<5; a++)
	{
		printf("Enter no[%d] :- ",a);
		scanf("%d",&no[a]);
	}
	if (no[0] > no[1] && no[0] > no[2] && no[0] > no[3] && no[0] > no[4])	{    printf(" a[0] is the max."); 	}
	if (no[1] > no[0] && no[1] > no[2] && no[1] > no[3] && no[1] > no[4])	{    printf(" a[1] is the max.");	}
	if (no[2] > no[0] && no[2] > no[1] && no[2] > no[3] && no[2] > no[4])   {    printf(" a[2] is the max.");	}
	if (no[3] > no[0] && no[3] > no[1] && no[3] > no[2] && no[3] > no[4])   {    printf(" a[3] is the max.");	}
	if (no[4] > no[0] && no[4] > no[1] && no[4] > no[2] && no[4] > no[3])   {    printf(" a[4] is the max.");	}
}
*/
