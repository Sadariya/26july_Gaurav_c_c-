// write a programme to read data from file.
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	FILE *A;
	int a ;
	
	A = fopen ("C:/Users/TOPS/Desktop/Read_Write_data.txt","r");
	
	fscanf(A,"%d",&a);
	printf("Your number is :- %d",a);	
	
	fclose (A);
	
	return 0;
}

