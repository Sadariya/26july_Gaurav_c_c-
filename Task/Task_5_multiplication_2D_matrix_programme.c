#include<stdio.h>
int main()
{
	int no[20][20];
	int nu[20][20];
	int nm[20][20];
	int a,b,c,d,e,f=0;
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
printf("\n * Your matrix multiplication is below.\n");
 	for(a=0; a<d; a++)
    {
    	for(b=0; b<e; b++)
    	{
    		for(c=0; c<e; c++)
    		{
    			f= f + no[a][c]*nu[c][b];
			}
			nm[a][b] = f;
			printf(" %d ",nm[a][b]);
			f = 0;
		}
		printf("\n");
	}   
}
