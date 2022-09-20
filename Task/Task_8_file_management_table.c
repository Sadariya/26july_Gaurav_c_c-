#include<stdio.h>
int main ()
{
	int A,b=1;
	printf("Enter the number :- ");
	scanf("%d",&A);
	
	FILE *p;
	p=fopen("C:/Users/sadar/OneDrive/Desktop/practise/Task_8_file_management_table.txt","w");
	for (b=1; b<=10; b++)
	{
		fprintf(p,"%d * %d = %d ",A,b,A*b);	
	}
	fclose(p);
	
	p=fopen("C:/Users/sadar/OneDrive/Desktop/practise/Task_8_file_management_table.txt","r");
	for (b=1; b<=10; b++)
	{
		fscanf(p,"%d%d%d",&A,&b);	
		printf("\n%d * %d = %d ",A,b,A*b);
	}
	fclose(p);
	
	return 0;
}

