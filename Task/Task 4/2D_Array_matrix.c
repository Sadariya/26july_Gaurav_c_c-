#include<stdio.h>
int main()
{
	int no[5][5];
	int a,b;
	for (a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			printf("Enter No. no[%d][%d]",a,b);
			scanf("%d",&no[a][b]);
		}
	}
	for (a=0; a<3; a++)
	{
		for (b=0; b<3; b++)
		{
			printf(" %d",no[a][b]);
		}
		printf("\n");
	}
}
