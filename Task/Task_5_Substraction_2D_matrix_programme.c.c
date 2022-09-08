#include<stdio.h>
int main()
{
	int no[20][20];
	int nu[20][20];
	int a,b,c,d,e;
printf(" * Enter the row or column order : \n");
	printf(" > Enter Row you want :- ");
	scanf("%d",&d);
	printf(" > Enter Column you want :- ");
	scanf("%d",&e);		
	
printf("\n * Enter First matrix value.\n\n");
	for(a=0; a<d; a++)
	{
		for(b=0; b<e; b++)
		{
			printf("Enter your number no[%d][%d] = ",a,b);
			scanf("%d",&no[a][b]);
		}
	}
printf("\n * Enter second matrix value.\n\n");
	for(a=0; a<d; a++)
	{
		for(b=0; b<e; b++)
		{
			printf("Enter your number nu[%d][%d] = ",a,b);
			scanf("%d",&nu[a][b]);
		}
	}
printf("\n * Your matrics substraction is below.\n");
	for(a=0; a<d; a++)
	{
		for(b=0; b<e; b++)
		{
			c=no[a][b]-nu[a][b]	;
			printf(" %d",c);
		}
		printf("\n");
	}
}
