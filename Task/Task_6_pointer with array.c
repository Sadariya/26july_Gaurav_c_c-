#include<stdio.h>
int main()
{
	int *A,B[5],C;
	for (C=0; C<5; C++)
	{
		A=&B[C];
		printf("Enter Number B[%d]:",C);
		scanf("%d",&*A++);
	}
	*A=B[0];
	for (C=0; C<5; C++)
	{
		A=&B[C];
		printf("\nB[%d] %d ",*A++);
	}
	
}
